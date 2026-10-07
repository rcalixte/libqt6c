#include "libqbluetoothuuid.hpp"
#include "libqlowenergydescriptor.hpp"
#include "libqlowenergydescriptor.h"

QLowEnergyDescriptor* q_lowenergydescriptor_new() {
    return QLowEnergyDescriptor_New();
}

QLowEnergyDescriptor* q_lowenergydescriptor_new2(const void* other) {
    return QLowEnergyDescriptor_New2((QLowEnergyDescriptor*)other);
}

void q_lowenergydescriptor_operator_assign(void* self, const void* other) {
    QLowEnergyDescriptor_OperatorAssign((QLowEnergyDescriptor*)self, (QLowEnergyDescriptor*)other);
}

bool q_lowenergydescriptor_is_valid(const void* self) {
    return QLowEnergyDescriptor_IsValid((QLowEnergyDescriptor*)self);
}

const char* q_lowenergydescriptor_value(const void* self) {
    libqt_string _str = QLowEnergyDescriptor_Value((QLowEnergyDescriptor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QBluetoothUuid* q_lowenergydescriptor_uuid(const void* self) {
    return QLowEnergyDescriptor_Uuid((QLowEnergyDescriptor*)self);
}

const char* q_lowenergydescriptor_name(const void* self) {
    libqt_string _str = QLowEnergyDescriptor_Name((QLowEnergyDescriptor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_lowenergydescriptor_type(const void* self) {
    return QLowEnergyDescriptor_Type((QLowEnergyDescriptor*)self);
}

void q_lowenergydescriptor_delete(void* self) {
    QLowEnergyDescriptor_Delete((QLowEnergyDescriptor*)(self));
}
