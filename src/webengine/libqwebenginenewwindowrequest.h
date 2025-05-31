#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINENEWWINDOWREQUEST_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINENEWWINDOWREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqrect.h"
#include <string.h>
#include "../libqurl.h"
#include "libqwebenginepage.h"

/// https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineNewWindowRequest* self ```
const QMetaObject* q_webenginenewwindowrequest_meta_object(void* self);

/// ``` QWebEngineNewWindowRequest* self, const char* param1 ```
void* q_webenginenewwindowrequest_metacast(void* self, const char* param1);

/// ``` QWebEngineNewWindowRequest* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginenewwindowrequest_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginenewwindowrequest_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#destination)
///
/// ``` QWebEngineNewWindowRequest* self ```
int64_t q_webenginenewwindowrequest_destination(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#requestedUrl)
///
/// ``` QWebEngineNewWindowRequest* self ```
QUrl* q_webenginenewwindowrequest_requested_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#requestedGeometry)
///
/// ``` QWebEngineNewWindowRequest* self ```
QRect* q_webenginenewwindowrequest_requested_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#isUserInitiated)
///
/// ``` QWebEngineNewWindowRequest* self ```
bool q_webenginenewwindowrequest_is_user_initiated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#openIn)
///
/// ``` QWebEngineNewWindowRequest* self, QWebEnginePage* param1 ```
void q_webenginenewwindowrequest_open_in(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginenewwindowrequest_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginenewwindowrequest_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineNewWindowRequest* self, QEvent* event ```
bool q_webenginenewwindowrequest_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineNewWindowRequest* self, QObject* watched, QEvent* event ```
bool q_webenginenewwindowrequest_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineNewWindowRequest* self ```
const char* q_webenginenewwindowrequest_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineNewWindowRequest* self, char* name ```
void q_webenginenewwindowrequest_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineNewWindowRequest* self ```
bool q_webenginenewwindowrequest_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineNewWindowRequest* self ```
bool q_webenginenewwindowrequest_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineNewWindowRequest* self ```
bool q_webenginenewwindowrequest_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineNewWindowRequest* self ```
bool q_webenginenewwindowrequest_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineNewWindowRequest* self, bool b ```
bool q_webenginenewwindowrequest_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineNewWindowRequest* self ```
QThread* q_webenginenewwindowrequest_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineNewWindowRequest* self, QThread* thread ```
void q_webenginenewwindowrequest_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineNewWindowRequest* self, int interval ```
int32_t q_webenginenewwindowrequest_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineNewWindowRequest* self, int id ```
void q_webenginenewwindowrequest_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineNewWindowRequest* self ```
const libqt_list /* of QObject* */ q_webenginenewwindowrequest_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineNewWindowRequest* self, QObject* parent ```
void q_webenginenewwindowrequest_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineNewWindowRequest* self, QObject* filterObj ```
void q_webenginenewwindowrequest_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineNewWindowRequest* self, QObject* obj ```
void q_webenginenewwindowrequest_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginenewwindowrequest_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineNewWindowRequest* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginenewwindowrequest_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginenewwindowrequest_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginenewwindowrequest_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineNewWindowRequest* self ```
void q_webenginenewwindowrequest_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineNewWindowRequest* self ```
void q_webenginenewwindowrequest_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineNewWindowRequest* self, const char* name, QVariant* value ```
bool q_webenginenewwindowrequest_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineNewWindowRequest* self, const char* name ```
QVariant* q_webenginenewwindowrequest_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineNewWindowRequest* self ```
const char** q_webenginenewwindowrequest_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineNewWindowRequest* self ```
QBindingStorage* q_webenginenewwindowrequest_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineNewWindowRequest* self ```
const QBindingStorage* q_webenginenewwindowrequest_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNewWindowRequest* self ```
void q_webenginenewwindowrequest_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNewWindowRequest* self, void (*slot)(QObject*) ```
void q_webenginenewwindowrequest_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineNewWindowRequest* self ```
QObject* q_webenginenewwindowrequest_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineNewWindowRequest* self, const char* classname ```
bool q_webenginenewwindowrequest_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineNewWindowRequest* self ```
void q_webenginenewwindowrequest_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineNewWindowRequest* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginenewwindowrequest_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginenewwindowrequest_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineNewWindowRequest* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginenewwindowrequest_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNewWindowRequest* self, QObject* param1 ```
void q_webenginenewwindowrequest_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineNewWindowRequest* self, void (*slot)(QObject*, QObject*) ```
void q_webenginenewwindowrequest_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineNewWindowRequest* self, void (*slot)(QObject*, const char*) ```
void q_webenginenewwindowrequest_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#dtor.QWebEngineNewWindowRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineNewWindowRequest* self ```
void q_webenginenewwindowrequest_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginenewwindowrequest.html#types

typedef enum {
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWWINDOW = 0,
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWTAB = 1,
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWDIALOG = 2,
    QWEBENGINENEWWINDOWREQUEST_DESTINATIONTYPE_INNEWBACKGROUNDTAB = 3
} QWebEngineNewWindowRequest__DestinationType;

#endif
