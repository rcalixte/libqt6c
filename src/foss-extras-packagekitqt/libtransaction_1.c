#include "libdetails.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libtransaction_1.hpp"
#include "libtransaction_1.h"

PackageKit__Transaction* q_packagekit__transaction_new(void* tid) {
    return PackageKit__Transaction_new((QDBusObjectPath*)tid);
}

const QMetaObject* q_packagekit__transaction_meta_object(void* self) {
    return PackageKit__Transaction_MetaObject((PackageKit__Transaction*)self);
}

void* q_packagekit__transaction_metacast(void* self, const char* param1) {
    return PackageKit__Transaction_Metacast((PackageKit__Transaction*)self, param1);
}

int32_t q_packagekit__transaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return PackageKit__Transaction_Metacall((PackageKit__Transaction*)self, param1, param2, param3);
}

void q_packagekit__transaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    PackageKit__Transaction_OnMetacall((PackageKit__Transaction*)self, (intptr_t)callback);
}

int32_t q_packagekit__transaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return PackageKit__Transaction_QBaseMetacall((PackageKit__Transaction*)self, param1, param2, param3);
}

const char* q_packagekit__transaction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QDBusObjectPath* q_packagekit__transaction_tid(void* self) {
    return PackageKit__Transaction_Tid((PackageKit__Transaction*)self);
}

bool q_packagekit__transaction_allow_cancel(void* self) {
    return PackageKit__Transaction_AllowCancel((PackageKit__Transaction*)self);
}

bool q_packagekit__transaction_is_caller_active(void* self) {
    return PackageKit__Transaction_IsCallerActive((PackageKit__Transaction*)self);
}

const char* q_packagekit__transaction_last_package(void* self) {
    libqt_string _str = PackageKit__Transaction_LastPackage((PackageKit__Transaction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_packagekit__transaction_percentage(void* self) {
    return PackageKit__Transaction_Percentage((PackageKit__Transaction*)self);
}

uint32_t q_packagekit__transaction_elapsed_time(void* self) {
    return PackageKit__Transaction_ElapsedTime((PackageKit__Transaction*)self);
}

uint32_t q_packagekit__transaction_remaining_time(void* self) {
    return PackageKit__Transaction_RemainingTime((PackageKit__Transaction*)self);
}

uint32_t q_packagekit__transaction_speed(void* self) {
    return PackageKit__Transaction_Speed((PackageKit__Transaction*)self);
}

uint64_t q_packagekit__transaction_download_size_remaining(void* self) {
    return PackageKit__Transaction_DownloadSizeRemaining((PackageKit__Transaction*)self);
}

int32_t q_packagekit__transaction_role(void* self) {
    return PackageKit__Transaction_Role((PackageKit__Transaction*)self);
}

int32_t q_packagekit__transaction_status(void* self) {
    return PackageKit__Transaction_Status((PackageKit__Transaction*)self);
}

int32_t q_packagekit__transaction_transaction_flags(void* self) {
    return PackageKit__Transaction_TransactionFlags((PackageKit__Transaction*)self);
}

QDateTime* q_packagekit__transaction_timespec(void* self) {
    return PackageKit__Transaction_Timespec((PackageKit__Transaction*)self);
}

bool q_packagekit__transaction_succeeded(void* self) {
    return PackageKit__Transaction_Succeeded((PackageKit__Transaction*)self);
}

uint32_t q_packagekit__transaction_duration(void* self) {
    return PackageKit__Transaction_Duration((PackageKit__Transaction*)self);
}

const char* q_packagekit__transaction_data(void* self) {
    libqt_string _str = PackageKit__Transaction_Data((PackageKit__Transaction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_packagekit__transaction_uid(void* self) {
    return PackageKit__Transaction_Uid((PackageKit__Transaction*)self);
}

const char* q_packagekit__transaction_sender_name(void* self) {
    libqt_string _str = PackageKit__Transaction_SenderName((PackageKit__Transaction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__transaction_cmdline(void* self) {
    libqt_string _str = PackageKit__Transaction_Cmdline((PackageKit__Transaction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__transaction_package_name(const char* packageID) {
    libqt_string _str = PackageKit__Transaction_PackageName(qstring(packageID));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__transaction_package_version(const char* packageID) {
    libqt_string _str = PackageKit__Transaction_PackageVersion(qstring(packageID));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__transaction_package_arch(const char* packageID) {
    libqt_string _str = PackageKit__Transaction_PackageArch(qstring(packageID));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__transaction_package_data(const char* packageID) {
    libqt_string _str = PackageKit__Transaction_PackageData(qstring(packageID));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_packagekit__transaction_allow_cancel_changed(void* self) {
    PackageKit__Transaction_AllowCancelChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_allow_cancel_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_AllowCancelChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_is_caller_active_changed(void* self) {
    PackageKit__Transaction_IsCallerActiveChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_is_caller_active_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_IsCallerActiveChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_download_size_remaining_changed(void* self) {
    PackageKit__Transaction_DownloadSizeRemainingChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_download_size_remaining_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_DownloadSizeRemainingChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_elapsed_time_changed(void* self) {
    PackageKit__Transaction_ElapsedTimeChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_elapsed_time_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_ElapsedTimeChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_last_package_changed(void* self) {
    PackageKit__Transaction_LastPackageChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_last_package_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_LastPackageChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_percentage_changed(void* self) {
    PackageKit__Transaction_PercentageChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_percentage_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_PercentageChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_remaining_time_changed(void* self) {
    PackageKit__Transaction_RemainingTimeChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_remaining_time_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_RemainingTimeChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_role_changed(void* self) {
    PackageKit__Transaction_RoleChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_role_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_RoleChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_speed_changed(void* self) {
    PackageKit__Transaction_SpeedChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_speed_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_SpeedChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_status_changed(void* self) {
    PackageKit__Transaction_StatusChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_status_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_StatusChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_transaction_flags_changed(void* self) {
    PackageKit__Transaction_TransactionFlagsChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_transaction_flags_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_TransactionFlagsChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_uid_changed(void* self) {
    PackageKit__Transaction_UidChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_uid_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_UidChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_sender_name_changed(void* self) {
    PackageKit__Transaction_SenderNameChanged((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_sender_name_changed(void* self, void (*callback)(void*)) {
    PackageKit__Transaction_Connect_SenderNameChanged((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_category(void* self, const char* parentId, const char* categoryId, const char* name, const char* summary, const char* icon) {
    PackageKit__Transaction_Category((PackageKit__Transaction*)self, qstring(parentId), qstring(categoryId), qstring(name), qstring(summary), qstring(icon));
}

void q_packagekit__transaction_on_category(void* self, void (*callback)(void*, const char*, const char*, const char*, const char*, const char*)) {
    PackageKit__Transaction_Connect_Category((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_distro_upgrade(void* self, int32_t type, const char* name, const char* description) {
    PackageKit__Transaction_DistroUpgrade((PackageKit__Transaction*)self, type, qstring(name), qstring(description));
}

void q_packagekit__transaction_on_distro_upgrade(void* self, void (*callback)(void*, int32_t, const char*, const char*)) {
    PackageKit__Transaction_Connect_DistroUpgrade((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_error_code(void* self, int32_t error, const char* details) {
    PackageKit__Transaction_ErrorCode((PackageKit__Transaction*)self, error, qstring(details));
}

void q_packagekit__transaction_on_error_code(void* self, void (*callback)(void*, int32_t, const char*)) {
    PackageKit__Transaction_Connect_ErrorCode((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_eula_required(void* self, const char* eulaID, const char* packageID, const char* vendor, const char* licenseAgreement) {
    PackageKit__Transaction_EulaRequired((PackageKit__Transaction*)self, qstring(eulaID), qstring(packageID), qstring(vendor), qstring(licenseAgreement));
}

void q_packagekit__transaction_on_eula_required(void* self, void (*callback)(void*, const char*, const char*, const char*, const char*)) {
    PackageKit__Transaction_Connect_EulaRequired((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_media_change_required(void* self, int32_t type, const char* id, const char* text) {
    PackageKit__Transaction_MediaChangeRequired((PackageKit__Transaction*)self, type, qstring(id), qstring(text));
}

void q_packagekit__transaction_on_media_change_required(void* self, void (*callback)(void*, int32_t, const char*, const char*)) {
    PackageKit__Transaction_Connect_MediaChangeRequired((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_item_progress(void* self, const char* itemID, int32_t status, uint32_t percentage) {
    PackageKit__Transaction_ItemProgress((PackageKit__Transaction*)self, qstring(itemID), status, percentage);
}

void q_packagekit__transaction_on_item_progress(void* self, void (*callback)(void*, const char*, int32_t, uint32_t)) {
    PackageKit__Transaction_Connect_ItemProgress((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_files(void* self, const char* packageID, const char* filenames[static 1]) {
    size_t filenames_len = libqt_strv_length(filenames);
    libqt_string* filenames_qstr = (libqt_string*)malloc(filenames_len * sizeof(libqt_string));
    if (filenames_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__transaction_files\n");
        abort();
    }
    for (size_t i = 0; i < filenames_len; ++i) {
        filenames_qstr[i] = qstring(filenames[i]);
    }
    libqt_list filenames_list = qlist(filenames_qstr, filenames_len);
    PackageKit__Transaction_Files((PackageKit__Transaction*)self, qstring(packageID), filenames_list);
    free(filenames_qstr);
}

void q_packagekit__transaction_on_files(void* self, void (*callback)(void*, const char*, const char**)) {
    PackageKit__Transaction_Connect_Files((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_finished(void* self, int32_t status, uint32_t runtime) {
    PackageKit__Transaction_Finished((PackageKit__Transaction*)self, status, runtime);
}

void q_packagekit__transaction_on_finished(void* self, void (*callback)(void*, int32_t, uint32_t)) {
    PackageKit__Transaction_Connect_Finished((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_package(void* self, int32_t info, const char* packageID, const char* summary) {
    PackageKit__Transaction_Package((PackageKit__Transaction*)self, info, qstring(packageID), qstring(summary));
}

void q_packagekit__transaction_on_package(void* self, void (*callback)(void*, int32_t, const char*, const char*)) {
    PackageKit__Transaction_Connect_Package((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_details(void* self, void* values) {
    PackageKit__Transaction_Details((PackageKit__Transaction*)self, (PackageKit__Details*)values);
}

void q_packagekit__transaction_on_details(void* self, void (*callback)(void*, void*)) {
    PackageKit__Transaction_Connect_Details((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_update_detail(void* self, const char* packageID, const char* updates[static 1], const char* obsoletes[static 1], const char* vendorUrls[static 1], const char* bugzillaUrls[static 1], const char* cveUrls[static 1], int32_t restart, const char* updateText, const char* changelog, int32_t state, void* issued, void* updated) {
    size_t updates_len = libqt_strv_length(updates);
    libqt_string* updates_qstr = (libqt_string*)malloc(updates_len * sizeof(libqt_string));
    if (updates_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__transaction_update_detail\n");
        abort();
    }
    for (size_t i = 0; i < updates_len; ++i) {
        updates_qstr[i] = qstring(updates[i]);
    }
    libqt_list updates_list = qlist(updates_qstr, updates_len);
    size_t obsoletes_len = libqt_strv_length(obsoletes);
    libqt_string* obsoletes_qstr = (libqt_string*)malloc(obsoletes_len * sizeof(libqt_string));
    if (obsoletes_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__transaction_update_detail\n");
        abort();
    }
    for (size_t i = 0; i < obsoletes_len; ++i) {
        obsoletes_qstr[i] = qstring(obsoletes[i]);
    }
    libqt_list obsoletes_list = qlist(obsoletes_qstr, obsoletes_len);
    size_t vendorUrls_len = libqt_strv_length(vendorUrls);
    libqt_string* vendorUrls_qstr = (libqt_string*)malloc(vendorUrls_len * sizeof(libqt_string));
    if (vendorUrls_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__transaction_update_detail\n");
        abort();
    }
    for (size_t i = 0; i < vendorUrls_len; ++i) {
        vendorUrls_qstr[i] = qstring(vendorUrls[i]);
    }
    libqt_list vendorUrls_list = qlist(vendorUrls_qstr, vendorUrls_len);
    size_t bugzillaUrls_len = libqt_strv_length(bugzillaUrls);
    libqt_string* bugzillaUrls_qstr = (libqt_string*)malloc(bugzillaUrls_len * sizeof(libqt_string));
    if (bugzillaUrls_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__transaction_update_detail\n");
        abort();
    }
    for (size_t i = 0; i < bugzillaUrls_len; ++i) {
        bugzillaUrls_qstr[i] = qstring(bugzillaUrls[i]);
    }
    libqt_list bugzillaUrls_list = qlist(bugzillaUrls_qstr, bugzillaUrls_len);
    size_t cveUrls_len = libqt_strv_length(cveUrls);
    libqt_string* cveUrls_qstr = (libqt_string*)malloc(cveUrls_len * sizeof(libqt_string));
    if (cveUrls_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__transaction_update_detail\n");
        abort();
    }
    for (size_t i = 0; i < cveUrls_len; ++i) {
        cveUrls_qstr[i] = qstring(cveUrls[i]);
    }
    libqt_list cveUrls_list = qlist(cveUrls_qstr, cveUrls_len);
    PackageKit__Transaction_UpdateDetail((PackageKit__Transaction*)self, qstring(packageID), updates_list, obsoletes_list, vendorUrls_list, bugzillaUrls_list, cveUrls_list, restart, qstring(updateText), qstring(changelog), state, (QDateTime*)issued, (QDateTime*)updated);
    free(updates_qstr);

    free(obsoletes_qstr);

    free(vendorUrls_qstr);

    free(bugzillaUrls_qstr);

    free(cveUrls_qstr);
}

void q_packagekit__transaction_on_update_detail(void* self, void (*callback)(void*, const char*, const char**, const char**, const char**, const char**, const char**, int32_t, const char*, const char*, int32_t, void*, void*)) {
    PackageKit__Transaction_Connect_UpdateDetail((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_repo_detail(void* self, const char* repoId, const char* description, bool enabled) {
    PackageKit__Transaction_RepoDetail((PackageKit__Transaction*)self, qstring(repoId), qstring(description), enabled);
}

void q_packagekit__transaction_on_repo_detail(void* self, void (*callback)(void*, const char*, const char*, bool)) {
    PackageKit__Transaction_Connect_RepoDetail((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_repo_signature_required(void* self, const char* packageID, const char* repoName, const char* keyUrl, const char* keyUserid, const char* keyId, const char* keyFingerprint, const char* keyTimestamp, int32_t type) {
    PackageKit__Transaction_RepoSignatureRequired((PackageKit__Transaction*)self, qstring(packageID), qstring(repoName), qstring(keyUrl), qstring(keyUserid), qstring(keyId), qstring(keyFingerprint), qstring(keyTimestamp), type);
}

void q_packagekit__transaction_on_repo_signature_required(void* self, void (*callback)(void*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, int32_t)) {
    PackageKit__Transaction_Connect_RepoSignatureRequired((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_require_restart(void* self, int32_t type, const char* packageID) {
    PackageKit__Transaction_RequireRestart((PackageKit__Transaction*)self, type, qstring(packageID));
}

void q_packagekit__transaction_on_require_restart(void* self, void (*callback)(void*, int32_t, const char*)) {
    PackageKit__Transaction_Connect_RequireRestart((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_transaction(void* self, void* transaction) {
    PackageKit__Transaction_Transaction((PackageKit__Transaction*)self, (PackageKit__Transaction*)transaction);
}

void q_packagekit__transaction_on_transaction(void* self, void (*callback)(void*, void*)) {
    PackageKit__Transaction_Connect_Transaction((PackageKit__Transaction*)self, (intptr_t)callback);
}

int32_t q_packagekit__transaction_parse_error(void* self, const char* errorName) {
    return PackageKit__Transaction_ParseError((PackageKit__Transaction*)self, qstring(errorName));
}

void q_packagekit__transaction_on_parse_error(void* self, int32_t (*callback)(void*, const char*)) {
    PackageKit__Transaction_OnParseError((PackageKit__Transaction*)self, (intptr_t)callback);
}

int32_t q_packagekit__transaction_qbase_parse_error(void* self, const char* errorName) {
    return PackageKit__Transaction_QBaseParseError((PackageKit__Transaction*)self, qstring(errorName));
}

void q_packagekit__transaction_connect_notify(void* self, void* signal) {
    PackageKit__Transaction_ConnectNotify((PackageKit__Transaction*)self, (QMetaMethod*)signal);
}

void q_packagekit__transaction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    PackageKit__Transaction_OnConnectNotify((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_qbase_connect_notify(void* self, void* signal) {
    PackageKit__Transaction_QBaseConnectNotify((PackageKit__Transaction*)self, (QMetaMethod*)signal);
}

void q_packagekit__transaction_disconnect_notify(void* self, void* signal) {
    PackageKit__Transaction_DisconnectNotify((PackageKit__Transaction*)self, (QMetaMethod*)signal);
}

void q_packagekit__transaction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    PackageKit__Transaction_OnDisconnectNotify((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_qbase_disconnect_notify(void* self, void* signal) {
    PackageKit__Transaction_QBaseDisconnectNotify((PackageKit__Transaction*)self, (QMetaMethod*)signal);
}

const char* q_packagekit__transaction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__transaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__transaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_packagekit__transaction_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_packagekit__transaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_packagekit__transaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_packagekit__transaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_packagekit__transaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_packagekit__transaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_packagekit__transaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_packagekit__transaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_packagekit__transaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_packagekit__transaction_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_packagekit__transaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_packagekit__transaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_packagekit__transaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_packagekit__transaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_packagekit__transaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_packagekit__transaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_packagekit__transaction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_packagekit__transaction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_packagekit__transaction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_packagekit__transaction_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_packagekit__transaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_packagekit__transaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_packagekit__transaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_packagekit__transaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_packagekit__transaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_packagekit__transaction_dynamic_property_names\n");
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

QBindingStorage* q_packagekit__transaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_packagekit__transaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_packagekit__transaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_packagekit__transaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_packagekit__transaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_packagekit__transaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_packagekit__transaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_packagekit__transaction_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_packagekit__transaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_packagekit__transaction_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_packagekit__transaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_packagekit__transaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_packagekit__transaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_packagekit__transaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_packagekit__transaction_event(void* self, void* event) {
    return PackageKit__Transaction_Event((PackageKit__Transaction*)self, (QEvent*)event);
}

bool q_packagekit__transaction_qbase_event(void* self, void* event) {
    return PackageKit__Transaction_QBaseEvent((PackageKit__Transaction*)self, (QEvent*)event);
}

void q_packagekit__transaction_on_event(void* self, bool (*callback)(void*, void*)) {
    PackageKit__Transaction_OnEvent((PackageKit__Transaction*)self, (intptr_t)callback);
}

bool q_packagekit__transaction_event_filter(void* self, void* watched, void* event) {
    return PackageKit__Transaction_EventFilter((PackageKit__Transaction*)self, (QObject*)watched, (QEvent*)event);
}

bool q_packagekit__transaction_qbase_event_filter(void* self, void* watched, void* event) {
    return PackageKit__Transaction_QBaseEventFilter((PackageKit__Transaction*)self, (QObject*)watched, (QEvent*)event);
}

void q_packagekit__transaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    PackageKit__Transaction_OnEventFilter((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_timer_event(void* self, void* event) {
    PackageKit__Transaction_TimerEvent((PackageKit__Transaction*)self, (QTimerEvent*)event);
}

void q_packagekit__transaction_qbase_timer_event(void* self, void* event) {
    PackageKit__Transaction_QBaseTimerEvent((PackageKit__Transaction*)self, (QTimerEvent*)event);
}

void q_packagekit__transaction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    PackageKit__Transaction_OnTimerEvent((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_child_event(void* self, void* event) {
    PackageKit__Transaction_ChildEvent((PackageKit__Transaction*)self, (QChildEvent*)event);
}

void q_packagekit__transaction_qbase_child_event(void* self, void* event) {
    PackageKit__Transaction_QBaseChildEvent((PackageKit__Transaction*)self, (QChildEvent*)event);
}

void q_packagekit__transaction_on_child_event(void* self, void (*callback)(void*, void*)) {
    PackageKit__Transaction_OnChildEvent((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_custom_event(void* self, void* event) {
    PackageKit__Transaction_CustomEvent((PackageKit__Transaction*)self, (QEvent*)event);
}

void q_packagekit__transaction_qbase_custom_event(void* self, void* event) {
    PackageKit__Transaction_QBaseCustomEvent((PackageKit__Transaction*)self, (QEvent*)event);
}

void q_packagekit__transaction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    PackageKit__Transaction_OnCustomEvent((PackageKit__Transaction*)self, (intptr_t)callback);
}

QObject* q_packagekit__transaction_sender(void* self) {
    return PackageKit__Transaction_Sender((PackageKit__Transaction*)self);
}

QObject* q_packagekit__transaction_qbase_sender(void* self) {
    return PackageKit__Transaction_QBaseSender((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_sender(void* self, QObject* (*callback)()) {
    PackageKit__Transaction_OnSender((PackageKit__Transaction*)self, (intptr_t)callback);
}

int32_t q_packagekit__transaction_sender_signal_index(void* self) {
    return PackageKit__Transaction_SenderSignalIndex((PackageKit__Transaction*)self);
}

int32_t q_packagekit__transaction_qbase_sender_signal_index(void* self) {
    return PackageKit__Transaction_QBaseSenderSignalIndex((PackageKit__Transaction*)self);
}

void q_packagekit__transaction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    PackageKit__Transaction_OnSenderSignalIndex((PackageKit__Transaction*)self, (intptr_t)callback);
}

int32_t q_packagekit__transaction_receivers(void* self, const char* signal) {
    return PackageKit__Transaction_Receivers((PackageKit__Transaction*)self, signal);
}

int32_t q_packagekit__transaction_qbase_receivers(void* self, const char* signal) {
    return PackageKit__Transaction_QBaseReceivers((PackageKit__Transaction*)self, signal);
}

void q_packagekit__transaction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    PackageKit__Transaction_OnReceivers((PackageKit__Transaction*)self, (intptr_t)callback);
}

bool q_packagekit__transaction_is_signal_connected(void* self, void* signal) {
    return PackageKit__Transaction_IsSignalConnected((PackageKit__Transaction*)self, (QMetaMethod*)signal);
}

bool q_packagekit__transaction_qbase_is_signal_connected(void* self, void* signal) {
    return PackageKit__Transaction_QBaseIsSignalConnected((PackageKit__Transaction*)self, (QMetaMethod*)signal);
}

void q_packagekit__transaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    PackageKit__Transaction_OnIsSignalConnected((PackageKit__Transaction*)self, (intptr_t)callback);
}

void q_packagekit__transaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_packagekit__transaction_delete(void* self) {
    PackageKit__Transaction_Delete((PackageKit__Transaction*)(self));
}
