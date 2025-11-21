#pragma once
#ifndef SRC_QT6C_LIBQFACTORYINTERFACE_H
#define SRC_QT6C_LIBQFACTORYINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfactoryinterface.html

/// [Qt documentation](https://doc.qt.io/qt-6/qfactoryinterface.html#keys)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFactoryInterface*
const char** q_factoryinterface_keys(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfactoryinterface.html#dtor.QFactoryInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QFactoryInterface*
void q_factoryinterface_delete(void* self);

#endif
