#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBWORKERBASE_H
#define SRC_EXTRAS_KIO_QT6C_LIBWORKERBASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-workerresult.html

/// k_io__workerresult_new constructs a new KIO::WorkerResult object.
///
/// @param param1 KIO__WorkerResult*
KIO__WorkerResult* k_io__workerresult_new(void* param1);

/// [Upstream resources](https://api.kde.org/kio-workerresult.html#operator-eq)
///
/// @param self KIO__WorkerResult*
/// @param param1 KIO__WorkerResult*
void k_io__workerresult_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kio-workerresult.html#success)
///
/// @param self KIO__WorkerResult*
bool k_io__workerresult_success(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerresult.html#error)
///
/// @param self KIO__WorkerResult*
int32_t k_io__workerresult_error(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerresult.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__WorkerResult*
const char* k_io__workerresult_error_string(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerresult.html#fail)
///
KIO__WorkerResult* k_io__workerresult_fail();

/// [Upstream resources](https://api.kde.org/kio-workerresult.html#pass)
///
KIO__WorkerResult* k_io__workerresult_pass();

/// [Upstream resources](https://api.kde.org/kio-workerresult.html#fail)
///
/// @param _error int
KIO__WorkerResult* k_io__workerresult_fail1(int _error);

/// [Upstream resources](https://api.kde.org/kio-workerresult.html#fail)
///
/// @param _error int
/// @param _errorString const char*
KIO__WorkerResult* k_io__workerresult_fail2(int _error, const char* _errorString);

/// Delete this object from C++ memory.
///
/// @param self KIO__WorkerResult*
void k_io__workerresult_delete(void* self);

/// https://api.kde.org/kio-workerbase.html

/// k_io__workerbase_new constructs a new KIO::WorkerBase object.
///
/// @param protocol const char*
/// @param poolSocket const char*
/// @param appSocket const char*
KIO__WorkerBase* k_io__workerbase_new(const char* protocol, const char* poolSocket, const char* appSocket);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#exit)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_exit(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#dispatchLoop)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_dispatch_loop(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#data)
///
/// @param self KIO__WorkerBase*
/// @param data const char*
void k_io__workerbase_data(void* self, const char* data);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#dataReq)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_data_req(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#workerStatus)
///
/// @param self KIO__WorkerBase*
/// @param host const char*
/// @param connected bool
void k_io__workerbase_worker_status(void* self, const char* host, bool connected);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#statEntry)
///
/// @param self KIO__WorkerBase*
/// @param _entry KIO__UDSEntry*
void k_io__workerbase_stat_entry(void* self, void* _entry);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntries)
///
/// @param self KIO__WorkerBase*
/// @param _entry libqt_list /* of KIO__UDSEntry* */
void k_io__workerbase_list_entries(void* self, libqt_list _entry);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
///
/// @param self KIO__WorkerBase*
/// @param offset uint64_t
bool k_io__workerbase_can_resume(void* self, uint64_t offset);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_can_resume2(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#totalSize)
///
/// @param self KIO__WorkerBase*
/// @param _bytes uint64_t
void k_io__workerbase_total_size(void* self, uint64_t _bytes);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#processedSize)
///
/// @param self KIO__WorkerBase*
/// @param _bytes uint64_t
void k_io__workerbase_processed_size(void* self, uint64_t _bytes);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#position)
///
/// @param self KIO__WorkerBase*
/// @param _pos uint64_t
void k_io__workerbase_position(void* self, uint64_t _pos);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#written)
///
/// @param self KIO__WorkerBase*
/// @param _bytes uint64_t
void k_io__workerbase_written(void* self, uint64_t _bytes);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#truncated)
///
/// @param self KIO__WorkerBase*
/// @param _length uint64_t
void k_io__workerbase_truncated(void* self, uint64_t _length);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#speed)
///
/// @param self KIO__WorkerBase*
/// @param _bytes_per_second uint64_t
void k_io__workerbase_speed(void* self, uint64_t _bytes_per_second);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#redirection)
///
/// @param self KIO__WorkerBase*
/// @param _url QUrl*
void k_io__workerbase_redirection(void* self, void* _url);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#errorPage)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_error_page(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#mimeType)
///
/// @param self KIO__WorkerBase*
/// @param _type const char*
void k_io__workerbase_mime_type(void* self, const char* _type);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#warning)
///
/// @param self KIO__WorkerBase*
/// @param msg const char*
void k_io__workerbase_warning(void* self, const char* msg);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#infoMessage)
///
/// @param self KIO__WorkerBase*
/// @param msg const char*
void k_io__workerbase_info_message(void* self, const char* msg);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__WorkerBase*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param text const char*
int32_t k_io__workerbase_message_box(void* self, int32_t type, const char* text);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__WorkerBase*
/// @param text const char*
/// @param type enum KIO__WorkerBase__MessageBoxType
int32_t k_io__workerbase_message_box2(void* self, const char* text, int32_t type);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#sslError)
///
/// @param self KIO__WorkerBase*
/// @param sslData libqt_map /* of const char* to QVariant* */
int32_t k_io__workerbase_ssl_error(void* self, libqt_map /* of const char* to QVariant* */ sslData);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setMetaData)
///
/// @param self KIO__WorkerBase*
/// @param key const char*
/// @param value const char*
void k_io__workerbase_set_meta_data(void* self, const char* key, const char* value);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#hasMetaData)
///
/// @param self KIO__WorkerBase*
/// @param key const char*
bool k_io__workerbase_has_meta_data(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#metaData)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__WorkerBase*
/// @param key const char*
const char* k_io__workerbase_meta_data(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#allMetaData)
///
/// @param self KIO__WorkerBase*
KIO__MetaData* k_io__workerbase_all_meta_data(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#mapConfig)
///
/// @param self KIO__WorkerBase*
libqt_map /* of const char* to QVariant* */ k_io__workerbase_map_config(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
///
/// @param self KIO__WorkerBase*
/// @param key const char*
/// @param defaultValue bool
bool k_io__workerbase_config_value(void* self, const char* key, bool defaultValue);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
///
/// @param self KIO__WorkerBase*
/// @param key const char*
/// @param defaultValue int
int32_t k_io__workerbase_config_value2(void* self, const char* key, int defaultValue);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__WorkerBase*
/// @param key const char*
const char* k_io__workerbase_config_value3(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#config)
///
/// @param self KIO__WorkerBase*
KConfigGroup* k_io__workerbase_config(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#remoteEncoding)
///
/// @param self KIO__WorkerBase*
KRemoteEncoding* k_io__workerbase_remote_encoding(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_app_connection_made(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback void func()
void k_io__workerbase_on_app_connection_made(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_qbase_app_connection_made(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
///
/// @param self KIO__WorkerBase*
/// @param host const char*
/// @param port unsigned short
/// @param user const char*
/// @param pass const char*
void k_io__workerbase_set_host(void* self, const char* host, unsigned short port, const char* user, const char* pass);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback void func(KIO__WorkerBase* self, const char* host, unsigned short port, const char* user, const char* pass)
void k_io__workerbase_on_set_host(void* self, void (*callback)(void*, const char*, unsigned short, const char*, const char*));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param host const char*
/// @param port unsigned short
/// @param user const char*
/// @param pass const char*
void k_io__workerbase_qbase_set_host(void* self, const char* host, unsigned short port, const char* user, const char* pass);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
///
/// @param self KIO__WorkerBase*
KIO__WorkerResult* k_io__workerbase_open_connection(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func()
void k_io__workerbase_on_open_connection(void* self, KIO__WorkerResult* (*callback)());

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
KIO__WorkerResult* k_io__workerbase_qbase_open_connection(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_close_connection(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback void func()
void k_io__workerbase_on_close_connection(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_qbase_close_connection(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#get)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
KIO__WorkerResult* k_io__workerbase_get(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#get)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url)
void k_io__workerbase_on_get(void* self, KIO__WorkerResult* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#get)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
KIO__WorkerResult* k_io__workerbase_qbase_get(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
KIO__WorkerResult* k_io__workerbase_open(void* self, void* url, int32_t mode);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url, flag of enum QIODeviceBase__OpenModeFlag mode)
void k_io__workerbase_on_open(void* self, KIO__WorkerResult* (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
KIO__WorkerResult* k_io__workerbase_qbase_open(void* self, void* url, int32_t mode);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
///
/// @param self KIO__WorkerBase*
/// @param size uint64_t
KIO__WorkerResult* k_io__workerbase_read(void* self, uint64_t size);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, uint64_t size)
void k_io__workerbase_on_read(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param size uint64_t
KIO__WorkerResult* k_io__workerbase_qbase_read(void* self, uint64_t size);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
///
/// @param self KIO__WorkerBase*
/// @param data const char*
KIO__WorkerResult* k_io__workerbase_write(void* self, const char* data);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, const char* data)
void k_io__workerbase_on_write(void* self, KIO__WorkerResult* (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param data const char*
KIO__WorkerResult* k_io__workerbase_qbase_write(void* self, const char* data);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
///
/// @param self KIO__WorkerBase*
/// @param offset uint64_t
KIO__WorkerResult* k_io__workerbase_seek(void* self, uint64_t offset);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, uint64_t offset)
void k_io__workerbase_on_seek(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param offset uint64_t
KIO__WorkerResult* k_io__workerbase_qbase_seek(void* self, uint64_t offset);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
///
/// @param self KIO__WorkerBase*
/// @param size uint64_t
KIO__WorkerResult* k_io__workerbase_truncate(void* self, uint64_t size);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, uint64_t size)
void k_io__workerbase_on_truncate(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param size uint64_t
KIO__WorkerResult* k_io__workerbase_qbase_truncate(void* self, uint64_t size);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
///
/// @param self KIO__WorkerBase*
KIO__WorkerResult* k_io__workerbase_close(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func()
void k_io__workerbase_on_close(void* self, KIO__WorkerResult* (*callback)());

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
KIO__WorkerResult* k_io__workerbase_qbase_close(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#put)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param permissions int
/// @param flags flag of enum KIO__JobFlag
KIO__WorkerResult* k_io__workerbase_put(void* self, void* url, int permissions, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#put)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url, int permissions, flag of enum KIO__JobFlag flags)
void k_io__workerbase_on_put(void* self, KIO__WorkerResult* (*callback)(void*, void*, int, int32_t));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#put)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param permissions int
/// @param flags flag of enum KIO__JobFlag
KIO__WorkerResult* k_io__workerbase_qbase_put(void* self, void* url, int permissions, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#stat)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
KIO__WorkerResult* k_io__workerbase_stat(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#stat)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url)
void k_io__workerbase_on_stat(void* self, KIO__WorkerResult* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#stat)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
KIO__WorkerResult* k_io__workerbase_qbase_stat(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#mimetype)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
KIO__WorkerResult* k_io__workerbase_mimetype(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#mimetype)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url)
void k_io__workerbase_on_mimetype(void* self, KIO__WorkerResult* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#mimetype)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
KIO__WorkerResult* k_io__workerbase_qbase_mimetype(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#listDir)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
KIO__WorkerResult* k_io__workerbase_list_dir(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#listDir)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url)
void k_io__workerbase_on_list_dir(void* self, KIO__WorkerResult* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#listDir)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
KIO__WorkerResult* k_io__workerbase_qbase_list_dir(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#mkdir)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param permissions int
KIO__WorkerResult* k_io__workerbase_mkdir(void* self, void* url, int permissions);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#mkdir)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url, int permissions)
void k_io__workerbase_on_mkdir(void* self, KIO__WorkerResult* (*callback)(void*, void*, int));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#mkdir)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param permissions int
KIO__WorkerResult* k_io__workerbase_qbase_mkdir(void* self, void* url, int permissions);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#rename)
///
/// @param self KIO__WorkerBase*
/// @param src QUrl*
/// @param dest QUrl*
/// @param flags flag of enum KIO__JobFlag
KIO__WorkerResult* k_io__workerbase_rename(void* self, void* src, void* dest, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#rename)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* src, QUrl* dest, flag of enum KIO__JobFlag flags)
void k_io__workerbase_on_rename(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#rename)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param src QUrl*
/// @param dest QUrl*
/// @param flags flag of enum KIO__JobFlag
KIO__WorkerResult* k_io__workerbase_qbase_rename(void* self, void* src, void* dest, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#symlink)
///
/// @param self KIO__WorkerBase*
/// @param target const char*
/// @param dest QUrl*
/// @param flags flag of enum KIO__JobFlag
KIO__WorkerResult* k_io__workerbase_symlink(void* self, const char* target, void* dest, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#symlink)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, const char* target, QUrl* dest, flag of enum KIO__JobFlag flags)
void k_io__workerbase_on_symlink(void* self, KIO__WorkerResult* (*callback)(void*, const char*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#symlink)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param target const char*
/// @param dest QUrl*
/// @param flags flag of enum KIO__JobFlag
KIO__WorkerResult* k_io__workerbase_qbase_symlink(void* self, const char* target, void* dest, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#chmod)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param permissions int
KIO__WorkerResult* k_io__workerbase_chmod(void* self, void* url, int permissions);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#chmod)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url, int permissions)
void k_io__workerbase_on_chmod(void* self, KIO__WorkerResult* (*callback)(void*, void*, int));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#chmod)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param permissions int
KIO__WorkerResult* k_io__workerbase_qbase_chmod(void* self, void* url, int permissions);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param owner const char*
/// @param group const char*
KIO__WorkerResult* k_io__workerbase_chown(void* self, void* url, const char* owner, const char* group);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url, const char* owner, const char* group)
void k_io__workerbase_on_chown(void* self, KIO__WorkerResult* (*callback)(void*, void*, const char*, const char*));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param owner const char*
/// @param group const char*
KIO__WorkerResult* k_io__workerbase_qbase_chown(void* self, void* url, const char* owner, const char* group);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setModificationTime)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param mtime QDateTime*
KIO__WorkerResult* k_io__workerbase_set_modification_time(void* self, void* url, void* mtime);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setModificationTime)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url, QDateTime* mtime)
void k_io__workerbase_on_set_modification_time(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setModificationTime)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param mtime QDateTime*
KIO__WorkerResult* k_io__workerbase_qbase_set_modification_time(void* self, void* url, void* mtime);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#copy)
///
/// @param self KIO__WorkerBase*
/// @param src QUrl*
/// @param dest QUrl*
/// @param permissions int
/// @param flags flag of enum KIO__JobFlag
KIO__WorkerResult* k_io__workerbase_copy(void* self, void* src, void* dest, int permissions, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#copy)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* src, QUrl* dest, int permissions, flag of enum KIO__JobFlag flags)
void k_io__workerbase_on_copy(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*, int, int32_t));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#copy)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param src QUrl*
/// @param dest QUrl*
/// @param permissions int
/// @param flags flag of enum KIO__JobFlag
KIO__WorkerResult* k_io__workerbase_qbase_copy(void* self, void* src, void* dest, int permissions, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#del)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param isfile bool
KIO__WorkerResult* k_io__workerbase_del(void* self, void* url, bool isfile);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#del)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url, bool isfile)
void k_io__workerbase_on_del(void* self, KIO__WorkerResult* (*callback)(void*, void*, bool));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#del)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
/// @param isfile bool
KIO__WorkerResult* k_io__workerbase_qbase_del(void* self, void* url, bool isfile);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
///
/// @param self KIO__WorkerBase*
/// @param data const char*
KIO__WorkerResult* k_io__workerbase_special(void* self, const char* data);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, const char* data)
void k_io__workerbase_on_special(void* self, KIO__WorkerResult* (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param data const char*
KIO__WorkerResult* k_io__workerbase_qbase_special(void* self, const char* data);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
KIO__WorkerResult* k_io__workerbase_file_system_free_space(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__WorkerBase* self, QUrl* url)
void k_io__workerbase_on_file_system_free_space(void* self, KIO__WorkerResult* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
/// @param url QUrl*
KIO__WorkerResult* k_io__workerbase_qbase_file_system_free_space(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_worker_status2(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback void func()
void k_io__workerbase_on_worker_status2(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_qbase_worker_status2(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_reparse_configuration(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
///
/// Allows for overriding the related default method
///
/// @param self KIO__WorkerBase*
/// @param callback void func()
void k_io__workerbase_on_reparse_configuration(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
///
/// Base class method implementation
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_qbase_reparse_configuration(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#connectTimeout)
///
/// @param self KIO__WorkerBase*
int32_t k_io__workerbase_connect_timeout(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#proxyConnectTimeout)
///
/// @param self KIO__WorkerBase*
int32_t k_io__workerbase_proxy_connect_timeout(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#responseTimeout)
///
/// @param self KIO__WorkerBase*
int32_t k_io__workerbase_response_timeout(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#readTimeout)
///
/// @param self KIO__WorkerBase*
int32_t k_io__workerbase_read_timeout(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
///
/// @param self KIO__WorkerBase*
/// @param timeout int
void k_io__workerbase_set_timeout_special_command(void* self, int timeout);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#readData)
///
/// @param self KIO__WorkerBase*
/// @param buffer char*
int32_t k_io__workerbase_read_data(void* self, char* buffer);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntry)
///
/// @param self KIO__WorkerBase*
/// @param entry KIO__UDSEntry*
void k_io__workerbase_list_entry(void* self, void* entry);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#connectWorker)
///
/// @param self KIO__WorkerBase*
/// @param path const char*
void k_io__workerbase_connect_worker(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#disconnectWorker)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_disconnect_worker(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
///
/// @param self KIO__WorkerBase*
/// @param info KIO__AuthInfo*
int32_t k_io__workerbase_open_password_dialog(void* self, void* info);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#checkCachedAuthentication)
///
/// @param self KIO__WorkerBase*
/// @param info KIO__AuthInfo*
bool k_io__workerbase_check_cached_authentication(void* self, void* info);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#cacheAuthentication)
///
/// @param self KIO__WorkerBase*
/// @param info KIO__AuthInfo*
bool k_io__workerbase_cache_authentication(void* self, void* info);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForAnswer)
///
/// @param self KIO__WorkerBase*
/// @param expected1 int
/// @param expected2 int
/// @param data char*
int32_t k_io__workerbase_wait_for_answer(void* self, int expected1, int expected2, char* data);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#sendMetaData)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_send_meta_data(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#sendAndKeepMetaData)
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_send_and_keep_meta_data(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#wasKilled)
///
/// @param self KIO__WorkerBase*
bool k_io__workerbase_was_killed(void* self);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#lookupHost)
///
/// @param self KIO__WorkerBase*
/// @param host const char*
void k_io__workerbase_lookup_host(void* self, const char* host);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForHostInfo)
///
/// @param self KIO__WorkerBase*
/// @param info QHostInfo*
int32_t k_io__workerbase_wait_for_host_info(void* self, void* info);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#requestPrivilegeOperation)
///
/// @param self KIO__WorkerBase*
/// @param operationDetails const char*
///
/// @return enum KIO__PrivilegeOperationStatus
int32_t k_io__workerbase_request_privilege_operation(void* self, const char* operationDetails);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#addTemporaryAuthorization)
///
/// @param self KIO__WorkerBase*
/// @param action const char*
void k_io__workerbase_add_temporary_authorization(void* self, const char* action);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setIncomingMetaData)
///
/// @param self KIO__WorkerBase*
/// @param metaData KIO__MetaData*
void k_io__workerbase_set_incoming_meta_data(void* self, void* metaData);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__WorkerBase*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param text const char*
/// @param title const char*
int32_t k_io__workerbase_message_box3(void* self, int32_t type, const char* text, const char* title);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__WorkerBase*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param text const char*
/// @param title const char*
/// @param primaryActionText const char*
int32_t k_io__workerbase_message_box4(void* self, int32_t type, const char* text, const char* title, const char* primaryActionText);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__WorkerBase*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param text const char*
/// @param title const char*
/// @param primaryActionText const char*
/// @param secondaryActionText const char*
int32_t k_io__workerbase_message_box5(void* self, int32_t type, const char* text, const char* title, const char* primaryActionText, const char* secondaryActionText);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__WorkerBase*
/// @param text const char*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param title const char*
int32_t k_io__workerbase_message_box32(void* self, const char* text, int32_t type, const char* title);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__WorkerBase*
/// @param text const char*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param title const char*
/// @param primaryActionText const char*
int32_t k_io__workerbase_message_box42(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__WorkerBase*
/// @param text const char*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param title const char*
/// @param primaryActionText const char*
/// @param secondaryActionText const char*
int32_t k_io__workerbase_message_box52(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText, const char* secondaryActionText);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__WorkerBase*
/// @param text const char*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param title const char*
/// @param primaryActionText const char*
/// @param secondaryActionText const char*
/// @param dontAskAgainName const char*
int32_t k_io__workerbase_message_box6(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText, const char* secondaryActionText, const char* dontAskAgainName);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__WorkerBase*
/// @param key const char*
/// @param defaultValue const char*
const char* k_io__workerbase_config_value22(void* self, const char* key, const char* defaultValue);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
///
/// @param self KIO__WorkerBase*
/// @param timeout int
/// @param data const char*
void k_io__workerbase_set_timeout_special_command2(void* self, int timeout, const char* data);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
///
/// @param self KIO__WorkerBase*
/// @param info KIO__AuthInfo*
/// @param errorMsg const char*
int32_t k_io__workerbase_open_password_dialog2(void* self, void* info, const char* errorMsg);

/// [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForAnswer)
///
/// @param self KIO__WorkerBase*
/// @param expected1 int
/// @param expected2 int
/// @param data char*
/// @param pCmd int*
int32_t k_io__workerbase_wait_for_answer4(void* self, int expected1, int expected2, char* data, int* pCmd);

/// Delete this object from C++ memory.
///
/// @param self KIO__WorkerBase*
void k_io__workerbase_delete(void* self);

/// https://api.kde.org/kio.html

/// [Upstream resources](https://api.kde.org/kio.html#unsupportedActionErrorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 int
const char* k_io_unsupported_action_error_string(const char* param1, int param2);

/// https://api.kde.org/kio-workerbase.html#types

typedef enum {
    KIO_WORKERBASE_MESSAGEBOXTYPE_QUESTIONTWOACTIONS = 1,
    KIO_WORKERBASE_MESSAGEBOXTYPE_WARNINGTWOACTIONS = 2,
    KIO_WORKERBASE_MESSAGEBOXTYPE_WARNINGCONTINUECANCEL = 3,
    KIO_WORKERBASE_MESSAGEBOXTYPE_WARNINGTWOACTIONSCANCEL = 4,
    KIO_WORKERBASE_MESSAGEBOXTYPE_INFORMATION = 5,
    KIO_WORKERBASE_MESSAGEBOXTYPE_WARNINGCONTINUECANCELDETAILED = 10
} KIO__WorkerBase__MessageBoxType;

typedef enum {
    KIO_WORKERBASE_BUTTONCODE_OK = 1,
    KIO_WORKERBASE_BUTTONCODE_CANCEL = 2,
    KIO_WORKERBASE_BUTTONCODE_PRIMARYACTION = 3,
    KIO_WORKERBASE_BUTTONCODE_SECONDARYACTION = 4,
    KIO_WORKERBASE_BUTTONCODE_CONTINUE = 5
} KIO__WorkerBase__ButtonCode;

#endif
