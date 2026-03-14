#include "libqlowenergyconnectionparameters.hpp"
#include "libqlowenergyconnectionparameters.h"

QLowEnergyConnectionParameters* q_lowenergyconnectionparameters_new() {
    return QLowEnergyConnectionParameters_new();
}

QLowEnergyConnectionParameters* q_lowenergyconnectionparameters_new2(void* other) {
    return QLowEnergyConnectionParameters_new2((QLowEnergyConnectionParameters*)other);
}

void q_lowenergyconnectionparameters_operator_assign(void* self, void* other) {
    QLowEnergyConnectionParameters_OperatorAssign((QLowEnergyConnectionParameters*)self, (QLowEnergyConnectionParameters*)other);
}

void q_lowenergyconnectionparameters_set_interval_range(void* self, double minimum, double maximum) {
    QLowEnergyConnectionParameters_SetIntervalRange((QLowEnergyConnectionParameters*)self, minimum, maximum);
}

double q_lowenergyconnectionparameters_minimum_interval(void* self) {
    return QLowEnergyConnectionParameters_MinimumInterval((QLowEnergyConnectionParameters*)self);
}

double q_lowenergyconnectionparameters_maximum_interval(void* self) {
    return QLowEnergyConnectionParameters_MaximumInterval((QLowEnergyConnectionParameters*)self);
}

void q_lowenergyconnectionparameters_set_latency(void* self, int latency) {
    QLowEnergyConnectionParameters_SetLatency((QLowEnergyConnectionParameters*)self, latency);
}

int32_t q_lowenergyconnectionparameters_latency(void* self) {
    return QLowEnergyConnectionParameters_Latency((QLowEnergyConnectionParameters*)self);
}

void q_lowenergyconnectionparameters_set_supervision_timeout(void* self, int timeout) {
    QLowEnergyConnectionParameters_SetSupervisionTimeout((QLowEnergyConnectionParameters*)self, timeout);
}

int32_t q_lowenergyconnectionparameters_supervision_timeout(void* self) {
    return QLowEnergyConnectionParameters_SupervisionTimeout((QLowEnergyConnectionParameters*)self);
}

void q_lowenergyconnectionparameters_swap(void* self, void* other) {
    QLowEnergyConnectionParameters_Swap((QLowEnergyConnectionParameters*)self, (QLowEnergyConnectionParameters*)other);
}

void q_lowenergyconnectionparameters_delete(void* self) {
    QLowEnergyConnectionParameters_Delete((QLowEnergyConnectionParameters*)(self));
}
