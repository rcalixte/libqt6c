#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKUSER_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKUSER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kuser.html

/// k_user_new constructs a new KUser object.
///
KUser* k_user_new();

/// k_user_new2 constructs a new KUser object.
///
/// @param uid uid_t
KUser* k_user_new2(uid_t uid);

/// k_user_new3 constructs a new KUser object.
///
/// @param name const char*
KUser* k_user_new3(const char* name);

/// k_user_new4 constructs a new KUser object.
///
/// @param name const char*
KUser* k_user_new4(const char* name);

/// k_user_new5 constructs a new KUser object.
///
/// @param user KUser*
KUser* k_user_new5(void* user);

/// k_user_new6 constructs a new KUser object.
///
/// @param mode enum KUser__UIDMode
KUser* k_user_new6(int32_t mode);

/// [Qt documentation](https://api.kde.org/kuser.html#operator-eq)
///
/// @param self KUser*
/// @param user KUser*
void k_user_operator_assign(void* self, void* user);

/// [Qt documentation](https://api.kde.org/kuser.html#operator-eq-eq)
///
/// @param self KUser*
/// @param user KUser*
bool k_user_operator_equal(void* self, void* user);

/// [Qt documentation](https://api.kde.org/kuser.html#operator-not-eq)
///
/// @param self KUser*
/// @param user KUser*
bool k_user_operator_not_equal(void* self, void* user);

/// [Qt documentation](https://api.kde.org/kuser.html#isValid)
///
/// @param self KUser*
bool k_user_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/kuser.html#isSuperUser)
///
/// @param self KUser*
bool k_user_is_super_user(void* self);

/// [Qt documentation](https://api.kde.org/kuser.html#loginName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUser*
const char* k_user_login_name(void* self);

/// [Qt documentation](https://api.kde.org/kuser.html#homeDir)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUser*
const char* k_user_home_dir(void* self);

/// [Qt documentation](https://api.kde.org/kuser.html#faceIconPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUser*
const char* k_user_face_icon_path(void* self);

/// [Qt documentation](https://api.kde.org/kuser.html#shell)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUser*
const char* k_user_shell(void* self);

/// [Qt documentation](https://api.kde.org/kuser.html#groups)
///
/// @param self KUser*
libqt_list /* of KUserGroup* */ k_user_groups(void* self);

/// [Qt documentation](https://api.kde.org/kuser.html#groupNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUser*
const char** k_user_group_names(void* self);

/// [Qt documentation](https://api.kde.org/kuser.html#property)
///
/// @param self KUser*
/// @param which enum KUser__UserProperty
QVariant* k_user_property(void* self, int32_t which);

/// [Qt documentation](https://api.kde.org/kuser.html#allUsers)
///
libqt_list /* of KUser* */ k_user_all_users();

/// [Qt documentation](https://api.kde.org/kuser.html#allUserNames)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_user_all_user_names();

/// [Qt documentation](https://api.kde.org/kuser.html#groups)
///
/// @param self KUser*
/// @param maxCount uint32_t
libqt_list /* of KUserGroup* */ k_user_groups1(void* self, uint32_t maxCount);

/// [Qt documentation](https://api.kde.org/kuser.html#groupNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUser*
/// @param maxCount uint32_t
const char** k_user_group_names1(void* self, uint32_t maxCount);

/// [Qt documentation](https://api.kde.org/kuser.html#allUsers)
///
/// @param maxCount uint32_t
libqt_list /* of KUser* */ k_user_all_users1(uint32_t maxCount);

/// [Qt documentation](https://api.kde.org/kuser.html#allUserNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param maxCount uint32_t
const char** k_user_all_user_names1(uint32_t maxCount);

/// [Qt documentation](https://api.kde.org/kuser.html#dtor.KUser)
///
/// Delete this object from C++ memory.
///
/// @param self KUser*
void k_user_delete(void* self);

/// https://api.kde.org/kusergroup.html

/// k_usergroup_new constructs a new KUserGroup object.
///
/// @param name const char*
KUserGroup* k_usergroup_new(const char* name);

/// k_usergroup_new2 constructs a new KUserGroup object.
///
/// @param name const char*
KUserGroup* k_usergroup_new2(const char* name);

/// k_usergroup_new3 constructs a new KUserGroup object.
///
KUserGroup* k_usergroup_new3();

/// k_usergroup_new4 constructs a new KUserGroup object.
///
/// @param gid gid_t
KUserGroup* k_usergroup_new4(gid_t gid);

/// k_usergroup_new5 constructs a new KUserGroup object.
///
/// @param group KUserGroup*
KUserGroup* k_usergroup_new5(void* group);

/// k_usergroup_new6 constructs a new KUserGroup object.
///
/// @param mode enum KUser__UIDMode
KUserGroup* k_usergroup_new6(int32_t mode);

/// [Qt documentation](https://api.kde.org/kusergroup.html#operator-eq)
///
/// @param self KUserGroup*
/// @param group KUserGroup*
void k_usergroup_operator_assign(void* self, void* group);

/// [Qt documentation](https://api.kde.org/kusergroup.html#operator-eq-eq)
///
/// @param self KUserGroup*
/// @param group KUserGroup*
bool k_usergroup_operator_equal(void* self, void* group);

/// [Qt documentation](https://api.kde.org/kusergroup.html#operator-not-eq)
///
/// @param self KUserGroup*
/// @param group KUserGroup*
bool k_usergroup_operator_not_equal(void* self, void* group);

/// [Qt documentation](https://api.kde.org/kusergroup.html#isValid)
///
/// @param self KUserGroup*
bool k_usergroup_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/kusergroup.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUserGroup*
const char* k_usergroup_name(void* self);

/// [Qt documentation](https://api.kde.org/kusergroup.html#users)
///
/// @param self KUserGroup*
libqt_list /* of KUser* */ k_usergroup_users(void* self);

/// [Qt documentation](https://api.kde.org/kusergroup.html#userNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUserGroup*
const char** k_usergroup_user_names(void* self);

/// [Qt documentation](https://api.kde.org/kusergroup.html#allGroups)
///
libqt_list /* of KUserGroup* */ k_usergroup_all_groups();

/// [Qt documentation](https://api.kde.org/kusergroup.html#allGroupNames)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_usergroup_all_group_names();

/// [Qt documentation](https://api.kde.org/kusergroup.html#users)
///
/// @param self KUserGroup*
/// @param maxCount uint32_t
libqt_list /* of KUser* */ k_usergroup_users1(void* self, uint32_t maxCount);

/// [Qt documentation](https://api.kde.org/kusergroup.html#userNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUserGroup*
/// @param maxCount uint32_t
const char** k_usergroup_user_names1(void* self, uint32_t maxCount);

/// [Qt documentation](https://api.kde.org/kusergroup.html#allGroups)
///
/// @param maxCount uint32_t
libqt_list /* of KUserGroup* */ k_usergroup_all_groups1(uint32_t maxCount);

/// [Qt documentation](https://api.kde.org/kusergroup.html#allGroupNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param maxCount uint32_t
const char** k_usergroup_all_group_names1(uint32_t maxCount);

/// [Qt documentation](https://api.kde.org/kusergroup.html#dtor.KUserGroup)
///
/// Delete this object from C++ memory.
///
/// @param self KUserGroup*
void k_usergroup_delete(void* self);

/// https://api.kde.org/kuser.html#types

typedef enum {
    KUSER_UIDMODE_USEEFFECTIVEUID = 0,
    KUSER_UIDMODE_USEREALUSERID = 1
} KUser__UIDMode;

typedef enum {
    KUSER_USERPROPERTY_FULLNAME = 0,
    KUSER_USERPROPERTY_ROOMNUMBER = 1,
    KUSER_USERPROPERTY_WORKPHONE = 2,
    KUSER_USERPROPERTY_HOMEPHONE = 3
} KUser__UserProperty;

#endif
