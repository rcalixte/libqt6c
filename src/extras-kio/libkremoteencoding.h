#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKREMOTEENCODING_H
#define SRC_EXTRAS_KIO_QT6C_LIBKREMOTEENCODING_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kremoteencoding.html)

/// k_remoteencoding_new constructs a new KRemoteEncoding object.
///
KRemoteEncoding* k_remoteencoding_new();

/// [Upstream resources](https://api.kde.org/kremoteencoding.html)

/// k_remoteencoding_new2 constructs a new KRemoteEncoding object.
///
/// @param name const char*
///
KRemoteEncoding* k_remoteencoding_new2(const char* name);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#decode)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRemoteEncoding*
/// @param name const char*
///
const char* k_remoteencoding_decode(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#encode)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KRemoteEncoding*
/// @param name const char*
///
char* k_remoteencoding_encode(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#encode)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KRemoteEncoding*
/// @param url QUrl*
///
char* k_remoteencoding_encode2(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#directory)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KRemoteEncoding*
/// @param url QUrl*
///
char* k_remoteencoding_directory(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KRemoteEncoding*
/// @param url QUrl*
///
char* k_remoteencoding_file_name(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#encoding)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KRemoteEncoding*
///
const char* k_remoteencoding_encoding(void* self);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#setEncoding)
///
/// @param self KRemoteEncoding*
/// @param name const char*
///
void k_remoteencoding_set_encoding(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#virtual_hook)
///
/// @param self KRemoteEncoding*
/// @param id int
/// @param data void*
///
void k_remoteencoding_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self KRemoteEncoding*
/// @param callback void func(KRemoteEncoding* self, int id, void* data)
///
void k_remoteencoding_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self KRemoteEncoding*
/// @param id int
/// @param data void*
///
void k_remoteencoding_qbase_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#directory)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KRemoteEncoding*
/// @param url QUrl*
/// @param ignore_trailing_slash bool
///
char* k_remoteencoding_directory2(void* self, void* url, bool ignore_trailing_slash);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#dtor.KRemoteEncoding)
///
/// Delete this object from C++ memory.
///
/// @param self KRemoteEncoding*
///
void k_remoteencoding_delete(void* self);

#endif
