#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLDEBUG_H
#define SRC_OPENGL_QT6C_LIBQOPENGLDEBUG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html)

/// q_opengldebugmessage_new constructs a new QOpenGLDebugMessage object.
///
QOpenGLDebugMessage* q_opengldebugmessage_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html)

/// q_opengldebugmessage_new2 constructs a new QOpenGLDebugMessage object.
///
/// @param debugMessage QOpenGLDebugMessage*
///
QOpenGLDebugMessage* q_opengldebugmessage_new2(void* debugMessage);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-eq)
///
/// @param self QOpenGLDebugMessage*
/// @param debugMessage QOpenGLDebugMessage*
///
void q_opengldebugmessage_operator_assign(void* self, void* debugMessage);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#swap)
///
/// @param self QOpenGLDebugMessage*
/// @param other QOpenGLDebugMessage*
///
void q_opengldebugmessage_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#source)
///
/// @param self QOpenGLDebugMessage*
///
/// @return enum QOpenGLDebugMessage__Source
///
int64_t q_opengldebugmessage_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#type)
///
/// @param self QOpenGLDebugMessage*
///
/// @return enum QOpenGLDebugMessage__Type
///
int64_t q_opengldebugmessage_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#severity)
///
/// @param self QOpenGLDebugMessage*
///
/// @return enum QOpenGLDebugMessage__Severity
///
int64_t q_opengldebugmessage_severity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#id)
///
/// @param self QOpenGLDebugMessage*
///
uint32_t q_opengldebugmessage_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#message)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QOpenGLDebugMessage*
///
const char* q_opengldebugmessage_message(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
///
/// @param text const char*
///
QOpenGLDebugMessage* q_opengldebugmessage_create_application_message(const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
///
/// @param text const char*
///
QOpenGLDebugMessage* q_opengldebugmessage_create_third_party_message(const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-eq-eq)
///
/// @param self QOpenGLDebugMessage*
/// @param debugMessage QOpenGLDebugMessage*
///
bool q_opengldebugmessage_operator_equal(void* self, void* debugMessage);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#operator-not-eq)
///
/// @param self QOpenGLDebugMessage*
/// @param debugMessage QOpenGLDebugMessage*
///
bool q_opengldebugmessage_operator_not_equal(void* self, void* debugMessage);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
///
/// @param text const char*
/// @param id uint32_t
///
QOpenGLDebugMessage* q_opengldebugmessage_create_application_message2(const char* text, uint32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
///
/// @param text const char*
/// @param id uint32_t
/// @param severity enum QOpenGLDebugMessage__Severity
///
QOpenGLDebugMessage* q_opengldebugmessage_create_application_message3(const char* text, uint32_t id, int64_t severity);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createApplicationMessage)
///
/// @param text const char*
/// @param id uint32_t
/// @param severity enum QOpenGLDebugMessage__Severity
/// @param type enum QOpenGLDebugMessage__Type
///
QOpenGLDebugMessage* q_opengldebugmessage_create_application_message4(const char* text, uint32_t id, int64_t severity, int64_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
///
/// @param text const char*
/// @param id uint32_t
///
QOpenGLDebugMessage* q_opengldebugmessage_create_third_party_message2(const char* text, uint32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
///
/// @param text const char*
/// @param id uint32_t
/// @param severity enum QOpenGLDebugMessage__Severity
///
QOpenGLDebugMessage* q_opengldebugmessage_create_third_party_message3(const char* text, uint32_t id, int64_t severity);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#createThirdPartyMessage)
///
/// @param text const char*
/// @param id uint32_t
/// @param severity enum QOpenGLDebugMessage__Severity
/// @param type enum QOpenGLDebugMessage__Type
///
QOpenGLDebugMessage* q_opengldebugmessage_create_third_party_message4(const char* text, uint32_t id, int64_t severity, int64_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebugmessage.html#dtor.QOpenGLDebugMessage)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLDebugMessage*
///
void q_opengldebugmessage_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html)

/// q_opengldebuglogger_new constructs a new QOpenGLDebugLogger object.
///
QOpenGLDebugLogger* q_opengldebuglogger_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html)

/// q_opengldebuglogger_new2 constructs a new QOpenGLDebugLogger object.
///
/// @param parent QObject*
///
QOpenGLDebugLogger* q_opengldebuglogger_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QOpenGLDebugLogger*
///
const QMetaObject* q_opengldebuglogger_meta_object(void* self);

/// @param self QOpenGLDebugLogger*
/// @param param1 const char*
///
void* q_opengldebuglogger_metacast(void* self, const char* param1);

/// @param self QOpenGLDebugLogger*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_opengldebuglogger_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QOpenGLDebugLogger*
/// @param callback int32_t func(QOpenGLDebugLogger* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_opengldebuglogger_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QOpenGLDebugLogger*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_opengldebuglogger_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_opengldebuglogger_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#initialize)
///
/// @param self QOpenGLDebugLogger*
///
bool q_opengldebuglogger_initialize(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#isLogging)
///
/// @param self QOpenGLDebugLogger*
///
bool q_opengldebuglogger_is_logging(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#loggingMode)
///
/// @param self QOpenGLDebugLogger*
///
/// @return enum QOpenGLDebugLogger__LoggingMode
///
int32_t q_opengldebuglogger_logging_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#maximumMessageLength)
///
/// @param self QOpenGLDebugLogger*
///
long long q_opengldebuglogger_maximum_message_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
///
/// @param self QOpenGLDebugLogger*
/// @param name const char*
///
void q_opengldebuglogger_push_group(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#popGroup)
///
/// @param self QOpenGLDebugLogger*
///
void q_opengldebuglogger_pop_group(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
///
/// @param self QOpenGLDebugLogger*
///
void q_opengldebuglogger_enable_messages(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param ids libqt_list /* of uint32_t */
///
void q_opengldebuglogger_enable_messages2(void* self, libqt_list ids);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
///
/// @param self QOpenGLDebugLogger*
///
void q_opengldebuglogger_disable_messages(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param ids libqt_list /* of uint32_t */
///
void q_opengldebuglogger_disable_messages2(void* self, libqt_list ids);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#loggedMessages)
///
/// @param self QOpenGLDebugLogger*
///
libqt_list /* of QOpenGLDebugMessage* */ q_opengldebuglogger_logged_messages(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#logMessage)
///
/// @param self QOpenGLDebugLogger*
/// @param debugMessage QOpenGLDebugMessage*
///
void q_opengldebuglogger_log_message(void* self, void* debugMessage);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#startLogging)
///
/// @param self QOpenGLDebugLogger*
///
void q_opengldebuglogger_start_logging(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#stopLogging)
///
/// @param self QOpenGLDebugLogger*
///
void q_opengldebuglogger_stop_logging(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#messageLogged)
///
/// @param self QOpenGLDebugLogger*
/// @param debugMessage QOpenGLDebugMessage*
///
void q_opengldebuglogger_message_logged(void* self, void* debugMessage);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#messageLogged)
///
/// @param self QOpenGLDebugLogger*
/// @param callback void func(QOpenGLDebugLogger* self, QOpenGLDebugMessage* debugMessage)
///
void q_opengldebuglogger_on_message_logged(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_opengldebuglogger_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_opengldebuglogger_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
///
/// @param self QOpenGLDebugLogger*
/// @param name const char*
/// @param id uint32_t
///
void q_opengldebuglogger_push_group2(void* self, const char* name, uint32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#pushGroup)
///
/// @param self QOpenGLDebugLogger*
/// @param name const char*
/// @param id uint32_t
/// @param source enum QOpenGLDebugMessage__Source
///
void q_opengldebuglogger_push_group3(void* self, const char* name, uint32_t id, int64_t source);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param sources flag of enum QOpenGLDebugMessage__Source
///
void q_opengldebuglogger_enable_messages1(void* self, int64_t sources);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param sources flag of enum QOpenGLDebugMessage__Source
/// @param types flag of enum QOpenGLDebugMessage__Type
///
void q_opengldebuglogger_enable_messages22(void* self, int64_t sources, int64_t types);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param sources flag of enum QOpenGLDebugMessage__Source
/// @param types flag of enum QOpenGLDebugMessage__Type
/// @param severities flag of enum QOpenGLDebugMessage__Severity
///
void q_opengldebuglogger_enable_messages3(void* self, int64_t sources, int64_t types, int64_t severities);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param ids libqt_list /* of uint32_t */
/// @param sources flag of enum QOpenGLDebugMessage__Source
///
void q_opengldebuglogger_enable_messages23(void* self, libqt_list ids, int64_t sources);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#enableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param ids libqt_list /* of uint32_t */
/// @param sources flag of enum QOpenGLDebugMessage__Source
/// @param types flag of enum QOpenGLDebugMessage__Type
///
void q_opengldebuglogger_enable_messages32(void* self, libqt_list ids, int64_t sources, int64_t types);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param sources flag of enum QOpenGLDebugMessage__Source
///
void q_opengldebuglogger_disable_messages1(void* self, int64_t sources);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param sources flag of enum QOpenGLDebugMessage__Source
/// @param types flag of enum QOpenGLDebugMessage__Type
///
void q_opengldebuglogger_disable_messages22(void* self, int64_t sources, int64_t types);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param sources flag of enum QOpenGLDebugMessage__Source
/// @param types flag of enum QOpenGLDebugMessage__Type
/// @param severities flag of enum QOpenGLDebugMessage__Severity
///
void q_opengldebuglogger_disable_messages3(void* self, int64_t sources, int64_t types, int64_t severities);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param ids libqt_list /* of uint32_t */
/// @param sources flag of enum QOpenGLDebugMessage__Source
///
void q_opengldebuglogger_disable_messages23(void* self, libqt_list ids, int64_t sources);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#disableMessages)
///
/// @param self QOpenGLDebugLogger*
/// @param ids libqt_list /* of uint32_t */
/// @param sources flag of enum QOpenGLDebugMessage__Source
/// @param types flag of enum QOpenGLDebugMessage__Type
///
void q_opengldebuglogger_disable_messages32(void* self, libqt_list ids, int64_t sources, int64_t types);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#startLogging)
///
/// @param self QOpenGLDebugLogger*
/// @param loggingMode enum QOpenGLDebugLogger__LoggingMode
///
void q_opengldebuglogger_start_logging1(void* self, int32_t loggingMode);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QOpenGLDebugLogger*
///
const char* q_opengldebuglogger_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QOpenGLDebugLogger*
/// @param name char*
///
void q_opengldebuglogger_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QOpenGLDebugLogger*
///
bool q_opengldebuglogger_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QOpenGLDebugLogger*
///
bool q_opengldebuglogger_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QOpenGLDebugLogger*
///
bool q_opengldebuglogger_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QOpenGLDebugLogger*
///
bool q_opengldebuglogger_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QOpenGLDebugLogger*
/// @param b bool
///
bool q_opengldebuglogger_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QOpenGLDebugLogger*
///
QThread* q_opengldebuglogger_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLDebugLogger*
/// @param thread QThread*
///
bool q_opengldebuglogger_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLDebugLogger*
/// @param interval int
///
int32_t q_opengldebuglogger_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLDebugLogger*
/// @param id int
///
void q_opengldebuglogger_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QOpenGLDebugLogger*
/// @param id enum Qt__TimerId
///
void q_opengldebuglogger_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QOpenGLDebugLogger*
///
libqt_list /* of QObject* */ q_opengldebuglogger_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QOpenGLDebugLogger*
/// @param parent QObject*
///
void q_opengldebuglogger_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QOpenGLDebugLogger*
/// @param filterObj QObject*
///
void q_opengldebuglogger_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QOpenGLDebugLogger*
/// @param obj QObject*
///
void q_opengldebuglogger_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_opengldebuglogger_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLDebugLogger*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_opengldebuglogger_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_opengldebuglogger_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_opengldebuglogger_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QOpenGLDebugLogger*
///
void q_opengldebuglogger_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QOpenGLDebugLogger*
///
void q_opengldebuglogger_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QOpenGLDebugLogger*
/// @param name const char*
/// @param value QVariant*
///
bool q_opengldebuglogger_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QOpenGLDebugLogger*
/// @param name const char*
///
QVariant* q_opengldebuglogger_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QOpenGLDebugLogger*
///
const char** q_opengldebuglogger_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLDebugLogger*
///
QBindingStorage* q_opengldebuglogger_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QOpenGLDebugLogger*
///
const QBindingStorage* q_opengldebuglogger_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLDebugLogger*
///
void q_opengldebuglogger_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLDebugLogger*
/// @param callback void func(QOpenGLDebugLogger* self)
///
void q_opengldebuglogger_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QOpenGLDebugLogger*
///
QObject* q_opengldebuglogger_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QOpenGLDebugLogger*
/// @param classname const char*
///
bool q_opengldebuglogger_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QOpenGLDebugLogger*
///
void q_opengldebuglogger_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QOpenGLDebugLogger*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_opengldebuglogger_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QOpenGLDebugLogger*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_opengldebuglogger_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_opengldebuglogger_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QOpenGLDebugLogger*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_opengldebuglogger_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLDebugLogger*
/// @param param1 QObject*
///
void q_opengldebuglogger_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QOpenGLDebugLogger*
/// @param callback void func(QOpenGLDebugLogger* self, QObject* param1)
///
void q_opengldebuglogger_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param event QEvent*
///
bool q_opengldebuglogger_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param event QEvent*
///
bool q_opengldebuglogger_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param callback bool func(QOpenGLDebugLogger* self, QEvent* event)
///
void q_opengldebuglogger_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_opengldebuglogger_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_opengldebuglogger_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param callback bool func(QOpenGLDebugLogger* self, QObject* watched, QEvent* event)
///
void q_opengldebuglogger_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param event QTimerEvent*
///
void q_opengldebuglogger_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param event QTimerEvent*
///
void q_opengldebuglogger_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param callback void func(QOpenGLDebugLogger* self, QTimerEvent* event)
///
void q_opengldebuglogger_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param event QChildEvent*
///
void q_opengldebuglogger_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param event QChildEvent*
///
void q_opengldebuglogger_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param callback void func(QOpenGLDebugLogger* self, QChildEvent* event)
///
void q_opengldebuglogger_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param event QEvent*
///
void q_opengldebuglogger_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param event QEvent*
///
void q_opengldebuglogger_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param callback void func(QOpenGLDebugLogger* self, QEvent* event)
///
void q_opengldebuglogger_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param signal QMetaMethod*
///
void q_opengldebuglogger_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param signal QMetaMethod*
///
void q_opengldebuglogger_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param callback void func(QOpenGLDebugLogger* self, QMetaMethod* signal)
///
void q_opengldebuglogger_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param signal QMetaMethod*
///
void q_opengldebuglogger_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param signal QMetaMethod*
///
void q_opengldebuglogger_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param callback void func(QOpenGLDebugLogger* self, QMetaMethod* signal)
///
void q_opengldebuglogger_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLDebugLogger*
///
QObject* q_opengldebuglogger_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
///
QObject* q_opengldebuglogger_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param callback QObject* func()
///
void q_opengldebuglogger_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLDebugLogger*
///
int32_t q_opengldebuglogger_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
///
int32_t q_opengldebuglogger_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param callback int32_t func()
///
void q_opengldebuglogger_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param signal const char*
///
int32_t q_opengldebuglogger_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param signal const char*
///
int32_t q_opengldebuglogger_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param callback int32_t func(QOpenGLDebugLogger* self, const char* signal)
///
void q_opengldebuglogger_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param signal QMetaMethod*
///
bool q_opengldebuglogger_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param signal QMetaMethod*
///
bool q_opengldebuglogger_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QOpenGLDebugLogger*
/// @param callback bool func(QOpenGLDebugLogger* self, QMetaMethod* signal)
///
void q_opengldebuglogger_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QOpenGLDebugLogger*
/// @param callback void func(QOpenGLDebugLogger* self, const char* objectName)
///
void q_opengldebuglogger_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebuglogger.html#dtor.QOpenGLDebugLogger)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLDebugLogger*
///
void q_opengldebuglogger_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebug.html#public-types)

typedef enum {
    QOPENGLDEBUGMESSAGE_SOURCE_INVALIDSOURCE = 0,
    QOPENGLDEBUGMESSAGE_SOURCE_APISOURCE = 1,
    QOPENGLDEBUGMESSAGE_SOURCE_WINDOWSYSTEMSOURCE = 2,
    QOPENGLDEBUGMESSAGE_SOURCE_SHADERCOMPILERSOURCE = 4,
    QOPENGLDEBUGMESSAGE_SOURCE_THIRDPARTYSOURCE = 8,
    QOPENGLDEBUGMESSAGE_SOURCE_APPLICATIONSOURCE = 16,
    QOPENGLDEBUGMESSAGE_SOURCE_OTHERSOURCE = 32,
    QOPENGLDEBUGMESSAGE_SOURCE_LASTSOURCE = 32,
    QOPENGLDEBUGMESSAGE_SOURCE_ANYSOURCE = 4294967295
} QOpenGLDebugMessage__Source;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebug.html#public-types)

typedef enum {
    QOPENGLDEBUGMESSAGE_TYPE_INVALIDTYPE = 0,
    QOPENGLDEBUGMESSAGE_TYPE_ERRORTYPE = 1,
    QOPENGLDEBUGMESSAGE_TYPE_DEPRECATEDBEHAVIORTYPE = 2,
    QOPENGLDEBUGMESSAGE_TYPE_UNDEFINEDBEHAVIORTYPE = 4,
    QOPENGLDEBUGMESSAGE_TYPE_PORTABILITYTYPE = 8,
    QOPENGLDEBUGMESSAGE_TYPE_PERFORMANCETYPE = 16,
    QOPENGLDEBUGMESSAGE_TYPE_OTHERTYPE = 32,
    QOPENGLDEBUGMESSAGE_TYPE_MARKERTYPE = 64,
    QOPENGLDEBUGMESSAGE_TYPE_GROUPPUSHTYPE = 128,
    QOPENGLDEBUGMESSAGE_TYPE_GROUPPOPTYPE = 256,
    QOPENGLDEBUGMESSAGE_TYPE_LASTTYPE = 256,
    QOPENGLDEBUGMESSAGE_TYPE_ANYTYPE = 4294967295
} QOpenGLDebugMessage__Type;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebug.html#public-types)

typedef enum {
    QOPENGLDEBUGMESSAGE_SEVERITY_INVALIDSEVERITY = 0,
    QOPENGLDEBUGMESSAGE_SEVERITY_HIGHSEVERITY = 1,
    QOPENGLDEBUGMESSAGE_SEVERITY_MEDIUMSEVERITY = 2,
    QOPENGLDEBUGMESSAGE_SEVERITY_LOWSEVERITY = 4,
    QOPENGLDEBUGMESSAGE_SEVERITY_NOTIFICATIONSEVERITY = 8,
    QOPENGLDEBUGMESSAGE_SEVERITY_LASTSEVERITY = 8,
    QOPENGLDEBUGMESSAGE_SEVERITY_ANYSEVERITY = 4294967295
} QOpenGLDebugMessage__Severity;

/// [Upstream resources](https://doc.qt.io/qt-6/qopengldebug.html#public-types)

typedef enum {
    QOPENGLDEBUGLOGGER_LOGGINGMODE_ASYNCHRONOUSLOGGING = 0,
    QOPENGLDEBUGLOGGER_LOGGINGMODE_SYNCHRONOUSLOGGING = 1
} QOpenGLDebugLogger__LoggingMode;

#endif
