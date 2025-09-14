#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBOPENWITHHANDLERINTERFACE_H
#define SRC_EXTRAS_KIOQT6C_LIBOPENWITHHANDLERINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-openwithhandlerinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__OpenWithHandlerInterface*
const QMetaObject* k_io__openwithhandlerinterface_meta_object(void* self);

/// @param self KIO__OpenWithHandlerInterface*
/// @param param1 const char*
void* k_io__openwithhandlerinterface_metacast(void* self, const char* param1);

/// @param self KIO__OpenWithHandlerInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__openwithhandlerinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__openwithhandlerinterface_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kio-openwithhandlerinterface.html#promptUserForApplication)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param job KJob*
/// @param urls libqt_list /* of QUrl* */
/// @param mimeType const char*
void k_io__openwithhandlerinterface_prompt_user_for_application(void* self, void* job, libqt_list urls, const char* mimeType);

/// [Qt documentation](https://api.kde.org/kio-openwithhandlerinterface.html#canceled)
///
/// @param self KIO__OpenWithHandlerInterface*
void k_io__openwithhandlerinterface_canceled(void* self);

/// [Qt documentation](https://api.kde.org/kio-openwithhandlerinterface.html#canceled)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param callback void func(KIO__OpenWithHandlerInterface* self)
void k_io__openwithhandlerinterface_on_canceled(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kio-openwithhandlerinterface.html#handled)
///
/// @param self KIO__OpenWithHandlerInterface*
void k_io__openwithhandlerinterface_handled(void* self);

/// [Qt documentation](https://api.kde.org/kio-openwithhandlerinterface.html#handled)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param callback void func(KIO__OpenWithHandlerInterface* self)
void k_io__openwithhandlerinterface_on_handled(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__openwithhandlerinterface_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__openwithhandlerinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param event QEvent*
bool k_io__openwithhandlerinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__openwithhandlerinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__OpenWithHandlerInterface*
const char* k_io__openwithhandlerinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param name char*
void k_io__openwithhandlerinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__OpenWithHandlerInterface*
bool k_io__openwithhandlerinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__OpenWithHandlerInterface*
bool k_io__openwithhandlerinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__OpenWithHandlerInterface*
bool k_io__openwithhandlerinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__OpenWithHandlerInterface*
bool k_io__openwithhandlerinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param b bool
bool k_io__openwithhandlerinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__OpenWithHandlerInterface*
QThread* k_io__openwithhandlerinterface_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param thread QThread*
bool k_io__openwithhandlerinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param interval int
int32_t k_io__openwithhandlerinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param id int
void k_io__openwithhandlerinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param id enum Qt__TimerId
void k_io__openwithhandlerinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__OpenWithHandlerInterface*
libqt_list /* of QObject* */ k_io__openwithhandlerinterface_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param parent QObject*
void k_io__openwithhandlerinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param filterObj QObject*
void k_io__openwithhandlerinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param obj QObject*
void k_io__openwithhandlerinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__openwithhandlerinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__openwithhandlerinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__openwithhandlerinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__openwithhandlerinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__OpenWithHandlerInterface*
void k_io__openwithhandlerinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__OpenWithHandlerInterface*
void k_io__openwithhandlerinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param name const char*
/// @param value QVariant*
bool k_io__openwithhandlerinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param name const char*
QVariant* k_io__openwithhandlerinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__OpenWithHandlerInterface*
const char** k_io__openwithhandlerinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__OpenWithHandlerInterface*
QBindingStorage* k_io__openwithhandlerinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__OpenWithHandlerInterface*
const QBindingStorage* k_io__openwithhandlerinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__OpenWithHandlerInterface*
void k_io__openwithhandlerinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param callback void func(KIO__OpenWithHandlerInterface* self)
void k_io__openwithhandlerinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__OpenWithHandlerInterface*
QObject* k_io__openwithhandlerinterface_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param classname const char*
bool k_io__openwithhandlerinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__OpenWithHandlerInterface*
void k_io__openwithhandlerinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__openwithhandlerinterface_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__openwithhandlerinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_io__openwithhandlerinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_io__openwithhandlerinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param param1 QObject*
void k_io__openwithhandlerinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param callback void func(KIO__OpenWithHandlerInterface* self, QObject* param1)
void k_io__openwithhandlerinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__OpenWithHandlerInterface*
/// @param callback void func(KIO__OpenWithHandlerInterface* self, const char* objectName)
void k_io__openwithhandlerinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));
#endif
