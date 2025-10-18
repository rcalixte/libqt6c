#pragma once
#ifndef SRC_FOSS_EXTRAS_PACKAGEKITQTQT6C_LIBBITFIELD_H
#define SRC_FOSS_EXTRAS_PACKAGEKITQTQT6C_LIBBITFIELD_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://github.com/PackageKit/PackageKit-Qt

/// q_packagekit__bitfield_new constructs a new PackageKit::Bitfield object.
///
PackageKit__Bitfield* q_packagekit__bitfield_new();

/// q_packagekit__bitfield_new2 constructs a new PackageKit::Bitfield object.
///
/// @param val uint64_t
PackageKit__Bitfield* q_packagekit__bitfield_new2(uint64_t val);

/// q_packagekit__bitfield_new3 constructs a new PackageKit::Bitfield object.
///
/// @param param1 PackageKit__Bitfield*
PackageKit__Bitfield* q_packagekit__bitfield_new3(void* param1);

/// [Qt documentation](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Bitfield*
/// @param mask uint64_t
uint64_t q_packagekit__bitfield_operator_bitwise_and(void* self, uint64_t mask);

/// [Qt documentation](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Bitfield*
/// @param mask uint64_t
void q_packagekit__bitfield_operator_bitwise_and_assign(void* self, uint64_t mask);

/// [Qt documentation](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Bitfield*
/// @param mask uint64_t
uint64_t q_packagekit__bitfield_operator_bitwise_or(void* self, uint64_t mask);

/// [Qt documentation](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Bitfield*
/// @param mask uint64_t
void q_packagekit__bitfield_operator_bitwise_or_assign(void* self, uint64_t mask);

/// [Qt documentation](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Bitfield*
/// @param mask PackageKit__Bitfield*
PackageKit__Bitfield* q_packagekit__bitfield_operator_bitwise_and2(void* self, void* mask);

/// [Qt documentation](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Bitfield*
/// @param mask PackageKit__Bitfield*
void q_packagekit__bitfield_operator_bitwise_and_assign2(void* self, void* mask);

/// [Qt documentation](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Bitfield*
/// @param mask PackageKit__Bitfield*
PackageKit__Bitfield* q_packagekit__bitfield_operator_bitwise_or2(void* self, void* mask);

/// [Qt documentation](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Bitfield*
/// @param mask PackageKit__Bitfield*
void q_packagekit__bitfield_operator_bitwise_or_assign2(void* self, void* mask);

/// [Qt documentation](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Bitfield*
/// @param other PackageKit__Bitfield*
void q_packagekit__bitfield_operator_assign(void* self, void* other);

/// [Qt documentation](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Bitfield*
/// @param other PackageKit__Bitfield*
bool q_packagekit__bitfield_operator_equal(void* self, void* other);

/// [Qt documentation](https://github.com/PackageKit/PackageKit-Qt)
///
/// Delete this object from C++ memory.
///
/// @param self PackageKit__Bitfield*
void q_packagekit__bitfield_delete(void* self);

#endif
