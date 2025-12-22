#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKSYSTEMCLIPBOARD_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKSYSTEMCLIPBOARD_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksystemclipboard.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSystemClipboard*
///
const QMetaObject* k_systemclipboard_meta_object(void* self);

/// @param self KSystemClipboard*
/// @param param1 const char*
///
void* k_systemclipboard_metacast(void* self, const char* param1);

/// @param self KSystemClipboard*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_systemclipboard_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_systemclipboard_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ksystemclipboard.html#instance)
///
KSystemClipboard* k_systemclipboard_instance();

/// [Upstream resources](https://api.kde.org/ksystemclipboard.html#setMimeData)
///
/// @param self KSystemClipboard*
/// @param mime QMimeData*
/// @param mode enum QClipboard__Mode
///
void k_systemclipboard_set_mime_data(void* self, void* mime, int32_t mode);

/// [Upstream resources](https://api.kde.org/ksystemclipboard.html#clear)
///
/// @param self KSystemClipboard*
/// @param mode enum QClipboard__Mode
///
void k_systemclipboard_clear(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/ksystemclipboard.html#mimeData)
///
/// @param self KSystemClipboard*
/// @param mode enum QClipboard__Mode
///
const QMimeData* k_systemclipboard_mime_data(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/ksystemclipboard.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSystemClipboard*
/// @param mode enum QClipboard__Mode
///
const char* k_systemclipboard_text(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/ksystemclipboard.html#changed)
///
/// @param self KSystemClipboard*
/// @param mode enum QClipboard__Mode
///
void k_systemclipboard_changed(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/ksystemclipboard.html#changed)
///
/// @param self KSystemClipboard*
/// @param callback void func(KSystemClipboard* self, enum QClipboard__Mode mode)
///
void k_systemclipboard_on_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_systemclipboard_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_systemclipboard_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KSystemClipboard*
/// @param event QEvent*
///
bool k_systemclipboard_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KSystemClipboard*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_systemclipboard_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSystemClipboard*
///
const char* k_systemclipboard_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSystemClipboard*
/// @param name char*
///
void k_systemclipboard_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSystemClipboard*
///
bool k_systemclipboard_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSystemClipboard*
///
bool k_systemclipboard_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSystemClipboard*
///
bool k_systemclipboard_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSystemClipboard*
///
bool k_systemclipboard_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSystemClipboard*
/// @param b bool
///
bool k_systemclipboard_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSystemClipboard*
///
QThread* k_systemclipboard_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSystemClipboard*
/// @param thread QThread*
///
bool k_systemclipboard_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSystemClipboard*
/// @param interval int
///
int32_t k_systemclipboard_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSystemClipboard*
/// @param id int
///
void k_systemclipboard_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSystemClipboard*
/// @param id enum Qt__TimerId
///
void k_systemclipboard_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSystemClipboard*
///
libqt_list /* of QObject* */ k_systemclipboard_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSystemClipboard*
/// @param parent QObject*
///
void k_systemclipboard_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSystemClipboard*
/// @param filterObj QObject*
///
void k_systemclipboard_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSystemClipboard*
/// @param obj QObject*
///
void k_systemclipboard_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_systemclipboard_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSystemClipboard*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_systemclipboard_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_systemclipboard_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_systemclipboard_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSystemClipboard*
///
void k_systemclipboard_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSystemClipboard*
///
void k_systemclipboard_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSystemClipboard*
/// @param name const char*
/// @param value QVariant*
///
bool k_systemclipboard_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSystemClipboard*
/// @param name const char*
///
QVariant* k_systemclipboard_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSystemClipboard*
///
const char** k_systemclipboard_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSystemClipboard*
///
QBindingStorage* k_systemclipboard_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSystemClipboard*
///
const QBindingStorage* k_systemclipboard_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSystemClipboard*
///
void k_systemclipboard_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSystemClipboard*
/// @param callback void func(KSystemClipboard* self)
///
void k_systemclipboard_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSystemClipboard*
///
QObject* k_systemclipboard_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSystemClipboard*
/// @param classname const char*
///
bool k_systemclipboard_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSystemClipboard*
///
void k_systemclipboard_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSystemClipboard*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_systemclipboard_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSystemClipboard*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_systemclipboard_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_systemclipboard_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSystemClipboard*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_systemclipboard_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSystemClipboard*
/// @param param1 QObject*
///
void k_systemclipboard_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSystemClipboard*
/// @param callback void func(KSystemClipboard* self, QObject* param1)
///
void k_systemclipboard_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSystemClipboard*
/// @param callback void func(KSystemClipboard* self, const char* objectName)
///
void k_systemclipboard_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ksystemclipboard.html#dtor.KSystemClipboard)
///
/// Delete this object from C++ memory.
///
/// @param self KSystemClipboard*
///
void k_systemclipboard_delete(void* self);

#endif
