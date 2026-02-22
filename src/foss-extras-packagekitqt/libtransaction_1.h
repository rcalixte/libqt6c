#pragma once
#ifndef SRC_FOSS_EXTRAS_PACKAGEKITQT_QT6C_LIBTRANSACTION_H
#define SRC_FOSS_EXTRAS_PACKAGEKITQT_QT6C_LIBTRANSACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

/// q_packagekit__transaction_new constructs a new PackageKit::Transaction object.
///
/// @param tid QDBusObjectPath*
///
PackageKit__Transaction* q_packagekit__transaction_new(void* tid);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self PackageKit__Transaction*
///
const QMetaObject* q_packagekit__transaction_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self PackageKit__Transaction*
/// @param callback const QMetaObject* func()
///
void q_packagekit__transaction_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self PackageKit__Transaction*
///
const QMetaObject* q_packagekit__transaction_qbase_meta_object(void* self);

/// @param self PackageKit__Transaction*
/// @param param1 const char*
///
void* q_packagekit__transaction_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self PackageKit__Transaction*
/// @param callback void* func(PackageKit__Transaction* self, const char* param1)
///
void q_packagekit__transaction_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self PackageKit__Transaction*
/// @param param1 const char*
///
void* q_packagekit__transaction_qbase_metacast(void* self, const char* param1);

/// @param self PackageKit__Transaction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_packagekit__transaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self PackageKit__Transaction*
/// @param callback int32_t func(PackageKit__Transaction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_packagekit__transaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self PackageKit__Transaction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_packagekit__transaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_packagekit__transaction_tr(const char* s);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
QDBusObjectPath* q_packagekit__transaction_tid(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
bool q_packagekit__transaction_allow_cancel(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
bool q_packagekit__transaction_is_caller_active(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self PackageKit__Transaction*
///
const char* q_packagekit__transaction_last_package(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
uint32_t q_packagekit__transaction_percentage(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
uint32_t q_packagekit__transaction_elapsed_time(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
uint32_t q_packagekit__transaction_remaining_time(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
uint32_t q_packagekit__transaction_speed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
uint64_t q_packagekit__transaction_download_size_remaining(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
/// @return enum PackageKit__Transaction__Role
///
int32_t q_packagekit__transaction_role(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
/// @return enum PackageKit__Transaction__Status
///
int32_t q_packagekit__transaction_status(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
/// @return flag of enum PackageKit__Transaction__TransactionFlag
///
int32_t q_packagekit__transaction_transaction_flags(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
QDateTime* q_packagekit__transaction_timespec(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
bool q_packagekit__transaction_succeeded(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
uint32_t q_packagekit__transaction_duration(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self PackageKit__Transaction*
///
const char* q_packagekit__transaction_data(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
uint32_t q_packagekit__transaction_uid(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self PackageKit__Transaction*
///
const char* q_packagekit__transaction_sender_name(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self PackageKit__Transaction*
///
const char* q_packagekit__transaction_cmdline(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param packageID const char*
///
const char* q_packagekit__transaction_package_name(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param packageID const char*
///
const char* q_packagekit__transaction_package_version(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param packageID const char*
///
const char* q_packagekit__transaction_package_arch(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param packageID const char*
///
const char* q_packagekit__transaction_package_data(const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_allow_cancel_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_allow_cancel_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_is_caller_active_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_is_caller_active_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_download_size_remaining_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_download_size_remaining_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_elapsed_time_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_elapsed_time_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_last_package_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_last_package_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_percentage_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_percentage_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_remaining_time_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_remaining_time_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_role_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_role_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_speed_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_speed_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_status_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_status_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_transaction_flags_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_transaction_flags_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_uid_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_uid_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_sender_name_changed(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_sender_name_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param parentId const char*
/// @param categoryId const char*
/// @param name const char*
/// @param summary const char*
/// @param icon const char*
///
void q_packagekit__transaction_category(void* self, const char* parentId, const char* categoryId, const char* name, const char* summary, const char* icon);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, const char* parentId, const char* categoryId, const char* name, const char* summary, const char* icon)
///
void q_packagekit__transaction_on_category(void* self, void (*callback)(void*, const char*, const char*, const char*, const char*, const char*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param type enum PackageKit__Transaction__DistroUpgrade
/// @param name const char*
/// @param description const char*
///
void q_packagekit__transaction_distro_upgrade(void* self, int32_t type, const char* name, const char* description);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, enum PackageKit__Transaction__DistroUpgrade type, const char* name, const char* description)
///
void q_packagekit__transaction_on_distro_upgrade(void* self, void (*callback)(void*, int32_t, const char*, const char*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param error enum PackageKit__Transaction__Error
/// @param details const char*
///
void q_packagekit__transaction_error_code(void* self, int32_t error, const char* details);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, enum PackageKit__Transaction__Error error, const char* details)
///
void q_packagekit__transaction_on_error_code(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param eulaID const char*
/// @param packageID const char*
/// @param vendor const char*
/// @param licenseAgreement const char*
///
void q_packagekit__transaction_eula_required(void* self, const char* eulaID, const char* packageID, const char* vendor, const char* licenseAgreement);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, const char* eulaID, const char* packageID, const char* vendor, const char* licenseAgreement)
///
void q_packagekit__transaction_on_eula_required(void* self, void (*callback)(void*, const char*, const char*, const char*, const char*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param type enum PackageKit__Transaction__MediaType
/// @param id const char*
/// @param text const char*
///
void q_packagekit__transaction_media_change_required(void* self, int32_t type, const char* id, const char* text);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, enum PackageKit__Transaction__MediaType type, const char* id, const char* text)
///
void q_packagekit__transaction_on_media_change_required(void* self, void (*callback)(void*, int32_t, const char*, const char*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param itemID const char*
/// @param status enum PackageKit__Transaction__Status
/// @param percentage uint32_t
///
void q_packagekit__transaction_item_progress(void* self, const char* itemID, int32_t status, uint32_t percentage);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, const char* itemID, enum PackageKit__Transaction__Status status, uint32_t percentage)
///
void q_packagekit__transaction_on_item_progress(void* self, void (*callback)(void*, const char*, int32_t, uint32_t));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param packageID const char*
/// @param filenames const char**
///
void q_packagekit__transaction_files(void* self, const char* packageID, const char* filenames[static 1]);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, const char* packageID, const char** filenames)
///
void q_packagekit__transaction_on_files(void* self, void (*callback)(void*, const char*, const char**));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param status enum PackageKit__Transaction__Exit
/// @param runtime uint32_t
///
void q_packagekit__transaction_finished(void* self, int32_t status, uint32_t runtime);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, enum PackageKit__Transaction__Exit status, uint32_t runtime)
///
void q_packagekit__transaction_on_finished(void* self, void (*callback)(void*, int32_t, uint32_t));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param info enum PackageKit__Transaction__Info
/// @param packageID const char*
/// @param summary const char*
///
void q_packagekit__transaction_package(void* self, int32_t info, const char* packageID, const char* summary);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, enum PackageKit__Transaction__Info info, const char* packageID, const char* summary)
///
void q_packagekit__transaction_on_package(void* self, void (*callback)(void*, int32_t, const char*, const char*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param values PackageKit__Details*
///
void q_packagekit__transaction_details(void* self, void* values);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, PackageKit__Details* values)
///
void q_packagekit__transaction_on_details(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param packageID const char*
/// @param updates const char**
/// @param obsoletes const char**
/// @param vendorUrls const char**
/// @param bugzillaUrls const char**
/// @param cveUrls const char**
/// @param restart enum PackageKit__Transaction__Restart
/// @param updateText const char*
/// @param changelog const char*
/// @param state enum PackageKit__Transaction__UpdateState
/// @param issued QDateTime*
/// @param updated QDateTime*
///
void q_packagekit__transaction_update_detail(void* self, const char* packageID, const char* updates[static 1], const char* obsoletes[static 1], const char* vendorUrls[static 1], const char* bugzillaUrls[static 1], const char* cveUrls[static 1], int32_t restart, const char* updateText, const char* changelog, int32_t state, void* issued, void* updated);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, const char* packageID, const char** updates, const char** obsoletes, const char** vendorUrls, const char** bugzillaUrls, const char** cveUrls, enum PackageKit__Transaction__Restart restart, const char* updateText, const char* changelog, enum PackageKit__Transaction__UpdateState state, QDateTime* issued, QDateTime* updated)
///
void q_packagekit__transaction_on_update_detail(void* self, void (*callback)(void*, const char*, const char**, const char**, const char**, const char**, const char**, int32_t, const char*, const char*, int32_t, void*, void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param repoId const char*
/// @param description const char*
/// @param enabled bool
///
void q_packagekit__transaction_repo_detail(void* self, const char* repoId, const char* description, bool enabled);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, const char* repoId, const char* description, bool enabled)
///
void q_packagekit__transaction_on_repo_detail(void* self, void (*callback)(void*, const char*, const char*, bool));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param packageID const char*
/// @param repoName const char*
/// @param keyUrl const char*
/// @param keyUserid const char*
/// @param keyId const char*
/// @param keyFingerprint const char*
/// @param keyTimestamp const char*
/// @param type enum PackageKit__Transaction__SigType
///
void q_packagekit__transaction_repo_signature_required(void* self, const char* packageID, const char* repoName, const char* keyUrl, const char* keyUserid, const char* keyId, const char* keyFingerprint, const char* keyTimestamp, int32_t type);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, const char* packageID, const char* repoName, const char* keyUrl, const char* keyUserid, const char* keyId, const char* keyFingerprint, const char* keyTimestamp, enum PackageKit__Transaction__SigType type)
///
void q_packagekit__transaction_on_repo_signature_required(void* self, void (*callback)(void*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, int32_t));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param type enum PackageKit__Transaction__Restart
/// @param packageID const char*
///
void q_packagekit__transaction_require_restart(void* self, int32_t type, const char* packageID);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, enum PackageKit__Transaction__Restart type, const char* packageID)
///
void q_packagekit__transaction_on_require_restart(void* self, void (*callback)(void*, int32_t, const char*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param transaction PackageKit__Transaction*
///
void q_packagekit__transaction_transaction(void* self, void* transaction);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, PackageKit__Transaction* transaction)
///
void q_packagekit__transaction_on_transaction(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param errorName const char*
///
/// @return enum PackageKit__Transaction__InternalError
///
int32_t q_packagekit__transaction_parse_error(void* self, const char* errorName);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Allows for overriding the related default method
///
/// @param self PackageKit__Transaction*
/// @param callback int32_t func(PackageKit__Transaction* self, const char* errorName)
///
void q_packagekit__transaction_on_parse_error(void* self, int32_t (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Base class method implementation
///
/// @param self PackageKit__Transaction*
/// @param errorName const char*
///
/// @return enum PackageKit__Transaction__InternalError
///
int32_t q_packagekit__transaction_qbase_parse_error(void* self, const char* errorName);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param signal QMetaMethod*
///
void q_packagekit__transaction_connect_notify(void* self, void* signal);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Allows for overriding the related default method
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, QMetaMethod* signal)
///
void q_packagekit__transaction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Base class method implementation
///
/// @param self PackageKit__Transaction*
/// @param signal QMetaMethod*
///
void q_packagekit__transaction_qbase_connect_notify(void* self, void* signal);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// @param self PackageKit__Transaction*
/// @param signal QMetaMethod*
///
void q_packagekit__transaction_disconnect_notify(void* self, void* signal);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Allows for overriding the related default method
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, QMetaMethod* signal)
///
void q_packagekit__transaction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Base class method implementation
///
/// @param self PackageKit__Transaction*
/// @param signal QMetaMethod*
///
void q_packagekit__transaction_qbase_disconnect_notify(void* self, void* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_packagekit__transaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_packagekit__transaction_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self PackageKit__Transaction*
///
const char* q_packagekit__transaction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self PackageKit__Transaction*
/// @param name const char*
///
void q_packagekit__transaction_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self PackageKit__Transaction*
///
bool q_packagekit__transaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self PackageKit__Transaction*
///
bool q_packagekit__transaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self PackageKit__Transaction*
///
bool q_packagekit__transaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self PackageKit__Transaction*
///
bool q_packagekit__transaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self PackageKit__Transaction*
/// @param b bool
///
bool q_packagekit__transaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self PackageKit__Transaction*
///
QThread* q_packagekit__transaction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self PackageKit__Transaction*
/// @param thread QThread*
///
bool q_packagekit__transaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self PackageKit__Transaction*
/// @param interval int
///
int32_t q_packagekit__transaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self PackageKit__Transaction*
/// @param time int64_t of nanoseconds
///
int32_t q_packagekit__transaction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self PackageKit__Transaction*
/// @param id int
///
void q_packagekit__transaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self PackageKit__Transaction*
/// @param id enum Qt__TimerId
///
void q_packagekit__transaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self PackageKit__Transaction*
///
/// @return libqt_list of QObject*
///
libqt_list q_packagekit__transaction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self PackageKit__Transaction*
/// @param parent QObject*
///
void q_packagekit__transaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self PackageKit__Transaction*
/// @param filterObj QObject*
///
void q_packagekit__transaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self PackageKit__Transaction*
/// @param obj QObject*
///
void q_packagekit__transaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_packagekit__transaction_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_packagekit__transaction_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self PackageKit__Transaction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_packagekit__transaction_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_packagekit__transaction_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_packagekit__transaction_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self PackageKit__Transaction*
///
bool q_packagekit__transaction_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self PackageKit__Transaction*
/// @param receiver QObject*
///
bool q_packagekit__transaction_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_packagekit__transaction_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self PackageKit__Transaction*
/// @param name const char*
/// @param value QVariant*
///
bool q_packagekit__transaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self PackageKit__Transaction*
/// @param name const char*
///
QVariant* q_packagekit__transaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self PackageKit__Transaction*
///
const char** q_packagekit__transaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self PackageKit__Transaction*
///
QBindingStorage* q_packagekit__transaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self PackageKit__Transaction*
///
const QBindingStorage* q_packagekit__transaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self)
///
void q_packagekit__transaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self PackageKit__Transaction*
///
QObject* q_packagekit__transaction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self PackageKit__Transaction*
/// @param classname const char*
///
bool q_packagekit__transaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self PackageKit__Transaction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_packagekit__transaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self PackageKit__Transaction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_packagekit__transaction_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_packagekit__transaction_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_packagekit__transaction_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self PackageKit__Transaction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_packagekit__transaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self PackageKit__Transaction*
/// @param signal const char*
///
bool q_packagekit__transaction_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self PackageKit__Transaction*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_packagekit__transaction_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self PackageKit__Transaction*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_packagekit__transaction_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self PackageKit__Transaction*
/// @param receiver QObject*
/// @param member const char*
///
bool q_packagekit__transaction_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Transaction*
/// @param param1 QObject*
///
void q_packagekit__transaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, QObject* param1)
///
void q_packagekit__transaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param event QEvent*
///
bool q_packagekit__transaction_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param event QEvent*
///
bool q_packagekit__transaction_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param callback bool func(PackageKit__Transaction* self, QEvent* event)
///
void q_packagekit__transaction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_packagekit__transaction_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_packagekit__transaction_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param callback bool func(PackageKit__Transaction* self, QObject* watched, QEvent* event)
///
void q_packagekit__transaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param event QTimerEvent*
///
void q_packagekit__transaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param event QTimerEvent*
///
void q_packagekit__transaction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, QTimerEvent* event)
///
void q_packagekit__transaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param event QChildEvent*
///
void q_packagekit__transaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param event QChildEvent*
///
void q_packagekit__transaction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, QChildEvent* event)
///
void q_packagekit__transaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param event QEvent*
///
void q_packagekit__transaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param event QEvent*
///
void q_packagekit__transaction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, QEvent* event)
///
void q_packagekit__transaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self PackageKit__Transaction*
///
QObject* q_packagekit__transaction_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self PackageKit__Transaction*
///
QObject* q_packagekit__transaction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param callback QObject* func()
///
void q_packagekit__transaction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self PackageKit__Transaction*
///
int32_t q_packagekit__transaction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self PackageKit__Transaction*
///
int32_t q_packagekit__transaction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param callback int32_t func()
///
void q_packagekit__transaction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param signal const char*
///
int32_t q_packagekit__transaction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param signal const char*
///
int32_t q_packagekit__transaction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param callback int32_t func(PackageKit__Transaction* self, const char* signal)
///
void q_packagekit__transaction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param signal QMetaMethod*
///
bool q_packagekit__transaction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param signal QMetaMethod*
///
bool q_packagekit__transaction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self PackageKit__Transaction*
/// @param callback bool func(PackageKit__Transaction* self, QMetaMethod* signal)
///
void q_packagekit__transaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self PackageKit__Transaction*
/// @param callback void func(PackageKit__Transaction* self, const char* objectName)
///
void q_packagekit__transaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)
///
/// Delete this object from C++ memory.
///
/// @param self PackageKit__Transaction*
///
void q_packagekit__transaction_delete(void* self);

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORNONE = 0,
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORUNKOWN = 1,
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORFAILED = 2,
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORFAILEDAUTH = 3,
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORNOTID = 4,
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORALREADYTID = 5,
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORROLEUNKOWN = 6,
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORCANNOTSTARTDAEMON = 7,
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORINVALIDINPUT = 8,
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORINVALIDFILE = 9,
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORFUNCTIONNOTSUPPORTED = 10,
    PACKAGEKIT_TRANSACTION_INTERNALERROR_INTERNALERRORDAEMONUNREACHABLE = 11
} PackageKit__Transaction__InternalError;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_ROLE_ROLEUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_ROLE_ROLECANCEL = 1,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEDEPENDSON = 2,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEGETDETAILS = 3,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEGETFILES = 4,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEGETPACKAGES = 5,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEGETREPOLIST = 6,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEREQUIREDBY = 7,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEGETUPDATEDETAIL = 8,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEGETUPDATES = 9,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEINSTALLFILES = 10,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEINSTALLPACKAGES = 11,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEINSTALLSIGNATURE = 12,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEREFRESHCACHE = 13,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEREMOVEPACKAGES = 14,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEREPOENABLE = 15,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEREPOSETDATA = 16,
    PACKAGEKIT_TRANSACTION_ROLE_ROLERESOLVE = 17,
    PACKAGEKIT_TRANSACTION_ROLE_ROLESEARCHDETAILS = 18,
    PACKAGEKIT_TRANSACTION_ROLE_ROLESEARCHFILE = 19,
    PACKAGEKIT_TRANSACTION_ROLE_ROLESEARCHGROUP = 20,
    PACKAGEKIT_TRANSACTION_ROLE_ROLESEARCHNAME = 21,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEUPDATEPACKAGES = 22,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEWHATPROVIDES = 23,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEACCEPTEULA = 24,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEDOWNLOADPACKAGES = 25,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEGETDISTROUPGRADES = 26,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEGETCATEGORIES = 27,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEGETOLDTRANSACTIONS = 28,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEREPAIRSYSTEM = 29,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEGETDETAILSLOCAL = 30,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEGETFILESLOCAL = 31,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEREPOREMOVE = 32,
    PACKAGEKIT_TRANSACTION_ROLE_ROLEUPGRADESYSTEM = 33
} PackageKit__Transaction__Role;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_ERROR_ERRORUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_ERROR_ERROROOM = 1,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORNONETWORK = 2,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORNOTSUPPORTED = 3,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORINTERNALERROR = 4,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORGPGFAILURE = 5,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGEIDINVALID = 6,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGENOTINSTALLED = 7,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGENOTFOUND = 8,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGEALREADYINSTALLED = 9,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGEDOWNLOADFAILED = 10,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORGROUPNOTFOUND = 11,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORGROUPLISTINVALID = 12,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORDEPRESOLUTIONFAILED = 13,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORFILTERINVALID = 14,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCREATETHREADFAILED = 15,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORTRANSACTIONERROR = 16,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORTRANSACTIONCANCELLED = 17,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORNOCACHE = 18,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORREPONOTFOUND = 19,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANNOTREMOVESYSTEMPACKAGE = 20,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPROCESSKILL = 21,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORFAILEDINITIALIZATION = 22,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORFAILEDFINALISE = 23,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORFAILEDCONFIGPARSING = 24,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANNOTCANCEL = 25,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANNOTGETLOCK = 26,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORNOPACKAGESTOUPDATE = 27,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANNOTWRITEREPOCONFIG = 28,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORLOCALINSTALLFAILED = 29,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORBADGPGSIGNATURE = 30,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORMISSINGGPGSIGNATURE = 31,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANNOTINSTALLSOURCEPACKAGE = 32,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORREPOCONFIGURATIONERROR = 33,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORNOLICENSEAGREEMENT = 34,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORFILECONFLICTS = 35,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGECONFLICTS = 36,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORREPONOTAVAILABLE = 37,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORINVALIDPACKAGEFILE = 38,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGEINSTALLBLOCKED = 39,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGECORRUPT = 40,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORALLPACKAGESALREADYINSTALLED = 41,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORFILENOTFOUND = 42,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORNOMOREMIRRORSTOTRY = 43,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORNODISTROUPGRADEDATA = 44,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORINCOMPATIBLEARCHITECTURE = 45,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORNOSPACEONDEVICE = 46,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORMEDIACHANGEREQUIRED = 47,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORNOTAUTHORIZED = 48,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORUPDATENOTFOUND = 49,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANNOTINSTALLREPOUNSIGNED = 50,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANNOTUPDATEREPOUNSIGNED = 51,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANNOTGETFILELIST = 52,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANNOTGETREQUIRES = 53,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANNOTDISABLEREPOSITORY = 54,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORRESTRICTEDDOWNLOAD = 55,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGEFAILEDTOCONFIGURE = 56,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGEFAILEDTOBUILD = 57,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGEFAILEDTOINSTALL = 58,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGEFAILEDTOREMOVE = 59,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORUPDATEFAILEDDUETORUNNINGPROCESS = 60,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPACKAGEDATABASECHANGED = 61,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORPROVIDETYPENOTSUPPORTED = 62,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORINSTALLROOTINVALID = 63,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANNOTFETCHSOURCES = 64,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORCANCELLEDPRIORITY = 65,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORUNFINISHEDTRANSACTION = 66,
    PACKAGEKIT_TRANSACTION_ERROR_ERRORLOCKREQUIRED = 67
} PackageKit__Transaction__Error;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_EXIT_EXITUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_EXIT_EXITSUCCESS = 1,
    PACKAGEKIT_TRANSACTION_EXIT_EXITFAILED = 2,
    PACKAGEKIT_TRANSACTION_EXIT_EXITCANCELLED = 3,
    PACKAGEKIT_TRANSACTION_EXIT_EXITKEYREQUIRED = 4,
    PACKAGEKIT_TRANSACTION_EXIT_EXITEULAREQUIRED = 5,
    PACKAGEKIT_TRANSACTION_EXIT_EXITKILLED = 6,
    PACKAGEKIT_TRANSACTION_EXIT_EXITMEDIACHANGEREQUIRED = 7,
    PACKAGEKIT_TRANSACTION_EXIT_EXITNEEDUNTRUSTED = 8,
    PACKAGEKIT_TRANSACTION_EXIT_EXITCANCELLEDPRIORITY = 9,
    PACKAGEKIT_TRANSACTION_EXIT_EXITREPAIRREQUIRED = 10
} PackageKit__Transaction__Exit;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_FILTER_FILTERUNKNOWN = 1,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNONE = 2,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERINSTALLED = 4,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTINSTALLED = 8,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERDEVEL = 16,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTDEVEL = 32,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERGUI = 64,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTGUI = 128,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERFREE = 256,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTFREE = 512,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERVISIBLE = 1024,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTVISIBLE = 2048,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERSUPPORTED = 4096,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTSUPPORTED = 8192,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERBASENAME = 16384,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTBASENAME = 32768,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNEWEST = 65536,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTNEWEST = 131072,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERARCH = 262144,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTARCH = 524288,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERSOURCE = 1048576,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTSOURCE = 2097152,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERCOLLECTIONS = 4194304,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTCOLLECTIONS = 8388608,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERAPPLICATION = 16777216,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTAPPLICATION = 33554432,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERDOWNLOADED = 67108864,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERNOTDOWNLOADED = 134217728,
    PACKAGEKIT_TRANSACTION_FILTER_FILTERLAST = 268435456
} PackageKit__Transaction__Filter;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_STATUS_STATUSUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSWAIT = 1,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSSETUP = 2,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSRUNNING = 3,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSQUERY = 4,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSINFO = 5,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSREMOVE = 6,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSREFRESHCACHE = 7,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSDOWNLOAD = 8,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSINSTALL = 9,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSUPDATE = 10,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSCLEANUP = 11,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSOBSOLETE = 12,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSDEPRESOLVE = 13,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSSIGCHECK = 14,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSTESTCOMMIT = 15,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSCOMMIT = 16,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSREQUEST = 17,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSFINISHED = 18,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSCANCEL = 19,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSDOWNLOADREPOSITORY = 20,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSDOWNLOADPACKAGELIST = 21,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSDOWNLOADFILELIST = 22,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSDOWNLOADCHANGELOG = 23,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSDOWNLOADGROUP = 24,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSDOWNLOADUPDATEINFO = 25,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSREPACKAGING = 26,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSLOADINGCACHE = 27,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSSCANAPPLICATIONS = 28,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSGENERATEPACKAGELIST = 29,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSWAITINGFORLOCK = 30,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSWAITINGFORAUTH = 31,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSSCANPROCESSLIST = 32,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSCHECKEXECUTABLEFILES = 33,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSCHECKLIBRARIES = 34,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSCOPYFILES = 35,
    PACKAGEKIT_TRANSACTION_STATUS_STATUSRUNHOOK = 36
} PackageKit__Transaction__Status;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_MEDIATYPE_MEDIATYPEUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_MEDIATYPE_MEDIATYPECD = 1,
    PACKAGEKIT_TRANSACTION_MEDIATYPE_MEDIATYPEDVD = 2,
    PACKAGEKIT_TRANSACTION_MEDIATYPE_MEDIATYPEDISC = 3
} PackageKit__Transaction__MediaType;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_DISTROUPGRADE_DISTROUPGRADEUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_DISTROUPGRADE_DISTROUPGRADESTABLE = 1,
    PACKAGEKIT_TRANSACTION_DISTROUPGRADE_DISTROUPGRADEUNSTABLE = 2
} PackageKit__Transaction__DistroUpgrade;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_UPGRADEKIND_UPGRADEKINDUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_UPGRADEKIND_UPGRADEKINDMINIMAL = 1,
    PACKAGEKIT_TRANSACTION_UPGRADEKIND_UPGRADEKINDDEFAULT = 2,
    PACKAGEKIT_TRANSACTION_UPGRADEKIND_UPGRADEKINDCOMPLETE = 3
} PackageKit__Transaction__UpgradeKind;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_TRANSACTIONFLAG_TRANSACTIONFLAGNONE = 1,
    PACKAGEKIT_TRANSACTION_TRANSACTIONFLAG_TRANSACTIONFLAGONLYTRUSTED = 2,
    PACKAGEKIT_TRANSACTION_TRANSACTIONFLAG_TRANSACTIONFLAGSIMULATE = 4,
    PACKAGEKIT_TRANSACTION_TRANSACTIONFLAG_TRANSACTIONFLAGONLYDOWNLOAD = 8,
    PACKAGEKIT_TRANSACTION_TRANSACTIONFLAG_TRANSACTIONFLAGALLOWREINSTALL = 16,
    PACKAGEKIT_TRANSACTION_TRANSACTIONFLAG_TRANSACTIONFLAGJUSTREINSTALL = 32,
    PACKAGEKIT_TRANSACTION_TRANSACTIONFLAG_TRANSACTIONFLAGALLOWDOWNGRADE = 64
} PackageKit__Transaction__TransactionFlag;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_RESTART_RESTARTUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_RESTART_RESTARTNONE = 1,
    PACKAGEKIT_TRANSACTION_RESTART_RESTARTAPPLICATION = 2,
    PACKAGEKIT_TRANSACTION_RESTART_RESTARTSESSION = 3,
    PACKAGEKIT_TRANSACTION_RESTART_RESTARTSYSTEM = 4,
    PACKAGEKIT_TRANSACTION_RESTART_RESTARTSECURITYSESSION = 5,
    PACKAGEKIT_TRANSACTION_RESTART_RESTARTSECURITYSYSTEM = 6
} PackageKit__Transaction__Restart;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_UPDATESTATE_UPDATESTATEUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_UPDATESTATE_UPDATESTATESTABLE = 1,
    PACKAGEKIT_TRANSACTION_UPDATESTATE_UPDATESTATEUNSTABLE = 2,
    PACKAGEKIT_TRANSACTION_UPDATESTATE_UPDATESTATETESTING = 3
} PackageKit__Transaction__UpdateState;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_GROUP_GROUPUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPACCESSIBILITY = 1,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPACCESSORIES = 2,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPADMINTOOLS = 3,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPCOMMUNICATION = 4,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPDESKTOPGNOME = 5,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPDESKTOPKDE = 6,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPDESKTOPOTHER = 7,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPDESKTOPXFCE = 8,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPEDUCATION = 9,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPFONTS = 10,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPGAMES = 11,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPGRAPHICS = 12,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPINTERNET = 13,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPLEGACY = 14,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPLOCALIZATION = 15,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPMAPS = 16,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPMULTIMEDIA = 17,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPNETWORK = 18,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPOFFICE = 19,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPOTHER = 20,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPPOWERMANAGEMENT = 21,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPPROGRAMMING = 22,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPPUBLISHING = 23,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPREPOS = 24,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPSECURITY = 25,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPSERVERS = 26,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPSYSTEM = 27,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPVIRTUALIZATION = 28,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPSCIENCE = 29,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPDOCUMENTATION = 30,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPELECTRONICS = 31,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPCOLLECTIONS = 32,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPVENDOR = 33,
    PACKAGEKIT_TRANSACTION_GROUP_GROUPNEWEST = 34
} PackageKit__Transaction__Group;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_INFO_INFOUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_INFO_INFOINSTALLED = 1,
    PACKAGEKIT_TRANSACTION_INFO_INFOAVAILABLE = 2,
    PACKAGEKIT_TRANSACTION_INFO_INFOLOW = 3,
    PACKAGEKIT_TRANSACTION_INFO_INFOENHANCEMENT = 4,
    PACKAGEKIT_TRANSACTION_INFO_INFONORMAL = 5,
    PACKAGEKIT_TRANSACTION_INFO_INFOBUGFIX = 6,
    PACKAGEKIT_TRANSACTION_INFO_INFOIMPORTANT = 7,
    PACKAGEKIT_TRANSACTION_INFO_INFOSECURITY = 8,
    PACKAGEKIT_TRANSACTION_INFO_INFOBLOCKED = 9,
    PACKAGEKIT_TRANSACTION_INFO_INFODOWNLOADING = 10,
    PACKAGEKIT_TRANSACTION_INFO_INFOUPDATING = 11,
    PACKAGEKIT_TRANSACTION_INFO_INFOINSTALLING = 12,
    PACKAGEKIT_TRANSACTION_INFO_INFOREMOVING = 13,
    PACKAGEKIT_TRANSACTION_INFO_INFOCLEANUP = 14,
    PACKAGEKIT_TRANSACTION_INFO_INFOOBSOLETING = 15,
    PACKAGEKIT_TRANSACTION_INFO_INFOCOLLECTIONINSTALLED = 16,
    PACKAGEKIT_TRANSACTION_INFO_INFOCOLLECTIONAVAILABLE = 17,
    PACKAGEKIT_TRANSACTION_INFO_INFOFINISHED = 18,
    PACKAGEKIT_TRANSACTION_INFO_INFOREINSTALLING = 19,
    PACKAGEKIT_TRANSACTION_INFO_INFODOWNGRADING = 20,
    PACKAGEKIT_TRANSACTION_INFO_INFOPREPARING = 21,
    PACKAGEKIT_TRANSACTION_INFO_INFODECOMPRESSING = 22,
    PACKAGEKIT_TRANSACTION_INFO_INFOUNTRUSTED = 23,
    PACKAGEKIT_TRANSACTION_INFO_INFOTRUSTED = 24,
    PACKAGEKIT_TRANSACTION_INFO_INFOUNAVAILABLE = 25,
    PACKAGEKIT_TRANSACTION_INFO_INFOCRITICAL = 26,
    PACKAGEKIT_TRANSACTION_INFO_INFOINSTALL = 27,
    PACKAGEKIT_TRANSACTION_INFO_INFOREMOVE = 28,
    PACKAGEKIT_TRANSACTION_INFO_INFOOBSOLETE = 29,
    PACKAGEKIT_TRANSACTION_INFO_INFODOWNGRADE = 30
} PackageKit__Transaction__Info;

/// [Upstream resources](https://github.com/PackageKit/PackageKit-Qt)

typedef enum {
    PACKAGEKIT_TRANSACTION_SIGTYPE_SIGTYPEUNKNOWN = 0,
    PACKAGEKIT_TRANSACTION_SIGTYPE_SIGTYPEGPG = 1
} PackageKit__Transaction__SigType;

#endif
