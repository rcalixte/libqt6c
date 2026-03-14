#include "libqbluetoothuuid.hpp"
#include "libqlowenergydescriptordata.hpp"
#include "libqlowenergycharacteristicdata.hpp"
#include "libqlowenergycharacteristicdata.h"

QLowEnergyCharacteristicData* q_lowenergycharacteristicdata_new() {
    return QLowEnergyCharacteristicData_new();
}

QLowEnergyCharacteristicData* q_lowenergycharacteristicdata_new2(void* other) {
    return QLowEnergyCharacteristicData_new2((QLowEnergyCharacteristicData*)other);
}

void q_lowenergycharacteristicdata_operator_assign(void* self, void* other) {
    QLowEnergyCharacteristicData_OperatorAssign((QLowEnergyCharacteristicData*)self, (QLowEnergyCharacteristicData*)other);
}

QBluetoothUuid* q_lowenergycharacteristicdata_uuid(void* self) {
    return QLowEnergyCharacteristicData_Uuid((QLowEnergyCharacteristicData*)self);
}

void q_lowenergycharacteristicdata_set_uuid(void* self, void* uuid) {
    QLowEnergyCharacteristicData_SetUuid((QLowEnergyCharacteristicData*)self, (QBluetoothUuid*)uuid);
}

char* q_lowenergycharacteristicdata_value(void* self) {
    libqt_string _str = QLowEnergyCharacteristicData_Value((QLowEnergyCharacteristicData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lowenergycharacteristicdata_set_value(void* self, char* value) {
    QLowEnergyCharacteristicData_SetValue((QLowEnergyCharacteristicData*)self, qstring(value));
}

int32_t q_lowenergycharacteristicdata_properties(void* self) {
    return QLowEnergyCharacteristicData_Properties((QLowEnergyCharacteristicData*)self);
}

void q_lowenergycharacteristicdata_set_properties(void* self, int32_t properties) {
    QLowEnergyCharacteristicData_SetProperties((QLowEnergyCharacteristicData*)self, properties);
}

libqt_list /* of QLowEnergyDescriptorData* */ q_lowenergycharacteristicdata_descriptors(void* self) {
    libqt_list _arr = QLowEnergyCharacteristicData_Descriptors((QLowEnergyCharacteristicData*)self);
    return _arr;
}

void q_lowenergycharacteristicdata_set_descriptors(void* self, libqt_list /* of QLowEnergyDescriptorData* */ descriptors) {
    QLowEnergyCharacteristicData_SetDescriptors((QLowEnergyCharacteristicData*)self, descriptors);
}

void q_lowenergycharacteristicdata_add_descriptor(void* self, void* descriptor) {
    QLowEnergyCharacteristicData_AddDescriptor((QLowEnergyCharacteristicData*)self, (QLowEnergyDescriptorData*)descriptor);
}

void q_lowenergycharacteristicdata_set_read_constraints(void* self, int32_t constraints) {
    QLowEnergyCharacteristicData_SetReadConstraints((QLowEnergyCharacteristicData*)self, constraints);
}

int32_t q_lowenergycharacteristicdata_read_constraints(void* self) {
    return QLowEnergyCharacteristicData_ReadConstraints((QLowEnergyCharacteristicData*)self);
}

void q_lowenergycharacteristicdata_set_write_constraints(void* self, int32_t constraints) {
    QLowEnergyCharacteristicData_SetWriteConstraints((QLowEnergyCharacteristicData*)self, constraints);
}

int32_t q_lowenergycharacteristicdata_write_constraints(void* self) {
    return QLowEnergyCharacteristicData_WriteConstraints((QLowEnergyCharacteristicData*)self);
}

void q_lowenergycharacteristicdata_set_value_length(void* self, int minimum, int maximum) {
    QLowEnergyCharacteristicData_SetValueLength((QLowEnergyCharacteristicData*)self, minimum, maximum);
}

int32_t q_lowenergycharacteristicdata_minimum_value_length(void* self) {
    return QLowEnergyCharacteristicData_MinimumValueLength((QLowEnergyCharacteristicData*)self);
}

int32_t q_lowenergycharacteristicdata_maximum_value_length(void* self) {
    return QLowEnergyCharacteristicData_MaximumValueLength((QLowEnergyCharacteristicData*)self);
}

bool q_lowenergycharacteristicdata_is_valid(void* self) {
    return QLowEnergyCharacteristicData_IsValid((QLowEnergyCharacteristicData*)self);
}

void q_lowenergycharacteristicdata_swap(void* self, void* other) {
    QLowEnergyCharacteristicData_Swap((QLowEnergyCharacteristicData*)self, (QLowEnergyCharacteristicData*)other);
}

void q_lowenergycharacteristicdata_delete(void* self) {
    QLowEnergyCharacteristicData_Delete((QLowEnergyCharacteristicData*)(self));
}
