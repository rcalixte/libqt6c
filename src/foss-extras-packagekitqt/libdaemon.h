#pragma once
#ifndef SRC_FOSS_EXTRAS_PACKAGEKITQT_QT6C_LIBDAEMON_H
#define SRC_FOSS_EXTRAS_PACKAGEKITQT_QT6C_LIBDAEMON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://github.com/PackageKit/PackageKit-Qt

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self PackageKit__Daemon*
const QMetaObject* q_packagekit__daemon_meta_object(void* self);

/// @param self PackageKit__Daemon*
/// @param param1 const char*
void* q_packagekit__daemon_metacast(void* self, const char* param1);

/// @param self PackageKit__Daemon*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_packagekit__daemon_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_packagekit__daemon_tr(const char* s);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
PackageKit__Daemon* q_packagekit__daemon_global();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
bool q_packagekit__daemon_is_running();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
PackageKit__Bitfield* q_packagekit__daemon_roles();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_packagekit__daemon_backend_name();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_packagekit__daemon_backend_description();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_packagekit__daemon_backend_author();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
///
/// @return flag of enum PackageKit__Transaction__Filter
int32_t q_packagekit__daemon_filters();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
PackageKit__Bitfield* q_packagekit__daemon_groups();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
bool q_packagekit__daemon_locked();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_packagekit__daemon_mime_types();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
///
/// @return enum PackageKit__Daemon__Network
int32_t q_packagekit__daemon_network_state();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_packagekit__daemon_distro_i_d();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
uint32_t q_packagekit__daemon_version_major();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
uint32_t q_packagekit__daemon_version_minor();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
uint32_t q_packagekit__daemon_version_micro();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param hints const char**
void q_packagekit__daemon_set_hints(const char* hints[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param hints const char*
void q_packagekit__daemon_set_hints2(const char* hints);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_packagekit__daemon_hints();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
PackageKit__Offline* q_packagekit__daemon_offline(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param packageID const char*
const char* q_packagekit__daemon_package_name(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param packageID const char*
const char* q_packagekit__daemon_package_version(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param packageID const char*
const char* q_packagekit__daemon_package_arch(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param packageID const char*
const char* q_packagekit__daemon_package_data(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param metaObject QMetaObject*
/// @param value int
/// @param enumName const char*
const char* q_packagekit__daemon_enum_to_string(void* metaObject, int value, const char* enumName);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param metaObject QMetaObject*
/// @param str const char*
/// @param enumName const char*
int32_t q_packagekit__daemon_enum_from_string(void* metaObject, const char* str, const char* enumName);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param eulaID const char*
PackageKit__Transaction* q_packagekit__daemon_accept_eula(const char* eulaID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
PackageKit__Transaction* q_packagekit__daemon_download_packages(const char* packageIDs[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
PackageKit__Transaction* q_packagekit__daemon_download_package(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
PackageKit__Transaction* q_packagekit__daemon_get_categories();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
PackageKit__Transaction* q_packagekit__daemon_depends_on(const char* packageIDs[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
PackageKit__Transaction* q_packagekit__daemon_depends_on2(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
PackageKit__Transaction* q_packagekit__daemon_get_details(const char* packageIDs[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
PackageKit__Transaction* q_packagekit__daemon_get_details2(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param files const char**
PackageKit__Transaction* q_packagekit__daemon_get_details_local(const char* files[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param file const char*
PackageKit__Transaction* q_packagekit__daemon_get_details_local2(const char* file);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
PackageKit__Transaction* q_packagekit__daemon_get_files(const char* packageIDs[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char*
PackageKit__Transaction* q_packagekit__daemon_get_files2(const char* packageIDs);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param files const char**
PackageKit__Transaction* q_packagekit__daemon_get_files_local(const char* files[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param file const char*
PackageKit__Transaction* q_packagekit__daemon_get_files_local2(const char* file);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param number uint32_t
PackageKit__Transaction* q_packagekit__daemon_get_old_transactions(uint32_t number);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
PackageKit__Transaction* q_packagekit__daemon_get_packages();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
PackageKit__Transaction* q_packagekit__daemon_get_repo_list();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
PackageKit__Transaction* q_packagekit__daemon_required_by(const char* packageIDs[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
PackageKit__Transaction* q_packagekit__daemon_required_by2(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
PackageKit__Transaction* q_packagekit__daemon_get_updates_details(const char* packageIDs[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
PackageKit__Transaction* q_packagekit__daemon_get_update_detail(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
PackageKit__Transaction* q_packagekit__daemon_get_updates();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
PackageKit__Transaction* q_packagekit__daemon_get_distro_upgrades();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param distroId const char*
/// @param kind enum PackageKit__Transaction__UpgradeKind
PackageKit__Transaction* q_packagekit__daemon_upgrade_system(const char* distroId, int32_t kind);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param files const char**
PackageKit__Transaction* q_packagekit__daemon_install_files(const char* files[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param file const char*
PackageKit__Transaction* q_packagekit__daemon_install_file(const char* file);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
PackageKit__Transaction* q_packagekit__daemon_install_packages(const char* packageIDs[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
PackageKit__Transaction* q_packagekit__daemon_install_package(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param type enum PackageKit__Transaction__SigType
/// @param keyID const char*
/// @param packageID const char*
PackageKit__Transaction* q_packagekit__daemon_install_signature(int32_t type, const char* keyID, const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param force bool
PackageKit__Transaction* q_packagekit__daemon_refresh_cache(bool force);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
PackageKit__Transaction* q_packagekit__daemon_remove_packages(const char* packageIDs[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
PackageKit__Transaction* q_packagekit__daemon_remove_package(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
PackageKit__Transaction* q_packagekit__daemon_repair_system();

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param repoId const char*
PackageKit__Transaction* q_packagekit__daemon_repo_enable(const char* repoId);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param repoId const char*
/// @param autoremove bool
PackageKit__Transaction* q_packagekit__daemon_repo_remove(const char* repoId, bool autoremove);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param repoId const char*
/// @param parameter const char*
/// @param value const char*
PackageKit__Transaction* q_packagekit__daemon_repo_set_data(const char* repoId, const char* parameter, const char* value);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageNames const char**
PackageKit__Transaction* q_packagekit__daemon_resolve(const char* packageNames[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageName const char*
PackageKit__Transaction* q_packagekit__daemon_resolve2(const char* packageName);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char**
PackageKit__Transaction* q_packagekit__daemon_search_files(const char* search[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char*
PackageKit__Transaction* q_packagekit__daemon_search_files2(const char* search);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char**
PackageKit__Transaction* q_packagekit__daemon_search_details(const char* search[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char*
PackageKit__Transaction* q_packagekit__daemon_search_details2(const char* search);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param groups const char**
PackageKit__Transaction* q_packagekit__daemon_search_groups(const char* groups[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param group const char*
PackageKit__Transaction* q_packagekit__daemon_search_group(const char* group);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param group enum PackageKit__Transaction__Group
PackageKit__Transaction* q_packagekit__daemon_search_group2(int32_t group);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param group PackageKit__Bitfield*
PackageKit__Transaction* q_packagekit__daemon_search_groups2(void* group);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char**
PackageKit__Transaction* q_packagekit__daemon_search_names(const char* search[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char*
PackageKit__Transaction* q_packagekit__daemon_search_names2(const char* search);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
PackageKit__Transaction* q_packagekit__daemon_update_packages(const char* packageIDs[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
PackageKit__Transaction* q_packagekit__daemon_update_package(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char**
PackageKit__Transaction* q_packagekit__daemon_what_provides(const char* search[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char*
PackageKit__Transaction* q_packagekit__daemon_what_provides2(const char* search);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_is_running_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
/// @param callback void func(PackageKit__Daemon* self)
void q_packagekit__daemon_on_is_running_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_network_state_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
/// @param callback void func(PackageKit__Daemon* self)
void q_packagekit__daemon_on_network_state_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
/// @param callback void func(PackageKit__Daemon* self)
void q_packagekit__daemon_on_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_repo_list_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
/// @param callback void func(PackageKit__Daemon* self)
void q_packagekit__daemon_on_repo_list_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_restart_scheduled(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
/// @param callback void func(PackageKit__Daemon* self)
void q_packagekit__daemon_on_restart_scheduled(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
/// @param tids const char**
void q_packagekit__daemon_transaction_list_changed(void* self, const char* tids[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
/// @param callback void func(PackageKit__Daemon* self, const char** tids)
void q_packagekit__daemon_on_transaction_list_changed(void* self, void (*callback)(void*, const char**));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_updates_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
/// @param callback void func(PackageKit__Daemon* self)
void q_packagekit__daemon_on_updates_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_daemon_quit(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Daemon*
/// @param callback void func(PackageKit__Daemon* self)
void q_packagekit__daemon_on_daemon_quit(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_packagekit__daemon_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_packagekit__daemon_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
/// @param storeInCache bool
PackageKit__Transaction* q_packagekit__daemon_download_packages2(const char* packageIDs[static 1], bool storeInCache);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
/// @param storeInCache bool
PackageKit__Transaction* q_packagekit__daemon_download_package2(const char* packageID, bool storeInCache);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_depends_on22(const char* packageIDs[static 1], int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
/// @param filters flag of enum PackageKit__Transaction__Filter
/// @param recursive bool
PackageKit__Transaction* q_packagekit__daemon_depends_on3(const char* packageIDs[static 1], int32_t filters, bool recursive);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_depends_on23(const char* packageID, int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
/// @param filters flag of enum PackageKit__Transaction__Filter
/// @param recursive bool
PackageKit__Transaction* q_packagekit__daemon_depends_on32(const char* packageID, int32_t filters, bool recursive);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_get_packages1(int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_get_repo_list1(int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_required_by22(const char* packageIDs[static 1], int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
/// @param filters flag of enum PackageKit__Transaction__Filter
/// @param recursive bool
PackageKit__Transaction* q_packagekit__daemon_required_by3(const char* packageIDs[static 1], int32_t filters, bool recursive);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_required_by23(const char* packageID, int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
/// @param filters flag of enum PackageKit__Transaction__Filter
/// @param recursive bool
PackageKit__Transaction* q_packagekit__daemon_required_by32(const char* packageID, int32_t filters, bool recursive);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_get_updates1(int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param distroId const char*
/// @param kind enum PackageKit__Transaction__UpgradeKind
/// @param flags flag of enum PackageKit__Transaction__TransactionFlag
PackageKit__Transaction* q_packagekit__daemon_upgrade_system3(const char* distroId, int32_t kind, int32_t flags);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param files const char**
/// @param flags flag of enum PackageKit__Transaction__TransactionFlag
PackageKit__Transaction* q_packagekit__daemon_install_files2(const char* files[static 1], int32_t flags);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param file const char*
/// @param flags flag of enum PackageKit__Transaction__TransactionFlag
PackageKit__Transaction* q_packagekit__daemon_install_file2(const char* file, int32_t flags);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
/// @param flags flag of enum PackageKit__Transaction__TransactionFlag
PackageKit__Transaction* q_packagekit__daemon_install_packages2(const char* packageIDs[static 1], int32_t flags);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
/// @param flags flag of enum PackageKit__Transaction__TransactionFlag
PackageKit__Transaction* q_packagekit__daemon_install_package2(const char* packageID, int32_t flags);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
/// @param allowDeps bool
PackageKit__Transaction* q_packagekit__daemon_remove_packages2(const char* packageIDs[static 1], bool allowDeps);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
/// @param allowDeps bool
/// @param autoRemove bool
PackageKit__Transaction* q_packagekit__daemon_remove_packages3(const char* packageIDs[static 1], bool allowDeps, bool autoRemove);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
/// @param allowDeps bool
/// @param autoRemove bool
/// @param flags flag of enum PackageKit__Transaction__TransactionFlag
PackageKit__Transaction* q_packagekit__daemon_remove_packages4(const char* packageIDs[static 1], bool allowDeps, bool autoRemove, int32_t flags);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
/// @param allowDeps bool
PackageKit__Transaction* q_packagekit__daemon_remove_package2(const char* packageID, bool allowDeps);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
/// @param allowDeps bool
/// @param autoRemove bool
PackageKit__Transaction* q_packagekit__daemon_remove_package3(const char* packageID, bool allowDeps, bool autoRemove);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
/// @param allowDeps bool
/// @param autoRemove bool
/// @param flags flag of enum PackageKit__Transaction__TransactionFlag
PackageKit__Transaction* q_packagekit__daemon_remove_package4(const char* packageID, bool allowDeps, bool autoRemove, int32_t flags);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param flags flag of enum PackageKit__Transaction__TransactionFlag
PackageKit__Transaction* q_packagekit__daemon_repair_system1(int32_t flags);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param repoId const char*
/// @param enable bool
PackageKit__Transaction* q_packagekit__daemon_repo_enable2(const char* repoId, bool enable);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param repoId const char*
/// @param autoremove bool
/// @param flags flag of enum PackageKit__Transaction__TransactionFlag
PackageKit__Transaction* q_packagekit__daemon_repo_remove3(const char* repoId, bool autoremove, int32_t flags);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageNames const char**
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_resolve22(const char* packageNames[static 1], int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageName const char*
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_resolve23(const char* packageName, int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char**
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_search_files22(const char* search[static 1], int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char*
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_search_files23(const char* search, int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char**
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_search_details22(const char* search[static 1], int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char*
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_search_details23(const char* search, int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param groups const char**
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_search_groups22(const char* groups[static 1], int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param group const char*
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_search_group22(const char* group, int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param group enum PackageKit__Transaction__Group
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_search_group23(int32_t group, int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param group PackageKit__Bitfield*
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_search_groups23(void* group, int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char**
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_search_names22(const char* search[static 1], int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char*
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_search_names23(const char* search, int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageIDs const char**
/// @param flags flag of enum PackageKit__Transaction__TransactionFlag
PackageKit__Transaction* q_packagekit__daemon_update_packages2(const char* packageIDs[static 1], int32_t flags);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param packageID const char*
/// @param flags flag of enum PackageKit__Transaction__TransactionFlag
PackageKit__Transaction* q_packagekit__daemon_update_package2(const char* packageID, int32_t flags);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char**
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_what_provides22(const char* search[static 1], int32_t filters);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param search const char*
/// @param filters flag of enum PackageKit__Transaction__Filter
PackageKit__Transaction* q_packagekit__daemon_what_provides23(const char* search, int32_t filters);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self PackageKit__Daemon*
/// @param event QEvent*
bool q_packagekit__daemon_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self PackageKit__Daemon*
/// @param watched QObject*
/// @param event QEvent*
bool q_packagekit__daemon_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self PackageKit__Daemon*
const char* q_packagekit__daemon_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self PackageKit__Daemon*
/// @param name char*
void q_packagekit__daemon_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self PackageKit__Daemon*
bool q_packagekit__daemon_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self PackageKit__Daemon*
bool q_packagekit__daemon_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self PackageKit__Daemon*
bool q_packagekit__daemon_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self PackageKit__Daemon*
bool q_packagekit__daemon_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self PackageKit__Daemon*
/// @param b bool
bool q_packagekit__daemon_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self PackageKit__Daemon*
QThread* q_packagekit__daemon_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self PackageKit__Daemon*
/// @param thread QThread*
bool q_packagekit__daemon_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self PackageKit__Daemon*
/// @param interval int
int32_t q_packagekit__daemon_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self PackageKit__Daemon*
/// @param id int
void q_packagekit__daemon_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self PackageKit__Daemon*
/// @param id enum Qt__TimerId
void q_packagekit__daemon_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self PackageKit__Daemon*
libqt_list /* of QObject* */ q_packagekit__daemon_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self PackageKit__Daemon*
/// @param parent QObject*
void q_packagekit__daemon_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self PackageKit__Daemon*
/// @param filterObj QObject*
void q_packagekit__daemon_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self PackageKit__Daemon*
/// @param obj QObject*
void q_packagekit__daemon_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_packagekit__daemon_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self PackageKit__Daemon*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_packagekit__daemon_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_packagekit__daemon_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_packagekit__daemon_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self PackageKit__Daemon*
/// @param name const char*
/// @param value QVariant*
bool q_packagekit__daemon_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self PackageKit__Daemon*
/// @param name const char*
QVariant* q_packagekit__daemon_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self PackageKit__Daemon*
const char** q_packagekit__daemon_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self PackageKit__Daemon*
QBindingStorage* q_packagekit__daemon_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self PackageKit__Daemon*
const QBindingStorage* q_packagekit__daemon_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Daemon*
/// @param callback void func(PackageKit__Daemon* self)
void q_packagekit__daemon_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self PackageKit__Daemon*
QObject* q_packagekit__daemon_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self PackageKit__Daemon*
/// @param classname const char*
bool q_packagekit__daemon_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self PackageKit__Daemon*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_packagekit__daemon_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self PackageKit__Daemon*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_packagekit__daemon_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_packagekit__daemon_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self PackageKit__Daemon*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_packagekit__daemon_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Daemon*
/// @param param1 QObject*
void q_packagekit__daemon_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Daemon*
/// @param callback void func(PackageKit__Daemon* self, QObject* param1)
void q_packagekit__daemon_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self PackageKit__Daemon*
/// @param callback void func(PackageKit__Daemon* self, const char* objectName)
void q_packagekit__daemon_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Delete this object from C++ memory.
///
/// @param self PackageKit__Daemon*
void q_packagekit__daemon_delete(void* self);

/// https://github.com/PackageKit/PackageKit-Qt

typedef enum {
    PACKAGEKIT_DAEMON_NETWORK_NETWORKUNKNOWN = 0,
    PACKAGEKIT_DAEMON_NETWORK_NETWORKOFFLINE = 1,
    PACKAGEKIT_DAEMON_NETWORK_NETWORKONLINE = 2,
    PACKAGEKIT_DAEMON_NETWORK_NETWORKWIRED = 3,
    PACKAGEKIT_DAEMON_NETWORK_NETWORKWIFI = 4,
    PACKAGEKIT_DAEMON_NETWORK_NETWORKMOBILE = 5
} PackageKit__Daemon__Network;

typedef enum {
    PACKAGEKIT_DAEMON_AUTHORIZE_AUTHORIZEUNKNOWN = 0,
    PACKAGEKIT_DAEMON_AUTHORIZE_AUTHORIZEYES = 1,
    PACKAGEKIT_DAEMON_AUTHORIZE_AUTHORIZENO = 2,
    PACKAGEKIT_DAEMON_AUTHORIZE_AUTHORIZEINTERACTIVE = 3
} PackageKit__Daemon__Authorize;

#endif
