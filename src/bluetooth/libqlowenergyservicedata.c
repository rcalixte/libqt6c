#include "libqbluetoothuuid.hpp"
#include "libqlowenergycharacteristicdata.hpp"
#include "libqlowenergyservice.hpp"
#include "libqlowenergyservicedata.hpp"
#include "libqlowenergyservicedata.h"

QLowEnergyServiceData* q_lowenergyservicedata_new() {
    return QLowEnergyServiceData_new();
}

QLowEnergyServiceData* q_lowenergyservicedata_new2(void* other) {
    return QLowEnergyServiceData_new2((QLowEnergyServiceData*)other);
}

void q_lowenergyservicedata_operator_assign(void* self, void* other) {
    QLowEnergyServiceData_OperatorAssign((QLowEnergyServiceData*)self, (QLowEnergyServiceData*)other);
}

int32_t q_lowenergyservicedata_type(void* self) {
    return QLowEnergyServiceData_Type((QLowEnergyServiceData*)self);
}

void q_lowenergyservicedata_set_type(void* self, int32_t type) {
    QLowEnergyServiceData_SetType((QLowEnergyServiceData*)self, type);
}

QBluetoothUuid* q_lowenergyservicedata_uuid(void* self) {
    return QLowEnergyServiceData_Uuid((QLowEnergyServiceData*)self);
}

void q_lowenergyservicedata_set_uuid(void* self, void* uuid) {
    QLowEnergyServiceData_SetUuid((QLowEnergyServiceData*)self, (QBluetoothUuid*)uuid);
}

libqt_list /* of QLowEnergyService* */ q_lowenergyservicedata_included_services(void* self) {
    libqt_list _arr = QLowEnergyServiceData_IncludedServices((QLowEnergyServiceData*)self);
    return _arr;
}

void q_lowenergyservicedata_set_included_services(void* self, libqt_list /* of QLowEnergyService* */ services) {
    QLowEnergyServiceData_SetIncludedServices((QLowEnergyServiceData*)self, services);
}

void q_lowenergyservicedata_add_included_service(void* self, void* service) {
    QLowEnergyServiceData_AddIncludedService((QLowEnergyServiceData*)self, (QLowEnergyService*)service);
}

libqt_list /* of QLowEnergyCharacteristicData* */ q_lowenergyservicedata_characteristics(void* self) {
    libqt_list _arr = QLowEnergyServiceData_Characteristics((QLowEnergyServiceData*)self);
    return _arr;
}

void q_lowenergyservicedata_set_characteristics(void* self, libqt_list /* of QLowEnergyCharacteristicData* */ characteristics) {
    QLowEnergyServiceData_SetCharacteristics((QLowEnergyServiceData*)self, characteristics);
}

void q_lowenergyservicedata_add_characteristic(void* self, void* characteristic) {
    QLowEnergyServiceData_AddCharacteristic((QLowEnergyServiceData*)self, (QLowEnergyCharacteristicData*)characteristic);
}

bool q_lowenergyservicedata_is_valid(void* self) {
    return QLowEnergyServiceData_IsValid((QLowEnergyServiceData*)self);
}

void q_lowenergyservicedata_swap(void* self, void* other) {
    QLowEnergyServiceData_Swap((QLowEnergyServiceData*)self, (QLowEnergyServiceData*)other);
}

void q_lowenergyservicedata_delete(void* self) {
    QLowEnergyServiceData_Delete((QLowEnergyServiceData*)(self));
}
