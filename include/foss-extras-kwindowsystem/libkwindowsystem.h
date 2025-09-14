#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMQT6C_LIBKWINDOWSYSTEM_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMQT6C_LIBKWINDOWSYSTEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kwindowsystem.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KWindowSystem*
const QMetaObject* k_windowsystem_meta_object(void* self);

/// @param self KWindowSystem*
/// @param param1 const char*
void* k_windowsystem_metacast(void* self, const char* param1);

/// @param self KWindowSystem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_windowsystem_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_windowsystem_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#self)
///
KWindowSystem* k_windowsystem_self();

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#activateWindow)
///
/// @param window QWindow*
void k_windowsystem_activate_window(void* window);

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#showingDesktop)
///
bool k_windowsystem_showing_desktop();

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#setShowingDesktop)
///
/// @param showing bool
void k_windowsystem_set_showing_desktop(bool showing);

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#setMainWindow)
///
/// @param subwindow QWindow*
/// @param mainwindow uintptr_t
void k_windowsystem_set_main_window(void* subwindow, uintptr_t mainwindow);

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#setMainWindow)
///
/// @param subwindow QWindow*
/// @param mainwindow const char*
void k_windowsystem_set_main_window2(void* subwindow, const char* mainwindow);

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#updateStartupId)
///
/// @param window QWindow*
void k_windowsystem_update_startup_id(void* window);

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#platform)
///
///
/// @return enum KWindowSystem__Platform
int32_t k_windowsystem_platform();

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#isPlatformX11)
///
bool k_windowsystem_is_platform_x11();

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#isPlatformWayland)
///
bool k_windowsystem_is_platform_wayland();

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#setCurrentXdgActivationToken)
///
/// @param token const char*
void k_windowsystem_set_current_xdg_activation_token(const char* token);

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#showingDesktopChanged)
///
/// @param self KWindowSystem*
/// @param showing bool
void k_windowsystem_showing_desktop_changed(void* self, bool showing);

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#showingDesktopChanged)
///
/// @param self KWindowSystem*
/// @param callback void func(KWindowSystem* self, bool showing)
void k_windowsystem_on_showing_desktop_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_windowsystem_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_windowsystem_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#activateWindow)
///
/// @param window QWindow*
/// @param time int64_t
void k_windowsystem_activate_window2(void* window, int64_t time);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KWindowSystem*
/// @param event QEvent*
bool k_windowsystem_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KWindowSystem*
/// @param watched QObject*
/// @param event QEvent*
bool k_windowsystem_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowSystem*
const char* k_windowsystem_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KWindowSystem*
/// @param name char*
void k_windowsystem_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KWindowSystem*
bool k_windowsystem_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KWindowSystem*
bool k_windowsystem_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KWindowSystem*
bool k_windowsystem_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KWindowSystem*
bool k_windowsystem_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KWindowSystem*
/// @param b bool
bool k_windowsystem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KWindowSystem*
QThread* k_windowsystem_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KWindowSystem*
/// @param thread QThread*
bool k_windowsystem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWindowSystem*
/// @param interval int
int32_t k_windowsystem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWindowSystem*
/// @param id int
void k_windowsystem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KWindowSystem*
/// @param id enum Qt__TimerId
void k_windowsystem_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KWindowSystem*
libqt_list /* of QObject* */ k_windowsystem_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KWindowSystem*
/// @param parent QObject*
void k_windowsystem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KWindowSystem*
/// @param filterObj QObject*
void k_windowsystem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KWindowSystem*
/// @param obj QObject*
void k_windowsystem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_windowsystem_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KWindowSystem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_windowsystem_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_windowsystem_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_windowsystem_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KWindowSystem*
void k_windowsystem_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KWindowSystem*
void k_windowsystem_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KWindowSystem*
/// @param name const char*
/// @param value QVariant*
bool k_windowsystem_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KWindowSystem*
/// @param name const char*
QVariant* k_windowsystem_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowSystem*
const char** k_windowsystem_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KWindowSystem*
QBindingStorage* k_windowsystem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KWindowSystem*
const QBindingStorage* k_windowsystem_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWindowSystem*
void k_windowsystem_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWindowSystem*
/// @param callback void func(KWindowSystem* self)
void k_windowsystem_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KWindowSystem*
QObject* k_windowsystem_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KWindowSystem*
/// @param classname const char*
bool k_windowsystem_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KWindowSystem*
void k_windowsystem_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KWindowSystem*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_windowsystem_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KWindowSystem*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_windowsystem_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_windowsystem_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KWindowSystem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_windowsystem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWindowSystem*
/// @param param1 QObject*
void k_windowsystem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KWindowSystem*
/// @param callback void func(KWindowSystem* self, QObject* param1)
void k_windowsystem_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KWindowSystem*
/// @param callback void func(KWindowSystem* self, const char* objectName)
void k_windowsystem_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kwindowsystem.html#dtor.KWindowSystem)
///
/// Delete this object from C++ memory.
///
/// @param self KWindowSystem*
void k_windowsystem_delete(void* self);

/// https://api.kde.org/kwindowsystem.html#types

typedef enum {
    KWINDOWSYSTEM_PLATFORM_UNKNOWN = 0,
    KWINDOWSYSTEM_PLATFORM_X11 = 1,
    KWINDOWSYSTEM_PLATFORM_WAYLAND = 2
} KWindowSystem__Platform;

#endif
