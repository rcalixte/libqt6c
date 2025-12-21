#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBUNTRUSTEDPROGRAMHANDLERINTERFACE_H
#define SRC_EXTRAS_KIO_QT6C_LIBUNTRUSTEDPROGRAMHANDLERINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio-untrustedprogramhandlerinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
const QMetaObject* k_io__untrustedprogramhandlerinterface_meta_object(void* self);

/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param param1 const char*
///
void* k_io__untrustedprogramhandlerinterface_metacast(void* self, const char* param1);

/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_io__untrustedprogramhandlerinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_io__untrustedprogramhandlerinterface_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kio-untrustedprogramhandlerinterface.html#showUntrustedProgramWarning)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param job KJob*
/// @param programName const char*
///
void k_io__untrustedprogramhandlerinterface_show_untrusted_program_warning(void* self, void* job, const char* programName);

/// [Upstream resources](https://api.kde.org/kio-untrustedprogramhandlerinterface.html#makeServiceFileExecutable)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param fileName const char*
/// @param errorString const char*
///
bool k_io__untrustedprogramhandlerinterface_make_service_file_executable(void* self, const char* fileName, const char* errorString);

/// [Upstream resources](https://api.kde.org/kio-untrustedprogramhandlerinterface.html#setExecuteBit)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param fileName const char*
/// @param errorString const char*
///
bool k_io__untrustedprogramhandlerinterface_set_execute_bit(void* self, const char* fileName, const char* errorString);

/// [Upstream resources](https://api.kde.org/kio-untrustedprogramhandlerinterface.html#result)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param confirmed bool
///
void k_io__untrustedprogramhandlerinterface_result(void* self, bool confirmed);

/// [Upstream resources](https://api.kde.org/kio-untrustedprogramhandlerinterface.html#result)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param callback void func(KIO__UntrustedProgramHandlerInterface* self, bool confirmed)
///
void k_io__untrustedprogramhandlerinterface_on_result(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_io__untrustedprogramhandlerinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_io__untrustedprogramhandlerinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param event QEvent*
///
bool k_io__untrustedprogramhandlerinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_io__untrustedprogramhandlerinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
const char* k_io__untrustedprogramhandlerinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param name char*
///
void k_io__untrustedprogramhandlerinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
bool k_io__untrustedprogramhandlerinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
bool k_io__untrustedprogramhandlerinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
bool k_io__untrustedprogramhandlerinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
bool k_io__untrustedprogramhandlerinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param b bool
///
bool k_io__untrustedprogramhandlerinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
QThread* k_io__untrustedprogramhandlerinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param thread QThread*
///
bool k_io__untrustedprogramhandlerinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param interval int
///
int32_t k_io__untrustedprogramhandlerinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param id int
///
void k_io__untrustedprogramhandlerinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param id enum Qt__TimerId
///
void k_io__untrustedprogramhandlerinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
libqt_list /* of QObject* */ k_io__untrustedprogramhandlerinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param parent QObject*
///
void k_io__untrustedprogramhandlerinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param filterObj QObject*
///
void k_io__untrustedprogramhandlerinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param obj QObject*
///
void k_io__untrustedprogramhandlerinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_io__untrustedprogramhandlerinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_io__untrustedprogramhandlerinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_io__untrustedprogramhandlerinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_io__untrustedprogramhandlerinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
void k_io__untrustedprogramhandlerinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
void k_io__untrustedprogramhandlerinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param name const char*
/// @param value QVariant*
///
bool k_io__untrustedprogramhandlerinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param name const char*
///
QVariant* k_io__untrustedprogramhandlerinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
const char** k_io__untrustedprogramhandlerinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
QBindingStorage* k_io__untrustedprogramhandlerinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
const QBindingStorage* k_io__untrustedprogramhandlerinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
void k_io__untrustedprogramhandlerinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param callback void func(KIO__UntrustedProgramHandlerInterface* self)
///
void k_io__untrustedprogramhandlerinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
QObject* k_io__untrustedprogramhandlerinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param classname const char*
///
bool k_io__untrustedprogramhandlerinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
///
void k_io__untrustedprogramhandlerinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_io__untrustedprogramhandlerinterface_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_io__untrustedprogramhandlerinterface_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_io__untrustedprogramhandlerinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_io__untrustedprogramhandlerinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param param1 QObject*
///
void k_io__untrustedprogramhandlerinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param callback void func(KIO__UntrustedProgramHandlerInterface* self, QObject* param1)
///
void k_io__untrustedprogramhandlerinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__UntrustedProgramHandlerInterface*
/// @param callback void func(KIO__UntrustedProgramHandlerInterface* self, const char* objectName)
///
void k_io__untrustedprogramhandlerinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));
#endif
