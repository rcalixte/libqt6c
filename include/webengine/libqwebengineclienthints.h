#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTHINTS_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTHINTS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineclienthints.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineClientHints*
const QMetaObject* q_webengineclienthints_meta_object(void* self);

/// @param self QWebEngineClientHints*
/// @param param1 const char*
void* q_webengineclienthints_metacast(void* self, const char* param1);

/// @param self QWebEngineClientHints*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_webengineclienthints_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_webengineclienthints_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#arch)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineClientHints*
const char* q_webengineclienthints_arch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#platform)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineClientHints*
const char* q_webengineclienthints_platform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#model)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineClientHints*
const char* q_webengineclienthints_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#isMobile)
///
/// @param self QWebEngineClientHints*
bool q_webengineclienthints_is_mobile(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#fullVersion)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineClientHints*
const char* q_webengineclienthints_full_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#platformVersion)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineClientHints*
const char* q_webengineclienthints_platform_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#bitness)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineClientHints*
const char* q_webengineclienthints_bitness(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#fullVersionList)
///
/// @param self QWebEngineClientHints*
libqt_map /* of const char* to QVariant* */ q_webengineclienthints_full_version_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#isWow64)
///
/// @param self QWebEngineClientHints*
bool q_webengineclienthints_is_wow64(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setArch)
///
/// @param self QWebEngineClientHints*
/// @param arch const char*
void q_webengineclienthints_set_arch(void* self, const char* arch);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setPlatform)
///
/// @param self QWebEngineClientHints*
/// @param platform const char*
void q_webengineclienthints_set_platform(void* self, const char* platform);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setModel)
///
/// @param self QWebEngineClientHints*
/// @param model const char*
void q_webengineclienthints_set_model(void* self, const char* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setIsMobile)
///
/// @param self QWebEngineClientHints*
/// @param isMobile bool
void q_webengineclienthints_set_is_mobile(void* self, bool isMobile);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setFullVersion)
///
/// @param self QWebEngineClientHints*
/// @param fullVersion const char*
void q_webengineclienthints_set_full_version(void* self, const char* fullVersion);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setPlatformVersion)
///
/// @param self QWebEngineClientHints*
/// @param platformVersion const char*
void q_webengineclienthints_set_platform_version(void* self, const char* platformVersion);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setBitness)
///
/// @param self QWebEngineClientHints*
/// @param bitness const char*
void q_webengineclienthints_set_bitness(void* self, const char* bitness);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setFullVersionList)
///
/// @param self QWebEngineClientHints*
/// @param fullVersionList libqt_map /* of const char* to QVariant* */
void q_webengineclienthints_set_full_version_list(void* self, libqt_map /* of const char* to QVariant* */ fullVersionList);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setIsWow64)
///
/// @param self QWebEngineClientHints*
/// @param isWow64 bool
void q_webengineclienthints_set_is_wow64(void* self, bool isWow64);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#isAllClientHintsEnabled)
///
/// @param self QWebEngineClientHints*
bool q_webengineclienthints_is_all_client_hints_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setAllClientHintsEnabled)
///
/// @param self QWebEngineClientHints*
/// @param enabled bool
void q_webengineclienthints_set_all_client_hints_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#resetAll)
///
/// @param self QWebEngineClientHints*
void q_webengineclienthints_reset_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_webengineclienthints_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_webengineclienthints_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineClientHints*
/// @param event QEvent*
bool q_webengineclienthints_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineClientHints*
/// @param watched QObject*
/// @param event QEvent*
bool q_webengineclienthints_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineClientHints*
const char* q_webengineclienthints_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineClientHints*
/// @param name char*
void q_webengineclienthints_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineClientHints*
bool q_webengineclienthints_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineClientHints*
bool q_webengineclienthints_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineClientHints*
bool q_webengineclienthints_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineClientHints*
bool q_webengineclienthints_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineClientHints*
/// @param b bool
bool q_webengineclienthints_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineClientHints*
QThread* q_webengineclienthints_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineClientHints*
/// @param thread QThread*
bool q_webengineclienthints_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineClientHints*
/// @param interval int
int32_t q_webengineclienthints_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineClientHints*
/// @param id int
void q_webengineclienthints_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineClientHints*
/// @param id enum Qt__TimerId
void q_webengineclienthints_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineClientHints*
libqt_list /* of QObject* */ q_webengineclienthints_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineClientHints*
/// @param parent QObject*
void q_webengineclienthints_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineClientHints*
/// @param filterObj QObject*
void q_webengineclienthints_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineClientHints*
/// @param obj QObject*
void q_webengineclienthints_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_webengineclienthints_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineClientHints*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_webengineclienthints_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_webengineclienthints_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_webengineclienthints_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineClientHints*
void q_webengineclienthints_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineClientHints*
void q_webengineclienthints_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineClientHints*
/// @param name const char*
/// @param value QVariant*
bool q_webengineclienthints_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineClientHints*
/// @param name const char*
QVariant* q_webengineclienthints_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineClientHints*
const char** q_webengineclienthints_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineClientHints*
QBindingStorage* q_webengineclienthints_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineClientHints*
const QBindingStorage* q_webengineclienthints_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineClientHints*
void q_webengineclienthints_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineClientHints*
/// @param callback void func(QWebEngineClientHints* self)
void q_webengineclienthints_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEngineClientHints*
QObject* q_webengineclienthints_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineClientHints*
/// @param classname const char*
bool q_webengineclienthints_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineClientHints*
void q_webengineclienthints_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineClientHints*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_webengineclienthints_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineClientHints*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_webengineclienthints_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_webengineclienthints_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineClientHints*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_webengineclienthints_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineClientHints*
/// @param param1 QObject*
void q_webengineclienthints_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineClientHints*
/// @param callback void func(QWebEngineClientHints* self, QObject* param1)
void q_webengineclienthints_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineClientHints*
/// @param callback void func(QWebEngineClientHints* self, const char* objectName)
void q_webengineclienthints_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#dtor.QWebEngineClientHints)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineClientHints*
void q_webengineclienthints_delete(void* self);

/// https://doc.qt.io/qt-6/qwebengineclienthints.html#types

typedef enum {
    QWEBENGINECLIENTHINTS_QMLISUNCREATABLE_YES = 1
} QWebEngineClientHints__QmlIsUncreatable;

#endif
