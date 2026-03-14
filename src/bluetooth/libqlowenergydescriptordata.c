#include "libqbluetoothuuid.hpp"
#include "libqlowenergydescriptordata.hpp"
#include "libqlowenergydescriptordata.h"

QLowEnergyDescriptorData* q_lowenergydescriptordata_new() {
    return QLowEnergyDescriptorData_new();
}

QLowEnergyDescriptorData* q_lowenergydescriptordata_new2(void* uuid, char* value) {
    return QLowEnergyDescriptorData_new2((QBluetoothUuid*)uuid, qstring(value));
}

QLowEnergyDescriptorData* q_lowenergydescriptordata_new3(void* other) {
    return QLowEnergyDescriptorData_new3((QLowEnergyDescriptorData*)other);
}

void q_lowenergydescriptordata_operator_assign(void* self, void* other) {
    QLowEnergyDescriptorData_OperatorAssign((QLowEnergyDescriptorData*)self, (QLowEnergyDescriptorData*)other);
}

char* q_lowenergydescriptordata_value(void* self) {
    libqt_string _str = QLowEnergyDescriptorData_Value((QLowEnergyDescriptorData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lowenergydescriptordata_set_value(void* self, char* value) {
    QLowEnergyDescriptorData_SetValue((QLowEnergyDescriptorData*)self, qstring(value));
}

QBluetoothUuid* q_lowenergydescriptordata_uuid(void* self) {
    return QLowEnergyDescriptorData_Uuid((QLowEnergyDescriptorData*)self);
}

void q_lowenergydescriptordata_set_uuid(void* self, void* uuid) {
    QLowEnergyDescriptorData_SetUuid((QLowEnergyDescriptorData*)self, (QBluetoothUuid*)uuid);
}

bool q_lowenergydescriptordata_is_valid(void* self) {
    return QLowEnergyDescriptorData_IsValid((QLowEnergyDescriptorData*)self);
}

void q_lowenergydescriptordata_set_read_permissions(void* self, bool readable) {
    QLowEnergyDescriptorData_SetReadPermissions((QLowEnergyDescriptorData*)self, readable);
}

bool q_lowenergydescriptordata_is_readable(void* self) {
    return QLowEnergyDescriptorData_IsReadable((QLowEnergyDescriptorData*)self);
}

int32_t q_lowenergydescriptordata_read_constraints(void* self) {
    return QLowEnergyDescriptorData_ReadConstraints((QLowEnergyDescriptorData*)self);
}

void q_lowenergydescriptordata_set_write_permissions(void* self, bool writable) {
    QLowEnergyDescriptorData_SetWritePermissions((QLowEnergyDescriptorData*)self, writable);
}

bool q_lowenergydescriptordata_is_writable(void* self) {
    return QLowEnergyDescriptorData_IsWritable((QLowEnergyDescriptorData*)self);
}

int32_t q_lowenergydescriptordata_write_constraints(void* self) {
    return QLowEnergyDescriptorData_WriteConstraints((QLowEnergyDescriptorData*)self);
}

void q_lowenergydescriptordata_swap(void* self, void* other) {
    QLowEnergyDescriptorData_Swap((QLowEnergyDescriptorData*)self, (QLowEnergyDescriptorData*)other);
}

void q_lowenergydescriptordata_set_read_permissions2(void* self, bool readable, int32_t constraints) {
    QLowEnergyDescriptorData_SetReadPermissions2((QLowEnergyDescriptorData*)self, readable, constraints);
}

void q_lowenergydescriptordata_set_write_permissions2(void* self, bool writable, int32_t constraints) {
    QLowEnergyDescriptorData_SetWritePermissions2((QLowEnergyDescriptorData*)self, writable, constraints);
}

void q_lowenergydescriptordata_delete(void* self) {
    QLowEnergyDescriptorData_Delete((QLowEnergyDescriptorData*)(self));
}
