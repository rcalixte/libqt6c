#pragma once
#ifndef SRCQT6C_LIBQCOREAPPLICATION_H
#define SRCQT6C_LIBQCOREAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcoreapplication.html

/// q_coreapplication_new constructs a new QCoreApplication object.
///
/// @param argc int*
/// @param argv char**
QCoreApplication* q_coreapplication_new(int* argc, char* argv[]);

/// q_coreapplication_new2 constructs a new QCoreApplication object.
///
/// @param argc int*
/// @param argv char**
/// @param param3 int
QCoreApplication* q_coreapplication_new2(int* argc, char* argv[], int param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QCoreApplication*
const QMetaObject* q_coreapplication_meta_object(void* self);

/// @param self QCoreApplication*
/// @param param1 const char*
void* q_coreapplication_metacast(void* self, const char* param1);

/// @param self QCoreApplication*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_coreapplication_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCoreApplication*
/// @param callback int32_t func(QCoreApplication* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_coreapplication_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCoreApplication*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_coreapplication_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_coreapplication_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_coreapplication_arguments();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// @param attribute enum Qt__ApplicationAttribute
void q_coreapplication_set_attribute(int32_t attribute);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
///
/// @param attribute enum Qt__ApplicationAttribute
bool q_coreapplication_test_attribute(int32_t attribute);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
///
/// @param orgDomain const char*
void q_coreapplication_set_organization_domain(const char* orgDomain);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_coreapplication_organization_domain();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
///
/// @param orgName const char*
void q_coreapplication_set_organization_name(const char* orgName);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_coreapplication_organization_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
///
/// @param application const char*
void q_coreapplication_set_application_name(const char* application);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_coreapplication_application_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
///
/// @param version const char*
void q_coreapplication_set_application_version(const char* version);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_coreapplication_application_version();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
///
/// @param allow bool
void q_coreapplication_set_setuid_allowed(bool allow);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
///
bool q_coreapplication_is_setuid_allowed();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
///
QCoreApplication* q_coreapplication_instance();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exec)
///
int32_t q_coreapplication_exec();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
void q_coreapplication_process_events();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
/// @param maxtime int
void q_coreapplication_process_events2(int32_t flags, int maxtime);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
/// @param deadline QDeadlineTimer*
void q_coreapplication_process_events3(int32_t flags, void* deadline);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
///
/// @param receiver QObject*
/// @param event QEvent*
bool q_coreapplication_send_event(void* receiver, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// @param receiver QObject*
/// @param event QEvent*
void q_coreapplication_post_event(void* receiver, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
void q_coreapplication_send_posted_events();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// @param receiver QObject*
void q_coreapplication_remove_posted_events(void* receiver);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
///
QAbstractEventDispatcher* q_coreapplication_event_dispatcher();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
///
/// @param eventDispatcher QAbstractEventDispatcher*
void q_coreapplication_set_event_dispatcher(void* eventDispatcher);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
///
/// @param self QCoreApplication*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_coreapplication_notify(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
///
/// Allows for overriding the related default method
///
/// @param self QCoreApplication*
/// @param callback bool func(QCoreApplication* self, QObject* param1, QEvent* param2)
void q_coreapplication_on_notify(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
///
/// Base class method implementation
///
/// @param self QCoreApplication*
/// @param param1 QObject*
/// @param param2 QEvent*
bool q_coreapplication_qbase_notify(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
///
bool q_coreapplication_starting_up();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
///
bool q_coreapplication_closing_down();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_coreapplication_application_dir_path();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_coreapplication_application_file_path();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
///
long long q_coreapplication_application_pid();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#checkPermission)
///
/// @param self QCoreApplication*
/// @param permission QPermission*
///
/// @return enum Qt__PermissionStatus
int32_t q_coreapplication_check_permission(void* self, void* permission);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
///
/// @param libraryPaths const char**
void q_coreapplication_set_library_paths(const char* libraryPaths[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_coreapplication_library_paths();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
///
/// @param param1 const char*
void q_coreapplication_add_library_path(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
///
/// @param param1 const char*
void q_coreapplication_remove_library_path(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
///
/// @param messageFile QTranslator*
bool q_coreapplication_install_translator(void* messageFile);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
///
/// @param messageFile QTranslator*
bool q_coreapplication_remove_translator(void* messageFile);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// Caller is responsible for freeing the returned memory
///
/// @param context const char*
/// @param key const char*
const char* q_coreapplication_translate(const char* context, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
///
/// @param self QCoreApplication*
/// @param name const char*
/// @param revision int
void* q_coreapplication_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
///
/// Allows for overriding the related default method
///
/// @param self QCoreApplication*
/// @param callback void* func(QCoreApplication* self, const char* name, int revision)
void q_coreapplication_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
///
/// Base class method implementation
///
/// @param self QCoreApplication*
/// @param name const char*
/// @param revision int
void* q_coreapplication_qbase_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// @param self QCoreApplication*
/// @param filterObj QAbstractNativeEventFilter*
void q_coreapplication_install_native_event_filter(void* self, void* filterObj);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self, QAbstractNativeEventFilter* filterObj)
void q_coreapplication_on_install_native_event_filter(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// @param self QCoreApplication*
/// @param filterObj QAbstractNativeEventFilter*
void q_coreapplication_remove_native_event_filter(void* self, void* filterObj);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self, QAbstractNativeEventFilter* filterObj)
void q_coreapplication_on_remove_native_event_filter(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
///
bool q_coreapplication_is_quit_lock_enabled();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
///
/// @param enabled bool
void q_coreapplication_set_quit_lock_enabled(bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
///
void q_coreapplication_quit();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
void q_coreapplication_exit();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// @param self QCoreApplication*
void q_coreapplication_organization_name_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self)
void q_coreapplication_on_organization_name_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// @param self QCoreApplication*
void q_coreapplication_organization_domain_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self)
void q_coreapplication_on_organization_domain_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// @param self QCoreApplication*
void q_coreapplication_application_name_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self)
void q_coreapplication_on_application_name_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// @param self QCoreApplication*
void q_coreapplication_application_version_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self)
void q_coreapplication_on_application_version_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#event)
///
/// @param self QCoreApplication*
/// @param param1 QEvent*
bool q_coreapplication_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QCoreApplication*
/// @param callback bool func(QCoreApplication* self, QEvent* param1)
void q_coreapplication_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#event)
///
/// Base class method implementation
///
/// @param self QCoreApplication*
/// @param param1 QEvent*
bool q_coreapplication_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_coreapplication_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_coreapplication_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// @param attribute enum Qt__ApplicationAttribute
/// @param on bool
void q_coreapplication_set_attribute2(int32_t attribute, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
void q_coreapplication_process_events1(int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// @param receiver QObject*
/// @param event QEvent*
/// @param priority int
void q_coreapplication_post_event3(void* receiver, void* event, int priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// @param receiver QObject*
void q_coreapplication_send_posted_events1(void* receiver);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// @param receiver QObject*
/// @param event_type int
void q_coreapplication_send_posted_events2(void* receiver, int event_type);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// @param receiver QObject*
/// @param eventType int
void q_coreapplication_remove_posted_events2(void* receiver, int eventType);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// Caller is responsible for freeing the returned memory
///
/// @param context const char*
/// @param key const char*
/// @param disambiguation const char*
const char* q_coreapplication_translate3(const char* context, const char* key, const char* disambiguation);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// Caller is responsible for freeing the returned memory
///
/// @param context const char*
/// @param key const char*
/// @param disambiguation const char*
/// @param n int
const char* q_coreapplication_translate4(const char* context, const char* key, const char* disambiguation, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
/// @param retcode int
void q_coreapplication_exit1(int retcode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCoreApplication*
const char* q_coreapplication_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCoreApplication*
/// @param name char*
void q_coreapplication_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QCoreApplication*
bool q_coreapplication_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QCoreApplication*
bool q_coreapplication_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QCoreApplication*
bool q_coreapplication_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QCoreApplication*
bool q_coreapplication_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCoreApplication*
/// @param b bool
bool q_coreapplication_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QCoreApplication*
QThread* q_coreapplication_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCoreApplication*
/// @param thread QThread*
bool q_coreapplication_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCoreApplication*
/// @param interval int
int32_t q_coreapplication_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCoreApplication*
/// @param id int
void q_coreapplication_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCoreApplication*
/// @param id enum Qt__TimerId
void q_coreapplication_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QCoreApplication*
libqt_list /* of QObject* */ q_coreapplication_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCoreApplication*
/// @param parent QObject*
void q_coreapplication_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCoreApplication*
/// @param filterObj QObject*
void q_coreapplication_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCoreApplication*
/// @param obj QObject*
void q_coreapplication_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_coreapplication_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCoreApplication*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_coreapplication_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_coreapplication_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_coreapplication_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QCoreApplication*
void q_coreapplication_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QCoreApplication*
void q_coreapplication_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCoreApplication*
/// @param name const char*
/// @param value QVariant*
bool q_coreapplication_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QCoreApplication*
/// @param name const char*
QVariant* q_coreapplication_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCoreApplication*
const char** q_coreapplication_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCoreApplication*
QBindingStorage* q_coreapplication_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCoreApplication*
const QBindingStorage* q_coreapplication_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCoreApplication*
void q_coreapplication_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self)
void q_coreapplication_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QCoreApplication*
QObject* q_coreapplication_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QCoreApplication*
/// @param classname const char*
bool q_coreapplication_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCoreApplication*
void q_coreapplication_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCoreApplication*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_coreapplication_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCoreApplication*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_coreapplication_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_coreapplication_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCoreApplication*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_coreapplication_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCoreApplication*
/// @param param1 QObject*
void q_coreapplication_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self, QObject* param1)
void q_coreapplication_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCoreApplication*
/// @param watched QObject*
/// @param event QEvent*
bool q_coreapplication_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param watched QObject*
/// @param event QEvent*
bool q_coreapplication_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param callback bool func(QCoreApplication* self, QObject* watched, QEvent* event)
void q_coreapplication_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCoreApplication*
/// @param event QTimerEvent*
void q_coreapplication_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param event QTimerEvent*
void q_coreapplication_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self, QTimerEvent* event)
void q_coreapplication_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCoreApplication*
/// @param event QChildEvent*
void q_coreapplication_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param event QChildEvent*
void q_coreapplication_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self, QChildEvent* event)
void q_coreapplication_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCoreApplication*
/// @param event QEvent*
void q_coreapplication_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param event QEvent*
void q_coreapplication_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self, QEvent* event)
void q_coreapplication_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCoreApplication*
/// @param signal QMetaMethod*
void q_coreapplication_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param signal QMetaMethod*
void q_coreapplication_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self, QMetaMethod* signal)
void q_coreapplication_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCoreApplication*
/// @param signal QMetaMethod*
void q_coreapplication_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param signal QMetaMethod*
void q_coreapplication_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self, QMetaMethod* signal)
void q_coreapplication_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCoreApplication*
QObject* q_coreapplication_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCoreApplication*
QObject* q_coreapplication_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param callback QObject* func()
void q_coreapplication_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCoreApplication*
int32_t q_coreapplication_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCoreApplication*
int32_t q_coreapplication_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param callback int32_t func()
void q_coreapplication_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCoreApplication*
/// @param signal const char*
int32_t q_coreapplication_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param signal const char*
int32_t q_coreapplication_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param callback int32_t func(QCoreApplication* self, const char* signal)
void q_coreapplication_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCoreApplication*
/// @param signal QMetaMethod*
bool q_coreapplication_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param signal QMetaMethod*
bool q_coreapplication_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCoreApplication*
/// @param callback bool func(QCoreApplication* self, QMetaMethod* signal)
void q_coreapplication_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
///
/// Wrapper to allow calling private signal
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self)
void q_coreapplication_on_about_to_quit(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCoreApplication*
/// @param callback void func(QCoreApplication* self, const char* objectName)
void q_coreapplication_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#dtor.QCoreApplication)
///
/// Delete this object from C++ memory.
///
/// @param self QCoreApplication*
void q_coreapplication_delete(void* self);

/// https://doc.qt.io/qt-6/qcoreapplication.html#types

typedef enum {
    QCOREAPPLICATION__APPLICATIONFLAGS = 395266
} QCoreApplication__;

#endif
