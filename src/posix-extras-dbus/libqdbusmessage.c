#include "libqdbuserror.hpp"
#include "../libqvariant.hpp"
#include "libqdbusmessage.hpp"
#include "libqdbusmessage.h"

QDBusMessage* q_dbusmessage_new() {
    return QDBusMessage_new();
}

QDBusMessage* q_dbusmessage_new2(void* other) {
    return QDBusMessage_new2((QDBusMessage*)other);
}

void q_dbusmessage_operator_assign(void* self, void* other) {
    QDBusMessage_OperatorAssign((QDBusMessage*)self, (QDBusMessage*)other);
}

void q_dbusmessage_swap(void* self, void* other) {
    QDBusMessage_Swap((QDBusMessage*)self, (QDBusMessage*)other);
}

QDBusMessage* q_dbusmessage_create_signal(const char* path, const char* interface, const char* name) {
    return QDBusMessage_CreateSignal(qstring(path), qstring(interface), qstring(name));
}

QDBusMessage* q_dbusmessage_create_targeted_signal(const char* service, const char* path, const char* interface, const char* name) {
    return QDBusMessage_CreateTargetedSignal(qstring(service), qstring(path), qstring(interface), qstring(name));
}

QDBusMessage* q_dbusmessage_create_method_call(const char* destination, const char* path, const char* interface, const char* method) {
    return QDBusMessage_CreateMethodCall(qstring(destination), qstring(path), qstring(interface), qstring(method));
}

QDBusMessage* q_dbusmessage_create_error(const char* name, const char* msg) {
    return QDBusMessage_CreateError(qstring(name), qstring(msg));
}

QDBusMessage* q_dbusmessage_create_error2(void* err) {
    return QDBusMessage_CreateError2((QDBusError*)err);
}

QDBusMessage* q_dbusmessage_create_error3(int32_t typeVal, const char* msg) {
    return QDBusMessage_CreateError3(typeVal, qstring(msg));
}

QDBusMessage* q_dbusmessage_create_reply(void* self) {
    return QDBusMessage_CreateReply((QDBusMessage*)self);
}

QDBusMessage* q_dbusmessage_create_reply2(void* self, void* argument) {
    return QDBusMessage_CreateReply2((QDBusMessage*)self, (QVariant*)argument);
}

QDBusMessage* q_dbusmessage_create_error_reply(void* self, const char* name, const char* msg) {
    return QDBusMessage_CreateErrorReply((QDBusMessage*)self, qstring(name), qstring(msg));
}

QDBusMessage* q_dbusmessage_create_error_reply2(void* self, void* err) {
    return QDBusMessage_CreateErrorReply2((QDBusMessage*)self, (QDBusError*)err);
}

QDBusMessage* q_dbusmessage_create_error_reply3(void* self, int32_t typeVal, const char* msg) {
    return QDBusMessage_CreateErrorReply3((QDBusMessage*)self, typeVal, qstring(msg));
}

const char* q_dbusmessage_service(void* self) {
    libqt_string _str = QDBusMessage_Service((QDBusMessage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusmessage_path(void* self) {
    libqt_string _str = QDBusMessage_Path((QDBusMessage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusmessage_interface(void* self) {
    libqt_string _str = QDBusMessage_Interface((QDBusMessage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusmessage_member(void* self) {
    libqt_string _str = QDBusMessage_Member((QDBusMessage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusmessage_error_name(void* self) {
    libqt_string _str = QDBusMessage_ErrorName((QDBusMessage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dbusmessage_error_message(void* self) {
    libqt_string _str = QDBusMessage_ErrorMessage((QDBusMessage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_dbusmessage_type(void* self) {
    return QDBusMessage_Type((QDBusMessage*)self);
}

const char* q_dbusmessage_signature(void* self) {
    libqt_string _str = QDBusMessage_Signature((QDBusMessage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dbusmessage_is_reply_required(void* self) {
    return QDBusMessage_IsReplyRequired((QDBusMessage*)self);
}

void q_dbusmessage_set_delayed_reply(void* self, bool enable) {
    QDBusMessage_SetDelayedReply((QDBusMessage*)self, enable);
}

bool q_dbusmessage_is_delayed_reply(void* self) {
    return QDBusMessage_IsDelayedReply((QDBusMessage*)self);
}

void q_dbusmessage_set_auto_start_service(void* self, bool enable) {
    QDBusMessage_SetAutoStartService((QDBusMessage*)self, enable);
}

bool q_dbusmessage_auto_start_service(void* self) {
    return QDBusMessage_AutoStartService((QDBusMessage*)self);
}

void q_dbusmessage_set_interactive_authorization_allowed(void* self, bool enable) {
    QDBusMessage_SetInteractiveAuthorizationAllowed((QDBusMessage*)self, enable);
}

bool q_dbusmessage_is_interactive_authorization_allowed(void* self) {
    return QDBusMessage_IsInteractiveAuthorizationAllowed((QDBusMessage*)self);
}

void q_dbusmessage_set_arguments(void* self, libqt_list arguments) {
    QDBusMessage_SetArguments((QDBusMessage*)self, arguments);
}

libqt_list /* of QVariant* */ q_dbusmessage_arguments(void* self) {
    libqt_list _arr = QDBusMessage_Arguments((QDBusMessage*)self);
    return _arr;
}

QDBusMessage* q_dbusmessage_operator_shift_left(void* self, void* arg) {
    return QDBusMessage_OperatorShiftLeft((QDBusMessage*)self, (QVariant*)arg);
}

QDBusMessage* q_dbusmessage_create_reply1(void* self, libqt_list arguments) {
    return QDBusMessage_CreateReply1((QDBusMessage*)self, arguments);
}

void q_dbusmessage_delete(void* self) {
    QDBusMessage_Delete((QDBusMessage*)(self));
}
