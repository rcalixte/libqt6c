#include "../extras-kconfig/libkconfiggroup.hpp"
#include "libauthinfo.hpp"
#include "libmetadata_1.hpp"
#include "libudsentry.hpp"
#include "libkremoteencoding.hpp"
#include "../libqdatetime.hpp"
#include "../network/libqhostinfo.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libworkerbase.hpp"
#include "libworkerbase.h"

KIO__WorkerResult* k_io__workerresult_new(void* param1) {
    return KIO__WorkerResult_new((KIO__WorkerResult*)param1);
}

void k_io__workerresult_operator_assign(void* self, void* param1) {
    KIO__WorkerResult_OperatorAssign((KIO__WorkerResult*)self, (KIO__WorkerResult*)param1);
}

bool k_io__workerresult_success(void* self) {
    return KIO__WorkerResult_Success((KIO__WorkerResult*)self);
}

int32_t k_io__workerresult_error(void* self) {
    return KIO__WorkerResult_Error((KIO__WorkerResult*)self);
}

const char* k_io__workerresult_error_string(void* self) {
    libqt_string _str = KIO__WorkerResult_ErrorString((KIO__WorkerResult*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KIO__WorkerResult* k_io__workerresult_fail() {
    return KIO__WorkerResult_Fail();
}

KIO__WorkerResult* k_io__workerresult_pass() {
    return KIO__WorkerResult_Pass();
}

KIO__WorkerResult* k_io__workerresult_fail1(int _error) {
    return KIO__WorkerResult_Fail1(_error);
}

KIO__WorkerResult* k_io__workerresult_fail2(int _error, const char* _errorString) {
    return KIO__WorkerResult_Fail2(_error, qstring(_errorString));
}

void k_io__workerresult_delete(void* self) {
    KIO__WorkerResult_Delete((KIO__WorkerResult*)(self));
}

KIO__WorkerBase* k_io__workerbase_new(const char* protocol, const char* poolSocket, const char* appSocket) {
    return KIO__WorkerBase_new(qstring(protocol), qstring(poolSocket), qstring(appSocket));
}

void k_io__workerbase_exit(void* self) {
    KIO__WorkerBase_Exit((KIO__WorkerBase*)self);
}

void k_io__workerbase_dispatch_loop(void* self) {
    KIO__WorkerBase_DispatchLoop((KIO__WorkerBase*)self);
}

void k_io__workerbase_data(void* self, const char* data) {
    KIO__WorkerBase_Data((KIO__WorkerBase*)self, qstring(data));
}

void k_io__workerbase_data_req(void* self) {
    KIO__WorkerBase_DataReq((KIO__WorkerBase*)self);
}

void k_io__workerbase_worker_status(void* self, const char* host, bool connected) {
    KIO__WorkerBase_WorkerStatus((KIO__WorkerBase*)self, qstring(host), connected);
}

void k_io__workerbase_stat_entry(void* self, void* _entry) {
    KIO__WorkerBase_StatEntry((KIO__WorkerBase*)self, (KIO__UDSEntry*)_entry);
}

void k_io__workerbase_list_entries(void* self, libqt_list _entry) {
    KIO__WorkerBase_ListEntries((KIO__WorkerBase*)self, _entry);
}

bool k_io__workerbase_can_resume(void* self, uint64_t offset) {
    return KIO__WorkerBase_CanResume((KIO__WorkerBase*)self, offset);
}

void k_io__workerbase_can_resume2(void* self) {
    KIO__WorkerBase_CanResume2((KIO__WorkerBase*)self);
}

void k_io__workerbase_total_size(void* self, uint64_t _bytes) {
    KIO__WorkerBase_TotalSize((KIO__WorkerBase*)self, _bytes);
}

void k_io__workerbase_processed_size(void* self, uint64_t _bytes) {
    KIO__WorkerBase_ProcessedSize((KIO__WorkerBase*)self, _bytes);
}

void k_io__workerbase_position(void* self, uint64_t _pos) {
    KIO__WorkerBase_Position((KIO__WorkerBase*)self, _pos);
}

void k_io__workerbase_written(void* self, uint64_t _bytes) {
    KIO__WorkerBase_Written((KIO__WorkerBase*)self, _bytes);
}

void k_io__workerbase_truncated(void* self, uint64_t _length) {
    KIO__WorkerBase_Truncated((KIO__WorkerBase*)self, _length);
}

void k_io__workerbase_speed(void* self, uint64_t _bytes_per_second) {
    KIO__WorkerBase_Speed((KIO__WorkerBase*)self, _bytes_per_second);
}

void k_io__workerbase_redirection(void* self, void* _url) {
    KIO__WorkerBase_Redirection((KIO__WorkerBase*)self, (QUrl*)_url);
}

void k_io__workerbase_error_page(void* self) {
    KIO__WorkerBase_ErrorPage((KIO__WorkerBase*)self);
}

void k_io__workerbase_mime_type(void* self, const char* _type) {
    KIO__WorkerBase_MimeType((KIO__WorkerBase*)self, qstring(_type));
}

void k_io__workerbase_warning(void* self, const char* msg) {
    KIO__WorkerBase_Warning((KIO__WorkerBase*)self, qstring(msg));
}

void k_io__workerbase_info_message(void* self, const char* msg) {
    KIO__WorkerBase_InfoMessage((KIO__WorkerBase*)self, qstring(msg));
}

int32_t k_io__workerbase_message_box(void* self, int32_t type, const char* text) {
    return KIO__WorkerBase_MessageBox((KIO__WorkerBase*)self, type, qstring(text));
}

int32_t k_io__workerbase_message_box2(void* self, const char* text, int32_t type) {
    return KIO__WorkerBase_MessageBox2((KIO__WorkerBase*)self, qstring(text), type);
}

int32_t k_io__workerbase_ssl_error(void* self, libqt_map /* of const char* to QVariant* */ sslData) {
    return KIO__WorkerBase_SslError((KIO__WorkerBase*)self, sslData);
}

void k_io__workerbase_set_meta_data(void* self, const char* key, const char* value) {
    KIO__WorkerBase_SetMetaData((KIO__WorkerBase*)self, qstring(key), qstring(value));
}

bool k_io__workerbase_has_meta_data(void* self, const char* key) {
    return KIO__WorkerBase_HasMetaData((KIO__WorkerBase*)self, qstring(key));
}

const char* k_io__workerbase_meta_data(void* self, const char* key) {
    libqt_string _str = KIO__WorkerBase_MetaData((KIO__WorkerBase*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KIO__MetaData* k_io__workerbase_all_meta_data(void* self) {
    return KIO__WorkerBase_AllMetaData((KIO__WorkerBase*)self);
}

libqt_map /* of const char* to QVariant* */ k_io__workerbase_map_config(void* self) {
    return KIO__WorkerBase_MapConfig((KIO__WorkerBase*)self);
}

bool k_io__workerbase_config_value(void* self, const char* key, bool defaultValue) {
    return KIO__WorkerBase_ConfigValue((KIO__WorkerBase*)self, qstring(key), defaultValue);
}

int32_t k_io__workerbase_config_value2(void* self, const char* key, int defaultValue) {
    return KIO__WorkerBase_ConfigValue2((KIO__WorkerBase*)self, qstring(key), defaultValue);
}

const char* k_io__workerbase_config_value3(void* self, const char* key) {
    libqt_string _str = KIO__WorkerBase_ConfigValue3((KIO__WorkerBase*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KConfigGroup* k_io__workerbase_config(void* self) {
    return KIO__WorkerBase_Config((KIO__WorkerBase*)self);
}

KRemoteEncoding* k_io__workerbase_remote_encoding(void* self) {
    return KIO__WorkerBase_RemoteEncoding((KIO__WorkerBase*)self);
}

void k_io__workerbase_app_connection_made(void* self) {
    KIO__WorkerBase_AppConnectionMade((KIO__WorkerBase*)self);
}

void k_io__workerbase_on_app_connection_made(void* self, void (*callback)()) {
    KIO__WorkerBase_OnAppConnectionMade((KIO__WorkerBase*)self, (intptr_t)callback);
}

void k_io__workerbase_qbase_app_connection_made(void* self) {
    KIO__WorkerBase_QBaseAppConnectionMade((KIO__WorkerBase*)self);
}

void k_io__workerbase_set_host(void* self, const char* host, unsigned short port, const char* user, const char* pass) {
    KIO__WorkerBase_SetHost((KIO__WorkerBase*)self, qstring(host), port, qstring(user), qstring(pass));
}

void k_io__workerbase_on_set_host(void* self, void (*callback)(void*, const char*, unsigned short, const char*, const char*)) {
    KIO__WorkerBase_OnSetHost((KIO__WorkerBase*)self, (intptr_t)callback);
}

void k_io__workerbase_qbase_set_host(void* self, const char* host, unsigned short port, const char* user, const char* pass) {
    KIO__WorkerBase_QBaseSetHost((KIO__WorkerBase*)self, qstring(host), port, qstring(user), qstring(pass));
}

KIO__WorkerResult* k_io__workerbase_open_connection(void* self) {
    return KIO__WorkerBase_OpenConnection((KIO__WorkerBase*)self);
}

void k_io__workerbase_on_open_connection(void* self, KIO__WorkerResult* (*callback)()) {
    KIO__WorkerBase_OnOpenConnection((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_open_connection(void* self) {
    return KIO__WorkerBase_QBaseOpenConnection((KIO__WorkerBase*)self);
}

void k_io__workerbase_close_connection(void* self) {
    KIO__WorkerBase_CloseConnection((KIO__WorkerBase*)self);
}

void k_io__workerbase_on_close_connection(void* self, void (*callback)()) {
    KIO__WorkerBase_OnCloseConnection((KIO__WorkerBase*)self, (intptr_t)callback);
}

void k_io__workerbase_qbase_close_connection(void* self) {
    KIO__WorkerBase_QBaseCloseConnection((KIO__WorkerBase*)self);
}

KIO__WorkerResult* k_io__workerbase_get(void* self, void* url) {
    return KIO__WorkerBase_Get((KIO__WorkerBase*)self, (QUrl*)url);
}

void k_io__workerbase_on_get(void* self, KIO__WorkerResult* (*callback)(void*, void*)) {
    KIO__WorkerBase_OnGet((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_get(void* self, void* url) {
    return KIO__WorkerBase_QBaseGet((KIO__WorkerBase*)self, (QUrl*)url);
}

KIO__WorkerResult* k_io__workerbase_open(void* self, void* url, int32_t mode) {
    return KIO__WorkerBase_Open((KIO__WorkerBase*)self, (QUrl*)url, mode);
}

void k_io__workerbase_on_open(void* self, KIO__WorkerResult* (*callback)(void*, void*, int32_t)) {
    KIO__WorkerBase_OnOpen((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_open(void* self, void* url, int32_t mode) {
    return KIO__WorkerBase_QBaseOpen((KIO__WorkerBase*)self, (QUrl*)url, mode);
}

KIO__WorkerResult* k_io__workerbase_read(void* self, uint64_t size) {
    return KIO__WorkerBase_Read((KIO__WorkerBase*)self, size);
}

void k_io__workerbase_on_read(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t)) {
    KIO__WorkerBase_OnRead((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_read(void* self, uint64_t size) {
    return KIO__WorkerBase_QBaseRead((KIO__WorkerBase*)self, size);
}

KIO__WorkerResult* k_io__workerbase_write(void* self, const char* data) {
    return KIO__WorkerBase_Write((KIO__WorkerBase*)self, qstring(data));
}

void k_io__workerbase_on_write(void* self, KIO__WorkerResult* (*callback)(void*, const char*)) {
    KIO__WorkerBase_OnWrite((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_write(void* self, const char* data) {
    return KIO__WorkerBase_QBaseWrite((KIO__WorkerBase*)self, qstring(data));
}

KIO__WorkerResult* k_io__workerbase_seek(void* self, uint64_t offset) {
    return KIO__WorkerBase_Seek((KIO__WorkerBase*)self, offset);
}

void k_io__workerbase_on_seek(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t)) {
    KIO__WorkerBase_OnSeek((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_seek(void* self, uint64_t offset) {
    return KIO__WorkerBase_QBaseSeek((KIO__WorkerBase*)self, offset);
}

KIO__WorkerResult* k_io__workerbase_truncate(void* self, uint64_t size) {
    return KIO__WorkerBase_Truncate((KIO__WorkerBase*)self, size);
}

void k_io__workerbase_on_truncate(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t)) {
    KIO__WorkerBase_OnTruncate((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_truncate(void* self, uint64_t size) {
    return KIO__WorkerBase_QBaseTruncate((KIO__WorkerBase*)self, size);
}

KIO__WorkerResult* k_io__workerbase_close(void* self) {
    return KIO__WorkerBase_Close((KIO__WorkerBase*)self);
}

void k_io__workerbase_on_close(void* self, KIO__WorkerResult* (*callback)()) {
    KIO__WorkerBase_OnClose((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_close(void* self) {
    return KIO__WorkerBase_QBaseClose((KIO__WorkerBase*)self);
}

KIO__WorkerResult* k_io__workerbase_put(void* self, void* url, int permissions, int32_t flags) {
    return KIO__WorkerBase_Put((KIO__WorkerBase*)self, (QUrl*)url, permissions, flags);
}

void k_io__workerbase_on_put(void* self, KIO__WorkerResult* (*callback)(void*, void*, int, int32_t)) {
    KIO__WorkerBase_OnPut((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_put(void* self, void* url, int permissions, int32_t flags) {
    return KIO__WorkerBase_QBasePut((KIO__WorkerBase*)self, (QUrl*)url, permissions, flags);
}

KIO__WorkerResult* k_io__workerbase_stat(void* self, void* url) {
    return KIO__WorkerBase_Stat((KIO__WorkerBase*)self, (QUrl*)url);
}

void k_io__workerbase_on_stat(void* self, KIO__WorkerResult* (*callback)(void*, void*)) {
    KIO__WorkerBase_OnStat((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_stat(void* self, void* url) {
    return KIO__WorkerBase_QBaseStat((KIO__WorkerBase*)self, (QUrl*)url);
}

KIO__WorkerResult* k_io__workerbase_mimetype(void* self, void* url) {
    return KIO__WorkerBase_Mimetype((KIO__WorkerBase*)self, (QUrl*)url);
}

void k_io__workerbase_on_mimetype(void* self, KIO__WorkerResult* (*callback)(void*, void*)) {
    KIO__WorkerBase_OnMimetype((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_mimetype(void* self, void* url) {
    return KIO__WorkerBase_QBaseMimetype((KIO__WorkerBase*)self, (QUrl*)url);
}

KIO__WorkerResult* k_io__workerbase_list_dir(void* self, void* url) {
    return KIO__WorkerBase_ListDir((KIO__WorkerBase*)self, (QUrl*)url);
}

void k_io__workerbase_on_list_dir(void* self, KIO__WorkerResult* (*callback)(void*, void*)) {
    KIO__WorkerBase_OnListDir((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_list_dir(void* self, void* url) {
    return KIO__WorkerBase_QBaseListDir((KIO__WorkerBase*)self, (QUrl*)url);
}

KIO__WorkerResult* k_io__workerbase_mkdir(void* self, void* url, int permissions) {
    return KIO__WorkerBase_Mkdir((KIO__WorkerBase*)self, (QUrl*)url, permissions);
}

void k_io__workerbase_on_mkdir(void* self, KIO__WorkerResult* (*callback)(void*, void*, int)) {
    KIO__WorkerBase_OnMkdir((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_mkdir(void* self, void* url, int permissions) {
    return KIO__WorkerBase_QBaseMkdir((KIO__WorkerBase*)self, (QUrl*)url, permissions);
}

KIO__WorkerResult* k_io__workerbase_rename(void* self, void* src, void* dest, int32_t flags) {
    return KIO__WorkerBase_Rename((KIO__WorkerBase*)self, (QUrl*)src, (QUrl*)dest, flags);
}

void k_io__workerbase_on_rename(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*, int32_t)) {
    KIO__WorkerBase_OnRename((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_rename(void* self, void* src, void* dest, int32_t flags) {
    return KIO__WorkerBase_QBaseRename((KIO__WorkerBase*)self, (QUrl*)src, (QUrl*)dest, flags);
}

KIO__WorkerResult* k_io__workerbase_symlink(void* self, const char* target, void* dest, int32_t flags) {
    return KIO__WorkerBase_Symlink((KIO__WorkerBase*)self, qstring(target), (QUrl*)dest, flags);
}

void k_io__workerbase_on_symlink(void* self, KIO__WorkerResult* (*callback)(void*, const char*, void*, int32_t)) {
    KIO__WorkerBase_OnSymlink((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_symlink(void* self, const char* target, void* dest, int32_t flags) {
    return KIO__WorkerBase_QBaseSymlink((KIO__WorkerBase*)self, qstring(target), (QUrl*)dest, flags);
}

KIO__WorkerResult* k_io__workerbase_chmod(void* self, void* url, int permissions) {
    return KIO__WorkerBase_Chmod((KIO__WorkerBase*)self, (QUrl*)url, permissions);
}

void k_io__workerbase_on_chmod(void* self, KIO__WorkerResult* (*callback)(void*, void*, int)) {
    KIO__WorkerBase_OnChmod((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_chmod(void* self, void* url, int permissions) {
    return KIO__WorkerBase_QBaseChmod((KIO__WorkerBase*)self, (QUrl*)url, permissions);
}

KIO__WorkerResult* k_io__workerbase_chown(void* self, void* url, const char* owner, const char* group) {
    return KIO__WorkerBase_Chown((KIO__WorkerBase*)self, (QUrl*)url, qstring(owner), qstring(group));
}

void k_io__workerbase_on_chown(void* self, KIO__WorkerResult* (*callback)(void*, void*, const char*, const char*)) {
    KIO__WorkerBase_OnChown((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_chown(void* self, void* url, const char* owner, const char* group) {
    return KIO__WorkerBase_QBaseChown((KIO__WorkerBase*)self, (QUrl*)url, qstring(owner), qstring(group));
}

KIO__WorkerResult* k_io__workerbase_set_modification_time(void* self, void* url, void* mtime) {
    return KIO__WorkerBase_SetModificationTime((KIO__WorkerBase*)self, (QUrl*)url, (QDateTime*)mtime);
}

void k_io__workerbase_on_set_modification_time(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*)) {
    KIO__WorkerBase_OnSetModificationTime((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_set_modification_time(void* self, void* url, void* mtime) {
    return KIO__WorkerBase_QBaseSetModificationTime((KIO__WorkerBase*)self, (QUrl*)url, (QDateTime*)mtime);
}

KIO__WorkerResult* k_io__workerbase_copy(void* self, void* src, void* dest, int permissions, int32_t flags) {
    return KIO__WorkerBase_Copy((KIO__WorkerBase*)self, (QUrl*)src, (QUrl*)dest, permissions, flags);
}

void k_io__workerbase_on_copy(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*, int, int32_t)) {
    KIO__WorkerBase_OnCopy((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_copy(void* self, void* src, void* dest, int permissions, int32_t flags) {
    return KIO__WorkerBase_QBaseCopy((KIO__WorkerBase*)self, (QUrl*)src, (QUrl*)dest, permissions, flags);
}

KIO__WorkerResult* k_io__workerbase_del(void* self, void* url, bool isfile) {
    return KIO__WorkerBase_Del((KIO__WorkerBase*)self, (QUrl*)url, isfile);
}

void k_io__workerbase_on_del(void* self, KIO__WorkerResult* (*callback)(void*, void*, bool)) {
    KIO__WorkerBase_OnDel((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_del(void* self, void* url, bool isfile) {
    return KIO__WorkerBase_QBaseDel((KIO__WorkerBase*)self, (QUrl*)url, isfile);
}

KIO__WorkerResult* k_io__workerbase_special(void* self, const char* data) {
    return KIO__WorkerBase_Special((KIO__WorkerBase*)self, qstring(data));
}

void k_io__workerbase_on_special(void* self, KIO__WorkerResult* (*callback)(void*, const char*)) {
    KIO__WorkerBase_OnSpecial((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_special(void* self, const char* data) {
    return KIO__WorkerBase_QBaseSpecial((KIO__WorkerBase*)self, qstring(data));
}

KIO__WorkerResult* k_io__workerbase_file_system_free_space(void* self, void* url) {
    return KIO__WorkerBase_FileSystemFreeSpace((KIO__WorkerBase*)self, (QUrl*)url);
}

void k_io__workerbase_on_file_system_free_space(void* self, KIO__WorkerResult* (*callback)(void*, void*)) {
    KIO__WorkerBase_OnFileSystemFreeSpace((KIO__WorkerBase*)self, (intptr_t)callback);
}

KIO__WorkerResult* k_io__workerbase_qbase_file_system_free_space(void* self, void* url) {
    return KIO__WorkerBase_QBaseFileSystemFreeSpace((KIO__WorkerBase*)self, (QUrl*)url);
}

void k_io__workerbase_worker_status2(void* self) {
    KIO__WorkerBase_WorkerStatus2((KIO__WorkerBase*)self);
}

void k_io__workerbase_on_worker_status2(void* self, void (*callback)()) {
    KIO__WorkerBase_OnWorkerStatus2((KIO__WorkerBase*)self, (intptr_t)callback);
}

void k_io__workerbase_qbase_worker_status2(void* self) {
    KIO__WorkerBase_QBaseWorkerStatus2((KIO__WorkerBase*)self);
}

void k_io__workerbase_reparse_configuration(void* self) {
    KIO__WorkerBase_ReparseConfiguration((KIO__WorkerBase*)self);
}

void k_io__workerbase_on_reparse_configuration(void* self, void (*callback)()) {
    KIO__WorkerBase_OnReparseConfiguration((KIO__WorkerBase*)self, (intptr_t)callback);
}

void k_io__workerbase_qbase_reparse_configuration(void* self) {
    KIO__WorkerBase_QBaseReparseConfiguration((KIO__WorkerBase*)self);
}

int32_t k_io__workerbase_connect_timeout(void* self) {
    return KIO__WorkerBase_ConnectTimeout((KIO__WorkerBase*)self);
}

int32_t k_io__workerbase_proxy_connect_timeout(void* self) {
    return KIO__WorkerBase_ProxyConnectTimeout((KIO__WorkerBase*)self);
}

int32_t k_io__workerbase_response_timeout(void* self) {
    return KIO__WorkerBase_ResponseTimeout((KIO__WorkerBase*)self);
}

int32_t k_io__workerbase_read_timeout(void* self) {
    return KIO__WorkerBase_ReadTimeout((KIO__WorkerBase*)self);
}

void k_io__workerbase_set_timeout_special_command(void* self, int timeout) {
    KIO__WorkerBase_SetTimeoutSpecialCommand((KIO__WorkerBase*)self, timeout);
}

int32_t k_io__workerbase_read_data(void* self, char* buffer) {
    return KIO__WorkerBase_ReadData((KIO__WorkerBase*)self, qstring(buffer));
}

void k_io__workerbase_list_entry(void* self, void* entry) {
    KIO__WorkerBase_ListEntry((KIO__WorkerBase*)self, (KIO__UDSEntry*)entry);
}

void k_io__workerbase_connect_worker(void* self, const char* path) {
    KIO__WorkerBase_ConnectWorker((KIO__WorkerBase*)self, qstring(path));
}

void k_io__workerbase_disconnect_worker(void* self) {
    KIO__WorkerBase_DisconnectWorker((KIO__WorkerBase*)self);
}

int32_t k_io__workerbase_open_password_dialog(void* self, void* info) {
    return KIO__WorkerBase_OpenPasswordDialog((KIO__WorkerBase*)self, (KIO__AuthInfo*)info);
}

bool k_io__workerbase_check_cached_authentication(void* self, void* info) {
    return KIO__WorkerBase_CheckCachedAuthentication((KIO__WorkerBase*)self, (KIO__AuthInfo*)info);
}

bool k_io__workerbase_cache_authentication(void* self, void* info) {
    return KIO__WorkerBase_CacheAuthentication((KIO__WorkerBase*)self, (KIO__AuthInfo*)info);
}

int32_t k_io__workerbase_wait_for_answer(void* self, int expected1, int expected2, char* data) {
    return KIO__WorkerBase_WaitForAnswer((KIO__WorkerBase*)self, expected1, expected2, qstring(data));
}

void k_io__workerbase_send_meta_data(void* self) {
    KIO__WorkerBase_SendMetaData((KIO__WorkerBase*)self);
}

void k_io__workerbase_send_and_keep_meta_data(void* self) {
    KIO__WorkerBase_SendAndKeepMetaData((KIO__WorkerBase*)self);
}

bool k_io__workerbase_was_killed(void* self) {
    return KIO__WorkerBase_WasKilled((KIO__WorkerBase*)self);
}

void k_io__workerbase_lookup_host(void* self, const char* host) {
    KIO__WorkerBase_LookupHost((KIO__WorkerBase*)self, qstring(host));
}

int32_t k_io__workerbase_wait_for_host_info(void* self, void* info) {
    return KIO__WorkerBase_WaitForHostInfo((KIO__WorkerBase*)self, (QHostInfo*)info);
}

int32_t k_io__workerbase_request_privilege_operation(void* self, const char* operationDetails) {
    return KIO__WorkerBase_RequestPrivilegeOperation((KIO__WorkerBase*)self, qstring(operationDetails));
}

void k_io__workerbase_add_temporary_authorization(void* self, const char* action) {
    KIO__WorkerBase_AddTemporaryAuthorization((KIO__WorkerBase*)self, qstring(action));
}

void k_io__workerbase_set_incoming_meta_data(void* self, void* metaData) {
    KIO__WorkerBase_SetIncomingMetaData((KIO__WorkerBase*)self, (KIO__MetaData*)metaData);
}

int32_t k_io__workerbase_message_box3(void* self, int32_t type, const char* text, const char* title) {
    return KIO__WorkerBase_MessageBox3((KIO__WorkerBase*)self, type, qstring(text), qstring(title));
}

int32_t k_io__workerbase_message_box4(void* self, int32_t type, const char* text, const char* title, const char* primaryActionText) {
    return KIO__WorkerBase_MessageBox4((KIO__WorkerBase*)self, type, qstring(text), qstring(title), qstring(primaryActionText));
}

int32_t k_io__workerbase_message_box5(void* self, int32_t type, const char* text, const char* title, const char* primaryActionText, const char* secondaryActionText) {
    return KIO__WorkerBase_MessageBox5((KIO__WorkerBase*)self, type, qstring(text), qstring(title), qstring(primaryActionText), qstring(secondaryActionText));
}

int32_t k_io__workerbase_message_box32(void* self, const char* text, int32_t type, const char* title) {
    return KIO__WorkerBase_MessageBox32((KIO__WorkerBase*)self, qstring(text), type, qstring(title));
}

int32_t k_io__workerbase_message_box42(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText) {
    return KIO__WorkerBase_MessageBox42((KIO__WorkerBase*)self, qstring(text), type, qstring(title), qstring(primaryActionText));
}

int32_t k_io__workerbase_message_box52(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText, const char* secondaryActionText) {
    return KIO__WorkerBase_MessageBox52((KIO__WorkerBase*)self, qstring(text), type, qstring(title), qstring(primaryActionText), qstring(secondaryActionText));
}

int32_t k_io__workerbase_message_box6(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText, const char* secondaryActionText, const char* dontAskAgainName) {
    return KIO__WorkerBase_MessageBox6((KIO__WorkerBase*)self, qstring(text), type, qstring(title), qstring(primaryActionText), qstring(secondaryActionText), qstring(dontAskAgainName));
}

const char* k_io__workerbase_config_value22(void* self, const char* key, const char* defaultValue) {
    libqt_string _str = KIO__WorkerBase_ConfigValue22((KIO__WorkerBase*)self, qstring(key), qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__workerbase_set_timeout_special_command2(void* self, int timeout, const char* data) {
    KIO__WorkerBase_SetTimeoutSpecialCommand2((KIO__WorkerBase*)self, timeout, qstring(data));
}

int32_t k_io__workerbase_open_password_dialog2(void* self, void* info, const char* errorMsg) {
    return KIO__WorkerBase_OpenPasswordDialog2((KIO__WorkerBase*)self, (KIO__AuthInfo*)info, qstring(errorMsg));
}

int32_t k_io__workerbase_wait_for_answer4(void* self, int expected1, int expected2, char* data, int* pCmd) {
    return KIO__WorkerBase_WaitForAnswer4((KIO__WorkerBase*)self, expected1, expected2, qstring(data), pCmd);
}

void k_io__workerbase_delete(void* self) {
    KIO__WorkerBase_Delete((KIO__WorkerBase*)(self));
}

const char* k_io_unsupported_action_error_string(const char* param1, int param2) {
    libqt_string _str = KIO_UnsupportedActionErrorString(qstring(param1), param2);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
