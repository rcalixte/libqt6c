#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libaskuseractioninterface.hpp"
#include "libaskuseractioninterface.h"

const QMetaObject* k_io__askuseractioninterface_meta_object(const void* self) {
    return KIO__AskUserActionInterface_MetaObject((KIO__AskUserActionInterface*)self);
}

void* k_io__askuseractioninterface_metacast(void* self, const char* param1) {
    return KIO__AskUserActionInterface_Metacast((KIO__AskUserActionInterface*)self, param1);
}

int32_t k_io__askuseractioninterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__AskUserActionInterface_Metacall((KIO__AskUserActionInterface*)self, param1, param2, param3);
}

const char* k_io__askuseractioninterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__askuseractioninterface_ask_user_rename_result(void* self, int32_t result, const void* newUrl, void* parentJob) {
    KIO__AskUserActionInterface_AskUserRenameResult((KIO__AskUserActionInterface*)self, result, (QUrl*)newUrl, (KJob*)parentJob);
}

void k_io__askuseractioninterface_on_ask_user_rename_result(void* self, void (*callback)(void*, int32_t, const void*, void*)) {
    KIO__AskUserActionInterface_Connect_AskUserRenameResult((KIO__AskUserActionInterface*)self, (intptr_t)callback);
}

void k_io__askuseractioninterface_ask_user_skip_result(void* self, int32_t result, void* parentJob) {
    KIO__AskUserActionInterface_AskUserSkipResult((KIO__AskUserActionInterface*)self, result, (KJob*)parentJob);
}

void k_io__askuseractioninterface_on_ask_user_skip_result(void* self, void (*callback)(void*, int32_t, void*)) {
    KIO__AskUserActionInterface_Connect_AskUserSkipResult((KIO__AskUserActionInterface*)self, (intptr_t)callback);
}

void k_io__askuseractioninterface_ask_user_delete_result(void* self, bool allowDelete, libqt_list /* of QUrl* */ urls, int32_t deletionType, void* parent) {
    KIO__AskUserActionInterface_AskUserDeleteResult((KIO__AskUserActionInterface*)self, allowDelete, urls, deletionType, (QWidget*)parent);
}

void k_io__askuseractioninterface_on_ask_user_delete_result(void* self, void (*callback)(void*, bool, libqt_list /* of QUrl* */, int32_t, void*)) {
    KIO__AskUserActionInterface_Connect_AskUserDeleteResult((KIO__AskUserActionInterface*)self, (intptr_t)callback);
}

void k_io__askuseractioninterface_message_box_result(void* self, int result) {
    KIO__AskUserActionInterface_MessageBoxResult((KIO__AskUserActionInterface*)self, result);
}

void k_io__askuseractioninterface_on_message_box_result(void* self, void (*callback)(void*, int)) {
    KIO__AskUserActionInterface_Connect_MessageBoxResult((KIO__AskUserActionInterface*)self, (intptr_t)callback);
}

void k_io__askuseractioninterface_ask_ignore_ssl_errors_result(void* self, int result) {
    KIO__AskUserActionInterface_AskIgnoreSslErrorsResult((KIO__AskUserActionInterface*)self, result);
}

void k_io__askuseractioninterface_on_ask_ignore_ssl_errors_result(void* self, void (*callback)(void*, int)) {
    KIO__AskUserActionInterface_Connect_AskIgnoreSslErrorsResult((KIO__AskUserActionInterface*)self, (intptr_t)callback);
}

const char* k_io__askuseractioninterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__askuseractioninterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_io__askuseractioninterface_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_io__askuseractioninterface_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_io__askuseractioninterface_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__askuseractioninterface_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__askuseractioninterface_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__askuseractioninterface_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__askuseractioninterface_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__askuseractioninterface_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__askuseractioninterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__askuseractioninterface_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__askuseractioninterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__askuseractioninterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_io__askuseractioninterface_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_io__askuseractioninterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__askuseractioninterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__askuseractioninterface_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__askuseractioninterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__askuseractioninterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__askuseractioninterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__askuseractioninterface_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_io__askuseractioninterface_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__askuseractioninterface_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__askuseractioninterface_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_io__askuseractioninterface_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__askuseractioninterface_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_io__askuseractioninterface_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_io__askuseractioninterface_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_io__askuseractioninterface_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__askuseractioninterface_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__askuseractioninterface_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__askuseractioninterface_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__askuseractioninterface_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__askuseractioninterface_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_io__askuseractioninterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__askuseractioninterface_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__askuseractioninterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__askuseractioninterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__askuseractioninterface_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__askuseractioninterface_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__askuseractioninterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_io__askuseractioninterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_io__askuseractioninterface_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_io__askuseractioninterface_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_io__askuseractioninterface_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__askuseractioninterface_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_io__askuseractioninterface_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_io__askuseractioninterface_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_io__askuseractioninterface_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_io__askuseractioninterface_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_io__askuseractioninterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__askuseractioninterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_io__askuseractioninterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_io__askuseractioninterface_delete(void* self) {
    KIO__AskUserActionInterface_Delete((KIO__AskUserActionInterface*)(self));
}
