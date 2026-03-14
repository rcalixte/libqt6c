#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQLOWENERGYCONNECTIONPARAMETERS_H
#define SRC_BLUETOOTH_QT6C_LIBQLOWENERGYCONNECTIONPARAMETERS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html)

/// q_lowenergyconnectionparameters_new constructs a new QLowEnergyConnectionParameters object.
///
QLowEnergyConnectionParameters* q_lowenergyconnectionparameters_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html)

/// q_lowenergyconnectionparameters_new2 constructs a new QLowEnergyConnectionParameters object.
///
/// @param other QLowEnergyConnectionParameters*
///
QLowEnergyConnectionParameters* q_lowenergyconnectionparameters_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#operator-eq)
///
/// @param self QLowEnergyConnectionParameters*
/// @param other QLowEnergyConnectionParameters*
///
void q_lowenergyconnectionparameters_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#setIntervalRange)
///
/// @param self QLowEnergyConnectionParameters*
/// @param minimum double
/// @param maximum double
///
void q_lowenergyconnectionparameters_set_interval_range(void* self, double minimum, double maximum);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#minimumInterval)
///
/// @param self QLowEnergyConnectionParameters*
///
double q_lowenergyconnectionparameters_minimum_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#maximumInterval)
///
/// @param self QLowEnergyConnectionParameters*
///
double q_lowenergyconnectionparameters_maximum_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#setLatency)
///
/// @param self QLowEnergyConnectionParameters*
/// @param latency int
///
void q_lowenergyconnectionparameters_set_latency(void* self, int latency);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#latency)
///
/// @param self QLowEnergyConnectionParameters*
///
int32_t q_lowenergyconnectionparameters_latency(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#setSupervisionTimeout)
///
/// @param self QLowEnergyConnectionParameters*
/// @param timeout int
///
void q_lowenergyconnectionparameters_set_supervision_timeout(void* self, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#supervisionTimeout)
///
/// @param self QLowEnergyConnectionParameters*
///
int32_t q_lowenergyconnectionparameters_supervision_timeout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#swap)
///
/// @param self QLowEnergyConnectionParameters*
/// @param other QLowEnergyConnectionParameters*
///
void q_lowenergyconnectionparameters_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyconnectionparameters.html#dtor.QLowEnergyConnectionParameters)
///
/// Delete this object from C++ memory.
///
/// @param self QLowEnergyConnectionParameters*
///
void q_lowenergyconnectionparameters_delete(void* self);

#endif
