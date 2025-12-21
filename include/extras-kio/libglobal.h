#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBGLOBAL_H
#define SRC_EXTRAS_KIO_QT6C_LIBGLOBAL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio.html)

/// [Upstream resources](https://api.kde.org/kio.html#convertSize)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 uint64_t
///
const char* k_io_convert_size(uint64_t param1);

/// [Upstream resources](https://api.kde.org/kio.html#number)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 uint64_t
///
const char* k_io_number(uint64_t param1);

/// [Upstream resources](https://api.kde.org/kio.html#convertSizeFromKiB)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 uint64_t
///
const char* k_io_convert_size_from_ki_b(uint64_t param1);

/// [Upstream resources](https://api.kde.org/kio.html#calculateRemainingSeconds)
///
/// @param param1 uint64_t
/// @param param2 uint64_t
/// @param param3 uint64_t
///
uint32_t k_io_calculate_remaining_seconds(uint64_t param1, uint64_t param2, uint64_t param3);

/// [Upstream resources](https://api.kde.org/kio.html#convertSeconds)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 uint32_t
///
const char* k_io_convert_seconds(uint32_t param1);

/// [Upstream resources](https://api.kde.org/kio.html#itemsSummaryString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 uint32_t
/// @param param2 uint32_t
/// @param param3 uint32_t
/// @param param4 uint64_t
/// @param param5 bool
///
const char* k_io_items_summary_string(uint32_t param1, uint32_t param2, uint32_t param3, uint64_t param4, bool param5);

/// [Upstream resources](https://api.kde.org/kio.html#encodeFileName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
///
const char* k_io_encode_file_name(const char* param1);

/// [Upstream resources](https://api.kde.org/kio.html#decodeFileName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
///
const char* k_io_decode_file_name(const char* param1);

/// [Upstream resources](https://api.kde.org/kio.html#parseCacheControl)
///
/// @param param1 const char*
///
/// @return enum KIO__CacheControl
///
int32_t k_io_parse_cache_control(const char* param1);

/// [Upstream resources](https://api.kde.org/kio.html#getCacheControlString)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 enum KIO__CacheControl
///
const char* k_io_get_cache_control_string(int32_t param1);

/// [Upstream resources](https://api.kde.org/kio.html#favIconForUrl)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 QUrl*
///
const char* k_io_fav_icon_for_url(void* param1);

/// [Upstream resources](https://api.kde.org/kio.html#convertPermissions)
///
/// @param param1 int
///
/// @return flag of enum QFileDevice__Permission
///
int32_t k_io_convert_permissions(int param1);

/// [Upstream resources](https://api.kde.org/kio.html#iconNameForUrl)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param param1 QUrl*
///
const char* k_io_icon_name_for_url(void* param1);

/// [Upstream resources](https://api.kde.org/kio.html#upUrl)
///
/// @param param1 QUrl*
///
QUrl* k_io_up_url(void* param1);

/// [Upstream resources](https://api.kde.org/kio-global.html#public-types)

typedef enum {
    KIO_ERROR_ERR_CANNOT_OPEN_FOR_READING = 101,
    KIO_ERROR_ERR_CANNOT_OPEN_FOR_WRITING = 102,
    KIO_ERROR_ERR_CANNOT_LAUNCH_PROCESS = 103,
    KIO_ERROR_ERR_INTERNAL = 104,
    KIO_ERROR_ERR_MALFORMED_URL = 105,
    KIO_ERROR_ERR_UNSUPPORTED_PROTOCOL = 106,
    KIO_ERROR_ERR_NO_SOURCE_PROTOCOL = 107,
    KIO_ERROR_ERR_UNSUPPORTED_ACTION = 108,
    KIO_ERROR_ERR_IS_DIRECTORY = 109,
    KIO_ERROR_ERR_IS_FILE = 110,
    KIO_ERROR_ERR_DOES_NOT_EXIST = 111,
    KIO_ERROR_ERR_FILE_ALREADY_EXIST = 112,
    KIO_ERROR_ERR_DIR_ALREADY_EXIST = 113,
    KIO_ERROR_ERR_UNKNOWN_HOST = 114,
    KIO_ERROR_ERR_ACCESS_DENIED = 115,
    KIO_ERROR_ERR_WRITE_ACCESS_DENIED = 116,
    KIO_ERROR_ERR_CANNOT_ENTER_DIRECTORY = 117,
    KIO_ERROR_ERR_PROTOCOL_IS_NOT_A_FILESYSTEM = 118,
    KIO_ERROR_ERR_CYCLIC_LINK = 119,
    KIO_ERROR_ERR_USER_CANCELED = 1,
    KIO_ERROR_ERR_CYCLIC_COPY = 121,
    KIO_ERROR_ERR_CANNOT_CREATE_SOCKET = 122,
    KIO_ERROR_ERR_CANNOT_CONNECT = 123,
    KIO_ERROR_ERR_CONNECTION_BROKEN = 124,
    KIO_ERROR_ERR_NOT_FILTER_PROTOCOL = 125,
    KIO_ERROR_ERR_CANNOT_MOUNT = 126,
    KIO_ERROR_ERR_CANNOT_UNMOUNT = 127,
    KIO_ERROR_ERR_CANNOT_READ = 128,
    KIO_ERROR_ERR_CANNOT_WRITE = 129,
    KIO_ERROR_ERR_CANNOT_BIND = 130,
    KIO_ERROR_ERR_CANNOT_LISTEN = 131,
    KIO_ERROR_ERR_CANNOT_ACCEPT = 132,
    KIO_ERROR_ERR_CANNOT_LOGIN = 133,
    KIO_ERROR_ERR_CANNOT_STAT = 134,
    KIO_ERROR_ERR_CANNOT_CLOSEDIR = 135,
    KIO_ERROR_ERR_CANNOT_MKDIR = 137,
    KIO_ERROR_ERR_CANNOT_RMDIR = 138,
    KIO_ERROR_ERR_CANNOT_RESUME = 139,
    KIO_ERROR_ERR_CANNOT_RENAME = 140,
    KIO_ERROR_ERR_CANNOT_CHMOD = 141,
    KIO_ERROR_ERR_CANNOT_DELETE = 142,
    KIO_ERROR_ERR_WORKER_DIED = 143,
    KIO_ERROR_ERR_OUT_OF_MEMORY = 144,
    KIO_ERROR_ERR_UNKNOWN_PROXY_HOST = 145,
    KIO_ERROR_ERR_CANNOT_AUTHENTICATE = 146,
    KIO_ERROR_ERR_ABORTED = 147,
    KIO_ERROR_ERR_INTERNAL_SERVER = 148,
    KIO_ERROR_ERR_SERVER_TIMEOUT = 149,
    KIO_ERROR_ERR_SERVICE_NOT_AVAILABLE = 150,
    KIO_ERROR_ERR_UNKNOWN = 151,
    KIO_ERROR_ERR_UNKNOWN_INTERRUPT = 153,
    KIO_ERROR_ERR_CANNOT_DELETE_ORIGINAL = 154,
    KIO_ERROR_ERR_CANNOT_DELETE_PARTIAL = 155,
    KIO_ERROR_ERR_CANNOT_RENAME_ORIGINAL = 156,
    KIO_ERROR_ERR_CANNOT_RENAME_PARTIAL = 157,
    KIO_ERROR_ERR_NEED_PASSWD = 158,
    KIO_ERROR_ERR_CANNOT_SYMLINK = 159,
    KIO_ERROR_ERR_NO_CONTENT = 160,
    KIO_ERROR_ERR_DISK_FULL = 161,
    KIO_ERROR_ERR_IDENTICAL_FILES = 162,
    KIO_ERROR_ERR_WORKER_DEFINED = 163,
    KIO_ERROR_ERR_UPGRADE_REQUIRED = 164,
    KIO_ERROR_ERR_POST_DENIED = 165,
    KIO_ERROR_ERR_CANNOT_SEEK = 166,
    KIO_ERROR_ERR_CANNOT_SETTIME = 167,
    KIO_ERROR_ERR_CANNOT_CHOWN = 168,
    KIO_ERROR_ERR_POST_NO_SIZE = 169,
    KIO_ERROR_ERR_DROP_ON_ITSELF = 170,
    KIO_ERROR_ERR_CANNOT_MOVE_INTO_ITSELF = 171,
    KIO_ERROR_ERR_PASSWD_SERVER = 172,
    KIO_ERROR_ERR_CANNOT_CREATE_WORKER = 173,
    KIO_ERROR_ERR_FILE_TOO_LARGE_FOR_FAT32 = 174,
    KIO_ERROR_ERR_OWNER_DIED = 175,
    KIO_ERROR_ERR_PRIVILEGE_NOT_REQUIRED = 176,
    KIO_ERROR_ERR_CANNOT_TRUNCATE = 177,
    KIO_ERROR_ERR_SYMLINKS_NOT_SUPPORTED = 178,
    KIO_ERROR_ERR_TRASH_FILE_TOO_LARGE = 179
} KIO__Error;

/// [Upstream resources](https://api.kde.org/kio-global.html#public-types)

typedef enum {
    KIO_CACHECONTROL_CC_CACHEONLY = 0,
    KIO_CACHECONTROL_CC_CACHE = 1,
    KIO_CACHECONTROL_CC_VERIFY = 2,
    KIO_CACHECONTROL_CC_REFRESH = 3,
    KIO_CACHECONTROL_CC_RELOAD = 4
} KIO__CacheControl;

/// [Upstream resources](https://api.kde.org/kio-global.html#public-types)

typedef enum {
    KIO_PRIVILEGEOPERATIONSTATUS_OPERATIONALLOWED = 1,
    KIO_PRIVILEGEOPERATIONSTATUS_OPERATIONCANCELED = 2,
    KIO_PRIVILEGEOPERATIONSTATUS_OPERATIONNOTALLOWED = 3
} KIO__PrivilegeOperationStatus;

/// [Upstream resources](https://api.kde.org/kio-global.html#public-types)

typedef enum {
    KIO_STATDETAIL_STATNODETAILS = 0,
    KIO_STATDETAIL_STATBASIC = 1,
    KIO_STATDETAIL_STATUSER = 2,
    KIO_STATDETAIL_STATTIME = 4,
    KIO_STATDETAIL_STATRESOLVESYMLINK = 8,
    KIO_STATDETAIL_STATACL = 16,
    KIO_STATDETAIL_STATINODE = 32,
    KIO_STATDETAIL_STATRECURSIVESIZE = 64,
    KIO_STATDETAIL_STATMIMETYPE = 128,
    KIO_STATDETAIL_STATDEFAULTDETAILS = 31
} KIO__StatDetail;

#endif
