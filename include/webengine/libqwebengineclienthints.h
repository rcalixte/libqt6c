#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTHINTS_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTHINTS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineclienthints.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineClientHints* self ```
const QMetaObject* q_webengineclienthints_meta_object(void* self);

/// ``` QWebEngineClientHints* self, const char* param1 ```
void* q_webengineclienthints_metacast(void* self, const char* param1);

/// ``` QWebEngineClientHints* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineclienthints_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webengineclienthints_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#qt_qmlMarker_uncreatable)
///
/// ``` QWebEngineClientHints* self ```
void q_webengineclienthints_qml_marker_uncreatable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#arch)
///
/// ``` QWebEngineClientHints* self ```
const char* q_webengineclienthints_arch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#platform)
///
/// ``` QWebEngineClientHints* self ```
const char* q_webengineclienthints_platform(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#model)
///
/// ``` QWebEngineClientHints* self ```
const char* q_webengineclienthints_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#isMobile)
///
/// ``` QWebEngineClientHints* self ```
bool q_webengineclienthints_is_mobile(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#fullVersion)
///
/// ``` QWebEngineClientHints* self ```
const char* q_webengineclienthints_full_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#platformVersion)
///
/// ``` QWebEngineClientHints* self ```
const char* q_webengineclienthints_platform_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#bitness)
///
/// ``` QWebEngineClientHints* self ```
const char* q_webengineclienthints_bitness(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#fullVersionList)
///
/// ``` QWebEngineClientHints* self ```
libqt_map /* of const char* to QVariant* */ q_webengineclienthints_full_version_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#isWow64)
///
/// ``` QWebEngineClientHints* self ```
bool q_webengineclienthints_is_wow64(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setArch)
///
/// ``` QWebEngineClientHints* self, const char* arch ```
void q_webengineclienthints_set_arch(void* self, const char* arch);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setPlatform)
///
/// ``` QWebEngineClientHints* self, const char* platform ```
void q_webengineclienthints_set_platform(void* self, const char* platform);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setModel)
///
/// ``` QWebEngineClientHints* self, const char* model ```
void q_webengineclienthints_set_model(void* self, const char* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setIsMobile)
///
/// ``` QWebEngineClientHints* self, bool isMobile ```
void q_webengineclienthints_set_is_mobile(void* self, bool isMobile);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setFullVersion)
///
/// ``` QWebEngineClientHints* self, const char* fullVersion ```
void q_webengineclienthints_set_full_version(void* self, const char* fullVersion);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setPlatformVersion)
///
/// ``` QWebEngineClientHints* self, const char* platformVersion ```
void q_webengineclienthints_set_platform_version(void* self, const char* platformVersion);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setBitness)
///
/// ``` QWebEngineClientHints* self, const char* bitness ```
void q_webengineclienthints_set_bitness(void* self, const char* bitness);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setFullVersionList)
///
/// ``` QWebEngineClientHints* self, libqt_map /* of const char* to QVariant* */ fullVersionList ```
void q_webengineclienthints_set_full_version_list(void* self, libqt_map /* of const char* to QVariant* */ fullVersionList);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setIsWow64)
///
/// ``` QWebEngineClientHints* self, bool isWow64 ```
void q_webengineclienthints_set_is_wow64(void* self, bool isWow64);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#isAllClientHintsEnabled)
///
/// ``` QWebEngineClientHints* self ```
bool q_webengineclienthints_is_all_client_hints_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#setAllClientHintsEnabled)
///
/// ``` QWebEngineClientHints* self, bool enabled ```
void q_webengineclienthints_set_all_client_hints_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#resetAll)
///
/// ``` QWebEngineClientHints* self ```
void q_webengineclienthints_reset_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webengineclienthints_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webengineclienthints_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineClientHints* self, QEvent* event ```
bool q_webengineclienthints_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineClientHints* self, QObject* watched, QEvent* event ```
bool q_webengineclienthints_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineClientHints* self ```
const char* q_webengineclienthints_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineClientHints* self, char* name ```
void q_webengineclienthints_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineClientHints* self ```
bool q_webengineclienthints_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineClientHints* self ```
bool q_webengineclienthints_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineClientHints* self ```
bool q_webengineclienthints_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineClientHints* self ```
bool q_webengineclienthints_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineClientHints* self, bool b ```
bool q_webengineclienthints_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineClientHints* self ```
QThread* q_webengineclienthints_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineClientHints* self, QThread* thread ```
bool q_webengineclienthints_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineClientHints* self, int interval ```
int32_t q_webengineclienthints_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineClientHints* self, int id ```
void q_webengineclienthints_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineClientHints* self, enum Qt__TimerId id ```
void q_webengineclienthints_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineClientHints* self ```
libqt_list /* of QObject* */ q_webengineclienthints_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineClientHints* self, QObject* parent ```
void q_webengineclienthints_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineClientHints* self, QObject* filterObj ```
void q_webengineclienthints_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineClientHints* self, QObject* obj ```
void q_webengineclienthints_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webengineclienthints_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineClientHints* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webengineclienthints_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webengineclienthints_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webengineclienthints_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineClientHints* self ```
void q_webengineclienthints_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineClientHints* self ```
void q_webengineclienthints_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineClientHints* self, const char* name, QVariant* value ```
bool q_webengineclienthints_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineClientHints* self, const char* name ```
QVariant* q_webengineclienthints_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineClientHints* self ```
const char** q_webengineclienthints_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineClientHints* self ```
QBindingStorage* q_webengineclienthints_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineClientHints* self ```
const QBindingStorage* q_webengineclienthints_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineClientHints* self ```
void q_webengineclienthints_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineClientHints* self, void (*slot)(QObject*) ```
void q_webengineclienthints_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineClientHints* self ```
QObject* q_webengineclienthints_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineClientHints* self, const char* classname ```
bool q_webengineclienthints_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineClientHints* self ```
void q_webengineclienthints_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineClientHints* self, QThread* thread, Disambiguated_t* param2 ```
bool q_webengineclienthints_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineClientHints* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webengineclienthints_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineclienthints_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineClientHints* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineclienthints_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineClientHints* self, QObject* param1 ```
void q_webengineclienthints_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineClientHints* self, void (*slot)(QObject*, QObject*) ```
void q_webengineclienthints_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineClientHints* self, void (*slot)(QObject*, const char*) ```
void q_webengineclienthints_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclienthints.html#dtor.QWebEngineClientHints)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineClientHints* self ```
void q_webengineclienthints_delete(void* self);

/// https://doc.qt.io/qt-6/qwebengineclienthints.html#types

typedef enum {
    QWEBENGINECLIENTHINTS_QMLISUNCREATABLE_YES = 1
} QWebEngineClientHints__QmlIsUncreatable;

#endif
