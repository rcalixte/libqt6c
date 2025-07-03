#pragma once
#ifndef SRCQT6C_LIBQCOREAPPLICATION_H
#define SRCQT6C_LIBQCOREAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstracteventdispatcher.h"
#include "libqabstractnativeeventfilter.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqtranslator.h"

/// https://doc.qt.io/qt-6/qcoreapplication.html

/// q_coreapplication_new constructs a new QCoreApplication object.
///
/// ``` int *argc, char *argv[] ```
QCoreApplication* q_coreapplication_new(int* argc, char* argv[]);

/// q_coreapplication_new2 constructs a new QCoreApplication object.
///
/// ``` int *argc, char *argv[], int param3 ```
QCoreApplication* q_coreapplication_new2(int* argc, char* argv[], int param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCoreApplication* self ```
const QMetaObject* q_coreapplication_meta_object(void* self);

/// ``` QCoreApplication* self, const char* param1 ```
void* q_coreapplication_metacast(void* self, const char* param1);

/// ``` QCoreApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_coreapplication_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QCoreApplication* self, int32_t (*slot)(QCoreApplication*, enum QMetaObject__Call, int, void*) ```
void q_coreapplication_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QCoreApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_coreapplication_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_coreapplication_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
///
///
const char** q_coreapplication_arguments();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute ```
void q_coreapplication_set_attribute(int64_t attribute);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute ```
bool q_coreapplication_test_attribute(int64_t attribute);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
///
/// ``` const char* orgDomain ```
void q_coreapplication_set_organization_domain(const char* orgDomain);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
///
///
const char* q_coreapplication_organization_domain();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
///
/// ``` const char* orgName ```
void q_coreapplication_set_organization_name(const char* orgName);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
///
///
const char* q_coreapplication_organization_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
///
/// ``` const char* application ```
void q_coreapplication_set_application_name(const char* application);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
///
///
const char* q_coreapplication_application_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
///
/// ``` const char* version ```
void q_coreapplication_set_application_version(const char* version);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
///
///
const char* q_coreapplication_application_version();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
///
/// ``` bool allow ```
void q_coreapplication_set_setuid_allowed(bool allow);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
///
///
bool q_coreapplication_is_setuid_allowed();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
///
///
QCoreApplication* q_coreapplication_instance();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exec)
///
///
int32_t q_coreapplication_exec();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
///
void q_coreapplication_process_events();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags, int maxtime ```
void q_coreapplication_process_events2(int64_t flags, int maxtime);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
///
/// ``` QObject* receiver, QEvent* event ```
bool q_coreapplication_send_event(void* receiver, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event ```
void q_coreapplication_post_event(void* receiver, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
///
void q_coreapplication_send_posted_events();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver ```
void q_coreapplication_remove_posted_events(void* receiver);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
///
///
QAbstractEventDispatcher* q_coreapplication_event_dispatcher();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
///
/// ``` QAbstractEventDispatcher* eventDispatcher ```
void q_coreapplication_set_event_dispatcher(void* eventDispatcher);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
///
/// ``` QCoreApplication* self, QObject* param1, QEvent* param2 ```
bool q_coreapplication_notify(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
///
/// Allows for overriding the related default method
///
/// ``` QCoreApplication* self, bool (*slot)(QCoreApplication*, QObject*, QEvent*) ```
void q_coreapplication_on_notify(void* self, bool (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
///
/// Base class method implementation
///
/// ``` QCoreApplication* self, QObject* param1, QEvent* param2 ```
bool q_coreapplication_qbase_notify(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
///
///
bool q_coreapplication_starting_up();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
///
///
bool q_coreapplication_closing_down();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
///
///
const char* q_coreapplication_application_dir_path();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
///
///
const char* q_coreapplication_application_file_path();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
///
///
long long q_coreapplication_application_pid();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
///
/// ``` const char* libraryPaths[] ```
void q_coreapplication_set_library_paths(const char* libraryPaths[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
///
///
const char** q_coreapplication_library_paths();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
///
/// ``` const char* param1 ```
void q_coreapplication_add_library_path(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
///
/// ``` const char* param1 ```
void q_coreapplication_remove_library_path(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_coreapplication_install_translator(void* messageFile);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_coreapplication_remove_translator(void* messageFile);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key ```
const char* q_coreapplication_translate(const char* context, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
///
/// ``` QCoreApplication* self, const char* name, int revision ```
void* q_coreapplication_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
///
/// Allows for overriding the related default method
///
/// ``` QCoreApplication* self, void* (*slot)(QCoreApplication*, const char*, int) ```
void q_coreapplication_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
///
/// Base class method implementation
///
/// ``` QCoreApplication* self, const char* name, int revision ```
void* q_coreapplication_qbase_resolve_interface(void* self, const char* name, int revision);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// ``` QCoreApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_coreapplication_install_native_event_filter(void* self, void* filterObj);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_coreapplication_on_install_native_event_filter(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// ``` QCoreApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_coreapplication_remove_native_event_filter(void* self, void* filterObj);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_coreapplication_on_remove_native_event_filter(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
///
///
bool q_coreapplication_is_quit_lock_enabled();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
///
/// ``` bool enabled ```
void q_coreapplication_set_quit_lock_enabled(bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
///
///
void q_coreapplication_quit();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
///
void q_coreapplication_exit();

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_organization_name_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*) ```
void q_coreapplication_on_organization_name_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_organization_domain_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*) ```
void q_coreapplication_on_organization_domain_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_application_name_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*) ```
void q_coreapplication_on_application_name_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_application_version_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*) ```
void q_coreapplication_on_application_version_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#event)
///
/// ``` QCoreApplication* self, QEvent* param1 ```
bool q_coreapplication_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QCoreApplication* self, bool (*slot)(QCoreApplication*, QEvent*) ```
void q_coreapplication_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#event)
///
/// Base class method implementation
///
/// ``` QCoreApplication* self, QEvent* param1 ```
bool q_coreapplication_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_coreapplication_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_coreapplication_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute, bool on ```
void q_coreapplication_set_attribute2(int64_t attribute, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags ```
void q_coreapplication_process_events1(int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event, int priority ```
void q_coreapplication_post_event3(void* receiver, void* event, int priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver ```
void q_coreapplication_send_posted_events1(void* receiver);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver, int event_type ```
void q_coreapplication_send_posted_events2(void* receiver, int event_type);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver, int eventType ```
void q_coreapplication_remove_posted_events2(void* receiver, int eventType);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key, const char* disambiguation ```
const char* q_coreapplication_translate3(const char* context, const char* key, const char* disambiguation);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key, const char* disambiguation, int n ```
const char* q_coreapplication_translate4(const char* context, const char* key, const char* disambiguation, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
/// ``` int retcode ```
void q_coreapplication_exit1(int retcode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCoreApplication* self ```
const char* q_coreapplication_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCoreApplication* self, char* name ```
void q_coreapplication_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCoreApplication* self ```
bool q_coreapplication_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCoreApplication* self ```
bool q_coreapplication_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCoreApplication* self ```
bool q_coreapplication_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCoreApplication* self ```
bool q_coreapplication_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCoreApplication* self, bool b ```
bool q_coreapplication_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCoreApplication* self ```
QThread* q_coreapplication_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCoreApplication* self, QThread* thread ```
void q_coreapplication_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCoreApplication* self, int interval ```
int32_t q_coreapplication_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCoreApplication* self, int id ```
void q_coreapplication_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCoreApplication* self ```
libqt_list /* of QObject* */ q_coreapplication_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCoreApplication* self, QObject* parent ```
void q_coreapplication_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCoreApplication* self, QObject* filterObj ```
void q_coreapplication_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCoreApplication* self, QObject* obj ```
void q_coreapplication_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_coreapplication_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCoreApplication* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_coreapplication_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_coreapplication_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_coreapplication_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCoreApplication* self, const char* name, QVariant* value ```
bool q_coreapplication_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCoreApplication* self, const char* name ```
QVariant* q_coreapplication_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCoreApplication* self ```
const char** q_coreapplication_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCoreApplication* self ```
QBindingStorage* q_coreapplication_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCoreApplication* self ```
const QBindingStorage* q_coreapplication_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCoreApplication* self, void (*slot)(QObject*) ```
void q_coreapplication_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCoreApplication* self ```
QObject* q_coreapplication_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCoreApplication* self, const char* classname ```
bool q_coreapplication_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCoreApplication* self, int interval, enum Qt__TimerType timerType ```
int32_t q_coreapplication_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_coreapplication_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCoreApplication* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_coreapplication_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCoreApplication* self, QObject* param1 ```
void q_coreapplication_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCoreApplication* self, void (*slot)(QObject*, QObject*) ```
void q_coreapplication_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QObject* watched, QEvent* event ```
bool q_coreapplication_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QObject* watched, QEvent* event ```
bool q_coreapplication_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, bool (*slot)(QCoreApplication*, QObject*, QEvent*) ```
void q_coreapplication_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QTimerEvent* event ```
void q_coreapplication_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QTimerEvent* event ```
void q_coreapplication_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QTimerEvent*) ```
void q_coreapplication_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QChildEvent* event ```
void q_coreapplication_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QChildEvent* event ```
void q_coreapplication_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QChildEvent*) ```
void q_coreapplication_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QEvent* event ```
void q_coreapplication_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QEvent* event ```
void q_coreapplication_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QEvent*) ```
void q_coreapplication_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
void q_coreapplication_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
void q_coreapplication_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QMetaMethod*) ```
void q_coreapplication_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
void q_coreapplication_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
void q_coreapplication_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QMetaMethod*) ```
void q_coreapplication_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self ```
QObject* q_coreapplication_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self ```
QObject* q_coreapplication_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, QObject* (*slot)() ```
void q_coreapplication_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self ```
int32_t q_coreapplication_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self ```
int32_t q_coreapplication_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, int32_t (*slot)() ```
void q_coreapplication_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, const char* signal ```
int32_t q_coreapplication_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, const char* signal ```
int32_t q_coreapplication_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, int32_t (*slot)(QCoreApplication*, const char*) ```
void q_coreapplication_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
bool q_coreapplication_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
bool q_coreapplication_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, bool (*slot)(QCoreApplication*, QMetaMethod*) ```
void q_coreapplication_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#aboutToQuit)
///
/// Wrapper to allow calling private signal
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*) ```
void q_coreapplication_on_about_to_quit(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QCoreApplication* self, void (*slot)(QObject*, const char*) ```
void q_coreapplication_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#dtor.QCoreApplication)
///
/// Delete this object from C++ memory.
///
/// ``` QCoreApplication* self ```
void q_coreapplication_delete(void* self);

/// https://doc.qt.io/qt-6/qcoreapplication.html#types

typedef enum {
    QCOREAPPLICATION__APPLICATIONFLAGS = 394242
} QCoreApplication__;

#endif
