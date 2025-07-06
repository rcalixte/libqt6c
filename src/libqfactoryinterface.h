#pragma once
#ifndef SRCQT6C_LIBQFACTORYINTERFACE_H
#define SRCQT6C_LIBQFACTORYINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfactoryinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qfactoryinterface.html#keys)
///
/// ``` QFactoryInterface* self ```
const char** q_factoryinterface_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfactoryinterface.html#dtor.QFactoryInterface)
///
/// Delete this object from C++ memory.
///
/// ``` QFactoryInterface* self ```
void q_factoryinterface_delete(void* self);

#endif
