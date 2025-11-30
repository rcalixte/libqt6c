#pragma once
#ifndef SRC_EXTRAS_KPARTS_QT6C_LIBPARTMANAGER_H
#define SRC_EXTRAS_KPARTS_QT6C_LIBPARTMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kparts-partmanager.html

/// k_parts__partmanager_new constructs a new KParts::PartManager object.
///
/// @param parent QWidget*
KParts__PartManager* k_parts__partmanager_new(void* parent);

/// k_parts__partmanager_new2 constructs a new KParts::PartManager object.
///
/// @param topLevel QWidget*
/// @param parent QObject*
KParts__PartManager* k_parts__partmanager_new2(void* topLevel, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KParts__PartManager*
const QMetaObject* k_parts__partmanager_meta_object(void* self);

/// @param self KParts__PartManager*
/// @param param1 const char*
void* k_parts__partmanager_metacast(void* self, const char* param1);

/// @param self KParts__PartManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_parts__partmanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback int32_t func(KParts__PartManager* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_parts__partmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KParts__PartManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_parts__partmanager_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_parts__partmanager_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#setSelectionPolicy)
///
/// @param self KParts__PartManager*
/// @param policy enum KParts__PartManager__SelectionPolicy
void k_parts__partmanager_set_selection_policy(void* self, int32_t policy);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#selectionPolicy)
///
/// @param self KParts__PartManager*
///
/// @return enum KParts__PartManager__SelectionPolicy
int32_t k_parts__partmanager_selection_policy(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#setAllowNestedParts)
///
/// @param self KParts__PartManager*
/// @param allow bool
void k_parts__partmanager_set_allow_nested_parts(void* self, bool allow);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#allowNestedParts)
///
/// @param self KParts__PartManager*
bool k_parts__partmanager_allow_nested_parts(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#setIgnoreScrollBars)
///
/// @param self KParts__PartManager*
/// @param ignore bool
void k_parts__partmanager_set_ignore_scroll_bars(void* self, bool ignore);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#ignoreScrollBars)
///
/// @param self KParts__PartManager*
bool k_parts__partmanager_ignore_scroll_bars(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#setActivationButtonMask)
///
/// @param self KParts__PartManager*
/// @param buttonMask short
void k_parts__partmanager_set_activation_button_mask(void* self, short buttonMask);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#activationButtonMask)
///
/// @param self KParts__PartManager*
short k_parts__partmanager_activation_button_mask(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#eventFilter)
///
/// @param self KParts__PartManager*
/// @param obj QObject*
/// @param ev QEvent*
bool k_parts__partmanager_event_filter(void* self, void* obj, void* ev);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback bool func(KParts__PartManager* self, QObject* obj, QEvent* ev)
void k_parts__partmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KParts__PartManager*
/// @param obj QObject*
/// @param ev QEvent*
bool k_parts__partmanager_qbase_event_filter(void* self, void* obj, void* ev);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#addPart)
///
/// @param self KParts__PartManager*
/// @param part KParts__Part*
/// @param setActive bool
void k_parts__partmanager_add_part(void* self, void* part, bool setActive);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#addPart)
///
/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, KParts__Part* part, bool setActive)
void k_parts__partmanager_on_add_part(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#addPart)
///
/// Base class method implementation
///
/// @param self KParts__PartManager*
/// @param part KParts__Part*
/// @param setActive bool
void k_parts__partmanager_qbase_add_part(void* self, void* part, bool setActive);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#removePart)
///
/// @param self KParts__PartManager*
/// @param part KParts__Part*
void k_parts__partmanager_remove_part(void* self, void* part);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#removePart)
///
/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, KParts__Part* part)
void k_parts__partmanager_on_remove_part(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#removePart)
///
/// Base class method implementation
///
/// @param self KParts__PartManager*
/// @param part KParts__Part*
void k_parts__partmanager_qbase_remove_part(void* self, void* part);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#replacePart)
///
/// @param self KParts__PartManager*
/// @param oldPart KParts__Part*
/// @param newPart KParts__Part*
/// @param setActive bool
void k_parts__partmanager_replace_part(void* self, void* oldPart, void* newPart, bool setActive);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#replacePart)
///
/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, KParts__Part* oldPart, KParts__Part* newPart, bool setActive)
void k_parts__partmanager_on_replace_part(void* self, void (*callback)(void*, void*, void*, bool));

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#replacePart)
///
/// Base class method implementation
///
/// @param self KParts__PartManager*
/// @param oldPart KParts__Part*
/// @param newPart KParts__Part*
/// @param setActive bool
void k_parts__partmanager_qbase_replace_part(void* self, void* oldPart, void* newPart, bool setActive);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#setActivePart)
///
/// @param self KParts__PartManager*
/// @param part KParts__Part*
/// @param widget QWidget*
void k_parts__partmanager_set_active_part(void* self, void* part, void* widget);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#setActivePart)
///
/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, KParts__Part* part, QWidget* widget)
void k_parts__partmanager_on_set_active_part(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#setActivePart)
///
/// Base class method implementation
///
/// @param self KParts__PartManager*
/// @param part KParts__Part*
/// @param widget QWidget*
void k_parts__partmanager_qbase_set_active_part(void* self, void* part, void* widget);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePart)
///
/// @param self KParts__PartManager*
KParts__Part* k_parts__partmanager_active_part(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePart)
///
/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback KParts__Part* func()
void k_parts__partmanager_on_active_part(void* self, KParts__Part* (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePart)
///
/// Base class method implementation
///
/// @param self KParts__PartManager*
KParts__Part* k_parts__partmanager_qbase_active_part(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#activeWidget)
///
/// @param self KParts__PartManager*
QWidget* k_parts__partmanager_active_widget(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#activeWidget)
///
/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback QWidget* func()
void k_parts__partmanager_on_active_widget(void* self, QWidget* (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#activeWidget)
///
/// Base class method implementation
///
/// @param self KParts__PartManager*
QWidget* k_parts__partmanager_qbase_active_widget(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#parts)
///
/// @param self KParts__PartManager*
libqt_list /* of KParts__Part* */ k_parts__partmanager_parts(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#addManagedTopLevelWidget)
///
/// @param self KParts__PartManager*
/// @param topLevel QWidget*
void k_parts__partmanager_add_managed_top_level_widget(void* self, void* topLevel);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#removeManagedTopLevelWidget)
///
/// @param self KParts__PartManager*
/// @param topLevel QWidget*
void k_parts__partmanager_remove_managed_top_level_widget(void* self, void* topLevel);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#reason)
///
/// @param self KParts__PartManager*
int32_t k_parts__partmanager_reason(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#partAdded)
///
/// @param self KParts__PartManager*
/// @param part KParts__Part*
void k_parts__partmanager_part_added(void* self, void* part);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#partAdded)
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, KParts__Part* part)
void k_parts__partmanager_on_part_added(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#partRemoved)
///
/// @param self KParts__PartManager*
/// @param part KParts__Part*
void k_parts__partmanager_part_removed(void* self, void* part);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#partRemoved)
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, KParts__Part* part)
void k_parts__partmanager_on_part_removed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePartChanged)
///
/// @param self KParts__PartManager*
/// @param newPart KParts__Part*
void k_parts__partmanager_active_part_changed(void* self, void* newPart);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#activePartChanged)
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, KParts__Part* newPart)
void k_parts__partmanager_on_active_part_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#setIgnoreExplictFocusRequests)
///
/// @param self KParts__PartManager*
/// @param ignoreExplictFocusRequests bool
void k_parts__partmanager_set_ignore_explict_focus_requests(void* self, bool ignoreExplictFocusRequests);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#setIgnoreExplictFocusRequests)
///
/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, bool ignoreExplictFocusRequests)
void k_parts__partmanager_on_set_ignore_explict_focus_requests(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#setIgnoreExplictFocusRequests)
///
/// Base class method implementation
///
/// @param self KParts__PartManager*
/// @param ignoreExplictFocusRequests bool
void k_parts__partmanager_qbase_set_ignore_explict_focus_requests(void* self, bool ignoreExplictFocusRequests);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotObjectDestroyed)
///
/// @param self KParts__PartManager*
void k_parts__partmanager_slot_object_destroyed(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotObjectDestroyed)
///
/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback void func()
void k_parts__partmanager_on_slot_object_destroyed(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotObjectDestroyed)
///
/// Base class method implementation
///
/// @param self KParts__PartManager*
void k_parts__partmanager_qbase_slot_object_destroyed(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotWidgetDestroyed)
///
/// @param self KParts__PartManager*
void k_parts__partmanager_slot_widget_destroyed(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotWidgetDestroyed)
///
/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback void func()
void k_parts__partmanager_on_slot_widget_destroyed(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotWidgetDestroyed)
///
/// Base class method implementation
///
/// @param self KParts__PartManager*
void k_parts__partmanager_qbase_slot_widget_destroyed(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotManagedTopLevelWidgetDestroyed)
///
/// @param self KParts__PartManager*
void k_parts__partmanager_slot_managed_top_level_widget_destroyed(void* self);

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotManagedTopLevelWidgetDestroyed)
///
/// Allows for overriding the related default method
///
/// @param self KParts__PartManager*
/// @param callback void func()
void k_parts__partmanager_on_slot_managed_top_level_widget_destroyed(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-partmanager.html#slotManagedTopLevelWidgetDestroyed)
///
/// Base class method implementation
///
/// @param self KParts__PartManager*
void k_parts__partmanager_qbase_slot_managed_top_level_widget_destroyed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_parts__partmanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_parts__partmanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KParts__PartManager*
const char* k_parts__partmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KParts__PartManager*
/// @param name char*
void k_parts__partmanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KParts__PartManager*
bool k_parts__partmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KParts__PartManager*
bool k_parts__partmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KParts__PartManager*
bool k_parts__partmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KParts__PartManager*
bool k_parts__partmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KParts__PartManager*
/// @param b bool
bool k_parts__partmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KParts__PartManager*
QThread* k_parts__partmanager_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__PartManager*
/// @param thread QThread*
bool k_parts__partmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__PartManager*
/// @param interval int
int32_t k_parts__partmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__PartManager*
/// @param id int
void k_parts__partmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__PartManager*
/// @param id enum Qt__TimerId
void k_parts__partmanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KParts__PartManager*
libqt_list /* of QObject* */ k_parts__partmanager_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KParts__PartManager*
/// @param parent QObject*
void k_parts__partmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KParts__PartManager*
/// @param filterObj QObject*
void k_parts__partmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KParts__PartManager*
/// @param obj QObject*
void k_parts__partmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_parts__partmanager_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__PartManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_parts__partmanager_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_parts__partmanager_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_parts__partmanager_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KParts__PartManager*
void k_parts__partmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KParts__PartManager*
void k_parts__partmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KParts__PartManager*
/// @param name const char*
/// @param value QVariant*
bool k_parts__partmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KParts__PartManager*
/// @param name const char*
QVariant* k_parts__partmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KParts__PartManager*
const char** k_parts__partmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__PartManager*
QBindingStorage* k_parts__partmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__PartManager*
const QBindingStorage* k_parts__partmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__PartManager*
void k_parts__partmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self)
void k_parts__partmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KParts__PartManager*
QObject* k_parts__partmanager_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KParts__PartManager*
/// @param classname const char*
bool k_parts__partmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KParts__PartManager*
void k_parts__partmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__PartManager*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_parts__partmanager_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__PartManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_parts__partmanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_parts__partmanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__PartManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_parts__partmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__PartManager*
/// @param param1 QObject*
void k_parts__partmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, QObject* param1)
void k_parts__partmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartManager*
/// @param event QEvent*
bool k_parts__partmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param event QEvent*
bool k_parts__partmanager_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param callback bool func(KParts__PartManager* self, QEvent* event)
void k_parts__partmanager_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartManager*
/// @param event QTimerEvent*
void k_parts__partmanager_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param event QTimerEvent*
void k_parts__partmanager_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, QTimerEvent* event)
void k_parts__partmanager_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartManager*
/// @param event QChildEvent*
void k_parts__partmanager_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param event QChildEvent*
void k_parts__partmanager_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, QChildEvent* event)
void k_parts__partmanager_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartManager*
/// @param event QEvent*
void k_parts__partmanager_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param event QEvent*
void k_parts__partmanager_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, QEvent* event)
void k_parts__partmanager_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartManager*
/// @param signal QMetaMethod*
void k_parts__partmanager_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param signal QMetaMethod*
void k_parts__partmanager_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, QMetaMethod* signal)
void k_parts__partmanager_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartManager*
/// @param signal QMetaMethod*
void k_parts__partmanager_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param signal QMetaMethod*
void k_parts__partmanager_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, QMetaMethod* signal)
void k_parts__partmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartManager*
QObject* k_parts__partmanager_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartManager*
QObject* k_parts__partmanager_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param callback QObject* func()
void k_parts__partmanager_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartManager*
int32_t k_parts__partmanager_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartManager*
int32_t k_parts__partmanager_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param callback int32_t func()
void k_parts__partmanager_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartManager*
/// @param signal const char*
int32_t k_parts__partmanager_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param signal const char*
int32_t k_parts__partmanager_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param callback int32_t func(KParts__PartManager* self, const char* signal)
void k_parts__partmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartManager*
/// @param signal QMetaMethod*
bool k_parts__partmanager_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param signal QMetaMethod*
bool k_parts__partmanager_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartManager*
/// @param callback bool func(KParts__PartManager* self, QMetaMethod* signal)
void k_parts__partmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KParts__PartManager*
/// @param callback void func(KParts__PartManager* self, const char* objectName)
void k_parts__partmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KParts__PartManager*
void k_parts__partmanager_delete(void* self);

/// https://api.kde.org/kparts-partmanager.html#types

typedef enum {
    KPARTS_PARTMANAGER_SELECTIONPOLICY_DIRECT = 0,
    KPARTS_PARTMANAGER_SELECTIONPOLICY_TRISTATE = 1
} KParts__PartManager__SelectionPolicy;

typedef enum {
    KPARTS_PARTMANAGER_REASON_REASONLEFTCLICK = 100,
    KPARTS_PARTMANAGER_REASON_REASONMIDCLICK = 101,
    KPARTS_PARTMANAGER_REASON_REASONRIGHTCLICK = 102,
    KPARTS_PARTMANAGER_REASON_NOREASON = 103
} KParts__PartManager__Reason;

#endif
