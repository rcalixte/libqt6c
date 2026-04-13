#include "libqbluetoothaddress.hpp"
#include "libqlowenergyadvertisingparameters.hpp"
#include "libqlowenergyadvertisingparameters.h"

QLowEnergyAdvertisingParameters* q_lowenergyadvertisingparameters_new() {
    return QLowEnergyAdvertisingParameters_new();
}

QLowEnergyAdvertisingParameters* q_lowenergyadvertisingparameters_new2(void* other) {
    return QLowEnergyAdvertisingParameters_new2((QLowEnergyAdvertisingParameters*)other);
}

void q_lowenergyadvertisingparameters_operator_assign(void* self, void* other) {
    QLowEnergyAdvertisingParameters_OperatorAssign((QLowEnergyAdvertisingParameters*)self, (QLowEnergyAdvertisingParameters*)other);
}

void q_lowenergyadvertisingparameters_set_mode(void* self, int32_t mode) {
    QLowEnergyAdvertisingParameters_SetMode((QLowEnergyAdvertisingParameters*)self, mode);
}

int32_t q_lowenergyadvertisingparameters_mode(void* self) {
    return QLowEnergyAdvertisingParameters_Mode((QLowEnergyAdvertisingParameters*)self);
}

void q_lowenergyadvertisingparameters_set_white_list(void* self, libqt_list /* of QLowEnergyAdvertisingParameters__AddressInfo* */ whiteList, int32_t policy) {
    QLowEnergyAdvertisingParameters_SetWhiteList((QLowEnergyAdvertisingParameters*)self, whiteList, policy);
}

libqt_list /* of QLowEnergyAdvertisingParameters__AddressInfo* */ q_lowenergyadvertisingparameters_white_list(void* self) {
    libqt_list _arr = QLowEnergyAdvertisingParameters_WhiteList((QLowEnergyAdvertisingParameters*)self);
    return _arr;
}

int32_t q_lowenergyadvertisingparameters_filter_policy(void* self) {
    return QLowEnergyAdvertisingParameters_FilterPolicy((QLowEnergyAdvertisingParameters*)self);
}

void q_lowenergyadvertisingparameters_set_interval(void* self, uint16_t minimum, uint16_t maximum) {
    QLowEnergyAdvertisingParameters_SetInterval((QLowEnergyAdvertisingParameters*)self, minimum, maximum);
}

int32_t q_lowenergyadvertisingparameters_minimum_interval(void* self) {
    return QLowEnergyAdvertisingParameters_MinimumInterval((QLowEnergyAdvertisingParameters*)self);
}

int32_t q_lowenergyadvertisingparameters_maximum_interval(void* self) {
    return QLowEnergyAdvertisingParameters_MaximumInterval((QLowEnergyAdvertisingParameters*)self);
}

void q_lowenergyadvertisingparameters_swap(void* self, void* other) {
    QLowEnergyAdvertisingParameters_Swap((QLowEnergyAdvertisingParameters*)self, (QLowEnergyAdvertisingParameters*)other);
}

void q_lowenergyadvertisingparameters_delete(void* self) {
    QLowEnergyAdvertisingParameters_Delete((QLowEnergyAdvertisingParameters*)(self));
}

QLowEnergyAdvertisingParameters__AddressInfo* q_lowenergyadvertisingparameters__addressinfo_new(void* addr, int32_t t) {
    return QLowEnergyAdvertisingParameters__AddressInfo_new((QBluetoothAddress*)addr, t);
}

QLowEnergyAdvertisingParameters__AddressInfo* q_lowenergyadvertisingparameters__addressinfo_new2() {
    return QLowEnergyAdvertisingParameters__AddressInfo_new2();
}

QLowEnergyAdvertisingParameters__AddressInfo* q_lowenergyadvertisingparameters__addressinfo_new3(void* param1) {
    return QLowEnergyAdvertisingParameters__AddressInfo_new3((QLowEnergyAdvertisingParameters__AddressInfo*)param1);
}

QBluetoothAddress* q_lowenergyadvertisingparameters__addressinfo_address(void* self) {
    return QLowEnergyAdvertisingParameters__AddressInfo_Address((QLowEnergyAdvertisingParameters__AddressInfo*)self);
}

void q_lowenergyadvertisingparameters__addressinfo_set_address(void* self, void* address) {
    QLowEnergyAdvertisingParameters__AddressInfo_SetAddress((QLowEnergyAdvertisingParameters__AddressInfo*)self, (QBluetoothAddress*)address);
}

int32_t q_lowenergyadvertisingparameters__addressinfo_type(void* self) {
    return QLowEnergyAdvertisingParameters__AddressInfo_Type((QLowEnergyAdvertisingParameters__AddressInfo*)self);
}

void q_lowenergyadvertisingparameters__addressinfo_set_type(void* self, int32_t type) {
    QLowEnergyAdvertisingParameters__AddressInfo_SetType((QLowEnergyAdvertisingParameters__AddressInfo*)self, type);
}

void q_lowenergyadvertisingparameters__addressinfo_delete(void* self) {
    QLowEnergyAdvertisingParameters__AddressInfo_Delete((QLowEnergyAdvertisingParameters__AddressInfo*)(self));
}
