#pragma once
#ifndef SRC_EXTRAS_KPARTS_QT6C_LIBPART_H
#define SRC_EXTRAS_KPARTS_QT6C_LIBPART_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kparts-part.html)

/// k_parts__part_new constructs a new KParts::Part object.
///
KParts__Part* k_parts__part_new();

/// [Upstream resources](https://api.kde.org/kparts-part.html)

/// k_parts__part_new2 constructs a new KParts::Part object.
///
/// @param parent QObject*
///
KParts__Part* k_parts__part_new2(void* parent);

/// [Upstream resources](https://api.kde.org/kparts-part.html)

/// k_parts__part_new3 constructs a new KParts::Part object.
///
/// @param parent QObject*
/// @param data KPluginMetaData*
///
KParts__Part* k_parts__part_new3(void* parent, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KParts__Part*
///
const QMetaObject* k_parts__part_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback const QMetaObject* func()
///
void k_parts__part_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KParts__Part*
///
const QMetaObject* k_parts__part_qbase_meta_object(void* self);

/// @param self KParts__Part*
/// @param param1 const char*
///
void* k_parts__part_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback void* func(KParts__Part* self, const char* param1)
///
void k_parts__part_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KParts__Part*
/// @param param1 const char*
///
void* k_parts__part_qbase_metacast(void* self, const char* param1);

/// @param self KParts__Part*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__part_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback int32_t func(KParts__Part* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_parts__part_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KParts__Part*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__part_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_parts__part_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kparts-part.html#widget)
///
/// @param self KParts__Part*
///
QWidget* k_parts__part_widget(void* self);

/// [Upstream resources](https://api.kde.org/kparts-part.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback QWidget* func()
///
void k_parts__part_on_widget(void* self, QWidget* (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-part.html#widget)
///
/// Base class method implementation
///
/// @param self KParts__Part*
///
QWidget* k_parts__part_qbase_widget(void* self);

/// [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
///
/// @param self KParts__Part*
/// @param manager KParts__PartManager*
///
void k_parts__part_set_manager(void* self, void* manager);

/// [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
///
/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, KParts__PartManager* manager)
///
void k_parts__part_on_set_manager(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
///
/// Base class method implementation
///
/// @param self KParts__Part*
/// @param manager KParts__PartManager*
///
void k_parts__part_qbase_set_manager(void* self, void* manager);

/// [Upstream resources](https://api.kde.org/kparts-part.html#manager)
///
/// @param self KParts__Part*
///
KParts__PartManager* k_parts__part_manager(void* self);

/// [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeleteWidget)
///
/// @param self KParts__Part*
/// @param autoDeleteWidget bool
///
void k_parts__part_set_auto_delete_widget(void* self, bool autoDeleteWidget);

/// [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeletePart)
///
/// @param self KParts__Part*
/// @param autoDeletePart bool
///
void k_parts__part_set_auto_delete_part(void* self, bool autoDeletePart);

/// [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
///
/// @param self KParts__Part*
/// @param widget QWidget*
/// @param globalPos QPoint*
///
KParts__Part* k_parts__part_hit_test(void* self, void* widget, void* globalPos);

/// [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
///
/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback KParts__Part* func(KParts__Part* self, QWidget* widget, QPoint* globalPos)
///
void k_parts__part_on_hit_test(void* self, KParts__Part* (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
///
/// Base class method implementation
///
/// @param self KParts__Part*
/// @param widget QWidget*
/// @param globalPos QPoint*
///
KParts__Part* k_parts__part_qbase_hit_test(void* self, void* widget, void* globalPos);

/// [Upstream resources](https://api.kde.org/kparts-part.html#metaData)
///
/// @param self KParts__Part*
///
KPluginMetaData* k_parts__part_meta_data(void* self);

/// [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
///
/// @param self KParts__Part*
/// @param caption const char*
///
void k_parts__part_set_window_caption(void* self, const char* caption);

/// [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, const char* caption)
///
void k_parts__part_on_set_window_caption(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
///
/// @param self KParts__Part*
/// @param text const char*
///
void k_parts__part_set_status_bar_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, const char* text)
///
void k_parts__part_on_set_status_bar_text(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
///
/// @param self KParts__Part*
/// @param widget QWidget*
///
void k_parts__part_set_widget(void* self, void* widget);

/// [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
///
/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, QWidget* widget)
///
void k_parts__part_on_set_widget(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
///
/// Base class method implementation
///
/// @param self KParts__Part*
/// @param widget QWidget*
///
void k_parts__part_qbase_set_widget(void* self, void* widget);

/// [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
///
/// @param self KParts__Part*
/// @param event QEvent*
///
void k_parts__part_custom_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
///
/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, QEvent* event)
///
void k_parts__part_on_custom_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
///
/// Base class method implementation
///
/// @param self KParts__Part*
/// @param event QEvent*
///
void k_parts__part_qbase_custom_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
///
/// @param self KParts__Part*
/// @param event KParts__PartActivateEvent*
///
void k_parts__part_part_activate_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
///
/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, KParts__PartActivateEvent* event)
///
void k_parts__part_on_part_activate_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
///
/// Base class method implementation
///
/// @param self KParts__Part*
/// @param event KParts__PartActivateEvent*
///
void k_parts__part_qbase_part_activate_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kparts-part.html#guiActivateEvent)
///
/// @param self KParts__Part*
/// @param event KParts__GUIActivateEvent*
///
void k_parts__part_gui_activate_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kparts-part.html#guiActivateEvent)
///
/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, KParts__GUIActivateEvent* event)
///
void k_parts__part_on_gui_activate_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-part.html#guiActivateEvent)
///
/// Base class method implementation
///
/// @param self KParts__Part*
/// @param event KParts__GUIActivateEvent*
///
void k_parts__part_qbase_gui_activate_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
///
/// @param self KParts__Part*
/// @param containerName const char*
///
QWidget* k_parts__part_host_container(void* self, const char* containerName);

/// [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
///
/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback QWidget* func(KParts__Part* self, const char* containerName)
///
void k_parts__part_on_host_container(void* self, QWidget* (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
///
/// Base class method implementation
///
/// @param self KParts__Part*
/// @param containerName const char*
///
QWidget* k_parts__part_qbase_host_container(void* self, const char* containerName);

/// [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
///
/// @param self KParts__Part*
///
void k_parts__part_slot_widget_destroyed(void* self);

/// [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
///
/// Allows for overriding the related default method
///
/// @param self KParts__Part*
/// @param callback void func()
///
void k_parts__part_on_slot_widget_destroyed(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
///
/// Base class method implementation
///
/// @param self KParts__Part*
///
void k_parts__part_qbase_slot_widget_destroyed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_parts__part_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_parts__part_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__Part*
///
const char* k_parts__part_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KParts__Part*
/// @param name char*
///
void k_parts__part_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KParts__Part*
///
bool k_parts__part_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KParts__Part*
///
bool k_parts__part_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KParts__Part*
///
bool k_parts__part_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KParts__Part*
///
bool k_parts__part_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KParts__Part*
/// @param b bool
///
bool k_parts__part_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KParts__Part*
///
QThread* k_parts__part_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__Part*
/// @param thread QThread*
///
bool k_parts__part_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__Part*
/// @param interval int
///
int32_t k_parts__part_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__Part*
/// @param time int64_t of nanoseconds
///
int32_t k_parts__part_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__Part*
/// @param id int
///
void k_parts__part_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__Part*
/// @param id enum Qt__TimerId
///
void k_parts__part_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KParts__Part*
///
/// @return libqt_list of QObject*
///
libqt_list k_parts__part_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KParts__Part*
/// @param parent QObject*
///
void k_parts__part_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KParts__Part*
/// @param filterObj QObject*
///
void k_parts__part_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KParts__Part*
/// @param obj QObject*
///
void k_parts__part_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_parts__part_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_parts__part_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__Part*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_parts__part_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_parts__part_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_parts__part_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__Part*
///
bool k_parts__part_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__Part*
/// @param receiver QObject*
///
bool k_parts__part_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_parts__part_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KParts__Part*
///
void k_parts__part_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KParts__Part*
///
void k_parts__part_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KParts__Part*
/// @param name const char*
/// @param value QVariant*
///
bool k_parts__part_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KParts__Part*
/// @param name const char*
///
QVariant* k_parts__part_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KParts__Part*
///
const char** k_parts__part_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__Part*
///
QBindingStorage* k_parts__part_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__Part*
///
const QBindingStorage* k_parts__part_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__Part*
///
void k_parts__part_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self)
///
void k_parts__part_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KParts__Part*
///
QObject* k_parts__part_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KParts__Part*
/// @param classname const char*
///
bool k_parts__part_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KParts__Part*
///
void k_parts__part_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__Part*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_parts__part_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__Part*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_parts__part_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_parts__part_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_parts__part_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__Part*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_parts__part_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__Part*
/// @param signal const char*
///
bool k_parts__part_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__Part*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_parts__part_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__Part*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_parts__part_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__Part*
/// @param receiver QObject*
/// @param member const char*
///
bool k_parts__part_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__Part*
/// @param param1 QObject*
///
void k_parts__part_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, QObject* param1)
///
void k_parts__part_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::PartBase
///
/// [Upstream resources](https://api.kde.org/kparts-partbase.html#setPartObject)
///
/// @param self KParts__Part*
/// @param object QObject*
///
void k_parts__part_set_part_object(void* self, void* object);

/// Inherited from KParts::PartBase
///
/// [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
///
/// @param self KParts__Part*
///
QObject* k_parts__part_part_object(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self KParts__Part*
/// @param name const char*
///
QAction* k_parts__part_action(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
///
/// @param self KParts__Part*
/// @param doc QDomDocument*
///
void k_parts__part_set_x_m_l_g_u_i_build_document(void* self, void* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
///
/// @param self KParts__Part*
///
QDomDocument* k_parts__part_xmlgui_build_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
///
/// @param self KParts__Part*
/// @param factory KXMLGUIFactory*
///
void k_parts__part_set_factory(void* self, void* factory);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
///
/// @param self KParts__Part*
///
KXMLGUIFactory* k_parts__part_factory(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
///
/// @param self KParts__Part*
///
KXMLGUIClient* k_parts__part_parent_client(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
///
/// @param self KParts__Part*
/// @param child KXMLGUIClient*
///
void k_parts__part_insert_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
///
/// @param self KParts__Part*
/// @param child KXMLGUIClient*
///
void k_parts__part_remove_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
///
/// @param self KParts__Part*
///
/// @return libqt_list of KXMLGUIClient*
///
libqt_list k_parts__part_child_clients(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
///
/// @param self KParts__Part*
/// @param builder KXMLGUIBuilder*
///
void k_parts__part_set_client_builder(void* self, void* builder);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
///
/// @param self KParts__Part*
///
KXMLGUIBuilder* k_parts__part_client_builder(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
///
/// @param self KParts__Part*
///
void k_parts__part_reload_x_m_l(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
///
/// @param self KParts__Part*
/// @param name const char*
/// @param actionList libqt_list of QAction*
///
void k_parts__part_plug_action_list(void* self, const char* name, libqt_list /* of QAction* */ actionList);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
///
/// @param self KParts__Part*
/// @param name const char*
///
void k_parts__part_unplug_action_list(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param files const char**
/// @param doc const char*
///
const char* k_parts__part_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
///
/// @param self KParts__Part*
/// @param state const char*
/// @param action const char*
///
void k_parts__part_add_state_action_enabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
///
/// @param self KParts__Part*
/// @param state const char*
/// @param action const char*
///
void k_parts__part_add_state_action_disabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
///
/// @param self KParts__Part*
/// @param state const char*
///
KXMLGUIClient__StateChange* k_parts__part_get_actions_to_change_for_state(void* self, const char* state);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
///
/// @param self KParts__Part*
/// @param param1 QWidget*
///
void k_parts__part_begin_x_m_l_plug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
///
/// @param self KParts__Part*
///
void k_parts__part_end_x_m_l_plug(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
///
/// @param self KParts__Part*
/// @param param1 QWidget*
///
void k_parts__part_prepare_x_m_l_unplug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KParts__Part*
/// @param xmlfile const char*
/// @param localxmlfile const char*
///
void k_parts__part_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param xml const char*
///
const char* k_parts__part_find_version_number(const char* xml);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KParts__Part*
/// @param xmlfile const char*
/// @param localxmlfile const char*
/// @param merge bool
///
void k_parts__part_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param event QEvent*
///
bool k_parts__part_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param event QEvent*
///
bool k_parts__part_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback bool func(KParts__Part* self, QEvent* event)
///
void k_parts__part_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__part_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__part_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback bool func(KParts__Part* self, QObject* watched, QEvent* event)
///
void k_parts__part_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param event QTimerEvent*
///
void k_parts__part_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param event QTimerEvent*
///
void k_parts__part_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, QTimerEvent* event)
///
void k_parts__part_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param event QChildEvent*
///
void k_parts__part_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param event QChildEvent*
///
void k_parts__part_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, QChildEvent* event)
///
void k_parts__part_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param signal QMetaMethod*
///
void k_parts__part_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param signal QMetaMethod*
///
void k_parts__part_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, QMetaMethod* signal)
///
void k_parts__part_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param signal QMetaMethod*
///
void k_parts__part_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param signal QMetaMethod*
///
void k_parts__part_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, QMetaMethod* signal)
///
void k_parts__part_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param element QDomElement*
///
QAction* k_parts__part_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param element QDomElement*
///
QAction* k_parts__part_qbase_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback QAction* func(KParts__Part* self, QDomElement* element)
///
void k_parts__part_on_action2(void* self, QAction* (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
///
KActionCollection* k_parts__part_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
///
KActionCollection* k_parts__part_qbase_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback KActionCollection* func()
///
void k_parts__part_on_action_collection(void* self, KActionCollection* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
///
const char* k_parts__part_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
///
const char* k_parts__part_qbase_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback const char* func()
///
void k_parts__part_on_component_name(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
///
QDomDocument* k_parts__part_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
///
QDomDocument* k_parts__part_qbase_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback QDomDocument* func()
///
void k_parts__part_on_dom_document(void* self, QDomDocument* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
///
const char* k_parts__part_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
///
const char* k_parts__part_qbase_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback const char* func()
///
void k_parts__part_on_xml_file(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
///
const char* k_parts__part_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
///
const char* k_parts__part_qbase_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback const char* func()
///
void k_parts__part_on_local_x_m_l_file(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param componentName const char*
/// @param componentDisplayName const char*
///
void k_parts__part_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param componentName const char*
/// @param componentDisplayName const char*
///
void k_parts__part_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, const char* componentName, const char* componentDisplayName)
///
void k_parts__part_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
///
void k_parts__part_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
///
void k_parts__part_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, const char* file, bool merge, bool setXMLDoc)
///
void k_parts__part_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param file const char*
///
void k_parts__part_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param file const char*
///
void k_parts__part_qbase_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, const char* file)
///
void k_parts__part_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param document const char*
/// @param merge bool
///
void k_parts__part_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param document const char*
/// @param merge bool
///
void k_parts__part_qbase_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, const char* document, bool merge)
///
void k_parts__part_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param document QDomDocument*
/// @param merge bool
///
void k_parts__part_set_d_o_m_document(void* self, void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param document QDomDocument*
/// @param merge bool
///
void k_parts__part_qbase_set_d_o_m_document(void* self, void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, QDomDocument* document, bool merge)
///
void k_parts__part_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
///
void k_parts__part_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
///
void k_parts__part_qbase_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, const char* newstate, enum KXMLGUIClient__ReverseStateChange reverse)
///
void k_parts__part_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
///
QObject* k_parts__part_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
///
QObject* k_parts__part_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback QObject* func()
///
void k_parts__part_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
///
int32_t k_parts__part_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
///
int32_t k_parts__part_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback int32_t func()
///
void k_parts__part_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param signal const char*
///
int32_t k_parts__part_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param signal const char*
///
int32_t k_parts__part_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback int32_t func(KParts__Part* self, const char* signal)
///
void k_parts__part_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
/// @param signal QMetaMethod*
///
bool k_parts__part_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
/// @param signal QMetaMethod*
///
bool k_parts__part_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback bool func(KParts__Part* self, QMetaMethod* signal)
///
void k_parts__part_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
///
const char* k_parts__part_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
///
const char* k_parts__part_qbase_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback const char* func()
///
void k_parts__part_on_standards_xml_file_location(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__Part*
///
void k_parts__part_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__Part*
///
void k_parts__part_qbase_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__Part*
/// @param callback void func()
///
void k_parts__part_on_load_standards_xml_file(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KParts__Part*
/// @param callback void func(KParts__Part* self, const char* objectName)
///
void k_parts__part_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KParts__Part*
///
void k_parts__part_delete(void* self);

#endif
