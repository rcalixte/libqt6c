#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBBUILDSERVICEJOBOUTPUT_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBBUILDSERVICEJOBOUTPUT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html)

/// k_attica__buildservicejoboutput_new constructs a new Attica::BuildServiceJobOutput object.
///
Attica__BuildServiceJobOutput* k_attica__buildservicejoboutput_new();

/// [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html)

/// k_attica__buildservicejoboutput_new2 constructs a new Attica::BuildServiceJobOutput object.
///
/// @param other Attica__BuildServiceJobOutput*
///
Attica__BuildServiceJobOutput* k_attica__buildservicejoboutput_new2(void* other);

/// [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#operator-eq)
///
/// @param self Attica__BuildServiceJobOutput*
/// @param other Attica__BuildServiceJobOutput*
///
void k_attica__buildservicejoboutput_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#setOutput)
///
/// @param self Attica__BuildServiceJobOutput*
/// @param output const char*
///
void k_attica__buildservicejoboutput_set_output(void* self, const char* output);

/// [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#output)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__BuildServiceJobOutput*
///
const char* k_attica__buildservicejoboutput_output(void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isRunning)
///
/// @param self Attica__BuildServiceJobOutput*
///
bool k_attica__buildservicejoboutput_is_running(void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isCompleted)
///
/// @param self Attica__BuildServiceJobOutput*
///
bool k_attica__buildservicejoboutput_is_completed(void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isFailed)
///
/// @param self Attica__BuildServiceJobOutput*
///
bool k_attica__buildservicejoboutput_is_failed(void* self);

/// [Upstream resources](https://api.kde.org/attica-buildservicejoboutput.html#isValid)
///
/// @param self Attica__BuildServiceJobOutput*
///
bool k_attica__buildservicejoboutput_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__BuildServiceJobOutput*
///
void k_attica__buildservicejoboutput_delete(void* self);

#endif
