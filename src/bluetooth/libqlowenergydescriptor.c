#include "libqbluetoothuuid.hpp"
#include "libqlowenergydescriptor.hpp"
#include "libqlowenergydescriptor.h"

QLowEnergyDescriptor* q_lowenergydescriptor_new() {
    return QLowEnergyDescriptor_new();
}

QLowEnergyDescriptor* q_lowenergydescriptor_new2(void* other) {
    return QLowEnergyDescriptor_new2((QLowEnergyDescriptor*)other);
}

void q_lowenergydescriptor_operator_assign(void* self, void* other) {
    QLowEnergyDescriptor_OperatorAssign((QLowEnergyDescriptor*)self, (QLowEnergyDescriptor*)other);
}

bool q_lowenergydescriptor_is_valid(void* self) {
    return QLowEnergyDescriptor_IsValid((QLowEnergyDescriptor*)self);
}

char* q_lowenergydescriptor_value(void* self) {
    libqt_string _str = QLowEnergyDescriptor_Value((QLowEnergyDescriptor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QBluetoothUuid* q_lowenergydescriptor_uuid(void* self) {
    return QLowEnergyDescriptor_Uuid((QLowEnergyDescriptor*)self);
}

const char* q_lowenergydescriptor_name(void* self) {
    libqt_string _str = QLowEnergyDescriptor_Name((QLowEnergyDescriptor*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_lowenergydescriptor_type(void* self) {
    return QLowEnergyDescriptor_Type((QLowEnergyDescriptor*)self);
}

void q_lowenergydescriptor_delete(void* self) {
    QLowEnergyDescriptor_Delete((QLowEnergyDescriptor*)(self));
}
