#include "../libqdatetime.hpp"
#include "libmessage.hpp"
#include "libmessage.h"

Attica__Message* k_attica__message_new() {
    return Attica__Message_new();
}

Attica__Message* k_attica__message_new2(void* other) {
    return Attica__Message_new2((Attica__Message*)other);
}

void k_attica__message_operator_assign(void* self, void* other) {
    Attica__Message_OperatorAssign((Attica__Message*)self, (Attica__Message*)other);
}

void k_attica__message_set_id(void* self, const char* id) {
    Attica__Message_SetId((Attica__Message*)self, qstring(id));
}

const char* k_attica__message_id(void* self) {
    libqt_string _str = Attica__Message_Id((Attica__Message*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__message_set_from(void* self, const char* from) {
    Attica__Message_SetFrom((Attica__Message*)self, qstring(from));
}

const char* k_attica__message_from(void* self) {
    libqt_string _str = Attica__Message_From((Attica__Message*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__message_set_to(void* self, const char* to) {
    Attica__Message_SetTo((Attica__Message*)self, qstring(to));
}

const char* k_attica__message_to(void* self) {
    libqt_string _str = Attica__Message_To((Attica__Message*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__message_set_sent(void* self, void* sent) {
    Attica__Message_SetSent((Attica__Message*)self, (QDateTime*)sent);
}

QDateTime* k_attica__message_sent(void* self) {
    return Attica__Message_Sent((Attica__Message*)self);
}

void k_attica__message_set_status(void* self, int32_t status) {
    Attica__Message_SetStatus((Attica__Message*)self, status);
}

int32_t k_attica__message_status(void* self) {
    return Attica__Message_Status((Attica__Message*)self);
}

void k_attica__message_set_subject(void* self, const char* subject) {
    Attica__Message_SetSubject((Attica__Message*)self, qstring(subject));
}

const char* k_attica__message_subject(void* self) {
    libqt_string _str = Attica__Message_Subject((Attica__Message*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__message_set_body(void* self, const char* body) {
    Attica__Message_SetBody((Attica__Message*)self, qstring(body));
}

const char* k_attica__message_body(void* self) {
    libqt_string _str = Attica__Message_Body((Attica__Message*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__message_is_valid(void* self) {
    return Attica__Message_IsValid((Attica__Message*)self);
}

void k_attica__message_delete(void* self) {
    Attica__Message_Delete((Attica__Message*)(self));
}
