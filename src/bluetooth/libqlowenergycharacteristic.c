#include "libqbluetoothuuid.hpp"
#include "libqlowenergydescriptor.hpp"
#include "libqlowenergycharacteristic.hpp"
#include "libqlowenergycharacteristic.h"

QLowEnergyCharacteristic* q_lowenergycharacteristic_new() {
    return QLowEnergyCharacteristic_new();
}

QLowEnergyCharacteristic* q_lowenergycharacteristic_new2(void* other) {
    return QLowEnergyCharacteristic_new2((QLowEnergyCharacteristic*)other);
}

void q_lowenergycharacteristic_operator_assign(void* self, void* other) {
    QLowEnergyCharacteristic_OperatorAssign((QLowEnergyCharacteristic*)self, (QLowEnergyCharacteristic*)other);
}

const char* q_lowenergycharacteristic_name(void* self) {
    libqt_string _str = QLowEnergyCharacteristic_Name((QLowEnergyCharacteristic*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QBluetoothUuid* q_lowenergycharacteristic_uuid(void* self) {
    return QLowEnergyCharacteristic_Uuid((QLowEnergyCharacteristic*)self);
}

char* q_lowenergycharacteristic_value(void* self) {
    libqt_string _str = QLowEnergyCharacteristic_Value((QLowEnergyCharacteristic*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_lowenergycharacteristic_properties(void* self) {
    return QLowEnergyCharacteristic_Properties((QLowEnergyCharacteristic*)self);
}

QLowEnergyDescriptor* q_lowenergycharacteristic_descriptor(void* self, void* uuid) {
    return QLowEnergyCharacteristic_Descriptor((QLowEnergyCharacteristic*)self, (QBluetoothUuid*)uuid);
}

libqt_list /* of QLowEnergyDescriptor* */ q_lowenergycharacteristic_descriptors(void* self) {
    libqt_list _arr = QLowEnergyCharacteristic_Descriptors((QLowEnergyCharacteristic*)self);
    return _arr;
}

QLowEnergyDescriptor* q_lowenergycharacteristic_client_characteristic_configuration(void* self) {
    return QLowEnergyCharacteristic_ClientCharacteristicConfiguration((QLowEnergyCharacteristic*)self);
}

bool q_lowenergycharacteristic_is_valid(void* self) {
    return QLowEnergyCharacteristic_IsValid((QLowEnergyCharacteristic*)self);
}

void q_lowenergycharacteristic_delete(void* self) {
    QLowEnergyCharacteristic_Delete((QLowEnergyCharacteristic*)(self));
}
