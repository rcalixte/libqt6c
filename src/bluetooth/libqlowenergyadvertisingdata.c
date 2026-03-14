#include "libqbluetoothuuid.hpp"
#include "libqlowenergyadvertisingdata.hpp"
#include "libqlowenergyadvertisingdata.h"

QLowEnergyAdvertisingData* q_lowenergyadvertisingdata_new() {
    return QLowEnergyAdvertisingData_new();
}

QLowEnergyAdvertisingData* q_lowenergyadvertisingdata_new2(void* other) {
    return QLowEnergyAdvertisingData_new2((QLowEnergyAdvertisingData*)other);
}

void q_lowenergyadvertisingdata_operator_assign(void* self, void* other) {
    QLowEnergyAdvertisingData_OperatorAssign((QLowEnergyAdvertisingData*)self, (QLowEnergyAdvertisingData*)other);
}

void q_lowenergyadvertisingdata_set_local_name(void* self, const char* name) {
    QLowEnergyAdvertisingData_SetLocalName((QLowEnergyAdvertisingData*)self, qstring(name));
}

const char* q_lowenergyadvertisingdata_local_name(void* self) {
    libqt_string _str = QLowEnergyAdvertisingData_LocalName((QLowEnergyAdvertisingData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

unsigned short q_lowenergyadvertisingdata_invalid_manufacturer_id() {
    return QLowEnergyAdvertisingData_InvalidManufacturerId();
}

void q_lowenergyadvertisingdata_set_manufacturer_data(void* self, unsigned short id, char* data) {
    QLowEnergyAdvertisingData_SetManufacturerData((QLowEnergyAdvertisingData*)self, id, qstring(data));
}

unsigned short q_lowenergyadvertisingdata_manufacturer_id(void* self) {
    return QLowEnergyAdvertisingData_ManufacturerId((QLowEnergyAdvertisingData*)self);
}

char* q_lowenergyadvertisingdata_manufacturer_data(void* self) {
    libqt_string _str = QLowEnergyAdvertisingData_ManufacturerData((QLowEnergyAdvertisingData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lowenergyadvertisingdata_set_include_power_level(void* self, bool doInclude) {
    QLowEnergyAdvertisingData_SetIncludePowerLevel((QLowEnergyAdvertisingData*)self, doInclude);
}

bool q_lowenergyadvertisingdata_include_power_level(void* self) {
    return QLowEnergyAdvertisingData_IncludePowerLevel((QLowEnergyAdvertisingData*)self);
}

void q_lowenergyadvertisingdata_set_discoverability(void* self, int32_t mode) {
    QLowEnergyAdvertisingData_SetDiscoverability((QLowEnergyAdvertisingData*)self, mode);
}

int32_t q_lowenergyadvertisingdata_discoverability(void* self) {
    return QLowEnergyAdvertisingData_Discoverability((QLowEnergyAdvertisingData*)self);
}

void q_lowenergyadvertisingdata_set_services(void* self, libqt_list /* of QBluetoothUuid* */ services) {
    QLowEnergyAdvertisingData_SetServices((QLowEnergyAdvertisingData*)self, services);
}

libqt_list /* of QBluetoothUuid* */ q_lowenergyadvertisingdata_services(void* self) {
    libqt_list _arr = QLowEnergyAdvertisingData_Services((QLowEnergyAdvertisingData*)self);
    return _arr;
}

void q_lowenergyadvertisingdata_set_raw_data(void* self, char* data) {
    QLowEnergyAdvertisingData_SetRawData((QLowEnergyAdvertisingData*)self, qstring(data));
}

char* q_lowenergyadvertisingdata_raw_data(void* self) {
    libqt_string _str = QLowEnergyAdvertisingData_RawData((QLowEnergyAdvertisingData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_lowenergyadvertisingdata_swap(void* self, void* other) {
    QLowEnergyAdvertisingData_Swap((QLowEnergyAdvertisingData*)self, (QLowEnergyAdvertisingData*)other);
}

void q_lowenergyadvertisingdata_delete(void* self) {
    QLowEnergyAdvertisingData_Delete((QLowEnergyAdvertisingData*)(self));
}
