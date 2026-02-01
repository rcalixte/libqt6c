#include "libqabstracteventdispatcher.hpp"
#include "libqabstractnativeeventfilter.hpp"
#include "libqcoreevent.hpp"
#include "libqdeadlinetimer.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpermissions.hpp"
#include "libqtranslator.hpp"
#include "libqcoreapplication.hpp"
#include "libqcoreapplication.h"

QCoreApplication* q_coreapplication_new(int* argc, char** argv) {
    return QCoreApplication_new(argc, argv);
}

QCoreApplication* q_coreapplication_new2(int* argc, char** argv, int param3) {
    return QCoreApplication_new2(argc, argv, param3);
}

const QMetaObject* q_coreapplication_meta_object(void* self) {
    return QCoreApplication_MetaObject((QCoreApplication*)self);
}

void q_coreapplication_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QCoreApplication_OnMetaObject((QCoreApplication*)self, (intptr_t)callback);
}

const QMetaObject* q_coreapplication_qbase_meta_object(void* self) {
    return QCoreApplication_QBaseMetaObject((QCoreApplication*)self);
}

void* q_coreapplication_metacast(void* self, const char* param1) {
    return QCoreApplication_Metacast((QCoreApplication*)self, param1);
}

void q_coreapplication_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QCoreApplication_OnMetacast((QCoreApplication*)self, (intptr_t)callback);
}

void* q_coreapplication_qbase_metacast(void* self, const char* param1) {
    return QCoreApplication_QBaseMetacast((QCoreApplication*)self, param1);
}

int32_t q_coreapplication_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCoreApplication_Metacall((QCoreApplication*)self, param1, param2, param3);
}

void q_coreapplication_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QCoreApplication_OnMetacall((QCoreApplication*)self, (intptr_t)callback);
}

int32_t q_coreapplication_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCoreApplication_QBaseMetacall((QCoreApplication*)self, param1, param2, param3);
}

const char* q_coreapplication_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_coreapplication_arguments() {
    libqt_list _arr = QCoreApplication_Arguments();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_coreapplication_arguments\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_coreapplication_set_attribute(int32_t attribute) {
    QCoreApplication_SetAttribute(attribute);
}

bool q_coreapplication_test_attribute(int32_t attribute) {
    return QCoreApplication_TestAttribute(attribute);
}

void q_coreapplication_set_organization_domain(const char* orgDomain) {
    QCoreApplication_SetOrganizationDomain(qstring(orgDomain));
}

const char* q_coreapplication_organization_domain() {
    libqt_string _str = QCoreApplication_OrganizationDomain();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_coreapplication_set_organization_name(const char* orgName) {
    QCoreApplication_SetOrganizationName(qstring(orgName));
}

const char* q_coreapplication_organization_name() {
    libqt_string _str = QCoreApplication_OrganizationName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_coreapplication_set_application_name(const char* application) {
    QCoreApplication_SetApplicationName(qstring(application));
}

const char* q_coreapplication_application_name() {
    libqt_string _str = QCoreApplication_ApplicationName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_coreapplication_set_application_version(const char* version) {
    QCoreApplication_SetApplicationVersion(qstring(version));
}

const char* q_coreapplication_application_version() {
    libqt_string _str = QCoreApplication_ApplicationVersion();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_coreapplication_set_setuid_allowed(bool allow) {
    QCoreApplication_SetSetuidAllowed(allow);
}

bool q_coreapplication_is_setuid_allowed() {
    return QCoreApplication_IsSetuidAllowed();
}

QCoreApplication* q_coreapplication_instance() {
    return QCoreApplication_Instance();
}

int32_t q_coreapplication_exec() {
    return QCoreApplication_Exec();
}

void q_coreapplication_process_events() {
    QCoreApplication_ProcessEvents();
}

void q_coreapplication_process_events2(int32_t flags, int maxtime) {
    QCoreApplication_ProcessEvents2(flags, maxtime);
}

void q_coreapplication_process_events3(int32_t flags, void* deadline) {
    QCoreApplication_ProcessEvents3(flags, (QDeadlineTimer*)deadline);
}

bool q_coreapplication_send_event(void* receiver, void* event) {
    return QCoreApplication_SendEvent((QObject*)receiver, (QEvent*)event);
}

void q_coreapplication_post_event(void* receiver, void* event) {
    QCoreApplication_PostEvent((QObject*)receiver, (QEvent*)event);
}

void q_coreapplication_send_posted_events() {
    QCoreApplication_SendPostedEvents();
}

void q_coreapplication_remove_posted_events(void* receiver) {
    QCoreApplication_RemovePostedEvents((QObject*)receiver);
}

QAbstractEventDispatcher* q_coreapplication_event_dispatcher() {
    return QCoreApplication_EventDispatcher();
}

void q_coreapplication_set_event_dispatcher(void* eventDispatcher) {
    QCoreApplication_SetEventDispatcher((QAbstractEventDispatcher*)eventDispatcher);
}

bool q_coreapplication_notify(void* self, void* param1, void* param2) {
    return QCoreApplication_Notify((QCoreApplication*)self, (QObject*)param1, (QEvent*)param2);
}

void q_coreapplication_on_notify(void* self, bool (*callback)(void*, void*, void*)) {
    QCoreApplication_OnNotify((QCoreApplication*)self, (intptr_t)callback);
}

bool q_coreapplication_qbase_notify(void* self, void* param1, void* param2) {
    return QCoreApplication_QBaseNotify((QCoreApplication*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_coreapplication_starting_up() {
    return QCoreApplication_StartingUp();
}

bool q_coreapplication_closing_down() {
    return QCoreApplication_ClosingDown();
}

const char* q_coreapplication_application_dir_path() {
    libqt_string _str = QCoreApplication_ApplicationDirPath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_coreapplication_application_file_path() {
    libqt_string _str = QCoreApplication_ApplicationFilePath();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long q_coreapplication_application_pid() {
    return QCoreApplication_ApplicationPid();
}

int32_t q_coreapplication_check_permission(void* self, void* permission) {
    return QCoreApplication_CheckPermission((QCoreApplication*)self, (QPermission*)permission);
}

void q_coreapplication_set_library_paths(const char* libraryPaths[static 1]) {
    size_t libraryPaths_len = libqt_strv_length(libraryPaths);
    libqt_string* libraryPaths_qstr = (libqt_string*)malloc(libraryPaths_len * sizeof(libqt_string));
    if (libraryPaths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_coreapplication_set_library_paths\n");
        abort();
    }
    for (size_t i = 0; i < libraryPaths_len; ++i) {
        libraryPaths_qstr[i] = qstring(libraryPaths[i]);
    }
    libqt_list libraryPaths_list = qlist(libraryPaths_qstr, libraryPaths_len);
    QCoreApplication_SetLibraryPaths(libraryPaths_list);
    free(libraryPaths_qstr);
}

const char** q_coreapplication_library_paths() {
    libqt_list _arr = QCoreApplication_LibraryPaths();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_coreapplication_library_paths\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_coreapplication_add_library_path(const char* param1) {
    QCoreApplication_AddLibraryPath(qstring(param1));
}

void q_coreapplication_remove_library_path(const char* param1) {
    QCoreApplication_RemoveLibraryPath(qstring(param1));
}

bool q_coreapplication_install_translator(void* messageFile) {
    return QCoreApplication_InstallTranslator((QTranslator*)messageFile);
}

bool q_coreapplication_remove_translator(void* messageFile) {
    return QCoreApplication_RemoveTranslator((QTranslator*)messageFile);
}

const char* q_coreapplication_translate(const char* context, const char* key) {
    libqt_string _str = QCoreApplication_Translate(context, key);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void* q_coreapplication_resolve_interface(void* self, const char* name, int revision) {
    return QCoreApplication_ResolveInterface((QCoreApplication*)self, name, revision);
}

void q_coreapplication_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int)) {
    QCoreApplication_OnResolveInterface((QCoreApplication*)self, (intptr_t)callback);
}

void* q_coreapplication_qbase_resolve_interface(void* self, const char* name, int revision) {
    return QCoreApplication_QBaseResolveInterface((QCoreApplication*)self, name, revision);
}

void q_coreapplication_install_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_InstallNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

void q_coreapplication_on_install_native_event_filter(void* self, void (*callback)(void*, void*)) {
    QCoreApplication_Connect_InstallNativeEventFilter((QCoreApplication*)self, (intptr_t)callback);
}

void q_coreapplication_remove_native_event_filter(void* self, void* filterObj) {
    QCoreApplication_RemoveNativeEventFilter((QCoreApplication*)self, (QAbstractNativeEventFilter*)filterObj);
}

void q_coreapplication_on_remove_native_event_filter(void* self, void (*callback)(void*, void*)) {
    QCoreApplication_Connect_RemoveNativeEventFilter((QCoreApplication*)self, (intptr_t)callback);
}

bool q_coreapplication_is_quit_lock_enabled() {
    return QCoreApplication_IsQuitLockEnabled();
}

void q_coreapplication_set_quit_lock_enabled(bool enabled) {
    QCoreApplication_SetQuitLockEnabled(enabled);
}

void q_coreapplication_quit() {
    QCoreApplication_Quit();
}

void q_coreapplication_exit() {
    QCoreApplication_Exit();
}

void q_coreapplication_organization_name_changed(void* self) {
    QCoreApplication_OrganizationNameChanged((QCoreApplication*)self);
}

void q_coreapplication_on_organization_name_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_OrganizationNameChanged((QCoreApplication*)self, (intptr_t)callback);
}

void q_coreapplication_organization_domain_changed(void* self) {
    QCoreApplication_OrganizationDomainChanged((QCoreApplication*)self);
}

void q_coreapplication_on_organization_domain_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_OrganizationDomainChanged((QCoreApplication*)self, (intptr_t)callback);
}

void q_coreapplication_application_name_changed(void* self) {
    QCoreApplication_ApplicationNameChanged((QCoreApplication*)self);
}

void q_coreapplication_on_application_name_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_ApplicationNameChanged((QCoreApplication*)self, (intptr_t)callback);
}

void q_coreapplication_application_version_changed(void* self) {
    QCoreApplication_ApplicationVersionChanged((QCoreApplication*)self);
}

void q_coreapplication_on_application_version_changed(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_ApplicationVersionChanged((QCoreApplication*)self, (intptr_t)callback);
}

bool q_coreapplication_event(void* self, void* param1) {
    return QCoreApplication_Event((QCoreApplication*)self, (QEvent*)param1);
}

void q_coreapplication_on_event(void* self, bool (*callback)(void*, void*)) {
    QCoreApplication_OnEvent((QCoreApplication*)self, (intptr_t)callback);
}

bool q_coreapplication_qbase_event(void* self, void* param1) {
    return QCoreApplication_QBaseEvent((QCoreApplication*)self, (QEvent*)param1);
}

const char* q_coreapplication_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_coreapplication_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_coreapplication_set_attribute2(int32_t attribute, bool on) {
    QCoreApplication_SetAttribute2(attribute, on);
}

void q_coreapplication_process_events1(int32_t flags) {
    QCoreApplication_ProcessEvents1(flags);
}

void q_coreapplication_post_event3(void* receiver, void* event, int priority) {
    QCoreApplication_PostEvent3((QObject*)receiver, (QEvent*)event, priority);
}

void q_coreapplication_send_posted_events1(void* receiver) {
    QCoreApplication_SendPostedEvents1((QObject*)receiver);
}

void q_coreapplication_send_posted_events2(void* receiver, int event_type) {
    QCoreApplication_SendPostedEvents2((QObject*)receiver, event_type);
}

void q_coreapplication_remove_posted_events2(void* receiver, int eventType) {
    QCoreApplication_RemovePostedEvents2((QObject*)receiver, eventType);
}

const char* q_coreapplication_translate3(const char* context, const char* key, const char* disambiguation) {
    libqt_string _str = QCoreApplication_Translate3(context, key, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_coreapplication_translate4(const char* context, const char* key, const char* disambiguation, int n) {
    libqt_string _str = QCoreApplication_Translate4(context, key, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_coreapplication_exit1(int retcode) {
    QCoreApplication_Exit1(retcode);
}

const char* q_coreapplication_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_coreapplication_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_coreapplication_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_coreapplication_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_coreapplication_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_coreapplication_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_coreapplication_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_coreapplication_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_coreapplication_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_coreapplication_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_coreapplication_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_coreapplication_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_coreapplication_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_coreapplication_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_coreapplication_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_coreapplication_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_coreapplication_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_coreapplication_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_coreapplication_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_coreapplication_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_coreapplication_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_coreapplication_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_coreapplication_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_coreapplication_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_coreapplication_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_coreapplication_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_coreapplication_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_coreapplication_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_coreapplication_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_coreapplication_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_coreapplication_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_coreapplication_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_coreapplication_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_coreapplication_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_coreapplication_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_coreapplication_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_coreapplication_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_coreapplication_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_coreapplication_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_coreapplication_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_coreapplication_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_coreapplication_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_coreapplication_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_coreapplication_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_coreapplication_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_coreapplication_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_coreapplication_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_coreapplication_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_coreapplication_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_coreapplication_event_filter(void* self, void* watched, void* event) {
    return QCoreApplication_EventFilter((QCoreApplication*)self, (QObject*)watched, (QEvent*)event);
}

bool q_coreapplication_qbase_event_filter(void* self, void* watched, void* event) {
    return QCoreApplication_QBaseEventFilter((QCoreApplication*)self, (QObject*)watched, (QEvent*)event);
}

void q_coreapplication_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QCoreApplication_OnEventFilter((QCoreApplication*)self, (intptr_t)callback);
}

void q_coreapplication_timer_event(void* self, void* event) {
    QCoreApplication_TimerEvent((QCoreApplication*)self, (QTimerEvent*)event);
}

void q_coreapplication_qbase_timer_event(void* self, void* event) {
    QCoreApplication_QBaseTimerEvent((QCoreApplication*)self, (QTimerEvent*)event);
}

void q_coreapplication_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QCoreApplication_OnTimerEvent((QCoreApplication*)self, (intptr_t)callback);
}

void q_coreapplication_child_event(void* self, void* event) {
    QCoreApplication_ChildEvent((QCoreApplication*)self, (QChildEvent*)event);
}

void q_coreapplication_qbase_child_event(void* self, void* event) {
    QCoreApplication_QBaseChildEvent((QCoreApplication*)self, (QChildEvent*)event);
}

void q_coreapplication_on_child_event(void* self, void (*callback)(void*, void*)) {
    QCoreApplication_OnChildEvent((QCoreApplication*)self, (intptr_t)callback);
}

void q_coreapplication_custom_event(void* self, void* event) {
    QCoreApplication_CustomEvent((QCoreApplication*)self, (QEvent*)event);
}

void q_coreapplication_qbase_custom_event(void* self, void* event) {
    QCoreApplication_QBaseCustomEvent((QCoreApplication*)self, (QEvent*)event);
}

void q_coreapplication_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QCoreApplication_OnCustomEvent((QCoreApplication*)self, (intptr_t)callback);
}

void q_coreapplication_connect_notify(void* self, void* signal) {
    QCoreApplication_ConnectNotify((QCoreApplication*)self, (QMetaMethod*)signal);
}

void q_coreapplication_qbase_connect_notify(void* self, void* signal) {
    QCoreApplication_QBaseConnectNotify((QCoreApplication*)self, (QMetaMethod*)signal);
}

void q_coreapplication_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QCoreApplication_OnConnectNotify((QCoreApplication*)self, (intptr_t)callback);
}

void q_coreapplication_disconnect_notify(void* self, void* signal) {
    QCoreApplication_DisconnectNotify((QCoreApplication*)self, (QMetaMethod*)signal);
}

void q_coreapplication_qbase_disconnect_notify(void* self, void* signal) {
    QCoreApplication_QBaseDisconnectNotify((QCoreApplication*)self, (QMetaMethod*)signal);
}

void q_coreapplication_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QCoreApplication_OnDisconnectNotify((QCoreApplication*)self, (intptr_t)callback);
}

QObject* q_coreapplication_sender(void* self) {
    return QCoreApplication_Sender((QCoreApplication*)self);
}

QObject* q_coreapplication_qbase_sender(void* self) {
    return QCoreApplication_QBaseSender((QCoreApplication*)self);
}

void q_coreapplication_on_sender(void* self, QObject* (*callback)()) {
    QCoreApplication_OnSender((QCoreApplication*)self, (intptr_t)callback);
}

int32_t q_coreapplication_sender_signal_index(void* self) {
    return QCoreApplication_SenderSignalIndex((QCoreApplication*)self);
}

int32_t q_coreapplication_qbase_sender_signal_index(void* self) {
    return QCoreApplication_QBaseSenderSignalIndex((QCoreApplication*)self);
}

void q_coreapplication_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QCoreApplication_OnSenderSignalIndex((QCoreApplication*)self, (intptr_t)callback);
}

int32_t q_coreapplication_receivers(void* self, const char* signal) {
    return QCoreApplication_Receivers((QCoreApplication*)self, signal);
}

int32_t q_coreapplication_qbase_receivers(void* self, const char* signal) {
    return QCoreApplication_QBaseReceivers((QCoreApplication*)self, signal);
}

void q_coreapplication_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QCoreApplication_OnReceivers((QCoreApplication*)self, (intptr_t)callback);
}

bool q_coreapplication_is_signal_connected(void* self, void* signal) {
    return QCoreApplication_IsSignalConnected((QCoreApplication*)self, (QMetaMethod*)signal);
}

bool q_coreapplication_qbase_is_signal_connected(void* self, void* signal) {
    return QCoreApplication_QBaseIsSignalConnected((QCoreApplication*)self, (QMetaMethod*)signal);
}

void q_coreapplication_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QCoreApplication_OnIsSignalConnected((QCoreApplication*)self, (intptr_t)callback);
}

void q_coreapplication_on_about_to_quit(void* self, void (*callback)(void*)) {
    QCoreApplication_Connect_AboutToQuit((QCoreApplication*)self, (intptr_t)callback);
}

void q_coreapplication_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_coreapplication_delete(void* self) {
    QCoreApplication_Delete((QCoreApplication*)(self));
}
