#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBACCOUNTBALANCE_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBACCOUNTBALANCE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-accountbalance.html)

/// k_attica__accountbalance_new constructs a new Attica::AccountBalance object.
///
Attica__AccountBalance* k_attica__accountbalance_new();

/// [Upstream resources](https://api.kde.org/attica-accountbalance.html)

/// k_attica__accountbalance_new2 constructs a new Attica::AccountBalance object.
///
/// @param other Attica__AccountBalance*
///
Attica__AccountBalance* k_attica__accountbalance_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-accountbalance.html#operator-eq)
///
/// @param self Attica__AccountBalance*
/// @param other Attica__AccountBalance*
///
void k_attica__accountbalance_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-accountbalance.html#setCurrency)
///
/// @param self Attica__AccountBalance*
/// @param currency const char*
///
void k_attica__accountbalance_set_currency(void* self, const char* currency);

/// [Upstream resources](https://api.kde.org/attica-accountbalance.html#currency)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__AccountBalance*
///
const char* k_attica__accountbalance_currency(void* self);

/// [Upstream resources](https://api.kde.org/attica-accountbalance.html#setBalance)
///
/// @param self Attica__AccountBalance*
/// @param name const char*
///
void k_attica__accountbalance_set_balance(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/attica-accountbalance.html#balance)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__AccountBalance*
///
const char* k_attica__accountbalance_balance(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__AccountBalance*
///
void k_attica__accountbalance_delete(void* self);

#endif
