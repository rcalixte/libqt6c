#include "libaskuseractioninterface.hpp"
#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libwidgetsaskuseractionhandler.hpp"
#include "libwidgetsaskuseractionhandler.h"

KIO__WidgetsAskUserActionHandler* k_io__widgetsaskuseractionhandler_new() {
    return KIO__WidgetsAskUserActionHandler_new();
}

KIO__WidgetsAskUserActionHandler* k_io__widgetsaskuseractionhandler_new2(void* parent) {
    return KIO__WidgetsAskUserActionHandler_new2((QObject*)parent);
}

const QMetaObject* k_io__widgetsaskuseractionhandler_meta_object(void* self) {
    return KIO__WidgetsAskUserActionHandler_MetaObject((KIO__WidgetsAskUserActionHandler*)self);
}

void* k_io__widgetsaskuseractionhandler_metacast(void* self, const char* param1) {
    return KIO__WidgetsAskUserActionHandler_Metacast((KIO__WidgetsAskUserActionHandler*)self, param1);
}

int32_t k_io__widgetsaskuseractionhandler_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__WidgetsAskUserActionHandler_Metacall((KIO__WidgetsAskUserActionHandler*)self, param1, param2, param3);
}

void k_io__widgetsaskuseractionhandler_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIO__WidgetsAskUserActionHandler_OnMetacall((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

int32_t k_io__widgetsaskuseractionhandler_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__WidgetsAskUserActionHandler_QBaseMetacall((KIO__WidgetsAskUserActionHandler*)self, param1, param2, param3);
}

const char* k_io__widgetsaskuseractionhandler_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__widgetsaskuseractionhandler_ask_user_rename(void* self, void* job, const char* title, void* src, void* dest, int32_t options, uint64_t sizeSrc, uint64_t sizeDest, void* ctimeSrc, void* ctimeDest, void* mtimeSrc, void* mtimeDest) {
    KIO__WidgetsAskUserActionHandler_AskUserRename((KIO__WidgetsAskUserActionHandler*)self, (KJob*)job, qstring(title), (QUrl*)src, (QUrl*)dest, options, sizeSrc, sizeDest, (QDateTime*)ctimeSrc, (QDateTime*)ctimeDest, (QDateTime*)mtimeSrc, (QDateTime*)mtimeDest);
}

void k_io__widgetsaskuseractionhandler_on_ask_user_rename(void* self, void (*callback)(void*, void*, const char*, void*, void*, int32_t, uint64_t, uint64_t, void*, void*, void*, void*)) {
    KIO__WidgetsAskUserActionHandler_OnAskUserRename((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_qbase_ask_user_rename(void* self, void* job, const char* title, void* src, void* dest, int32_t options, uint64_t sizeSrc, uint64_t sizeDest, void* ctimeSrc, void* ctimeDest, void* mtimeSrc, void* mtimeDest) {
    KIO__WidgetsAskUserActionHandler_QBaseAskUserRename((KIO__WidgetsAskUserActionHandler*)self, (KJob*)job, qstring(title), (QUrl*)src, (QUrl*)dest, options, sizeSrc, sizeDest, (QDateTime*)ctimeSrc, (QDateTime*)ctimeDest, (QDateTime*)mtimeSrc, (QDateTime*)mtimeDest);
}

void k_io__widgetsaskuseractionhandler_ask_user_skip(void* self, void* job, int32_t options, const char* error_text) {
    KIO__WidgetsAskUserActionHandler_AskUserSkip((KIO__WidgetsAskUserActionHandler*)self, (KJob*)job, options, qstring(error_text));
}

void k_io__widgetsaskuseractionhandler_on_ask_user_skip(void* self, void (*callback)(void*, void*, int32_t, const char*)) {
    KIO__WidgetsAskUserActionHandler_OnAskUserSkip((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_qbase_ask_user_skip(void* self, void* job, int32_t options, const char* error_text) {
    KIO__WidgetsAskUserActionHandler_QBaseAskUserSkip((KIO__WidgetsAskUserActionHandler*)self, (KJob*)job, options, qstring(error_text));
}

void k_io__widgetsaskuseractionhandler_ask_user_delete(void* self, libqt_list urls, int32_t deletionType, int32_t confirmationType, void* parent) {
    KIO__WidgetsAskUserActionHandler_AskUserDelete((KIO__WidgetsAskUserActionHandler*)self, urls, deletionType, confirmationType, (QWidget*)parent);
}

void k_io__widgetsaskuseractionhandler_on_ask_user_delete(void* self, void (*callback)(void*, QUrl**, int32_t, int32_t, void*)) {
    KIO__WidgetsAskUserActionHandler_OnAskUserDelete((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_qbase_ask_user_delete(void* self, libqt_list urls, int32_t deletionType, int32_t confirmationType, void* parent) {
    KIO__WidgetsAskUserActionHandler_QBaseAskUserDelete((KIO__WidgetsAskUserActionHandler*)self, urls, deletionType, confirmationType, (QWidget*)parent);
}

void k_io__widgetsaskuseractionhandler_request_user_message_box(void* self, int32_t type, const char* text, const char* title, const char* primaryActionText, const char* secondaryActionText, const char* primaryActionIconName, const char* secondaryActionIconName, const char* dontAskAgainName, const char* details, void* parent) {
    KIO__WidgetsAskUserActionHandler_RequestUserMessageBox((KIO__WidgetsAskUserActionHandler*)self, type, qstring(text), qstring(title), qstring(primaryActionText), qstring(secondaryActionText), qstring(primaryActionIconName), qstring(secondaryActionIconName), qstring(dontAskAgainName), qstring(details), (QWidget*)parent);
}

void k_io__widgetsaskuseractionhandler_on_request_user_message_box(void* self, void (*callback)(void*, int32_t, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, void*)) {
    KIO__WidgetsAskUserActionHandler_OnRequestUserMessageBox((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_qbase_request_user_message_box(void* self, int32_t type, const char* text, const char* title, const char* primaryActionText, const char* secondaryActionText, const char* primaryActionIconName, const char* secondaryActionIconName, const char* dontAskAgainName, const char* details, void* parent) {
    KIO__WidgetsAskUserActionHandler_QBaseRequestUserMessageBox((KIO__WidgetsAskUserActionHandler*)self, type, qstring(text), qstring(title), qstring(primaryActionText), qstring(secondaryActionText), qstring(primaryActionIconName), qstring(secondaryActionIconName), qstring(dontAskAgainName), qstring(details), (QWidget*)parent);
}

void k_io__widgetsaskuseractionhandler_ask_ignore_ssl_errors(void* self, libqt_map /* of const char* to QVariant* */ sslErrorData, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map sslErrorData_ret;
    sslErrorData_ret.len = sslErrorData.len;
    sslErrorData_ret.keys = malloc(sslErrorData_ret.len * sizeof(libqt_string));
    if (sslErrorData_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    sslErrorData_ret.values = malloc(sslErrorData_ret.len * sizeof(QVariant*));
    if (sslErrorData_ret.values == NULL) {
        free(sslErrorData_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** sslErrorData_karr = (const char**)sslErrorData.keys;
    libqt_string* sslErrorData_kdest = (libqt_string*)sslErrorData_ret.keys;
    QVariant** sslErrorData_varr = (QVariant**)sslErrorData.values;
    QVariant** sslErrorData_vdest = (QVariant**)sslErrorData_ret.values;
    for (size_t i = 0; i < sslErrorData_ret.len; ++i) {
        sslErrorData_kdest[i] = qstring(sslErrorData_karr[i]);
        sslErrorData_vdest[i] = sslErrorData_varr[i];
    }
    KIO__WidgetsAskUserActionHandler_AskIgnoreSslErrors((KIO__WidgetsAskUserActionHandler*)self, sslErrorData_ret, (QWidget*)parent);
    libqt_free(sslErrorData_ret.keys);
    libqt_free(sslErrorData_ret.values);
}

void k_io__widgetsaskuseractionhandler_on_ask_ignore_ssl_errors(void* self, void (*callback)(void*, libqt_map /* of const char* to QVariant* */, void*)) {
    KIO__WidgetsAskUserActionHandler_OnAskIgnoreSslErrors((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_qbase_ask_ignore_ssl_errors(void* self, libqt_map /* of const char* to QVariant* */ sslErrorData, void* parent) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map sslErrorData_ret;
    sslErrorData_ret.len = sslErrorData.len;
    sslErrorData_ret.keys = malloc(sslErrorData_ret.len * sizeof(libqt_string));
    if (sslErrorData_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    sslErrorData_ret.values = malloc(sslErrorData_ret.len * sizeof(QVariant*));
    if (sslErrorData_ret.values == NULL) {
        free(sslErrorData_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** sslErrorData_karr = (const char**)sslErrorData.keys;
    libqt_string* sslErrorData_kdest = (libqt_string*)sslErrorData_ret.keys;
    QVariant** sslErrorData_varr = (QVariant**)sslErrorData.values;
    QVariant** sslErrorData_vdest = (QVariant**)sslErrorData_ret.values;
    for (size_t i = 0; i < sslErrorData_ret.len; ++i) {
        sslErrorData_kdest[i] = qstring(sslErrorData_karr[i]);
        sslErrorData_vdest[i] = sslErrorData_varr[i];
    }
    KIO__WidgetsAskUserActionHandler_QBaseAskIgnoreSslErrors((KIO__WidgetsAskUserActionHandler*)self, sslErrorData_ret, (QWidget*)parent);
}

void k_io__widgetsaskuseractionhandler_set_window(void* self, void* window) {
    KIO__WidgetsAskUserActionHandler_SetWindow((KIO__WidgetsAskUserActionHandler*)self, (QWidget*)window);
}

const char* k_io__widgetsaskuseractionhandler_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__widgetsaskuseractionhandler_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__widgetsaskuseractionhandler_ask_user_rename_result(void* self, int32_t result, void* newUrl, void* parentJob) {
    KIO__AskUserActionInterface_AskUserRenameResult((KIO__AskUserActionInterface*)self, result, (QUrl*)newUrl, (KJob*)parentJob);
}

void k_io__widgetsaskuseractionhandler_on_ask_user_rename_result(void* self, void (*callback)(void*, int32_t, void*, void*)) {
    KIO__AskUserActionInterface_Connect_AskUserRenameResult((KIO__AskUserActionInterface*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_ask_user_skip_result(void* self, int32_t result, void* parentJob) {
    KIO__AskUserActionInterface_AskUserSkipResult((KIO__AskUserActionInterface*)self, result, (KJob*)parentJob);
}

void k_io__widgetsaskuseractionhandler_on_ask_user_skip_result(void* self, void (*callback)(void*, int32_t, void*)) {
    KIO__AskUserActionInterface_Connect_AskUserSkipResult((KIO__AskUserActionInterface*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_ask_user_delete_result(void* self, bool allowDelete, libqt_list urls, int32_t deletionType, void* parent) {
    KIO__AskUserActionInterface_AskUserDeleteResult((KIO__AskUserActionInterface*)self, allowDelete, urls, deletionType, (QWidget*)parent);
}

void k_io__widgetsaskuseractionhandler_on_ask_user_delete_result(void* self, void (*callback)(void*, bool, QUrl**, int32_t, void*)) {
    KIO__AskUserActionInterface_Connect_AskUserDeleteResult((KIO__AskUserActionInterface*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_message_box_result(void* self, int result) {
    KIO__AskUserActionInterface_MessageBoxResult((KIO__AskUserActionInterface*)self, result);
}

void k_io__widgetsaskuseractionhandler_on_message_box_result(void* self, void (*callback)(void*, int)) {
    KIO__AskUserActionInterface_Connect_MessageBoxResult((KIO__AskUserActionInterface*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_ask_ignore_ssl_errors_result(void* self, int result) {
    KIO__AskUserActionInterface_AskIgnoreSslErrorsResult((KIO__AskUserActionInterface*)self, result);
}

void k_io__widgetsaskuseractionhandler_on_ask_ignore_ssl_errors_result(void* self, void (*callback)(void*, int)) {
    KIO__AskUserActionInterface_Connect_AskIgnoreSslErrorsResult((KIO__AskUserActionInterface*)self, (intptr_t)callback);
}

const char* k_io__widgetsaskuseractionhandler_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__widgetsaskuseractionhandler_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__widgetsaskuseractionhandler_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__widgetsaskuseractionhandler_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__widgetsaskuseractionhandler_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__widgetsaskuseractionhandler_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__widgetsaskuseractionhandler_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__widgetsaskuseractionhandler_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__widgetsaskuseractionhandler_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__widgetsaskuseractionhandler_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_io__widgetsaskuseractionhandler_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__widgetsaskuseractionhandler_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__widgetsaskuseractionhandler_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__widgetsaskuseractionhandler_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__widgetsaskuseractionhandler_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__widgetsaskuseractionhandler_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__widgetsaskuseractionhandler_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__widgetsaskuseractionhandler_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__widgetsaskuseractionhandler_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__widgetsaskuseractionhandler_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__widgetsaskuseractionhandler_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__widgetsaskuseractionhandler_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__widgetsaskuseractionhandler_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__widgetsaskuseractionhandler_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__widgetsaskuseractionhandler_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_io__widgetsaskuseractionhandler_dynamic_property_names");
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

QBindingStorage* k_io__widgetsaskuseractionhandler_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__widgetsaskuseractionhandler_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__widgetsaskuseractionhandler_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__widgetsaskuseractionhandler_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__widgetsaskuseractionhandler_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__widgetsaskuseractionhandler_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__widgetsaskuseractionhandler_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__widgetsaskuseractionhandler_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__widgetsaskuseractionhandler_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_io__widgetsaskuseractionhandler_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__widgetsaskuseractionhandler_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_io__widgetsaskuseractionhandler_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__widgetsaskuseractionhandler_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_io__widgetsaskuseractionhandler_event(void* self, void* event) {
    return KIO__WidgetsAskUserActionHandler_Event((KIO__WidgetsAskUserActionHandler*)self, (QEvent*)event);
}

bool k_io__widgetsaskuseractionhandler_qbase_event(void* self, void* event) {
    return KIO__WidgetsAskUserActionHandler_QBaseEvent((KIO__WidgetsAskUserActionHandler*)self, (QEvent*)event);
}

void k_io__widgetsaskuseractionhandler_on_event(void* self, bool (*callback)(void*, void*)) {
    KIO__WidgetsAskUserActionHandler_OnEvent((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

bool k_io__widgetsaskuseractionhandler_event_filter(void* self, void* watched, void* event) {
    return KIO__WidgetsAskUserActionHandler_EventFilter((KIO__WidgetsAskUserActionHandler*)self, (QObject*)watched, (QEvent*)event);
}

bool k_io__widgetsaskuseractionhandler_qbase_event_filter(void* self, void* watched, void* event) {
    return KIO__WidgetsAskUserActionHandler_QBaseEventFilter((KIO__WidgetsAskUserActionHandler*)self, (QObject*)watched, (QEvent*)event);
}

void k_io__widgetsaskuseractionhandler_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIO__WidgetsAskUserActionHandler_OnEventFilter((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_timer_event(void* self, void* event) {
    KIO__WidgetsAskUserActionHandler_TimerEvent((KIO__WidgetsAskUserActionHandler*)self, (QTimerEvent*)event);
}

void k_io__widgetsaskuseractionhandler_qbase_timer_event(void* self, void* event) {
    KIO__WidgetsAskUserActionHandler_QBaseTimerEvent((KIO__WidgetsAskUserActionHandler*)self, (QTimerEvent*)event);
}

void k_io__widgetsaskuseractionhandler_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIO__WidgetsAskUserActionHandler_OnTimerEvent((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_child_event(void* self, void* event) {
    KIO__WidgetsAskUserActionHandler_ChildEvent((KIO__WidgetsAskUserActionHandler*)self, (QChildEvent*)event);
}

void k_io__widgetsaskuseractionhandler_qbase_child_event(void* self, void* event) {
    KIO__WidgetsAskUserActionHandler_QBaseChildEvent((KIO__WidgetsAskUserActionHandler*)self, (QChildEvent*)event);
}

void k_io__widgetsaskuseractionhandler_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIO__WidgetsAskUserActionHandler_OnChildEvent((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_custom_event(void* self, void* event) {
    KIO__WidgetsAskUserActionHandler_CustomEvent((KIO__WidgetsAskUserActionHandler*)self, (QEvent*)event);
}

void k_io__widgetsaskuseractionhandler_qbase_custom_event(void* self, void* event) {
    KIO__WidgetsAskUserActionHandler_QBaseCustomEvent((KIO__WidgetsAskUserActionHandler*)self, (QEvent*)event);
}

void k_io__widgetsaskuseractionhandler_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIO__WidgetsAskUserActionHandler_OnCustomEvent((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_connect_notify(void* self, void* signal) {
    KIO__WidgetsAskUserActionHandler_ConnectNotify((KIO__WidgetsAskUserActionHandler*)self, (QMetaMethod*)signal);
}

void k_io__widgetsaskuseractionhandler_qbase_connect_notify(void* self, void* signal) {
    KIO__WidgetsAskUserActionHandler_QBaseConnectNotify((KIO__WidgetsAskUserActionHandler*)self, (QMetaMethod*)signal);
}

void k_io__widgetsaskuseractionhandler_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__WidgetsAskUserActionHandler_OnConnectNotify((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_disconnect_notify(void* self, void* signal) {
    KIO__WidgetsAskUserActionHandler_DisconnectNotify((KIO__WidgetsAskUserActionHandler*)self, (QMetaMethod*)signal);
}

void k_io__widgetsaskuseractionhandler_qbase_disconnect_notify(void* self, void* signal) {
    KIO__WidgetsAskUserActionHandler_QBaseDisconnectNotify((KIO__WidgetsAskUserActionHandler*)self, (QMetaMethod*)signal);
}

void k_io__widgetsaskuseractionhandler_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIO__WidgetsAskUserActionHandler_OnDisconnectNotify((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

QObject* k_io__widgetsaskuseractionhandler_sender(void* self) {
    return KIO__WidgetsAskUserActionHandler_Sender((KIO__WidgetsAskUserActionHandler*)self);
}

QObject* k_io__widgetsaskuseractionhandler_qbase_sender(void* self) {
    return KIO__WidgetsAskUserActionHandler_QBaseSender((KIO__WidgetsAskUserActionHandler*)self);
}

void k_io__widgetsaskuseractionhandler_on_sender(void* self, QObject* (*callback)()) {
    KIO__WidgetsAskUserActionHandler_OnSender((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

int32_t k_io__widgetsaskuseractionhandler_sender_signal_index(void* self) {
    return KIO__WidgetsAskUserActionHandler_SenderSignalIndex((KIO__WidgetsAskUserActionHandler*)self);
}

int32_t k_io__widgetsaskuseractionhandler_qbase_sender_signal_index(void* self) {
    return KIO__WidgetsAskUserActionHandler_QBaseSenderSignalIndex((KIO__WidgetsAskUserActionHandler*)self);
}

void k_io__widgetsaskuseractionhandler_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIO__WidgetsAskUserActionHandler_OnSenderSignalIndex((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

int32_t k_io__widgetsaskuseractionhandler_receivers(void* self, const char* signal) {
    return KIO__WidgetsAskUserActionHandler_Receivers((KIO__WidgetsAskUserActionHandler*)self, signal);
}

int32_t k_io__widgetsaskuseractionhandler_qbase_receivers(void* self, const char* signal) {
    return KIO__WidgetsAskUserActionHandler_QBaseReceivers((KIO__WidgetsAskUserActionHandler*)self, signal);
}

void k_io__widgetsaskuseractionhandler_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIO__WidgetsAskUserActionHandler_OnReceivers((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

bool k_io__widgetsaskuseractionhandler_is_signal_connected(void* self, void* signal) {
    return KIO__WidgetsAskUserActionHandler_IsSignalConnected((KIO__WidgetsAskUserActionHandler*)self, (QMetaMethod*)signal);
}

bool k_io__widgetsaskuseractionhandler_qbase_is_signal_connected(void* self, void* signal) {
    return KIO__WidgetsAskUserActionHandler_QBaseIsSignalConnected((KIO__WidgetsAskUserActionHandler*)self, (QMetaMethod*)signal);
}

void k_io__widgetsaskuseractionhandler_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIO__WidgetsAskUserActionHandler_OnIsSignalConnected((KIO__WidgetsAskUserActionHandler*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__widgetsaskuseractionhandler_delete(void* self) {
    KIO__WidgetsAskUserActionHandler_Delete((KIO__WidgetsAskUserActionHandler*)(self));
}
