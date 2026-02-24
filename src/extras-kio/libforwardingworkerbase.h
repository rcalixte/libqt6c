#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBFORWARDINGWORKERBASE_H
#define SRC_EXTRAS_KIO_QT6C_LIBFORWARDINGWORKERBASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html)

/// k_io__forwardingworkerbase_new constructs a new KIO::ForwardingWorkerBase object.
///
/// @param protocol char*
/// @param poolSocket char*
/// @param appSocket char*
///
KIO__ForwardingWorkerBase* k_io__forwardingworkerbase_new(char* protocol, char* poolSocket, char* appSocket);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__ForwardingWorkerBase*
///
const QMetaObject* k_io__forwardingworkerbase_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback const QMetaObject* func()
///
void k_io__forwardingworkerbase_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_meta_object` instead
///
#define k_io__forwardingworkerbase_qbase_meta_object k_io__forwardingworkerbase_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
///
const QMetaObject* k_io__forwardingworkerbase_super_meta_object(void* self);

/// @param self KIO__ForwardingWorkerBase*
/// @param param1 const char*
///
void* k_io__forwardingworkerbase_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void* func(KIO__ForwardingWorkerBase* self, const char* param1)
///
void k_io__forwardingworkerbase_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_metacast` instead
///
#define k_io__forwardingworkerbase_qbase_metacast k_io__forwardingworkerbase_super_metacast

/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param param1 const char*
///
void* k_io__forwardingworkerbase_super_metacast(void* self, const char* param1);

/// @param self KIO__ForwardingWorkerBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_io__forwardingworkerbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback int32_t func(KIO__ForwardingWorkerBase* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_io__forwardingworkerbase_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_metacall` instead
///
#define k_io__forwardingworkerbase_qbase_metacall k_io__forwardingworkerbase_super_metacall

/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_io__forwardingworkerbase_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_io__forwardingworkerbase_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#get)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
///
KIO__WorkerResult* k_io__forwardingworkerbase_get(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#get)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url)
///
void k_io__forwardingworkerbase_on_get(void* self, KIO__WorkerResult* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_get` instead
///
#define k_io__forwardingworkerbase_qbase_get k_io__forwardingworkerbase_super_get

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#get)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_get(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#put)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param permissions int
/// @param flags flag of enum KIO__JobFlag
///
KIO__WorkerResult* k_io__forwardingworkerbase_put(void* self, void* url, int permissions, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#put)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url, int permissions, flag of enum KIO__JobFlag flags)
///
void k_io__forwardingworkerbase_on_put(void* self, KIO__WorkerResult* (*callback)(void*, void*, int, int32_t));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_put` instead
///
#define k_io__forwardingworkerbase_qbase_put k_io__forwardingworkerbase_super_put

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#put)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param permissions int
/// @param flags flag of enum KIO__JobFlag
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_put(void* self, void* url, int permissions, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#stat)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
///
KIO__WorkerResult* k_io__forwardingworkerbase_stat(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#stat)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url)
///
void k_io__forwardingworkerbase_on_stat(void* self, KIO__WorkerResult* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_stat` instead
///
#define k_io__forwardingworkerbase_qbase_stat k_io__forwardingworkerbase_super_stat

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#stat)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_stat(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mimetype)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
///
KIO__WorkerResult* k_io__forwardingworkerbase_mimetype(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mimetype)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url)
///
void k_io__forwardingworkerbase_on_mimetype(void* self, KIO__WorkerResult* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_mimetype` instead
///
#define k_io__forwardingworkerbase_qbase_mimetype k_io__forwardingworkerbase_super_mimetype

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mimetype)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_mimetype(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#listDir)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
///
KIO__WorkerResult* k_io__forwardingworkerbase_list_dir(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#listDir)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url)
///
void k_io__forwardingworkerbase_on_list_dir(void* self, KIO__WorkerResult* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_list_dir` instead
///
#define k_io__forwardingworkerbase_qbase_list_dir k_io__forwardingworkerbase_super_list_dir

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#listDir)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_list_dir(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mkdir)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param permissions int
///
KIO__WorkerResult* k_io__forwardingworkerbase_mkdir(void* self, void* url, int permissions);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mkdir)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url, int permissions)
///
void k_io__forwardingworkerbase_on_mkdir(void* self, KIO__WorkerResult* (*callback)(void*, void*, int));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_mkdir` instead
///
#define k_io__forwardingworkerbase_qbase_mkdir k_io__forwardingworkerbase_super_mkdir

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mkdir)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param permissions int
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_mkdir(void* self, void* url, int permissions);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rename)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param src QUrl*
/// @param dest QUrl*
/// @param flags flag of enum KIO__JobFlag
///
KIO__WorkerResult* k_io__forwardingworkerbase_rename(void* self, void* src, void* dest, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rename)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* src, QUrl* dest, flag of enum KIO__JobFlag flags)
///
void k_io__forwardingworkerbase_on_rename(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*, int32_t));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_rename` instead
///
#define k_io__forwardingworkerbase_qbase_rename k_io__forwardingworkerbase_super_rename

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rename)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param src QUrl*
/// @param dest QUrl*
/// @param flags flag of enum KIO__JobFlag
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_rename(void* self, void* src, void* dest, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#symlink)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param target const char*
/// @param dest QUrl*
/// @param flags flag of enum KIO__JobFlag
///
KIO__WorkerResult* k_io__forwardingworkerbase_symlink(void* self, const char* target, void* dest, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#symlink)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, const char* target, QUrl* dest, flag of enum KIO__JobFlag flags)
///
void k_io__forwardingworkerbase_on_symlink(void* self, KIO__WorkerResult* (*callback)(void*, const char*, void*, int32_t));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_symlink` instead
///
#define k_io__forwardingworkerbase_qbase_symlink k_io__forwardingworkerbase_super_symlink

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#symlink)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param target const char*
/// @param dest QUrl*
/// @param flags flag of enum KIO__JobFlag
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_symlink(void* self, const char* target, void* dest, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#chmod)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param permissions int
///
KIO__WorkerResult* k_io__forwardingworkerbase_chmod(void* self, void* url, int permissions);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#chmod)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url, int permissions)
///
void k_io__forwardingworkerbase_on_chmod(void* self, KIO__WorkerResult* (*callback)(void*, void*, int));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_chmod` instead
///
#define k_io__forwardingworkerbase_qbase_chmod k_io__forwardingworkerbase_super_chmod

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#chmod)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param permissions int
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_chmod(void* self, void* url, int permissions);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#setModificationTime)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param mtime QDateTime*
///
KIO__WorkerResult* k_io__forwardingworkerbase_set_modification_time(void* self, void* url, void* mtime);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#setModificationTime)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url, QDateTime* mtime)
///
void k_io__forwardingworkerbase_on_set_modification_time(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_set_modification_time` instead
///
#define k_io__forwardingworkerbase_qbase_set_modification_time k_io__forwardingworkerbase_super_set_modification_time

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#setModificationTime)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param mtime QDateTime*
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_set_modification_time(void* self, void* url, void* mtime);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#copy)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param src QUrl*
/// @param dest QUrl*
/// @param permissions int
/// @param flags flag of enum KIO__JobFlag
///
KIO__WorkerResult* k_io__forwardingworkerbase_copy(void* self, void* src, void* dest, int permissions, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#copy)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* src, QUrl* dest, int permissions, flag of enum KIO__JobFlag flags)
///
void k_io__forwardingworkerbase_on_copy(void* self, KIO__WorkerResult* (*callback)(void*, void*, void*, int, int32_t));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_copy` instead
///
#define k_io__forwardingworkerbase_qbase_copy k_io__forwardingworkerbase_super_copy

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#copy)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param src QUrl*
/// @param dest QUrl*
/// @param permissions int
/// @param flags flag of enum KIO__JobFlag
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_copy(void* self, void* src, void* dest, int permissions, int32_t flags);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#del)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param isfile bool
///
KIO__WorkerResult* k_io__forwardingworkerbase_del(void* self, void* url, bool isfile);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#del)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url, bool isfile)
///
void k_io__forwardingworkerbase_on_del(void* self, KIO__WorkerResult* (*callback)(void*, void*, bool));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_del` instead
///
#define k_io__forwardingworkerbase_qbase_del k_io__forwardingworkerbase_super_del

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#del)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param isfile bool
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_del(void* self, void* url, bool isfile);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rewriteUrl)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param newURL QUrl*
///
bool k_io__forwardingworkerbase_rewrite_url(void* self, void* url, void* newURL);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rewriteUrl)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback bool func(KIO__ForwardingWorkerBase* self, QUrl* url, QUrl* newURL)
///
void k_io__forwardingworkerbase_on_rewrite_url(void* self, bool (*callback)(void*, void*, void*));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_rewrite_url` instead
///
#define k_io__forwardingworkerbase_qbase_rewrite_url k_io__forwardingworkerbase_super_rewrite_url

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rewriteUrl)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param newURL QUrl*
///
bool k_io__forwardingworkerbase_super_rewrite_url(void* self, void* url, void* newURL);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#adjustUDSEntry)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param entry KIO__UDSEntry*
/// @param creationMode enum KIO__ForwardingWorkerBase__UDSEntryCreationMode
///
void k_io__forwardingworkerbase_adjust_u_d_s_entry(void* self, void* entry, int32_t creationMode);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#adjustUDSEntry)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func(KIO__ForwardingWorkerBase* self, KIO__UDSEntry* entry, enum KIO__ForwardingWorkerBase__UDSEntryCreationMode creationMode)
///
void k_io__forwardingworkerbase_on_adjust_u_d_s_entry(void* self, void (*callback)(void*, void*, int32_t));

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_adjust_u_d_s_entry` instead
///
#define k_io__forwardingworkerbase_qbase_adjust_u_d_s_entry k_io__forwardingworkerbase_super_adjust_u_d_s_entry

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#adjustUDSEntry)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
/// @param entry KIO__UDSEntry*
/// @param creationMode enum KIO__ForwardingWorkerBase__UDSEntryCreationMode
///
void k_io__forwardingworkerbase_super_adjust_u_d_s_entry(void* self, void* entry, int32_t creationMode);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#processedUrl)
///
/// @param self KIO__ForwardingWorkerBase*
///
QUrl* k_io__forwardingworkerbase_processed_url(void* self);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#processedUrl)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback QUrl* func()
///
void k_io__forwardingworkerbase_on_processed_url(void* self, QUrl* (*callback)());

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_processed_url` instead
///
#define k_io__forwardingworkerbase_qbase_processed_url k_io__forwardingworkerbase_super_processed_url

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#processedUrl)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
///
QUrl* k_io__forwardingworkerbase_super_processed_url(void* self);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#requestedUrl)
///
/// @param self KIO__ForwardingWorkerBase*
///
QUrl* k_io__forwardingworkerbase_requested_url(void* self);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#requestedUrl)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback QUrl* func()
///
void k_io__forwardingworkerbase_on_requested_url(void* self, QUrl* (*callback)());

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_requested_url` instead
///
#define k_io__forwardingworkerbase_qbase_requested_url k_io__forwardingworkerbase_super_requested_url

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#requestedUrl)
///
/// Base class method implementation
///
/// @param self KIO__ForwardingWorkerBase*
///
QUrl* k_io__forwardingworkerbase_super_requested_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_io__forwardingworkerbase_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_io__forwardingworkerbase_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__ForwardingWorkerBase*
///
const char* k_io__forwardingworkerbase_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param name const char*
///
void k_io__forwardingworkerbase_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__ForwardingWorkerBase*
///
bool k_io__forwardingworkerbase_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__ForwardingWorkerBase*
///
bool k_io__forwardingworkerbase_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__ForwardingWorkerBase*
///
bool k_io__forwardingworkerbase_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__ForwardingWorkerBase*
///
bool k_io__forwardingworkerbase_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param b bool
///
bool k_io__forwardingworkerbase_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__ForwardingWorkerBase*
///
QThread* k_io__forwardingworkerbase_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param thread QThread*
///
bool k_io__forwardingworkerbase_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param interval int
///
int32_t k_io__forwardingworkerbase_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param time int64_t of nanoseconds
///
int32_t k_io__forwardingworkerbase_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param id int
///
void k_io__forwardingworkerbase_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param id enum Qt__TimerId
///
void k_io__forwardingworkerbase_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__ForwardingWorkerBase*
///
/// @return libqt_list of QObject*
///
libqt_list k_io__forwardingworkerbase_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param parent QObject*
///
void k_io__forwardingworkerbase_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param filterObj QObject*
///
void k_io__forwardingworkerbase_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param obj QObject*
///
void k_io__forwardingworkerbase_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_io__forwardingworkerbase_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_io__forwardingworkerbase_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_io__forwardingworkerbase_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__forwardingworkerbase_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_io__forwardingworkerbase_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__ForwardingWorkerBase*
///
bool k_io__forwardingworkerbase_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param receiver QObject*
///
bool k_io__forwardingworkerbase_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_io__forwardingworkerbase_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param name const char*
/// @param value QVariant*
///
bool k_io__forwardingworkerbase_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param name const char*
///
QVariant* k_io__forwardingworkerbase_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KIO__ForwardingWorkerBase*
///
const char** k_io__forwardingworkerbase_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__ForwardingWorkerBase*
///
QBindingStorage* k_io__forwardingworkerbase_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__ForwardingWorkerBase*
///
const QBindingStorage* k_io__forwardingworkerbase_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func(KIO__ForwardingWorkerBase* self)
///
void k_io__forwardingworkerbase_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__ForwardingWorkerBase*
///
QObject* k_io__forwardingworkerbase_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param classname const char*
///
bool k_io__forwardingworkerbase_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_io__forwardingworkerbase_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_io__forwardingworkerbase_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_io__forwardingworkerbase_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_io__forwardingworkerbase_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_io__forwardingworkerbase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param signal const char*
///
bool k_io__forwardingworkerbase_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_io__forwardingworkerbase_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__forwardingworkerbase_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param receiver QObject*
/// @param member const char*
///
bool k_io__forwardingworkerbase_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param param1 QObject*
///
void k_io__forwardingworkerbase_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func(KIO__ForwardingWorkerBase* self, QObject* param1)
///
void k_io__forwardingworkerbase_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#exit)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_exit(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#dispatchLoop)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_dispatch_loop(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#data)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param data char*
///
void k_io__forwardingworkerbase_data(void* self, char* data);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#dataReq)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_data_req(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#workerStatus)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param host const char*
/// @param connected bool
///
void k_io__forwardingworkerbase_worker_status(void* self, const char* host, bool connected);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#statEntry)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param _entry KIO__UDSEntry*
///
void k_io__forwardingworkerbase_stat_entry(void* self, void* _entry);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntries)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param _entry libqt_list of KIO__UDSEntry*
///
void k_io__forwardingworkerbase_list_entries(void* self, libqt_list _entry);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param offset uint64_t
///
bool k_io__forwardingworkerbase_can_resume(void* self, uint64_t offset);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_can_resume2(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#totalSize)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param _bytes uint64_t
///
void k_io__forwardingworkerbase_total_size(void* self, uint64_t _bytes);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#processedSize)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param _bytes uint64_t
///
void k_io__forwardingworkerbase_processed_size(void* self, uint64_t _bytes);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#position)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param _pos uint64_t
///
void k_io__forwardingworkerbase_position(void* self, uint64_t _pos);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#written)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param _bytes uint64_t
///
void k_io__forwardingworkerbase_written(void* self, uint64_t _bytes);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#truncated)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param _length uint64_t
///
void k_io__forwardingworkerbase_truncated(void* self, uint64_t _length);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#speed)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param _bytes_per_second uint64_t
///
void k_io__forwardingworkerbase_speed(void* self, uint64_t _bytes_per_second);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#redirection)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param _url QUrl*
///
void k_io__forwardingworkerbase_redirection(void* self, void* _url);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#errorPage)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_error_page(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#mimeType)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param _type const char*
///
void k_io__forwardingworkerbase_mime_type(void* self, const char* _type);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#warning)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param msg const char*
///
void k_io__forwardingworkerbase_warning(void* self, const char* msg);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#infoMessage)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param msg const char*
///
void k_io__forwardingworkerbase_info_message(void* self, const char* msg);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param text const char*
///
int32_t k_io__forwardingworkerbase_message_box(void* self, int32_t type, const char* text);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param text const char*
/// @param type enum KIO__WorkerBase__MessageBoxType
///
int32_t k_io__forwardingworkerbase_message_box2(void* self, const char* text, int32_t type);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#sslError)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param sslData libqt_map of const char* to QVariant*
///
int32_t k_io__forwardingworkerbase_ssl_error(void* self, libqt_map sslData);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setMetaData)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param key const char*
/// @param value const char*
///
void k_io__forwardingworkerbase_set_meta_data(void* self, const char* key, const char* value);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#hasMetaData)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param key const char*
///
bool k_io__forwardingworkerbase_has_meta_data(void* self, const char* key);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#metaData)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__ForwardingWorkerBase*
/// @param key const char*
///
const char* k_io__forwardingworkerbase_meta_data(void* self, const char* key);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#allMetaData)
///
/// @param self KIO__ForwardingWorkerBase*
///
KIO__MetaData* k_io__forwardingworkerbase_all_meta_data(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#mapConfig)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self KIO__ForwardingWorkerBase*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map k_io__forwardingworkerbase_map_config(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param key const char*
/// @param defaultValue bool
///
bool k_io__forwardingworkerbase_config_value(void* self, const char* key, bool defaultValue);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param key const char*
/// @param defaultValue int
///
int32_t k_io__forwardingworkerbase_config_value2(void* self, const char* key, int defaultValue);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__ForwardingWorkerBase*
/// @param key const char*
///
const char* k_io__forwardingworkerbase_config_value3(void* self, const char* key);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#config)
///
/// @param self KIO__ForwardingWorkerBase*
///
KConfigGroup* k_io__forwardingworkerbase_config(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#remoteEncoding)
///
/// @param self KIO__ForwardingWorkerBase*
///
KRemoteEncoding* k_io__forwardingworkerbase_remote_encoding(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#connectTimeout)
///
/// @param self KIO__ForwardingWorkerBase*
///
int32_t k_io__forwardingworkerbase_connect_timeout(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#proxyConnectTimeout)
///
/// @param self KIO__ForwardingWorkerBase*
///
int32_t k_io__forwardingworkerbase_proxy_connect_timeout(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#responseTimeout)
///
/// @param self KIO__ForwardingWorkerBase*
///
int32_t k_io__forwardingworkerbase_response_timeout(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#readTimeout)
///
/// @param self KIO__ForwardingWorkerBase*
///
int32_t k_io__forwardingworkerbase_read_timeout(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param timeout int
///
void k_io__forwardingworkerbase_set_timeout_special_command(void* self, int timeout);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#readData)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param buffer char*
///
int32_t k_io__forwardingworkerbase_read_data(void* self, char* buffer);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntry)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param entry KIO__UDSEntry*
///
void k_io__forwardingworkerbase_list_entry(void* self, void* entry);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#connectWorker)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param path const char*
///
void k_io__forwardingworkerbase_connect_worker(void* self, const char* path);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#disconnectWorker)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_disconnect_worker(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param info KIO__AuthInfo*
///
int32_t k_io__forwardingworkerbase_open_password_dialog(void* self, void* info);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#checkCachedAuthentication)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param info KIO__AuthInfo*
///
bool k_io__forwardingworkerbase_check_cached_authentication(void* self, void* info);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#cacheAuthentication)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param info KIO__AuthInfo*
///
bool k_io__forwardingworkerbase_cache_authentication(void* self, void* info);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForAnswer)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param expected1 int
/// @param expected2 int
/// @param data char*
///
int32_t k_io__forwardingworkerbase_wait_for_answer(void* self, int expected1, int expected2, char* data);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#sendMetaData)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_send_meta_data(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#sendAndKeepMetaData)
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_send_and_keep_meta_data(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#wasKilled)
///
/// @param self KIO__ForwardingWorkerBase*
///
bool k_io__forwardingworkerbase_was_killed(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#lookupHost)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param host const char*
///
void k_io__forwardingworkerbase_lookup_host(void* self, const char* host);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForHostInfo)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param info QHostInfo*
///
int32_t k_io__forwardingworkerbase_wait_for_host_info(void* self, void* info);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#requestPrivilegeOperation)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param operationDetails const char*
///
/// @return enum KIO__PrivilegeOperationStatus
///
int32_t k_io__forwardingworkerbase_request_privilege_operation(void* self, const char* operationDetails);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#addTemporaryAuthorization)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param action const char*
///
void k_io__forwardingworkerbase_add_temporary_authorization(void* self, const char* action);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setIncomingMetaData)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param metaData KIO__MetaData*
///
void k_io__forwardingworkerbase_set_incoming_meta_data(void* self, void* metaData);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param text const char*
/// @param title const char*
///
int32_t k_io__forwardingworkerbase_message_box3(void* self, int32_t type, const char* text, const char* title);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param text const char*
/// @param title const char*
/// @param primaryActionText const char*
///
int32_t k_io__forwardingworkerbase_message_box4(void* self, int32_t type, const char* text, const char* title, const char* primaryActionText);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param text const char*
/// @param title const char*
/// @param primaryActionText const char*
/// @param secondaryActionText const char*
///
int32_t k_io__forwardingworkerbase_message_box5(void* self, int32_t type, const char* text, const char* title, const char* primaryActionText, const char* secondaryActionText);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param text const char*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param title const char*
///
int32_t k_io__forwardingworkerbase_message_box32(void* self, const char* text, int32_t type, const char* title);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param text const char*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param title const char*
/// @param primaryActionText const char*
///
int32_t k_io__forwardingworkerbase_message_box42(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param text const char*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param title const char*
/// @param primaryActionText const char*
/// @param secondaryActionText const char*
///
int32_t k_io__forwardingworkerbase_message_box52(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText, const char* secondaryActionText);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param text const char*
/// @param type enum KIO__WorkerBase__MessageBoxType
/// @param title const char*
/// @param primaryActionText const char*
/// @param secondaryActionText const char*
/// @param dontAskAgainName const char*
///
int32_t k_io__forwardingworkerbase_message_box6(void* self, const char* text, int32_t type, const char* title, const char* primaryActionText, const char* secondaryActionText, const char* dontAskAgainName);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KIO__ForwardingWorkerBase*
/// @param key const char*
/// @param defaultValue const char*
///
const char* k_io__forwardingworkerbase_config_value22(void* self, const char* key, const char* defaultValue);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param timeout int
/// @param data char*
///
void k_io__forwardingworkerbase_set_timeout_special_command2(void* self, int timeout, char* data);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param info KIO__AuthInfo*
/// @param errorMsg const char*
///
int32_t k_io__forwardingworkerbase_open_password_dialog2(void* self, void* info, const char* errorMsg);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForAnswer)
///
/// @param self KIO__ForwardingWorkerBase*
/// @param expected1 int
/// @param expected2 int
/// @param data char*
/// @param pCmd int*
///
int32_t k_io__forwardingworkerbase_wait_for_answer4(void* self, int expected1, int expected2, char* data, int* pCmd);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param event QEvent*
///
bool k_io__forwardingworkerbase_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_event` instead
///
#define k_io__forwardingworkerbase_qbase_event k_io__forwardingworkerbase_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param event QEvent*
///
bool k_io__forwardingworkerbase_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback bool func(KIO__ForwardingWorkerBase* self, QEvent* event)
///
void k_io__forwardingworkerbase_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_io__forwardingworkerbase_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_event_filter` instead
///
#define k_io__forwardingworkerbase_qbase_event_filter k_io__forwardingworkerbase_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_io__forwardingworkerbase_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback bool func(KIO__ForwardingWorkerBase* self, QObject* watched, QEvent* event)
///
void k_io__forwardingworkerbase_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param event QTimerEvent*
///
void k_io__forwardingworkerbase_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_timer_event` instead
///
#define k_io__forwardingworkerbase_qbase_timer_event k_io__forwardingworkerbase_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param event QTimerEvent*
///
void k_io__forwardingworkerbase_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func(KIO__ForwardingWorkerBase* self, QTimerEvent* event)
///
void k_io__forwardingworkerbase_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param event QChildEvent*
///
void k_io__forwardingworkerbase_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_child_event` instead
///
#define k_io__forwardingworkerbase_qbase_child_event k_io__forwardingworkerbase_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param event QChildEvent*
///
void k_io__forwardingworkerbase_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func(KIO__ForwardingWorkerBase* self, QChildEvent* event)
///
void k_io__forwardingworkerbase_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param event QEvent*
///
void k_io__forwardingworkerbase_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_custom_event` instead
///
#define k_io__forwardingworkerbase_qbase_custom_event k_io__forwardingworkerbase_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param event QEvent*
///
void k_io__forwardingworkerbase_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func(KIO__ForwardingWorkerBase* self, QEvent* event)
///
void k_io__forwardingworkerbase_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param signal QMetaMethod*
///
void k_io__forwardingworkerbase_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_connect_notify` instead
///
#define k_io__forwardingworkerbase_qbase_connect_notify k_io__forwardingworkerbase_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param signal QMetaMethod*
///
void k_io__forwardingworkerbase_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func(KIO__ForwardingWorkerBase* self, QMetaMethod* signal)
///
void k_io__forwardingworkerbase_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param signal QMetaMethod*
///
void k_io__forwardingworkerbase_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_disconnect_notify` instead
///
#define k_io__forwardingworkerbase_qbase_disconnect_notify k_io__forwardingworkerbase_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param signal QMetaMethod*
///
void k_io__forwardingworkerbase_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func(KIO__ForwardingWorkerBase* self, QMetaMethod* signal)
///
void k_io__forwardingworkerbase_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_app_connection_made(void* self);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_app_connection_made` instead
///
#define k_io__forwardingworkerbase_qbase_app_connection_made k_io__forwardingworkerbase_super_app_connection_made

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_super_app_connection_made(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func()
///
void k_io__forwardingworkerbase_on_app_connection_made(void* self, void (*callback)());

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param host const char*
/// @param port unsigned short
/// @param user const char*
/// @param pass const char*
///
void k_io__forwardingworkerbase_set_host(void* self, const char* host, unsigned short port, const char* user, const char* pass);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_set_host` instead
///
#define k_io__forwardingworkerbase_qbase_set_host k_io__forwardingworkerbase_super_set_host

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param host const char*
/// @param port unsigned short
/// @param user const char*
/// @param pass const char*
///
void k_io__forwardingworkerbase_super_set_host(void* self, const char* host, unsigned short port, const char* user, const char* pass);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func(KIO__ForwardingWorkerBase* self, const char* host, unsigned short port, const char* user, const char* pass)
///
void k_io__forwardingworkerbase_on_set_host(void* self, void (*callback)(void*, const char*, unsigned short, const char*, const char*));

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
KIO__WorkerResult* k_io__forwardingworkerbase_open_connection(void* self);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_open_connection` instead
///
#define k_io__forwardingworkerbase_qbase_open_connection k_io__forwardingworkerbase_super_open_connection

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_open_connection(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func()
///
void k_io__forwardingworkerbase_on_open_connection(void* self, KIO__WorkerResult* (*callback)());

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_close_connection(void* self);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_close_connection` instead
///
#define k_io__forwardingworkerbase_qbase_close_connection k_io__forwardingworkerbase_super_close_connection

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_super_close_connection(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func()
///
void k_io__forwardingworkerbase_on_close_connection(void* self, void (*callback)());

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
KIO__WorkerResult* k_io__forwardingworkerbase_open(void* self, void* url, int32_t mode);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_open` instead
///
#define k_io__forwardingworkerbase_qbase_open k_io__forwardingworkerbase_super_open

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param mode flag of enum QIODeviceBase__OpenModeFlag
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_open(void* self, void* url, int32_t mode);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url, flag of enum QIODeviceBase__OpenModeFlag mode)
///
void k_io__forwardingworkerbase_on_open(void* self, KIO__WorkerResult* (*callback)(void*, void*, int32_t));

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param size uint64_t
///
KIO__WorkerResult* k_io__forwardingworkerbase_read(void* self, uint64_t size);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_read` instead
///
#define k_io__forwardingworkerbase_qbase_read k_io__forwardingworkerbase_super_read

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param size uint64_t
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_read(void* self, uint64_t size);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, uint64_t size)
///
void k_io__forwardingworkerbase_on_read(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t));

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param data char*
///
KIO__WorkerResult* k_io__forwardingworkerbase_write(void* self, char* data);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_write` instead
///
#define k_io__forwardingworkerbase_qbase_write k_io__forwardingworkerbase_super_write

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param data char*
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_write(void* self, char* data);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, libqt_string data)
///
void k_io__forwardingworkerbase_on_write(void* self, KIO__WorkerResult* (*callback)(void*, libqt_string));

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param offset uint64_t
///
KIO__WorkerResult* k_io__forwardingworkerbase_seek(void* self, uint64_t offset);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_seek` instead
///
#define k_io__forwardingworkerbase_qbase_seek k_io__forwardingworkerbase_super_seek

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param offset uint64_t
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_seek(void* self, uint64_t offset);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, uint64_t offset)
///
void k_io__forwardingworkerbase_on_seek(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t));

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param size uint64_t
///
KIO__WorkerResult* k_io__forwardingworkerbase_truncate(void* self, uint64_t size);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_truncate` instead
///
#define k_io__forwardingworkerbase_qbase_truncate k_io__forwardingworkerbase_super_truncate

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param size uint64_t
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_truncate(void* self, uint64_t size);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, uint64_t size)
///
void k_io__forwardingworkerbase_on_truncate(void* self, KIO__WorkerResult* (*callback)(void*, uint64_t));

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
KIO__WorkerResult* k_io__forwardingworkerbase_close(void* self);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_close` instead
///
#define k_io__forwardingworkerbase_qbase_close k_io__forwardingworkerbase_super_close

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_close(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func()
///
void k_io__forwardingworkerbase_on_close(void* self, KIO__WorkerResult* (*callback)());

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param owner const char*
/// @param group const char*
///
KIO__WorkerResult* k_io__forwardingworkerbase_chown(void* self, void* url, const char* owner, const char* group);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_chown` instead
///
#define k_io__forwardingworkerbase_qbase_chown k_io__forwardingworkerbase_super_chown

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
/// @param owner const char*
/// @param group const char*
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_chown(void* self, void* url, const char* owner, const char* group);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url, const char* owner, const char* group)
///
void k_io__forwardingworkerbase_on_chown(void* self, KIO__WorkerResult* (*callback)(void*, void*, const char*, const char*));

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param data char*
///
KIO__WorkerResult* k_io__forwardingworkerbase_special(void* self, char* data);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_special` instead
///
#define k_io__forwardingworkerbase_qbase_special k_io__forwardingworkerbase_super_special

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param data char*
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_special(void* self, char* data);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, libqt_string data)
///
void k_io__forwardingworkerbase_on_special(void* self, KIO__WorkerResult* (*callback)(void*, libqt_string));

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
///
KIO__WorkerResult* k_io__forwardingworkerbase_file_system_free_space(void* self, void* url);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_file_system_free_space` instead
///
#define k_io__forwardingworkerbase_qbase_file_system_free_space k_io__forwardingworkerbase_super_file_system_free_space

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param url QUrl*
///
KIO__WorkerResult* k_io__forwardingworkerbase_super_file_system_free_space(void* self, void* url);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback KIO__WorkerResult* func(KIO__ForwardingWorkerBase* self, QUrl* url)
///
void k_io__forwardingworkerbase_on_file_system_free_space(void* self, KIO__WorkerResult* (*callback)(void*, void*));

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_worker_status2(void* self);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_worker_status2` instead
///
#define k_io__forwardingworkerbase_qbase_worker_status2 k_io__forwardingworkerbase_super_worker_status2

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_super_worker_status2(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func()
///
void k_io__forwardingworkerbase_on_worker_status2(void* self, void (*callback)());

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_reparse_configuration(void* self);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_reparse_configuration` instead
///
#define k_io__forwardingworkerbase_qbase_reparse_configuration k_io__forwardingworkerbase_super_reparse_configuration

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_super_reparse_configuration(void* self);

/// Inherited from KIO::WorkerBase
///
/// [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func()
///
void k_io__forwardingworkerbase_on_reparse_configuration(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
QObject* k_io__forwardingworkerbase_sender(void* self);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_sender` instead
///
#define k_io__forwardingworkerbase_qbase_sender k_io__forwardingworkerbase_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
QObject* k_io__forwardingworkerbase_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback QObject* func()
///
void k_io__forwardingworkerbase_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
int32_t k_io__forwardingworkerbase_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_sender_signal_index` instead
///
#define k_io__forwardingworkerbase_qbase_sender_signal_index k_io__forwardingworkerbase_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
///
int32_t k_io__forwardingworkerbase_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback int32_t func()
///
void k_io__forwardingworkerbase_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param signal const char*
///
int32_t k_io__forwardingworkerbase_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_receivers` instead
///
#define k_io__forwardingworkerbase_qbase_receivers k_io__forwardingworkerbase_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param signal const char*
///
int32_t k_io__forwardingworkerbase_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback int32_t func(KIO__ForwardingWorkerBase* self, const char* signal)
///
void k_io__forwardingworkerbase_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param signal QMetaMethod*
///
bool k_io__forwardingworkerbase_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_io__forwardingworkerbase_super_is_signal_connected` instead
///
#define k_io__forwardingworkerbase_qbase_is_signal_connected k_io__forwardingworkerbase_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param signal QMetaMethod*
///
bool k_io__forwardingworkerbase_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback bool func(KIO__ForwardingWorkerBase* self, QMetaMethod* signal)
///
void k_io__forwardingworkerbase_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ForwardingWorkerBase*
/// @param callback void func(KIO__ForwardingWorkerBase* self, const char* objectName)
///
void k_io__forwardingworkerbase_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__ForwardingWorkerBase*
///
void k_io__forwardingworkerbase_delete(void* self);

/// [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#public-types)

typedef enum {
    KIO_FORWARDINGWORKERBASE_UDSENTRYCREATIONMODE_UDSENTRYCREATIONINSTAT = 0,
    KIO_FORWARDINGWORKERBASE_UDSENTRYCREATIONMODE_UDSENTRYCREATIONINLISTDIR = 1
} KIO__ForwardingWorkerBase__UDSEntryCreationMode;

#endif
