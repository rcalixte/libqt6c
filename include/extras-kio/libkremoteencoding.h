#pragma once
#ifndef EXTRAS_KIO_LIBKREMOTEENCODING_H
#define EXTRAS_KIO_LIBKREMOTEENCODING_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
/// @param self const KRemoteEncoding*
/// @param name char*
///
const char* k_remoteencoding_decode(const void* self, char* name);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#encode)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KRemoteEncoding*
/// @param name const char*
///
char* k_remoteencoding_encode(const void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#encode)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KRemoteEncoding*
/// @param url QUrl*
///
char* k_remoteencoding_encode2(const void* self, const void* url);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#directory)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KRemoteEncoding*
/// @param url QUrl*
///
char* k_remoteencoding_directory(const void* self, const void* url);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KRemoteEncoding*
/// @param url QUrl*
///
char* k_remoteencoding_file_name(const void* self, const void* url);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#encoding)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRemoteEncoding*
///
const char* k_remoteencoding_encoding(const void* self);

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
void k_remoteencoding_super_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#directory)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KRemoteEncoding*
/// @param url QUrl*
/// @param ignore_trailing_slash bool
///
char* k_remoteencoding_directory2(const void* self, const void* url, bool ignore_trailing_slash);

/// [Upstream resources](https://api.kde.org/kremoteencoding.html#dtor.KRemoteEncoding)
///
/// Delete this object from C++ memory.
///
/// @param self KRemoteEncoding*
///
void k_remoteencoding_delete(void* self);

#endif
