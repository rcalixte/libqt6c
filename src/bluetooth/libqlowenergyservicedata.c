#include "libqbluetoothuuid.hpp"
#include "libqlowenergycharacteristicdata.hpp"
#include "libqlowenergyservice.hpp"
#include "libqlowenergyservicedata.hpp"
#include "libqlowenergyservicedata.h"

QLowEnergyServiceData* q_lowenergyservicedata_new() {
    return QLowEnergyServiceData_New();
}

QLowEnergyServiceData* q_lowenergyservicedata_new2(const void* other) {
    return QLowEnergyServiceData_New2((QLowEnergyServiceData*)other);
}

void q_lowenergyservicedata_operator_assign(void* self, const void* other) {
    QLowEnergyServiceData_OperatorAssign((QLowEnergyServiceData*)self, (QLowEnergyServiceData*)other);
}

int32_t q_lowenergyservicedata_type(const void* self) {
    return QLowEnergyServiceData_Type((QLowEnergyServiceData*)self);
}

void q_lowenergyservicedata_set_type(void* self, int32_t type) {
    QLowEnergyServiceData_SetType((QLowEnergyServiceData*)self, type);
}

QBluetoothUuid* q_lowenergyservicedata_uuid(const void* self) {
    return QLowEnergyServiceData_Uuid((QLowEnergyServiceData*)self);
}

void q_lowenergyservicedata_set_uuid(void* self, const void* uuid) {
    QLowEnergyServiceData_SetUuid((QLowEnergyServiceData*)self, (QBluetoothUuid*)uuid);
}

libqt_list /* of QLowEnergyService* */ q_lowenergyservicedata_included_services(const void* self) {
    libqt_list _arr = QLowEnergyServiceData_IncludedServices((QLowEnergyServiceData*)self);
    return _arr;
}

void q_lowenergyservicedata_set_included_services(void* self, libqt_list /* of QLowEnergyService* */ services) {
    QLowEnergyServiceData_SetIncludedServices((QLowEnergyServiceData*)self, services);
}

void q_lowenergyservicedata_add_included_service(void* self, void* service) {
    QLowEnergyServiceData_AddIncludedService((QLowEnergyServiceData*)self, (QLowEnergyService*)service);
}

libqt_list /* of QLowEnergyCharacteristicData* */ q_lowenergyservicedata_characteristics(const void* self) {
    libqt_list _arr = QLowEnergyServiceData_Characteristics((QLowEnergyServiceData*)self);
    return _arr;
}

void q_lowenergyservicedata_set_characteristics(void* self, libqt_list /* of QLowEnergyCharacteristicData* */ characteristics) {
    QLowEnergyServiceData_SetCharacteristics((QLowEnergyServiceData*)self, characteristics);
}

void q_lowenergyservicedata_add_characteristic(void* self, const void* characteristic) {
    QLowEnergyServiceData_AddCharacteristic((QLowEnergyServiceData*)self, (QLowEnergyCharacteristicData*)characteristic);
}

bool q_lowenergyservicedata_is_valid(const void* self) {
    return QLowEnergyServiceData_IsValid((QLowEnergyServiceData*)self);
}

void q_lowenergyservicedata_swap(void* self, void* other) {
    QLowEnergyServiceData_Swap((QLowEnergyServiceData*)self, (QLowEnergyServiceData*)other);
}

void q_lowenergyservicedata_delete(void* self) {
    QLowEnergyServiceData_Delete((QLowEnergyServiceData*)(self));
}
