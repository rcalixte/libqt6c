#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKACL_H
#define SRC_EXTRAS_KIO_QT6C_LIBKACL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kacl.html)

/// k_acl_new constructs a new KACL object.
///
/// @param aclString const char*
///
KACL* k_acl_new(const char* aclString);

/// [Upstream resources](https://api.kde.org/kacl.html)

/// k_acl_new2 constructs a new KACL object.
///
/// @param rhs KACL*
///
KACL* k_acl_new2(void* rhs);

/// [Upstream resources](https://api.kde.org/kacl.html)

/// k_acl_new3 constructs a new KACL object.
///
/// @param basicPermissions mode_t
///
KACL* k_acl_new3(mode_t basicPermissions);

/// [Upstream resources](https://api.kde.org/kacl.html)

/// k_acl_new4 constructs a new KACL object.
///
KACL* k_acl_new4();

/// [Upstream resources](https://api.kde.org/kacl.html#operator-eq)
///
/// @param self KACL*
/// @param rhs KACL*
///
void k_acl_operator_assign(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kacl.html#operator-eq-eq)
///
/// @param self KACL*
/// @param rhs KACL*
///
bool k_acl_operator_equal(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kacl.html#operator-not-eq)
///
/// @param self KACL*
/// @param rhs KACL*
///
bool k_acl_operator_not_equal(void* self, void* rhs);

/// [Upstream resources](https://api.kde.org/kacl.html#isValid)
///
/// @param self KACL*
///
bool k_acl_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/kacl.html#ownerPermissions)
///
/// @param self KACL*
///
unsigned short k_acl_owner_permissions(void* self);

/// [Upstream resources](https://api.kde.org/kacl.html#setOwnerPermissions)
///
/// @param self KACL*
/// @param ownerPermissions unsigned short
///
bool k_acl_set_owner_permissions(void* self, unsigned short ownerPermissions);

/// [Upstream resources](https://api.kde.org/kacl.html#owningGroupPermissions)
///
/// @param self KACL*
///
unsigned short k_acl_owning_group_permissions(void* self);

/// [Upstream resources](https://api.kde.org/kacl.html#setOwningGroupPermissions)
///
/// @param self KACL*
/// @param owningGroupPermissions unsigned short
///
bool k_acl_set_owning_group_permissions(void* self, unsigned short owningGroupPermissions);

/// [Upstream resources](https://api.kde.org/kacl.html#othersPermissions)
///
/// @param self KACL*
///
unsigned short k_acl_others_permissions(void* self);

/// [Upstream resources](https://api.kde.org/kacl.html#setOthersPermissions)
///
/// @param self KACL*
/// @param othersPermissions unsigned short
///
bool k_acl_set_others_permissions(void* self, unsigned short othersPermissions);

/// [Upstream resources](https://api.kde.org/kacl.html#basePermissions)
///
/// @param self KACL*
///
mode_t k_acl_base_permissions(void* self);

/// [Upstream resources](https://api.kde.org/kacl.html#isExtended)
///
/// @param self KACL*
///
bool k_acl_is_extended(void* self);

/// [Upstream resources](https://api.kde.org/kacl.html#maskPermissions)
///
/// @param self KACL*
/// @param exists bool*
///
unsigned short k_acl_mask_permissions(void* self, bool* exists);

/// [Upstream resources](https://api.kde.org/kacl.html#setMaskPermissions)
///
/// @param self KACL*
/// @param maskPermissions unsigned short
///
bool k_acl_set_mask_permissions(void* self, unsigned short maskPermissions);

/// [Upstream resources](https://api.kde.org/kacl.html#namedUserPermissions)
///
/// @param self KACL*
/// @param name const char*
/// @param exists bool*
///
unsigned short k_acl_named_user_permissions(void* self, const char* name, bool* exists);

/// [Upstream resources](https://api.kde.org/kacl.html#setNamedUserPermissions)
///
/// @param self KACL*
/// @param name const char*
/// @param param2 unsigned short
///
bool k_acl_set_named_user_permissions(void* self, const char* name, unsigned short param2);

/// [Upstream resources](https://api.kde.org/kacl.html#allUserPermissions)
///
/// @param self KACL*
///
libqt_list /* of libqt_pair  tuple of const char* and unsigned short  */ k_acl_all_user_permissions(void* self);

/// [Upstream resources](https://api.kde.org/kacl.html#namedGroupPermissions)
///
/// @param self KACL*
/// @param name const char*
/// @param exists bool*
///
unsigned short k_acl_named_group_permissions(void* self, const char* name, bool* exists);

/// [Upstream resources](https://api.kde.org/kacl.html#setNamedGroupPermissions)
///
/// @param self KACL*
/// @param name const char*
/// @param param2 unsigned short
///
bool k_acl_set_named_group_permissions(void* self, const char* name, unsigned short param2);

/// [Upstream resources](https://api.kde.org/kacl.html#allGroupPermissions)
///
/// @param self KACL*
///
libqt_list /* of libqt_pair  tuple of const char* and unsigned short  */ k_acl_all_group_permissions(void* self);

/// [Upstream resources](https://api.kde.org/kacl.html#setACL)
///
/// @param self KACL*
/// @param aclStr const char*
///
bool k_acl_set_a_c_l(void* self, const char* aclStr);

/// [Upstream resources](https://api.kde.org/kacl.html#asString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KACL*
///
const char* k_acl_as_string(void* self);

/// [Upstream resources](https://api.kde.org/kacl.html#virtual_hook)
///
/// @param self KACL*
/// @param id int
/// @param data void*
///
void k_acl_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/kacl.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self KACL*
/// @param callback void func(KACL* self, int id, void* data)
///
void k_acl_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://api.kde.org/kacl.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self KACL*
/// @param id int
/// @param data void*
///
void k_acl_qbase_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/kacl.html#dtor.KACL)
///
/// Delete this object from C++ memory.
///
/// @param self KACL*
///
void k_acl_delete(void* self);

#endif
