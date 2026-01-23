#pragma once
#ifndef SRC_FOSS_EXTRAS_LAYERSHELLQT_QT6C_LIBWINDOW_H
#define SRC_FOSS_EXTRAS_LAYERSHELLQT_QT6C_LIBWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self LayerShellQt__Window*
///
const QMetaObject* k_layershellqt__window_meta_object(void* self);

/// @param self LayerShellQt__Window*
/// @param param1 const char*
///
void* k_layershellqt__window_metacast(void* self, const char* param1);

/// @param self LayerShellQt__Window*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_layershellqt__window_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_layershellqt__window_tr(const char* s);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param anchor flag of enum LayerShellQt__Window__Anchor
///
void k_layershellqt__window_set_anchors(void* self, int32_t anchor);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
/// @return flag of enum LayerShellQt__Window__Anchor
///
int32_t k_layershellqt__window_anchors(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param zone int32_t
///
void k_layershellqt__window_set_exclusive_zone(void* self, int32_t zone);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
int32_t k_layershellqt__window_exclusion_zone(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param edge enum LayerShellQt__Window__Anchor
///
void k_layershellqt__window_set_exclusive_edge(void* self, int32_t edge);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
/// @return enum LayerShellQt__Window__Anchor
///
int32_t k_layershellqt__window_exclusive_edge(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param margins QMargins*
///
void k_layershellqt__window_set_margins(void* self, void* margins);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
QMargins* k_layershellqt__window_margins(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param interactivity enum LayerShellQt__Window__KeyboardInteractivity
///
void k_layershellqt__window_set_keyboard_interactivity(void* self, int32_t interactivity);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
/// @return enum LayerShellQt__Window__KeyboardInteractivity
///
int32_t k_layershellqt__window_keyboard_interactivity(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param layer enum LayerShellQt__Window__Layer
///
void k_layershellqt__window_set_layer(void* self, int32_t layer);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
/// @return enum LayerShellQt__Window__Layer
///
int32_t k_layershellqt__window_layer(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param screenConfiguration enum LayerShellQt__Window__ScreenConfiguration
///
void k_layershellqt__window_set_screen_configuration(void* self, int32_t screenConfiguration);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
/// @return enum LayerShellQt__Window__ScreenConfiguration
///
int32_t k_layershellqt__window_screen_configuration(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param scope const char*
///
void k_layershellqt__window_set_scope(void* self, const char* scope);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self LayerShellQt__Window*
///
const char* k_layershellqt__window_scope(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param close bool
///
void k_layershellqt__window_set_close_on_dismissed(void* self, bool close);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
bool k_layershellqt__window_close_on_dismissed(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param window QWindow*
///
LayerShellQt__Window* k_layershellqt__window_get(void* window);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param object QObject*
///
LayerShellQt__Window* k_layershellqt__window_qml_attached_properties(void* object);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
void k_layershellqt__window_anchors_changed(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param callback void func(LayerShellQt__Window* self)
///
void k_layershellqt__window_on_anchors_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
void k_layershellqt__window_exclusion_zone_changed(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param callback void func(LayerShellQt__Window* self)
///
void k_layershellqt__window_on_exclusion_zone_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
void k_layershellqt__window_exclusive_edge_changed(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param callback void func(LayerShellQt__Window* self)
///
void k_layershellqt__window_on_exclusive_edge_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
void k_layershellqt__window_margins_changed(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param callback void func(LayerShellQt__Window* self)
///
void k_layershellqt__window_on_margins_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
void k_layershellqt__window_keyboard_interactivity_changed(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param callback void func(LayerShellQt__Window* self)
///
void k_layershellqt__window_on_keyboard_interactivity_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
///
void k_layershellqt__window_layer_changed(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// @param self LayerShellQt__Window*
/// @param callback void func(LayerShellQt__Window* self)
///
void k_layershellqt__window_on_layer_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_layershellqt__window_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_layershellqt__window_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self LayerShellQt__Window*
/// @param event QEvent*
///
bool k_layershellqt__window_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self LayerShellQt__Window*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_layershellqt__window_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self LayerShellQt__Window*
///
const char* k_layershellqt__window_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self LayerShellQt__Window*
/// @param name char*
///
void k_layershellqt__window_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self LayerShellQt__Window*
///
bool k_layershellqt__window_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self LayerShellQt__Window*
///
bool k_layershellqt__window_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self LayerShellQt__Window*
///
bool k_layershellqt__window_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self LayerShellQt__Window*
///
bool k_layershellqt__window_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self LayerShellQt__Window*
/// @param b bool
///
bool k_layershellqt__window_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self LayerShellQt__Window*
///
QThread* k_layershellqt__window_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self LayerShellQt__Window*
/// @param thread QThread*
///
bool k_layershellqt__window_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self LayerShellQt__Window*
/// @param interval int
///
int32_t k_layershellqt__window_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self LayerShellQt__Window*
/// @param time int64_t of nanoseconds
///
int32_t k_layershellqt__window_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self LayerShellQt__Window*
/// @param id int
///
void k_layershellqt__window_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self LayerShellQt__Window*
/// @param id enum Qt__TimerId
///
void k_layershellqt__window_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self LayerShellQt__Window*
///
/// @return libqt_list of QObject*
///
libqt_list k_layershellqt__window_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self LayerShellQt__Window*
/// @param parent QObject*
///
void k_layershellqt__window_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self LayerShellQt__Window*
/// @param filterObj QObject*
///
void k_layershellqt__window_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self LayerShellQt__Window*
/// @param obj QObject*
///
void k_layershellqt__window_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_layershellqt__window_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self LayerShellQt__Window*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_layershellqt__window_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_layershellqt__window_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_layershellqt__window_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self LayerShellQt__Window*
///
void k_layershellqt__window_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self LayerShellQt__Window*
///
void k_layershellqt__window_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self LayerShellQt__Window*
/// @param name const char*
/// @param value QVariant*
///
bool k_layershellqt__window_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self LayerShellQt__Window*
/// @param name const char*
///
QVariant* k_layershellqt__window_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self LayerShellQt__Window*
///
const char** k_layershellqt__window_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self LayerShellQt__Window*
///
QBindingStorage* k_layershellqt__window_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self LayerShellQt__Window*
///
const QBindingStorage* k_layershellqt__window_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self LayerShellQt__Window*
///
void k_layershellqt__window_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self LayerShellQt__Window*
/// @param callback void func(LayerShellQt__Window* self)
///
void k_layershellqt__window_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self LayerShellQt__Window*
///
QObject* k_layershellqt__window_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self LayerShellQt__Window*
/// @param classname const char*
///
bool k_layershellqt__window_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self LayerShellQt__Window*
///
void k_layershellqt__window_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self LayerShellQt__Window*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_layershellqt__window_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self LayerShellQt__Window*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_layershellqt__window_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self LayerShellQt__Window*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_layershellqt__window_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_layershellqt__window_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self LayerShellQt__Window*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_layershellqt__window_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self LayerShellQt__Window*
/// @param param1 QObject*
///
void k_layershellqt__window_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self LayerShellQt__Window*
/// @param callback void func(LayerShellQt__Window* self, QObject* param1)
///
void k_layershellqt__window_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self LayerShellQt__Window*
/// @param callback void func(LayerShellQt__Window* self, const char* objectName)
///
void k_layershellqt__window_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)
///
/// Delete this object from C++ memory.
///
/// @param self LayerShellQt__Window*
///
void k_layershellqt__window_delete(void* self);

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)

typedef enum {
    LAYERSHELLQT_WINDOW_ANCHOR_ANCHORNONE = 0,
    LAYERSHELLQT_WINDOW_ANCHOR_ANCHORTOP = 1,
    LAYERSHELLQT_WINDOW_ANCHOR_ANCHORBOTTOM = 2,
    LAYERSHELLQT_WINDOW_ANCHOR_ANCHORLEFT = 4,
    LAYERSHELLQT_WINDOW_ANCHOR_ANCHORRIGHT = 8
} LayerShellQt__Window__Anchor;

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)

typedef enum {
    LAYERSHELLQT_WINDOW_LAYER_LAYERBACKGROUND = 0,
    LAYERSHELLQT_WINDOW_LAYER_LAYERBOTTOM = 1,
    LAYERSHELLQT_WINDOW_LAYER_LAYERTOP = 2,
    LAYERSHELLQT_WINDOW_LAYER_LAYEROVERLAY = 3
} LayerShellQt__Window__Layer;

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)

typedef enum {
    LAYERSHELLQT_WINDOW_KEYBOARDINTERACTIVITY_KEYBOARDINTERACTIVITYNONE = 0,
    LAYERSHELLQT_WINDOW_KEYBOARDINTERACTIVITY_KEYBOARDINTERACTIVITYEXCLUSIVE = 1,
    LAYERSHELLQT_WINDOW_KEYBOARDINTERACTIVITY_KEYBOARDINTERACTIVITYONDEMAND = 2
} LayerShellQt__Window__KeyboardInteractivity;

/// [Upstream resources](https://invent.kde.org/plasma/layer-shell-qt)

typedef enum {
    LAYERSHELLQT_WINDOW_SCREENCONFIGURATION_SCREENFROMQWINDOW = 0,
    LAYERSHELLQT_WINDOW_SCREENCONFIGURATION_SCREENFROMCOMPOSITOR = 1
} LayerShellQt__Window__ScreenConfiguration;

#endif
