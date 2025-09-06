#pragma once
#ifndef SRC_FOSS_EXTRAS_KGLOBALACCELQT6C_LIBKGLOBALACCEL_H
#define SRC_FOSS_EXTRAS_KGLOBALACCELQT6C_LIBKGLOBALACCEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kglobalaccel.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KGlobalAccel*
const QMetaObject* k_globalaccel_meta_object(void* self);

/// @param self KGlobalAccel*
/// @param param1 const char*
void* k_globalaccel_metacast(void* self, const char* param1);

/// @param self KGlobalAccel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_globalaccel_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_globalaccel_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#self)
///
KGlobalAccel* k_globalaccel_self();

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#stealShortcutSystemwide)
///
/// @param seq QKeySequence*
void k_globalaccel_steal_shortcut_systemwide(void* seq);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#cleanComponent)
///
/// @param componentUnique const char*
bool k_globalaccel_clean_component(const char* componentUnique);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#isComponentActive)
///
/// @param componentName const char*
bool k_globalaccel_is_component_active(const char* componentName);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#globalShortcutsByKey)
///
/// @param seq QKeySequence*
libqt_list /* of KGlobalShortcutInfo* */ k_globalaccel_global_shortcuts_by_key(void* seq);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#isGlobalShortcutAvailable)
///
/// @param seq QKeySequence*
bool k_globalaccel_is_global_shortcut_available(void* seq);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#promptStealShortcutSystemwide)
///
/// @param parent QWidget*
/// @param shortcuts libqt_list /* of KGlobalShortcutInfo* */
/// @param seq QKeySequence*
bool k_globalaccel_prompt_steal_shortcut_systemwide(void* parent, libqt_list shortcuts, void* seq);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#setDefaultShortcut)
///
/// @param self KGlobalAccel*
/// @param action QAction*
/// @param shortcut libqt_list /* of QKeySequence* */
bool k_globalaccel_set_default_shortcut(void* self, void* action, libqt_list shortcut);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#setShortcut)
///
/// @param self KGlobalAccel*
/// @param action QAction*
/// @param shortcut libqt_list /* of QKeySequence* */
bool k_globalaccel_set_shortcut(void* self, void* action, libqt_list shortcut);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#setGlobalShortcut)
///
/// @param action QAction*
/// @param shortcut libqt_list /* of QKeySequence* */
bool k_globalaccel_set_global_shortcut(void* action, libqt_list shortcut);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#setGlobalShortcut)
///
/// @param action QAction*
/// @param shortcut QKeySequence*
bool k_globalaccel_set_global_shortcut2(void* action, void* shortcut);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#defaultShortcut)
///
/// @param self KGlobalAccel*
/// @param action QAction*
libqt_list /* of QKeySequence* */ k_globalaccel_default_shortcut(void* self, void* action);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#shortcut)
///
/// @param self KGlobalAccel*
/// @param action QAction*
libqt_list /* of QKeySequence* */ k_globalaccel_shortcut(void* self, void* action);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#globalShortcut)
///
/// @param self KGlobalAccel*
/// @param componentName const char*
/// @param actionId const char*
libqt_list /* of QKeySequence* */ k_globalaccel_global_shortcut(void* self, const char* componentName, const char* actionId);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#removeAllShortcuts)
///
/// @param self KGlobalAccel*
/// @param action QAction*
void k_globalaccel_remove_all_shortcuts(void* self, void* action);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#hasShortcut)
///
/// @param self KGlobalAccel*
/// @param action QAction*
bool k_globalaccel_has_shortcut(void* self, void* action);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#globalShortcutChanged)
///
/// @param self KGlobalAccel*
/// @param action QAction*
/// @param seq QKeySequence*
void k_globalaccel_global_shortcut_changed(void* self, void* action, void* seq);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#globalShortcutChanged)
///
/// @param self KGlobalAccel*
/// @param callback void func(KGlobalAccel* self, QAction* action, QKeySequence* seq)
void k_globalaccel_on_global_shortcut_changed(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#globalShortcutActiveChanged)
///
/// @param self KGlobalAccel*
/// @param action QAction*
/// @param active bool
void k_globalaccel_global_shortcut_active_changed(void* self, void* action, bool active);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#globalShortcutActiveChanged)
///
/// @param self KGlobalAccel*
/// @param callback void func(KGlobalAccel* self, QAction* action, bool active)
void k_globalaccel_on_global_shortcut_active_changed(void* self, void (*callback)(void*, void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_globalaccel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_globalaccel_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#globalShortcutsByKey)
///
/// @param seq QKeySequence*
/// @param typeVal enum KGlobalAccel__MatchType
libqt_list /* of KGlobalShortcutInfo* */ k_globalaccel_global_shortcuts_by_key2(void* seq, int32_t typeVal);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#isGlobalShortcutAvailable)
///
/// @param seq QKeySequence*
/// @param component const char*
bool k_globalaccel_is_global_shortcut_available2(void* seq, const char* component);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#setDefaultShortcut)
///
/// @param self KGlobalAccel*
/// @param action QAction*
/// @param shortcut libqt_list /* of QKeySequence* */
/// @param loadFlag enum KGlobalAccel__GlobalShortcutLoading
bool k_globalaccel_set_default_shortcut3(void* self, void* action, libqt_list shortcut, int32_t loadFlag);

/// [Qt documentation](https://api-staging.kde.org/kglobalaccel.html#setShortcut)
///
/// @param self KGlobalAccel*
/// @param action QAction*
/// @param shortcut libqt_list /* of QKeySequence* */
/// @param loadFlag enum KGlobalAccel__GlobalShortcutLoading
bool k_globalaccel_set_shortcut3(void* self, void* action, libqt_list shortcut, int32_t loadFlag);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KGlobalAccel*
/// @param event QEvent*
bool k_globalaccel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KGlobalAccel*
/// @param watched QObject*
/// @param event QEvent*
bool k_globalaccel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KGlobalAccel*
const char* k_globalaccel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KGlobalAccel*
/// @param name char*
void k_globalaccel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KGlobalAccel*
bool k_globalaccel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KGlobalAccel*
bool k_globalaccel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KGlobalAccel*
bool k_globalaccel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KGlobalAccel*
bool k_globalaccel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KGlobalAccel*
/// @param b bool
bool k_globalaccel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KGlobalAccel*
QThread* k_globalaccel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KGlobalAccel*
/// @param thread QThread*
bool k_globalaccel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KGlobalAccel*
/// @param interval int
int32_t k_globalaccel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KGlobalAccel*
/// @param id int
void k_globalaccel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KGlobalAccel*
/// @param id enum Qt__TimerId
void k_globalaccel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KGlobalAccel*
libqt_list /* of QObject* */ k_globalaccel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KGlobalAccel*
/// @param parent QObject*
void k_globalaccel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KGlobalAccel*
/// @param filterObj QObject*
void k_globalaccel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KGlobalAccel*
/// @param obj QObject*
void k_globalaccel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_globalaccel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KGlobalAccel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_globalaccel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_globalaccel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_globalaccel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KGlobalAccel*
void k_globalaccel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KGlobalAccel*
void k_globalaccel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KGlobalAccel*
/// @param name const char*
/// @param value QVariant*
bool k_globalaccel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KGlobalAccel*
/// @param name const char*
QVariant* k_globalaccel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KGlobalAccel*
const char** k_globalaccel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KGlobalAccel*
QBindingStorage* k_globalaccel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KGlobalAccel*
const QBindingStorage* k_globalaccel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KGlobalAccel*
void k_globalaccel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KGlobalAccel*
/// @param callback void func(KGlobalAccel* self)
void k_globalaccel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KGlobalAccel*
QObject* k_globalaccel_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KGlobalAccel*
/// @param classname const char*
bool k_globalaccel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KGlobalAccel*
void k_globalaccel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KGlobalAccel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_globalaccel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KGlobalAccel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_globalaccel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_globalaccel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KGlobalAccel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_globalaccel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KGlobalAccel*
/// @param param1 QObject*
void k_globalaccel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KGlobalAccel*
/// @param callback void func(KGlobalAccel* self, QObject* param1)
void k_globalaccel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KGlobalAccel*
/// @param callback void func(KGlobalAccel* self, const char* objectName)
void k_globalaccel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// https://api-staging.kde.org/kglobalaccel.html#types

typedef enum {
    KGLOBALACCEL_GLOBALSHORTCUTLOADING_AUTOLOADING = 0,
    KGLOBALACCEL_GLOBALSHORTCUTLOADING_NOAUTOLOADING = 4
} KGlobalAccel__GlobalShortcutLoading;

typedef enum {
    KGLOBALACCEL_ACTIONIDFIELDS_COMPONENTUNIQUE = 0,
    KGLOBALACCEL_ACTIONIDFIELDS_ACTIONUNIQUE = 1,
    KGLOBALACCEL_ACTIONIDFIELDS_COMPONENTFRIENDLY = 2,
    KGLOBALACCEL_ACTIONIDFIELDS_ACTIONFRIENDLY = 3
} KGlobalAccel__actionIdFields;

typedef enum {
    KGLOBALACCEL_MATCHTYPE_EQUAL = 0,
    KGLOBALACCEL_MATCHTYPE_SHADOWS = 1,
    KGLOBALACCEL_MATCHTYPE_SHADOWED = 2
} KGlobalAccel__MatchType;

#endif
