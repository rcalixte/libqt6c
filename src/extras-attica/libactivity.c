#include "libperson.hpp"
#include "../libqdatetime.hpp"
#include "../libqurl.hpp"
#include "libactivity.hpp"
#include "libactivity.h"

Attica__Activity* k_attica__activity_new() {
    return Attica__Activity_new();
}

Attica__Activity* k_attica__activity_new2(void* other) {
    return Attica__Activity_new2((Attica__Activity*)other);
}

void k_attica__activity_operator_assign(void* self, void* other) {
    Attica__Activity_OperatorAssign((Attica__Activity*)self, (Attica__Activity*)other);
}

void k_attica__activity_set_id(void* self, const char* id) {
    Attica__Activity_SetId((Attica__Activity*)self, qstring(id));
}

const char* k_attica__activity_id(void* self) {
    libqt_string _str = Attica__Activity_Id((Attica__Activity*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__activity_set_associated_person(void* self, void* associatedPerson) {
    Attica__Activity_SetAssociatedPerson((Attica__Activity*)self, (Attica__Person*)associatedPerson);
}

Attica__Person* k_attica__activity_associated_person(void* self) {
    return Attica__Activity_AssociatedPerson((Attica__Activity*)self);
}

void k_attica__activity_set_timestamp(void* self, void* timestamp) {
    Attica__Activity_SetTimestamp((Attica__Activity*)self, (QDateTime*)timestamp);
}

QDateTime* k_attica__activity_timestamp(void* self) {
    return Attica__Activity_Timestamp((Attica__Activity*)self);
}

void k_attica__activity_set_message(void* self, const char* message) {
    Attica__Activity_SetMessage((Attica__Activity*)self, qstring(message));
}

const char* k_attica__activity_message(void* self) {
    libqt_string _str = Attica__Activity_Message((Attica__Activity*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__activity_set_link(void* self, void* link) {
    Attica__Activity_SetLink((Attica__Activity*)self, (QUrl*)link);
}

QUrl* k_attica__activity_link(void* self) {
    return Attica__Activity_Link((Attica__Activity*)self);
}

bool k_attica__activity_is_valid(void* self) {
    return Attica__Activity_IsValid((Attica__Activity*)self);
}

void k_attica__activity_delete(void* self) {
    Attica__Activity_Delete((Attica__Activity*)(self));
}
