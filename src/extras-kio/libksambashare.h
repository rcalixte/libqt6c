#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKSAMBASHARE_H
#define SRC_EXTRAS_KIO_QT6C_LIBKSAMBASHARE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksambashare.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSambaShare*
const QMetaObject* k_sambashare_meta_object(void* self);

/// @param self KSambaShare*
/// @param param1 const char*
void* k_sambashare_metacast(void* self, const char* param1);

/// @param self KSambaShare*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_sambashare_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_sambashare_tr(const char* s);

/// [Qt documentation](https://api.kde.org/ksambashare.html#instance)
///
KSambaShare* k_sambashare_instance();

/// [Qt documentation](https://api.kde.org/ksambashare.html#isDirectoryShared)
///
/// @param self KSambaShare*
/// @param path const char*
bool k_sambashare_is_directory_shared(void* self, const char* path);

/// [Qt documentation](https://api.kde.org/ksambashare.html#sharedDirectories)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSambaShare*
const char** k_sambashare_shared_directories(void* self);

/// [Qt documentation](https://api.kde.org/ksambashare.html#isShareNameAvailable)
///
/// @param self KSambaShare*
/// @param name const char*
bool k_sambashare_is_share_name_available(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/ksambashare.html#shareNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSambaShare*
const char** k_sambashare_share_names(void* self);

/// [Qt documentation](https://api.kde.org/ksambashare.html#getShareByName)
///
/// @param self KSambaShare*
/// @param name const char*
KSambaShareData* k_sambashare_get_share_by_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/ksambashare.html#getSharesByPath)
///
/// @param self KSambaShare*
/// @param path const char*
libqt_list /* of KSambaShareData* */ k_sambashare_get_shares_by_path(void* self, const char* path);

/// [Qt documentation](https://api.kde.org/ksambashare.html#lastSystemErrorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSambaShare*
const char* k_sambashare_last_system_error_string(void* self);

/// [Qt documentation](https://api.kde.org/ksambashare.html#areGuestsAllowed)
///
/// @param self KSambaShare*
bool k_sambashare_are_guests_allowed(void* self);

/// [Qt documentation](https://api.kde.org/ksambashare.html#changed)
///
/// @param self KSambaShare*
void k_sambashare_changed(void* self);

/// [Qt documentation](https://api.kde.org/ksambashare.html#changed)
///
/// @param self KSambaShare*
/// @param callback void func(KSambaShare* self)
void k_sambashare_on_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_sambashare_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_sambashare_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KSambaShare*
/// @param event QEvent*
bool k_sambashare_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KSambaShare*
/// @param watched QObject*
/// @param event QEvent*
bool k_sambashare_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSambaShare*
const char* k_sambashare_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSambaShare*
/// @param name char*
void k_sambashare_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSambaShare*
bool k_sambashare_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSambaShare*
bool k_sambashare_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSambaShare*
bool k_sambashare_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSambaShare*
bool k_sambashare_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSambaShare*
/// @param b bool
bool k_sambashare_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSambaShare*
QThread* k_sambashare_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSambaShare*
/// @param thread QThread*
bool k_sambashare_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSambaShare*
/// @param interval int
int32_t k_sambashare_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSambaShare*
/// @param id int
void k_sambashare_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSambaShare*
/// @param id enum Qt__TimerId
void k_sambashare_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSambaShare*
libqt_list /* of QObject* */ k_sambashare_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSambaShare*
/// @param parent QObject*
void k_sambashare_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSambaShare*
/// @param filterObj QObject*
void k_sambashare_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSambaShare*
/// @param obj QObject*
void k_sambashare_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_sambashare_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSambaShare*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_sambashare_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_sambashare_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_sambashare_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSambaShare*
void k_sambashare_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSambaShare*
void k_sambashare_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSambaShare*
/// @param name const char*
/// @param value QVariant*
bool k_sambashare_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSambaShare*
/// @param name const char*
QVariant* k_sambashare_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSambaShare*
const char** k_sambashare_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSambaShare*
QBindingStorage* k_sambashare_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSambaShare*
const QBindingStorage* k_sambashare_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSambaShare*
void k_sambashare_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSambaShare*
/// @param callback void func(KSambaShare* self)
void k_sambashare_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSambaShare*
QObject* k_sambashare_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSambaShare*
/// @param classname const char*
bool k_sambashare_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSambaShare*
void k_sambashare_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSambaShare*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_sambashare_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSambaShare*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_sambashare_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_sambashare_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSambaShare*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_sambashare_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSambaShare*
/// @param param1 QObject*
void k_sambashare_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSambaShare*
/// @param callback void func(KSambaShare* self, QObject* param1)
void k_sambashare_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSambaShare*
/// @param callback void func(KSambaShare* self, const char* objectName)
void k_sambashare_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/ksambashare.html#dtor.KSambaShare)
///
/// Delete this object from C++ memory.
///
/// @param self KSambaShare*
void k_sambashare_delete(void* self);

#endif
