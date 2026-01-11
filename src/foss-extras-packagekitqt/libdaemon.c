#include "libbitfield.hpp"
#include "liboffline.hpp"
#include "libtransaction_1.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libdaemon.hpp"
#include "libdaemon.h"

const QMetaObject* q_packagekit__daemon_meta_object(void* self) {
    return PackageKit__Daemon_MetaObject((PackageKit__Daemon*)self);
}

void* q_packagekit__daemon_metacast(void* self, const char* param1) {
    return PackageKit__Daemon_Metacast((PackageKit__Daemon*)self, param1);
}

int32_t q_packagekit__daemon_metacall(void* self, int32_t param1, int param2, void* param3) {
    return PackageKit__Daemon_Metacall((PackageKit__Daemon*)self, param1, param2, param3);
}

const char* q_packagekit__daemon_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

PackageKit__Daemon* q_packagekit__daemon_global() {
    return PackageKit__Daemon_Global();
}

bool q_packagekit__daemon_is_running() {
    return PackageKit__Daemon_IsRunning();
}

PackageKit__Bitfield* q_packagekit__daemon_roles() {
    return PackageKit__Daemon_Roles();
}

const char* q_packagekit__daemon_backend_name() {
    libqt_string _str = PackageKit__Daemon_BackendName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__daemon_backend_description() {
    libqt_string _str = PackageKit__Daemon_BackendDescription();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__daemon_backend_author() {
    libqt_string _str = PackageKit__Daemon_BackendAuthor();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_packagekit__daemon_filters() {
    return PackageKit__Daemon_Filters();
}

PackageKit__Bitfield* q_packagekit__daemon_groups() {
    return PackageKit__Daemon_Groups();
}

bool q_packagekit__daemon_locked() {
    return PackageKit__Daemon_Locked();
}

const char** q_packagekit__daemon_mime_types() {
    libqt_list _arr = PackageKit__Daemon_MimeTypes();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_mime_types");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

int32_t q_packagekit__daemon_network_state() {
    return PackageKit__Daemon_NetworkState();
}

const char* q_packagekit__daemon_distro_i_d() {
    libqt_string _str = PackageKit__Daemon_DistroID();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_packagekit__daemon_version_major() {
    return PackageKit__Daemon_VersionMajor();
}

uint32_t q_packagekit__daemon_version_minor() {
    return PackageKit__Daemon_VersionMinor();
}

uint32_t q_packagekit__daemon_version_micro() {
    return PackageKit__Daemon_VersionMicro();
}

void q_packagekit__daemon_set_hints(const char* hints[static 1]) {
    size_t hints_len = libqt_strv_length(hints);
    libqt_string* hints_qstr = (libqt_string*)malloc(hints_len * sizeof(libqt_string));
    if (hints_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_set_hints");
        abort();
    }
    for (size_t i = 0; i < hints_len; ++i) {
        hints_qstr[i] = qstring(hints[i]);
    }
    libqt_list hints_list = qlist(hints_qstr, hints_len);
    PackageKit__Daemon_SetHints(hints_list);
    free(hints_qstr);
}

void q_packagekit__daemon_set_hints2(const char* hints) {
    PackageKit__Daemon_SetHints2(qstring(hints));
}

const char** q_packagekit__daemon_hints() {
    libqt_list _arr = PackageKit__Daemon_Hints();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_hints");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

PackageKit__Offline* q_packagekit__daemon_offline(void* self) {
    return PackageKit__Daemon_Offline((PackageKit__Daemon*)self);
}

const char* q_packagekit__daemon_package_name(const char* packageID) {
    libqt_string _str = PackageKit__Daemon_PackageName(qstring(packageID));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__daemon_package_version(const char* packageID) {
    libqt_string _str = PackageKit__Daemon_PackageVersion(qstring(packageID));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__daemon_package_arch(const char* packageID) {
    libqt_string _str = PackageKit__Daemon_PackageArch(qstring(packageID));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__daemon_package_data(const char* packageID) {
    libqt_string _str = PackageKit__Daemon_PackageData(qstring(packageID));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__daemon_enum_to_string(void* metaObject, int value, const char* enumName) {
    libqt_string _str = PackageKit__Daemon_EnumToString((QMetaObject*)metaObject, value, enumName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_packagekit__daemon_enum_from_string(void* metaObject, const char* str, const char* enumName) {
    return PackageKit__Daemon_EnumFromString((QMetaObject*)metaObject, qstring(str), enumName);
}

PackageKit__Transaction* q_packagekit__daemon_accept_eula(const char* eulaID) {
    return PackageKit__Daemon_AcceptEula(qstring(eulaID));
}

PackageKit__Transaction* q_packagekit__daemon_download_packages(const char* packageIDs[static 1]) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_download_packages");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_DownloadPackages(packageIDs_list);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_download_package(const char* packageID) {
    return PackageKit__Daemon_DownloadPackage(qstring(packageID));
}

PackageKit__Transaction* q_packagekit__daemon_get_categories() {
    return PackageKit__Daemon_GetCategories();
}

PackageKit__Transaction* q_packagekit__daemon_depends_on(const char* packageIDs[static 1]) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_depends_on");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_DependsOn(packageIDs_list);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_depends_on2(const char* packageID) {
    return PackageKit__Daemon_DependsOn2(qstring(packageID));
}

PackageKit__Transaction* q_packagekit__daemon_get_details(const char* packageIDs[static 1]) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_get_details");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_GetDetails(packageIDs_list);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_get_details2(const char* packageID) {
    return PackageKit__Daemon_GetDetails2(qstring(packageID));
}

PackageKit__Transaction* q_packagekit__daemon_get_details_local(const char* files[static 1]) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_get_details_local");
        abort();
    }
    for (size_t i = 0; i < files_len; ++i) {
        files_qstr[i] = qstring(files[i]);
    }
    libqt_list files_list = qlist(files_qstr, files_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_GetDetailsLocal(files_list);
    free(files_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_get_details_local2(const char* file) {
    return PackageKit__Daemon_GetDetailsLocal2(qstring(file));
}

PackageKit__Transaction* q_packagekit__daemon_get_files(const char* packageIDs[static 1]) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_get_files");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_GetFiles(packageIDs_list);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_get_files2(const char* packageIDs) {
    return PackageKit__Daemon_GetFiles2(qstring(packageIDs));
}

PackageKit__Transaction* q_packagekit__daemon_get_files_local(const char* files[static 1]) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_get_files_local");
        abort();
    }
    for (size_t i = 0; i < files_len; ++i) {
        files_qstr[i] = qstring(files[i]);
    }
    libqt_list files_list = qlist(files_qstr, files_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_GetFilesLocal(files_list);
    free(files_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_get_files_local2(const char* file) {
    return PackageKit__Daemon_GetFilesLocal2(qstring(file));
}

PackageKit__Transaction* q_packagekit__daemon_get_old_transactions(uint32_t number) {
    return PackageKit__Daemon_GetOldTransactions(number);
}

PackageKit__Transaction* q_packagekit__daemon_get_packages() {
    return PackageKit__Daemon_GetPackages();
}

PackageKit__Transaction* q_packagekit__daemon_get_repo_list() {
    return PackageKit__Daemon_GetRepoList();
}

PackageKit__Transaction* q_packagekit__daemon_required_by(const char* packageIDs[static 1]) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_required_by");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_RequiredBy(packageIDs_list);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_required_by2(const char* packageID) {
    return PackageKit__Daemon_RequiredBy2(qstring(packageID));
}

PackageKit__Transaction* q_packagekit__daemon_get_updates_details(const char* packageIDs[static 1]) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_get_updates_details");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_GetUpdatesDetails(packageIDs_list);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_get_update_detail(const char* packageID) {
    return PackageKit__Daemon_GetUpdateDetail(qstring(packageID));
}

PackageKit__Transaction* q_packagekit__daemon_get_updates() {
    return PackageKit__Daemon_GetUpdates();
}

PackageKit__Transaction* q_packagekit__daemon_get_distro_upgrades() {
    return PackageKit__Daemon_GetDistroUpgrades();
}

PackageKit__Transaction* q_packagekit__daemon_upgrade_system(const char* distroId, int32_t kind) {
    return PackageKit__Daemon_UpgradeSystem(qstring(distroId), kind);
}

PackageKit__Transaction* q_packagekit__daemon_install_files(const char* files[static 1]) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_install_files");
        abort();
    }
    for (size_t i = 0; i < files_len; ++i) {
        files_qstr[i] = qstring(files[i]);
    }
    libqt_list files_list = qlist(files_qstr, files_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_InstallFiles(files_list);
    free(files_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_install_file(const char* file) {
    return PackageKit__Daemon_InstallFile(qstring(file));
}

PackageKit__Transaction* q_packagekit__daemon_install_packages(const char* packageIDs[static 1]) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_install_packages");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_InstallPackages(packageIDs_list);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_install_package(const char* packageID) {
    return PackageKit__Daemon_InstallPackage(qstring(packageID));
}

PackageKit__Transaction* q_packagekit__daemon_install_signature(int32_t type, const char* keyID, const char* packageID) {
    return PackageKit__Daemon_InstallSignature(type, qstring(keyID), qstring(packageID));
}

PackageKit__Transaction* q_packagekit__daemon_refresh_cache(bool force) {
    return PackageKit__Daemon_RefreshCache(force);
}

PackageKit__Transaction* q_packagekit__daemon_remove_packages(const char* packageIDs[static 1]) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_remove_packages");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_RemovePackages(packageIDs_list);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_remove_package(const char* packageID) {
    return PackageKit__Daemon_RemovePackage(qstring(packageID));
}

PackageKit__Transaction* q_packagekit__daemon_repair_system() {
    return PackageKit__Daemon_RepairSystem();
}

PackageKit__Transaction* q_packagekit__daemon_repo_enable(const char* repoId) {
    return PackageKit__Daemon_RepoEnable(qstring(repoId));
}

PackageKit__Transaction* q_packagekit__daemon_repo_remove(const char* repoId, bool autoremove) {
    return PackageKit__Daemon_RepoRemove(qstring(repoId), autoremove);
}

PackageKit__Transaction* q_packagekit__daemon_repo_set_data(const char* repoId, const char* parameter, const char* value) {
    return PackageKit__Daemon_RepoSetData(qstring(repoId), qstring(parameter), qstring(value));
}

PackageKit__Transaction* q_packagekit__daemon_resolve(const char* packageNames[static 1]) {
    size_t packageNames_len = libqt_strv_length(packageNames);
    libqt_string* packageNames_qstr = (libqt_string*)malloc(packageNames_len * sizeof(libqt_string));
    if (packageNames_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_resolve");
        abort();
    }
    for (size_t i = 0; i < packageNames_len; ++i) {
        packageNames_qstr[i] = qstring(packageNames[i]);
    }
    libqt_list packageNames_list = qlist(packageNames_qstr, packageNames_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_Resolve(packageNames_list);
    free(packageNames_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_resolve2(const char* packageName) {
    return PackageKit__Daemon_Resolve2(qstring(packageName));
}

PackageKit__Transaction* q_packagekit__daemon_search_files(const char* search[static 1]) {
    size_t search_len = libqt_strv_length(search);
    libqt_string* search_qstr = (libqt_string*)malloc(search_len * sizeof(libqt_string));
    if (search_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_search_files");
        abort();
    }
    for (size_t i = 0; i < search_len; ++i) {
        search_qstr[i] = qstring(search[i]);
    }
    libqt_list search_list = qlist(search_qstr, search_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_SearchFiles(search_list);
    free(search_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_search_files2(const char* search) {
    return PackageKit__Daemon_SearchFiles2(qstring(search));
}

PackageKit__Transaction* q_packagekit__daemon_search_details(const char* search[static 1]) {
    size_t search_len = libqt_strv_length(search);
    libqt_string* search_qstr = (libqt_string*)malloc(search_len * sizeof(libqt_string));
    if (search_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_search_details");
        abort();
    }
    for (size_t i = 0; i < search_len; ++i) {
        search_qstr[i] = qstring(search[i]);
    }
    libqt_list search_list = qlist(search_qstr, search_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_SearchDetails(search_list);
    free(search_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_search_details2(const char* search) {
    return PackageKit__Daemon_SearchDetails2(qstring(search));
}

PackageKit__Transaction* q_packagekit__daemon_search_groups(const char* groups[static 1]) {
    size_t groups_len = libqt_strv_length(groups);
    libqt_string* groups_qstr = (libqt_string*)malloc(groups_len * sizeof(libqt_string));
    if (groups_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_search_groups");
        abort();
    }
    for (size_t i = 0; i < groups_len; ++i) {
        groups_qstr[i] = qstring(groups[i]);
    }
    libqt_list groups_list = qlist(groups_qstr, groups_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_SearchGroups(groups_list);
    free(groups_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_search_group(const char* group) {
    return PackageKit__Daemon_SearchGroup(qstring(group));
}

PackageKit__Transaction* q_packagekit__daemon_search_group2(int32_t group) {
    return PackageKit__Daemon_SearchGroup2(group);
}

PackageKit__Transaction* q_packagekit__daemon_search_groups2(void* group) {
    return PackageKit__Daemon_SearchGroups2((PackageKit__Bitfield*)group);
}

PackageKit__Transaction* q_packagekit__daemon_search_names(const char* search[static 1]) {
    size_t search_len = libqt_strv_length(search);
    libqt_string* search_qstr = (libqt_string*)malloc(search_len * sizeof(libqt_string));
    if (search_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_search_names");
        abort();
    }
    for (size_t i = 0; i < search_len; ++i) {
        search_qstr[i] = qstring(search[i]);
    }
    libqt_list search_list = qlist(search_qstr, search_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_SearchNames(search_list);
    free(search_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_search_names2(const char* search) {
    return PackageKit__Daemon_SearchNames2(qstring(search));
}

PackageKit__Transaction* q_packagekit__daemon_update_packages(const char* packageIDs[static 1]) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_update_packages");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_UpdatePackages(packageIDs_list);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_update_package(const char* packageID) {
    return PackageKit__Daemon_UpdatePackage(qstring(packageID));
}

PackageKit__Transaction* q_packagekit__daemon_what_provides(const char* search[static 1]) {
    size_t search_len = libqt_strv_length(search);
    libqt_string* search_qstr = (libqt_string*)malloc(search_len * sizeof(libqt_string));
    if (search_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_what_provides");
        abort();
    }
    for (size_t i = 0; i < search_len; ++i) {
        search_qstr[i] = qstring(search[i]);
    }
    libqt_list search_list = qlist(search_qstr, search_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_WhatProvides(search_list);
    free(search_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_what_provides2(const char* search) {
    return PackageKit__Daemon_WhatProvides2(qstring(search));
}

void q_packagekit__daemon_is_running_changed(void* self) {
    PackageKit__Daemon_IsRunningChanged((PackageKit__Daemon*)self);
}

void q_packagekit__daemon_on_is_running_changed(void* self, void (*callback)(void*)) {
    PackageKit__Daemon_Connect_IsRunningChanged((PackageKit__Daemon*)self, (intptr_t)callback);
}

void q_packagekit__daemon_network_state_changed(void* self) {
    PackageKit__Daemon_NetworkStateChanged((PackageKit__Daemon*)self);
}

void q_packagekit__daemon_on_network_state_changed(void* self, void (*callback)(void*)) {
    PackageKit__Daemon_Connect_NetworkStateChanged((PackageKit__Daemon*)self, (intptr_t)callback);
}

void q_packagekit__daemon_changed(void* self) {
    PackageKit__Daemon_Changed((PackageKit__Daemon*)self);
}

void q_packagekit__daemon_on_changed(void* self, void (*callback)(void*)) {
    PackageKit__Daemon_Connect_Changed((PackageKit__Daemon*)self, (intptr_t)callback);
}

void q_packagekit__daemon_repo_list_changed(void* self) {
    PackageKit__Daemon_RepoListChanged((PackageKit__Daemon*)self);
}

void q_packagekit__daemon_on_repo_list_changed(void* self, void (*callback)(void*)) {
    PackageKit__Daemon_Connect_RepoListChanged((PackageKit__Daemon*)self, (intptr_t)callback);
}

void q_packagekit__daemon_restart_scheduled(void* self) {
    PackageKit__Daemon_RestartScheduled((PackageKit__Daemon*)self);
}

void q_packagekit__daemon_on_restart_scheduled(void* self, void (*callback)(void*)) {
    PackageKit__Daemon_Connect_RestartScheduled((PackageKit__Daemon*)self, (intptr_t)callback);
}

void q_packagekit__daemon_transaction_list_changed(void* self, const char* tids[static 1]) {
    size_t tids_len = libqt_strv_length(tids);
    libqt_string* tids_qstr = (libqt_string*)malloc(tids_len * sizeof(libqt_string));
    if (tids_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_transaction_list_changed");
        abort();
    }
    for (size_t i = 0; i < tids_len; ++i) {
        tids_qstr[i] = qstring(tids[i]);
    }
    libqt_list tids_list = qlist(tids_qstr, tids_len);
    PackageKit__Daemon_TransactionListChanged((PackageKit__Daemon*)self, tids_list);
    free(tids_qstr);
}

void q_packagekit__daemon_on_transaction_list_changed(void* self, void (*callback)(void*, const char**)) {
    PackageKit__Daemon_Connect_TransactionListChanged((PackageKit__Daemon*)self, (intptr_t)callback);
}

void q_packagekit__daemon_updates_changed(void* self) {
    PackageKit__Daemon_UpdatesChanged((PackageKit__Daemon*)self);
}

void q_packagekit__daemon_on_updates_changed(void* self, void (*callback)(void*)) {
    PackageKit__Daemon_Connect_UpdatesChanged((PackageKit__Daemon*)self, (intptr_t)callback);
}

void q_packagekit__daemon_daemon_quit(void* self) {
    PackageKit__Daemon_DaemonQuit((PackageKit__Daemon*)self);
}

void q_packagekit__daemon_on_daemon_quit(void* self, void (*callback)(void*)) {
    PackageKit__Daemon_Connect_DaemonQuit((PackageKit__Daemon*)self, (intptr_t)callback);
}

const char* q_packagekit__daemon_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__daemon_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

PackageKit__Transaction* q_packagekit__daemon_download_packages2(const char* packageIDs[static 1], bool storeInCache) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_download_packages2");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_DownloadPackages2(packageIDs_list, storeInCache);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_download_package2(const char* packageID, bool storeInCache) {
    return PackageKit__Daemon_DownloadPackage2(qstring(packageID), storeInCache);
}

PackageKit__Transaction* q_packagekit__daemon_depends_on22(const char* packageIDs[static 1], int32_t filters) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_depends_on22");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_DependsOn22(packageIDs_list, filters);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_depends_on3(const char* packageIDs[static 1], int32_t filters, bool recursive) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_depends_on3");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_DependsOn3(packageIDs_list, filters, recursive);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_depends_on23(const char* packageID, int32_t filters) {
    return PackageKit__Daemon_DependsOn23(qstring(packageID), filters);
}

PackageKit__Transaction* q_packagekit__daemon_depends_on32(const char* packageID, int32_t filters, bool recursive) {
    return PackageKit__Daemon_DependsOn32(qstring(packageID), filters, recursive);
}

PackageKit__Transaction* q_packagekit__daemon_get_packages1(int32_t filters) {
    return PackageKit__Daemon_GetPackages1(filters);
}

PackageKit__Transaction* q_packagekit__daemon_get_repo_list1(int32_t filters) {
    return PackageKit__Daemon_GetRepoList1(filters);
}

PackageKit__Transaction* q_packagekit__daemon_required_by22(const char* packageIDs[static 1], int32_t filters) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_required_by22");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_RequiredBy22(packageIDs_list, filters);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_required_by3(const char* packageIDs[static 1], int32_t filters, bool recursive) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_required_by3");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_RequiredBy3(packageIDs_list, filters, recursive);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_required_by23(const char* packageID, int32_t filters) {
    return PackageKit__Daemon_RequiredBy23(qstring(packageID), filters);
}

PackageKit__Transaction* q_packagekit__daemon_required_by32(const char* packageID, int32_t filters, bool recursive) {
    return PackageKit__Daemon_RequiredBy32(qstring(packageID), filters, recursive);
}

PackageKit__Transaction* q_packagekit__daemon_get_updates1(int32_t filters) {
    return PackageKit__Daemon_GetUpdates1(filters);
}

PackageKit__Transaction* q_packagekit__daemon_upgrade_system3(const char* distroId, int32_t kind, int32_t flags) {
    return PackageKit__Daemon_UpgradeSystem3(qstring(distroId), kind, flags);
}

PackageKit__Transaction* q_packagekit__daemon_install_files2(const char* files[static 1], int32_t flags) {
    size_t files_len = libqt_strv_length(files);
    libqt_string* files_qstr = (libqt_string*)malloc(files_len * sizeof(libqt_string));
    if (files_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_install_files2");
        abort();
    }
    for (size_t i = 0; i < files_len; ++i) {
        files_qstr[i] = qstring(files[i]);
    }
    libqt_list files_list = qlist(files_qstr, files_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_InstallFiles2(files_list, flags);
    free(files_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_install_file2(const char* file, int32_t flags) {
    return PackageKit__Daemon_InstallFile2(qstring(file), flags);
}

PackageKit__Transaction* q_packagekit__daemon_install_packages2(const char* packageIDs[static 1], int32_t flags) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_install_packages2");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_InstallPackages2(packageIDs_list, flags);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_install_package2(const char* packageID, int32_t flags) {
    return PackageKit__Daemon_InstallPackage2(qstring(packageID), flags);
}

PackageKit__Transaction* q_packagekit__daemon_remove_packages2(const char* packageIDs[static 1], bool allowDeps) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_remove_packages2");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_RemovePackages2(packageIDs_list, allowDeps);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_remove_packages3(const char* packageIDs[static 1], bool allowDeps, bool autoRemove) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_remove_packages3");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_RemovePackages3(packageIDs_list, allowDeps, autoRemove);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_remove_packages4(const char* packageIDs[static 1], bool allowDeps, bool autoRemove, int32_t flags) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_remove_packages4");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_RemovePackages4(packageIDs_list, allowDeps, autoRemove, flags);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_remove_package2(const char* packageID, bool allowDeps) {
    return PackageKit__Daemon_RemovePackage2(qstring(packageID), allowDeps);
}

PackageKit__Transaction* q_packagekit__daemon_remove_package3(const char* packageID, bool allowDeps, bool autoRemove) {
    return PackageKit__Daemon_RemovePackage3(qstring(packageID), allowDeps, autoRemove);
}

PackageKit__Transaction* q_packagekit__daemon_remove_package4(const char* packageID, bool allowDeps, bool autoRemove, int32_t flags) {
    return PackageKit__Daemon_RemovePackage4(qstring(packageID), allowDeps, autoRemove, flags);
}

PackageKit__Transaction* q_packagekit__daemon_repair_system1(int32_t flags) {
    return PackageKit__Daemon_RepairSystem1(flags);
}

PackageKit__Transaction* q_packagekit__daemon_repo_enable2(const char* repoId, bool enable) {
    return PackageKit__Daemon_RepoEnable2(qstring(repoId), enable);
}

PackageKit__Transaction* q_packagekit__daemon_repo_remove3(const char* repoId, bool autoremove, int32_t flags) {
    return PackageKit__Daemon_RepoRemove3(qstring(repoId), autoremove, flags);
}

PackageKit__Transaction* q_packagekit__daemon_resolve22(const char* packageNames[static 1], int32_t filters) {
    size_t packageNames_len = libqt_strv_length(packageNames);
    libqt_string* packageNames_qstr = (libqt_string*)malloc(packageNames_len * sizeof(libqt_string));
    if (packageNames_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_resolve22");
        abort();
    }
    for (size_t i = 0; i < packageNames_len; ++i) {
        packageNames_qstr[i] = qstring(packageNames[i]);
    }
    libqt_list packageNames_list = qlist(packageNames_qstr, packageNames_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_Resolve22(packageNames_list, filters);
    free(packageNames_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_resolve23(const char* packageName, int32_t filters) {
    return PackageKit__Daemon_Resolve23(qstring(packageName), filters);
}

PackageKit__Transaction* q_packagekit__daemon_search_files22(const char* search[static 1], int32_t filters) {
    size_t search_len = libqt_strv_length(search);
    libqt_string* search_qstr = (libqt_string*)malloc(search_len * sizeof(libqt_string));
    if (search_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_search_files22");
        abort();
    }
    for (size_t i = 0; i < search_len; ++i) {
        search_qstr[i] = qstring(search[i]);
    }
    libqt_list search_list = qlist(search_qstr, search_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_SearchFiles22(search_list, filters);
    free(search_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_search_files23(const char* search, int32_t filters) {
    return PackageKit__Daemon_SearchFiles23(qstring(search), filters);
}

PackageKit__Transaction* q_packagekit__daemon_search_details22(const char* search[static 1], int32_t filters) {
    size_t search_len = libqt_strv_length(search);
    libqt_string* search_qstr = (libqt_string*)malloc(search_len * sizeof(libqt_string));
    if (search_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_search_details22");
        abort();
    }
    for (size_t i = 0; i < search_len; ++i) {
        search_qstr[i] = qstring(search[i]);
    }
    libqt_list search_list = qlist(search_qstr, search_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_SearchDetails22(search_list, filters);
    free(search_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_search_details23(const char* search, int32_t filters) {
    return PackageKit__Daemon_SearchDetails23(qstring(search), filters);
}

PackageKit__Transaction* q_packagekit__daemon_search_groups22(const char* groups[static 1], int32_t filters) {
    size_t groups_len = libqt_strv_length(groups);
    libqt_string* groups_qstr = (libqt_string*)malloc(groups_len * sizeof(libqt_string));
    if (groups_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_search_groups22");
        abort();
    }
    for (size_t i = 0; i < groups_len; ++i) {
        groups_qstr[i] = qstring(groups[i]);
    }
    libqt_list groups_list = qlist(groups_qstr, groups_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_SearchGroups22(groups_list, filters);
    free(groups_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_search_group22(const char* group, int32_t filters) {
    return PackageKit__Daemon_SearchGroup22(qstring(group), filters);
}

PackageKit__Transaction* q_packagekit__daemon_search_group23(int32_t group, int32_t filters) {
    return PackageKit__Daemon_SearchGroup23(group, filters);
}

PackageKit__Transaction* q_packagekit__daemon_search_groups23(void* group, int32_t filters) {
    return PackageKit__Daemon_SearchGroups23((PackageKit__Bitfield*)group, filters);
}

PackageKit__Transaction* q_packagekit__daemon_search_names22(const char* search[static 1], int32_t filters) {
    size_t search_len = libqt_strv_length(search);
    libqt_string* search_qstr = (libqt_string*)malloc(search_len * sizeof(libqt_string));
    if (search_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_search_names22");
        abort();
    }
    for (size_t i = 0; i < search_len; ++i) {
        search_qstr[i] = qstring(search[i]);
    }
    libqt_list search_list = qlist(search_qstr, search_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_SearchNames22(search_list, filters);
    free(search_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_search_names23(const char* search, int32_t filters) {
    return PackageKit__Daemon_SearchNames23(qstring(search), filters);
}

PackageKit__Transaction* q_packagekit__daemon_update_packages2(const char* packageIDs[static 1], int32_t flags) {
    size_t packageIDs_len = libqt_strv_length(packageIDs);
    libqt_string* packageIDs_qstr = (libqt_string*)malloc(packageIDs_len * sizeof(libqt_string));
    if (packageIDs_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_update_packages2");
        abort();
    }
    for (size_t i = 0; i < packageIDs_len; ++i) {
        packageIDs_qstr[i] = qstring(packageIDs[i]);
    }
    libqt_list packageIDs_list = qlist(packageIDs_qstr, packageIDs_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_UpdatePackages2(packageIDs_list, flags);
    free(packageIDs_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_update_package2(const char* packageID, int32_t flags) {
    return PackageKit__Daemon_UpdatePackage2(qstring(packageID), flags);
}

PackageKit__Transaction* q_packagekit__daemon_what_provides22(const char* search[static 1], int32_t filters) {
    size_t search_len = libqt_strv_length(search);
    libqt_string* search_qstr = (libqt_string*)malloc(search_len * sizeof(libqt_string));
    if (search_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_what_provides22");
        abort();
    }
    for (size_t i = 0; i < search_len; ++i) {
        search_qstr[i] = qstring(search[i]);
    }
    libqt_list search_list = qlist(search_qstr, search_len);
    PackageKit__Transaction* _out = PackageKit__Daemon_WhatProvides22(search_list, filters);
    free(search_qstr);
    return _out;
}

PackageKit__Transaction* q_packagekit__daemon_what_provides23(const char* search, int32_t filters) {
    return PackageKit__Daemon_WhatProvides23(qstring(search), filters);
}

bool q_packagekit__daemon_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool q_packagekit__daemon_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* q_packagekit__daemon_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_packagekit__daemon_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_packagekit__daemon_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_packagekit__daemon_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_packagekit__daemon_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_packagekit__daemon_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_packagekit__daemon_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_packagekit__daemon_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_packagekit__daemon_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_packagekit__daemon_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_packagekit__daemon_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_packagekit__daemon_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_packagekit__daemon_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_packagekit__daemon_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_packagekit__daemon_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_packagekit__daemon_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_packagekit__daemon_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_packagekit__daemon_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_packagekit__daemon_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_packagekit__daemon_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_packagekit__daemon_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_packagekit__daemon_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_packagekit__daemon_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_packagekit__daemon_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_packagekit__daemon_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__daemon_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_packagekit__daemon_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_packagekit__daemon_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_packagekit__daemon_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_packagekit__daemon_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_packagekit__daemon_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_packagekit__daemon_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_packagekit__daemon_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_packagekit__daemon_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_packagekit__daemon_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_packagekit__daemon_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_packagekit__daemon_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_packagekit__daemon_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_packagekit__daemon_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_packagekit__daemon_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_packagekit__daemon_delete(void* self) {
    PackageKit__Daemon_Delete((PackageKit__Daemon*)(self));
}
