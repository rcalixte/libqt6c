#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINENAVIGATIONREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINENAVIGATIONREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginenavigationrequest.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineNavigationRequest* self ```
const QMetaObject* q_webenginenavigationrequest_meta_object(void* self);

/// ``` QWebEngineNavigationRequest* self, const char* param1 ```
void* q_webenginenavigationrequest_metacast(void* self, const char* param1);

/// ``` QWebEngineNavigationRequest* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginenavigationrequest_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginenavigationrequest_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#url)
///
/// ``` QWebEngineNavigationRequest* self ```
QUrl* q_webenginenavigationrequest_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#isMainFrame)
///
/// ``` QWebEngineNavigationRequest* self ```
bool q_webenginenavigationrequest_is_main_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#hasFormData)
///
/// ``` QWebEngineNavigationRequest* self ```
bool q_webenginenavigationrequest_has_form_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#navigationType)
///
/// ``` QWebEngineNavigationRequest* self ```
int64_t q_webenginenavigationrequest_navigation_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#accept)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#reject)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_reject(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#actionChanged)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_action_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#actionChanged)
///
/// ``` QWebEngineNavigationRequest* self, void (*slot)(QWebEngineNavigationRequest*) ```
void q_webenginenavigationrequest_on_action_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginenavigationrequest_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginenavigationrequest_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineNavigationRequest* self, QEvent* event ```
bool q_webenginenavigationrequest_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineNavigationRequest* self, QObject* watched, QEvent* event ```
bool q_webenginenavigationrequest_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineNavigationRequest* self ```
const char* q_webenginenavigationrequest_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineNavigationRequest* self, char* name ```
void q_webenginenavigationrequest_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineNavigationRequest* self ```
bool q_webenginenavigationrequest_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineNavigationRequest* self ```
bool q_webenginenavigationrequest_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineNavigationRequest* self ```
bool q_webenginenavigationrequest_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineNavigationRequest* self ```
bool q_webenginenavigationrequest_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineNavigationRequest* self, bool b ```
bool q_webenginenavigationrequest_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineNavigationRequest* self ```
QThread* q_webenginenavigationrequest_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineNavigationRequest* self, QThread* thread ```
bool q_webenginenavigationrequest_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineNavigationRequest* self, int interval ```
int32_t q_webenginenavigationrequest_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineNavigationRequest* self, int id ```
void q_webenginenavigationrequest_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineNavigationRequest* self, enum Qt__TimerId id ```
void q_webenginenavigationrequest_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineNavigationRequest* self ```
libqt_list /* of QObject* */ q_webenginenavigationrequest_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineNavigationRequest* self, QObject* parent ```
void q_webenginenavigationrequest_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineNavigationRequest* self, QObject* filterObj ```
void q_webenginenavigationrequest_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineNavigationRequest* self, QObject* obj ```
void q_webenginenavigationrequest_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginenavigationrequest_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineNavigationRequest* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginenavigationrequest_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginenavigationrequest_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginenavigationrequest_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineNavigationRequest* self, const char* name, QVariant* value ```
bool q_webenginenavigationrequest_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineNavigationRequest* self, const char* name ```
QVariant* q_webenginenavigationrequest_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineNavigationRequest* self ```
const char** q_webenginenavigationrequest_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineNavigationRequest* self ```
QBindingStorage* q_webenginenavigationrequest_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineNavigationRequest* self ```
const QBindingStorage* q_webenginenavigationrequest_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNavigationRequest* self, void (*slot)(QObject*) ```
void q_webenginenavigationrequest_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineNavigationRequest* self ```
QObject* q_webenginenavigationrequest_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineNavigationRequest* self, const char* classname ```
bool q_webenginenavigationrequest_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineNavigationRequest* self, QThread* thread, Disambiguated_t* param2 ```
bool q_webenginenavigationrequest_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineNavigationRequest* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginenavigationrequest_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginenavigationrequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineNavigationRequest* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginenavigationrequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNavigationRequest* self, QObject* param1 ```
void q_webenginenavigationrequest_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNavigationRequest* self, void (*slot)(QObject*, QObject*) ```
void q_webenginenavigationrequest_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineNavigationRequest* self, void (*slot)(QObject*, const char*) ```
void q_webenginenavigationrequest_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#dtor.QWebEngineNavigationRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineNavigationRequest* self ```
void q_webenginenavigationrequest_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginenavigationrequest.html#types

typedef enum {
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_LINKCLICKEDNAVIGATION = 0,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_TYPEDNAVIGATION = 1,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_FORMSUBMITTEDNAVIGATION = 2,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_BACKFORWARDNAVIGATION = 3,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_RELOADNAVIGATION = 4,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_OTHERNAVIGATION = 5,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONTYPE_REDIRECTNAVIGATION = 6
} QWebEngineNavigationRequest__NavigationType;

typedef enum {
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONREQUESTACTION_ACCEPTREQUEST = 0,
    QWEBENGINENAVIGATIONREQUEST_NAVIGATIONREQUESTACTION_IGNOREREQUEST = 255
} QWebEngineNavigationRequest__NavigationRequestAction;

#endif
