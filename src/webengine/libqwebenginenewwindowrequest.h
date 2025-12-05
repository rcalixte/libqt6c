#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINENEWWINDOWREQUEST_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINENEWWINDOWREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineNewWindowRequest*
///
const QMetaObject* q_webenginenewwindowrequest_meta_object(void* self);

/// @param self QWebEngineNewWindowRequest*
/// @param param1 const char*
///
void* q_webenginenewwindowrequest_metacast(void* self, const char* param1);

/// @param self QWebEngineNewWindowRequest*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webenginenewwindowrequest_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_webenginenewwindowrequest_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#destination)
///
/// @param self QWebEngineNewWindowRequest*
///
/// @return enum QWebEngineNewWindowRequest__DestinationType
///
int32_t q_webenginenewwindowrequest_destination(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#requestedUrl)
///
/// @param self QWebEngineNewWindowRequest*
///
QUrl* q_webenginenewwindowrequest_requested_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#requestedGeometry)
///
/// @param self QWebEngineNewWindowRequest*
///
QRect* q_webenginenewwindowrequest_requested_geometry(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#isUserInitiated)
///
/// @param self QWebEngineNewWindowRequest*
///
bool q_webenginenewwindowrequest_is_user_initiated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#openIn)
///
/// @param self QWebEngineNewWindowRequest*
/// @param param1 QWebEnginePage*
///
void q_webenginenewwindowrequest_open_in(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_webenginenewwindowrequest_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webenginenewwindowrequest_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineNewWindowRequest*
/// @param event QEvent*
///
bool q_webenginenewwindowrequest_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineNewWindowRequest*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webenginenewwindowrequest_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineNewWindowRequest*
///
const char* q_webenginenewwindowrequest_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineNewWindowRequest*
/// @param name char*
///
void q_webenginenewwindowrequest_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineNewWindowRequest*
///
bool q_webenginenewwindowrequest_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineNewWindowRequest*
///
bool q_webenginenewwindowrequest_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineNewWindowRequest*
///
bool q_webenginenewwindowrequest_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineNewWindowRequest*
///
bool q_webenginenewwindowrequest_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineNewWindowRequest*
/// @param b bool
///
bool q_webenginenewwindowrequest_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineNewWindowRequest*
///
QThread* q_webenginenewwindowrequest_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineNewWindowRequest*
/// @param thread QThread*
///
bool q_webenginenewwindowrequest_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineNewWindowRequest*
/// @param interval int
///
int32_t q_webenginenewwindowrequest_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineNewWindowRequest*
/// @param id int
///
void q_webenginenewwindowrequest_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineNewWindowRequest*
/// @param id enum Qt__TimerId
///
void q_webenginenewwindowrequest_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineNewWindowRequest*
///
libqt_list /* of QObject* */ q_webenginenewwindowrequest_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineNewWindowRequest*
/// @param parent QObject*
///
void q_webenginenewwindowrequest_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineNewWindowRequest*
/// @param filterObj QObject*
///
void q_webenginenewwindowrequest_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineNewWindowRequest*
/// @param obj QObject*
///
void q_webenginenewwindowrequest_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webenginenewwindowrequest_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineNewWindowRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webenginenewwindowrequest_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webenginenewwindowrequest_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webenginenewwindowrequest_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineNewWindowRequest*
///
void q_webenginenewwindowrequest_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineNewWindowRequest*
///
void q_webenginenewwindowrequest_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineNewWindowRequest*
/// @param name const char*
/// @param value QVariant*
///
bool q_webenginenewwindowrequest_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineNewWindowRequest*
/// @param name const char*
///
QVariant* q_webenginenewwindowrequest_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineNewWindowRequest*
///
const char** q_webenginenewwindowrequest_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineNewWindowRequest*
///
QBindingStorage* q_webenginenewwindowrequest_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineNewWindowRequest*
///
const QBindingStorage* q_webenginenewwindowrequest_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNewWindowRequest*
///
void q_webenginenewwindowrequest_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNewWindowRequest*
/// @param callback void func(QWebEngineNewWindowRequest* self)
///
void q_webenginenewwindowrequest_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEngineNewWindowRequest*
///
QObject* q_webenginenewwindowrequest_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineNewWindowRequest*
/// @param classname const char*
///
bool q_webenginenewwindowrequest_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineNewWindowRequest*
///
void q_webenginenewwindowrequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineNewWindowRequest*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_webenginenewwindowrequest_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineNewWindowRequest*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginenewwindowrequest_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_webenginenewwindowrequest_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineNewWindowRequest*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginenewwindowrequest_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNewWindowRequest*
/// @param param1 QObject*
///
void q_webenginenewwindowrequest_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineNewWindowRequest*
/// @param callback void func(QWebEngineNewWindowRequest* self, QObject* param1)
///
void q_webenginenewwindowrequest_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineNewWindowRequest*
/// @param callback void func(QWebEngineNewWindowRequest* self, const char* objectName)
///
void q_webenginenewwindowrequest_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#dtor.QWebEngineNewWindowRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineNewWindowRequest*
///
void q_webenginenewwindowrequest_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#public-types)

typedef enum {
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWWINDOW = 0,
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWTAB = 1,
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWDIALOG = 2,
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWBACKGROUNDTAB = 3
} QWebEngineNewWindowRequest__DestinationType;

#endif
