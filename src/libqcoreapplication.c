#include "libqabstracteventdispatcher.hpp"
#include "libqabstractnativeeventfilter.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqtranslator.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqcoreapplication.hpp"
#include "libqcoreapplication.h"

/// https://doc.qt.io/qt-6/qcoreapplication.html

/// q_coreapplication_new constructs a new QCoreApplication object.
///
/// ``` int *argc, char *argv[] ```
QCoreApplication* q_coreapplication_new(int* argc, char* argv[]) {
    return QCoreApplication_new(argc, argv);
}

/// q_coreapplication_new2 constructs a new QCoreApplication object.
///
/// ``` int *argc, char *argv[], int param3 ```
QCoreApplication* q_coreapplication_new2(int* argc, char* argv[], int param3) {
    return QCoreApplication_new2(argc, argv, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCoreApplication* self ```
QMetaObject* q_coreapplication_meta_object(void* self) {
    return QCoreApplication_MetaObject((QCoreApplication*)self);
}

/// ``` QCoreApplication* self, const char* param1 ```
void* q_coreapplication_metacast(void* self, const char* param1) {
    return QCoreApplication_Metacast((QCoreApplication*)self, param1);
}

/// ``` QCoreApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_coreapplication_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCoreApplication_Metacall((QCoreApplication*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QCoreApplication* self, int32_t (*slot)(QCoreApplication*, enum QMetaObject__Call, int, void*) ```
void q_coreapplication_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCoreApplication_OnMetacall((QCoreApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCoreApplication* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_coreapplication_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCoreApplication_QBaseMetacall((QCoreApplication*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_coreapplication_tr(const char* s) {
    libqt_string _str = QCoreApplication_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#arguments)
///
///
const char** q_coreapplication_arguments() {
    libqt_list _arr = QCoreApplication_Arguments();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute ```
void q_coreapplication_set_attribute(int64_t attribute) {
    QCoreApplication_SetAttribute(attribute);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#testAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute ```
bool q_coreapplication_test_attribute(int64_t attribute) {
    return QCoreApplication_TestAttribute(attribute);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationDomain)
///
/// ``` const char* orgDomain ```
void q_coreapplication_set_organization_domain(const char* orgDomain) {
    QCoreApplication_SetOrganizationDomain(qstring(orgDomain));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomain)
///
///
const char* q_coreapplication_organization_domain() {
    libqt_string _str = QCoreApplication_OrganizationDomain();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setOrganizationName)
///
/// ``` const char* orgName ```
void q_coreapplication_set_organization_name(const char* orgName) {
    QCoreApplication_SetOrganizationName(qstring(orgName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationName)
///
///
const char* q_coreapplication_organization_name() {
    libqt_string _str = QCoreApplication_OrganizationName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationName)
///
/// ``` const char* application ```
void q_coreapplication_set_application_name(const char* application) {
    QCoreApplication_SetApplicationName(qstring(application));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationName)
///
///
const char* q_coreapplication_application_name() {
    libqt_string _str = QCoreApplication_ApplicationName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setApplicationVersion)
///
/// ``` const char* version ```
void q_coreapplication_set_application_version(const char* version) {
    QCoreApplication_SetApplicationVersion(qstring(version));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersion)
///
///
const char* q_coreapplication_application_version() {
    libqt_string _str = QCoreApplication_ApplicationVersion();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setSetuidAllowed)
///
/// ``` bool allow ```
void q_coreapplication_set_setuid_allowed(bool allow) {
    QCoreApplication_SetSetuidAllowed(allow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isSetuidAllowed)
///
///
bool q_coreapplication_is_setuid_allowed() {
    return QCoreApplication_IsSetuidAllowed();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#instance)
///
///
QCoreApplication* q_coreapplication_instance() {
    return QCoreApplication_Instance();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exec)
///
///
int32_t q_coreapplication_exec() {
    return QCoreApplication_Exec();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
///
void q_coreapplication_process_events() {
    QCoreApplication_ProcessEvents();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags, int maxtime ```
void q_coreapplication_process_events2(int64_t flags, int maxtime) {
    QCoreApplication_ProcessEvents2(flags, maxtime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendEvent)
///
/// ``` QObject* receiver, QEvent* event ```
bool q_coreapplication_send_event(void* receiver, void* event) {
    return QCoreApplication_SendEvent((QObject*)receiver, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event ```
void q_coreapplication_post_event(void* receiver, void* event) {
    QCoreApplication_PostEvent((QObject*)receiver, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
///
void q_coreapplication_send_posted_events() {
    QCoreApplication_SendPostedEvents();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver ```
void q_coreapplication_remove_posted_events(void* receiver) {
    QCoreApplication_RemovePostedEvents((QObject*)receiver);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#eventDispatcher)
///
///
QAbstractEventDispatcher* q_coreapplication_event_dispatcher() {
    return QCoreApplication_EventDispatcher();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setEventDispatcher)
///
/// ``` QAbstractEventDispatcher* eventDispatcher ```
void q_coreapplication_set_event_dispatcher(void* eventDispatcher) {
    QCoreApplication_SetEventDispatcher((QAbstractEventDispatcher*)eventDispatcher);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#notify)
///
/// ``` QCoreApplication* self, QObject* param1, QEvent* param2 ```
bool q_coreapplication_notify(void* self, void* param1, void* param2) {
    return QCoreApplication_Notify((QCoreApplication*)self, (QObject*)param1, (QEvent*)param2);
}

/// Allows for overriding the related default method
///
/// ``` QCoreApplication* self, bool (*slot)(QCoreApplication*, QObject*, QEvent*) ```
void q_coreapplication_on_notify(void* self, bool (*slot)(void*, void*, void*)) {
    QCoreApplication_OnNotify((QCoreApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCoreApplication* self, QObject* param1, QEvent* param2 ```
bool q_coreapplication_qbase_notify(void* self, void* param1, void* param2) {
    return QCoreApplication_QBaseNotify((QCoreApplication*)self, (QObject*)param1, (QEvent*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#startingUp)
///
///
bool q_coreapplication_starting_up() {
    return QCoreApplication_StartingUp();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#closingDown)
///
///
bool q_coreapplication_closing_down() {
    return QCoreApplication_ClosingDown();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationDirPath)
///
///
const char* q_coreapplication_application_dir_path() {
    libqt_string _str = QCoreApplication_ApplicationDirPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationFilePath)
///
///
const char* q_coreapplication_application_file_path() {
    libqt_string _str = QCoreApplication_ApplicationFilePath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationPid)
///
///
long long q_coreapplication_application_pid() {
    return QCoreApplication_ApplicationPid();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setLibraryPaths)
///
/// ``` const char* libraryPaths[] ```
void q_coreapplication_set_library_paths(const char* libraryPaths[]) {
    size_t libraryPaths_len = libqt_strv_length(libraryPaths);
    libqt_string* libraryPaths_qstr = malloc(libraryPaths_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < libraryPaths_len; ++_i) {
        libraryPaths_qstr[_i] = qstring(libraryPaths[_i]);
    }
    libqt_list libraryPaths_list = qstrlist(libraryPaths_qstr, libraryPaths_len);
    QCoreApplication_SetLibraryPaths(libraryPaths_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#libraryPaths)
///
///
const char** q_coreapplication_library_paths() {
    libqt_list _arr = QCoreApplication_LibraryPaths();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#addLibraryPath)
///
/// ``` const char* param1 ```
void q_coreapplication_add_library_path(const char* param1) {
    QCoreApplication_AddLibraryPath(qstring(param1));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeLibraryPath)
///
/// ``` const char* param1 ```
void q_coreapplication_remove_library_path(const char* param1) {
    QCoreApplication_RemoveLibraryPath(qstring(param1));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_coreapplication_install_translator(void* messageFile) {
    return QCoreApplication_InstallTranslator((QTranslator*)messageFile);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeTranslator)
///
/// ``` QTranslator* messageFile ```
bool q_coreapplication_remove_translator(void* messageFile) {
    return QCoreApplication_RemoveTranslator((QTranslator*)messageFile);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key ```
const char* q_coreapplication_translate(const char* context, const char* key) {
    libqt_string _str = QCoreApplication_Translate(context, key);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#resolveInterface)
///
/// ``` QCoreApplication* self, const char* name, int revision ```
void* q_coreapplication_resolve_interface(void* self, const char* name, int revision) {
    return QCoreApplication_ResolveInterface((QCoreApplication*)self, name, revision);
}

/// Allows for overriding the related default method
///
/// ``` QCoreApplication* self, void* (*slot)(QCoreApplication*, const char*, int) ```
void q_coreapplication_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int)) {
    QCoreApplication_OnResolveInterface((QCoreApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCoreApplication* self, const char* name, int revision ```
void* q_coreapplication_qbase_resolve_interface(void* self, const char* name, int revision) {
    return QCoreApplication_QBaseResolveInterface((QCoreApplication*)self, name, revision);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#installNativeEventFilter)
///
/// ``` QCoreApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_coreapplication_install_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_InstallNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_coreapplication_on_install_native_event_filter(void* self, void (*slot)(void*, void*)) {
    QCoreApplication_Connect_InstallNativeEventFilter((QCoreApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removeNativeEventFilter)
///
/// ``` QCoreApplication* self, QAbstractNativeEventFilter* filterObj ```
void q_coreapplication_remove_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_RemoveNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QAbstractNativeEventFilter*) ```
void q_coreapplication_on_remove_native_event_filter(void* self, void (*slot)(void*, void*)) {
    QCoreApplication_Connect_RemoveNativeEventFilter((QCoreApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#isQuitLockEnabled)
///
///
bool q_coreapplication_is_quit_lock_enabled() {
    return QCoreApplication_IsQuitLockEnabled();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setQuitLockEnabled)
///
/// ``` bool enabled ```
void q_coreapplication_set_quit_lock_enabled(bool enabled) {
    QCoreApplication_SetQuitLockEnabled(enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#quit)
///
///
void q_coreapplication_quit() {
    QCoreApplication_Quit();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
///
void q_coreapplication_exit() {
    QCoreApplication_Exit();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationNameChanged)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_organization_name_changed(void* self) {
    QCoreApplication_OrganizationNameChanged((QCoreApplication*)self);
}

/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*) ```
void q_coreapplication_on_organization_name_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_OrganizationNameChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#organizationDomainChanged)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_organization_domain_changed(void* self) {
    QCoreApplication_OrganizationDomainChanged((QCoreApplication*)self);
}

/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*) ```
void q_coreapplication_on_organization_domain_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_OrganizationDomainChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationNameChanged)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_application_name_changed(void* self) {
    QCoreApplication_ApplicationNameChanged((QCoreApplication*)self);
}

/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*) ```
void q_coreapplication_on_application_name_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_ApplicationNameChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#applicationVersionChanged)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_application_version_changed(void* self) {
    QCoreApplication_ApplicationVersionChanged((QCoreApplication*)self);
}

/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*) ```
void q_coreapplication_on_application_version_changed(void* self, void (*slot)(void*)) {
    QCoreApplication_Connect_ApplicationVersionChanged((QCoreApplication*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#event)
///
/// ``` QCoreApplication* self, QEvent* param1 ```
bool q_coreapplication_event(void* self, void* param1) {
    return QCoreApplication_Event((QCoreApplication*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QCoreApplication* self, bool (*slot)(QCoreApplication*, QEvent*) ```
void q_coreapplication_on_event(void* self, bool (*slot)(void*, void*)) {
    QCoreApplication_OnEvent((QCoreApplication*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCoreApplication* self, QEvent* param1 ```
bool q_coreapplication_qbase_event(void* self, void* param1) {
    return QCoreApplication_QBaseEvent((QCoreApplication*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_coreapplication_tr2(const char* s, const char* c) {
    libqt_string _str = QCoreApplication_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_coreapplication_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCoreApplication_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#setAttribute)
///
/// ``` enum Qt__ApplicationAttribute attribute, bool on ```
void q_coreapplication_set_attribute2(int64_t attribute, bool on) {
    QCoreApplication_SetAttribute2(attribute, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#processEvents)
///
/// ``` int flags ```
void q_coreapplication_process_events1(int64_t flags) {
    QCoreApplication_ProcessEvents1(flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#postEvent)
///
/// ``` QObject* receiver, QEvent* event, int priority ```
void q_coreapplication_post_event3(void* receiver, void* event, int priority) {
    QCoreApplication_PostEvent3((QObject*)receiver, (QEvent*)event, priority);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver ```
void q_coreapplication_send_posted_events1(void* receiver) {
    QCoreApplication_SendPostedEvents1((QObject*)receiver);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#sendPostedEvents)
///
/// ``` QObject* receiver, int event_type ```
void q_coreapplication_send_posted_events2(void* receiver, int event_type) {
    QCoreApplication_SendPostedEvents2((QObject*)receiver, event_type);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#removePostedEvents)
///
/// ``` QObject* receiver, int eventType ```
void q_coreapplication_remove_posted_events2(void* receiver, int eventType) {
    QCoreApplication_RemovePostedEvents2((QObject*)receiver, eventType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key, const char* disambiguation ```
const char* q_coreapplication_translate3(const char* context, const char* key, const char* disambiguation) {
    libqt_string _str = QCoreApplication_Translate3(context, key, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#translate)
///
/// ``` const char* context, const char* key, const char* disambiguation, int n ```
const char* q_coreapplication_translate4(const char* context, const char* key, const char* disambiguation, int n) {
    libqt_string _str = QCoreApplication_Translate4(context, key, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoreapplication.html#exit)
///
/// ``` int retcode ```
void q_coreapplication_exit1(int retcode) {
    QCoreApplication_Exit1(retcode);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCoreApplication* self ```
const char* q_coreapplication_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCoreApplication* self, const char* name ```
void q_coreapplication_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCoreApplication* self ```
bool q_coreapplication_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCoreApplication* self ```
bool q_coreapplication_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCoreApplication* self ```
bool q_coreapplication_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCoreApplication* self ```
bool q_coreapplication_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCoreApplication* self, bool b ```
bool q_coreapplication_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCoreApplication* self ```
QThread* q_coreapplication_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCoreApplication* self, QThread* thread ```
void q_coreapplication_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCoreApplication* self, int interval ```
int32_t q_coreapplication_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCoreApplication* self, int id ```
void q_coreapplication_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCoreApplication* self ```
libqt_list /* of QObject* */ q_coreapplication_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCoreApplication* self, QObject* parent ```
void q_coreapplication_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCoreApplication* self, QObject* filterObj ```
void q_coreapplication_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCoreApplication* self, QObject* obj ```
void q_coreapplication_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_coreapplication_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCoreApplication* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_coreapplication_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_coreapplication_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_coreapplication_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCoreApplication* self, const char* name, QVariant* value ```
bool q_coreapplication_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCoreApplication* self, const char* name ```
QVariant* q_coreapplication_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCoreApplication* self ```
const char** q_coreapplication_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCoreApplication* self ```
QBindingStorage* q_coreapplication_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCoreApplication* self ```
QBindingStorage* q_coreapplication_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QCoreApplication* self, void (*slot)(QObject*) ```
void q_coreapplication_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCoreApplication* self ```
QObject* q_coreapplication_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCoreApplication* self, const char* classname ```
bool q_coreapplication_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCoreApplication* self ```
void q_coreapplication_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCoreApplication* self, int interval, enum Qt__TimerType timerType ```
int32_t q_coreapplication_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_coreapplication_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCoreApplication* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_coreapplication_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCoreApplication* self, QObject* param1 ```
void q_coreapplication_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QCoreApplication* self, void (*slot)(QObject*, QObject*) ```
void q_coreapplication_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QObject* watched, QEvent* event ```
bool q_coreapplication_event_filter(void* self, void* watched, void* event) {
    return QCoreApplication_EventFilter((QCoreApplication*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QObject* watched, QEvent* event ```
bool q_coreapplication_qbase_event_filter(void* self, void* watched, void* event) {
    return QCoreApplication_QBaseEventFilter((QCoreApplication*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, bool (*slot)(QCoreApplication*, QObject*, QEvent*) ```
void q_coreapplication_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCoreApplication_OnEventFilter((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QTimerEvent* event ```
void q_coreapplication_timer_event(void* self, void* event) {
    QCoreApplication_TimerEvent((QCoreApplication*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QTimerEvent* event ```
void q_coreapplication_qbase_timer_event(void* self, void* event) {
    QCoreApplication_QBaseTimerEvent((QCoreApplication*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QTimerEvent*) ```
void q_coreapplication_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCoreApplication_OnTimerEvent((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QChildEvent* event ```
void q_coreapplication_child_event(void* self, void* event) {
    QCoreApplication_ChildEvent((QCoreApplication*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QChildEvent* event ```
void q_coreapplication_qbase_child_event(void* self, void* event) {
    QCoreApplication_QBaseChildEvent((QCoreApplication*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QChildEvent*) ```
void q_coreapplication_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCoreApplication_OnChildEvent((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QEvent* event ```
void q_coreapplication_custom_event(void* self, void* event) {
    QCoreApplication_CustomEvent((QCoreApplication*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QEvent* event ```
void q_coreapplication_qbase_custom_event(void* self, void* event) {
    QCoreApplication_QBaseCustomEvent((QCoreApplication*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QEvent*) ```
void q_coreapplication_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCoreApplication_OnCustomEvent((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
void q_coreapplication_connect_notify(void* self, void* signal) {
    QCoreApplication_ConnectNotify((QCoreApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
void q_coreapplication_qbase_connect_notify(void* self, void* signal) {
    QCoreApplication_QBaseConnectNotify((QCoreApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QMetaMethod*) ```
void q_coreapplication_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCoreApplication_OnConnectNotify((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
void q_coreapplication_disconnect_notify(void* self, void* signal) {
    QCoreApplication_DisconnectNotify((QCoreApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
void q_coreapplication_qbase_disconnect_notify(void* self, void* signal) {
    QCoreApplication_QBaseDisconnectNotify((QCoreApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, void (*slot)(QCoreApplication*, QMetaMethod*) ```
void q_coreapplication_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCoreApplication_OnDisconnectNotify((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self ```
QObject* q_coreapplication_sender(void* self) {
    return QCoreApplication_Sender((QCoreApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self ```
QObject* q_coreapplication_qbase_sender(void* self) {
    return QCoreApplication_QBaseSender((QCoreApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, QObject* (*slot)() ```
void q_coreapplication_on_sender(void* self, QObject* (*slot)()) {
    QCoreApplication_OnSender((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self ```
int32_t q_coreapplication_sender_signal_index(void* self) {
    return QCoreApplication_SenderSignalIndex((QCoreApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self ```
int32_t q_coreapplication_qbase_sender_signal_index(void* self) {
    return QCoreApplication_QBaseSenderSignalIndex((QCoreApplication*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, int32_t (*slot)() ```
void q_coreapplication_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCoreApplication_OnSenderSignalIndex((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, const char* signal ```
int32_t q_coreapplication_receivers(void* self, const char* signal) {
    return QCoreApplication_Receivers((QCoreApplication*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, const char* signal ```
int32_t q_coreapplication_qbase_receivers(void* self, const char* signal) {
    return QCoreApplication_QBaseReceivers((QCoreApplication*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, int32_t (*slot)(QCoreApplication*, const char*) ```
void q_coreapplication_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCoreApplication_OnReceivers((QCoreApplication*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
bool q_coreapplication_is_signal_connected(void* self, void* signal) {
    return QCoreApplication_IsSignalConnected((QCoreApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCoreApplication* self, QMetaMethod* signal ```
bool q_coreapplication_qbase_is_signal_connected(void* self, void* signal) {
    return QCoreApplication_QBaseIsSignalConnected((QCoreApplication*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCoreApplication* self, bool (*slot)(QCoreApplication*, QMetaMethod*) ```
void q_coreapplication_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCoreApplication_OnIsSignalConnected((QCoreApplication*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCoreApplication* self ```
void q_coreapplication_delete(void* self) {
    QCoreApplication_Delete((QCoreApplication*)(self));
}