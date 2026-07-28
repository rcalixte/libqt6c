#pragma once
#ifndef LIBQFACTORYINTERFACE_H
#define LIBQFACTORYINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfactoryinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qfactoryinterface.html#keys)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFactoryInterface*
///
const char** q_factoryinterface_keys(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfactoryinterface.html#dtor.QFactoryInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QFactoryInterface*
///
void q_factoryinterface_delete(void* self);

#endif
