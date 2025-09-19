#include "libpublisherfield.hpp"
#include "libpublisherfield.h"

Attica__PublisherField* k_attica__publisherfield_new() {
    return Attica__PublisherField_new();
}

Attica__PublisherField* k_attica__publisherfield_new2(void* other) {
    return Attica__PublisherField_new2((Attica__PublisherField*)other);
}

void k_attica__publisherfield_operator_assign(void* self, void* other) {
    Attica__PublisherField_OperatorAssign((Attica__PublisherField*)self, (Attica__PublisherField*)other);
}

void k_attica__publisherfield_set_name(void* self, const char* value) {
    Attica__PublisherField_SetName((Attica__PublisherField*)self, qstring(value));
}

const char* k_attica__publisherfield_name(void* self) {
    libqt_string _str = Attica__PublisherField_Name((Attica__PublisherField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__publisherfield_set_type(void* self, const char* value) {
    Attica__PublisherField_SetType((Attica__PublisherField*)self, qstring(value));
}

const char* k_attica__publisherfield_type(void* self) {
    libqt_string _str = Attica__PublisherField_Type((Attica__PublisherField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__publisherfield_set_data(void* self, const char* value) {
    Attica__PublisherField_SetData((Attica__PublisherField*)self, qstring(value));
}

const char* k_attica__publisherfield_data(void* self) {
    libqt_string _str = Attica__PublisherField_Data((Attica__PublisherField*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__publisherfield_is_valid(void* self) {
    return Attica__PublisherField_IsValid((Attica__PublisherField*)self);
}

void k_attica__publisherfield_delete(void* self) {
    Attica__PublisherField_Delete((Attica__PublisherField*)(self));
}
