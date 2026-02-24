#pragma once
#ifndef SRC_EXTRAS_KARCHIVE_QT6C_LIBKFILTERBASE_H
#define SRC_EXTRAS_KARCHIVE_QT6C_LIBKFILTERBASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilterbase.html)

/// k_filterbase_new constructs a new KFilterBase object.
///
KFilterBase* k_filterbase_new();

/// [Upstream resources](https://api.kde.org/kfilterbase.html#setDevice)
///
/// @param self KFilterBase*
/// @param dev QIODevice*
///
void k_filterbase_set_device(void* self, void* dev);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#device)
///
/// @param self KFilterBase*
///
QIODevice* k_filterbase_device(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#init)
///
/// @param self KFilterBase*
/// @param mode int
///
bool k_filterbase_init(void* self, int mode);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#init)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback bool func(KFilterBase* self, int mode)
///
void k_filterbase_on_init(void* self, bool (*callback)(void*, int));

/// @warning DEPRECATED: Use `k_filterbase_super_init` instead
///
#define k_filterbase_qbase_init k_filterbase_super_init

/// [Upstream resources](https://api.kde.org/kfilterbase.html#init)
///
/// Base class method implementation
///
/// @param self KFilterBase*
/// @param mode int
///
bool k_filterbase_super_init(void* self, int mode);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#mode)
///
/// @param self KFilterBase*
///
int32_t k_filterbase_mode(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#mode)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback int32_t func()
///
void k_filterbase_on_mode(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `k_filterbase_super_mode` instead
///
#define k_filterbase_qbase_mode k_filterbase_super_mode

/// [Upstream resources](https://api.kde.org/kfilterbase.html#mode)
///
/// Base class method implementation
///
/// @param self KFilterBase*
///
int32_t k_filterbase_super_mode(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#terminate)
///
/// @param self KFilterBase*
///
bool k_filterbase_terminate(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#terminate)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback bool func()
///
void k_filterbase_on_terminate(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_filterbase_super_terminate` instead
///
#define k_filterbase_qbase_terminate k_filterbase_super_terminate

/// [Upstream resources](https://api.kde.org/kfilterbase.html#terminate)
///
/// Base class method implementation
///
/// @param self KFilterBase*
///
bool k_filterbase_super_terminate(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#reset)
///
/// @param self KFilterBase*
///
void k_filterbase_reset(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback void func()
///
void k_filterbase_on_reset(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_filterbase_super_reset` instead
///
#define k_filterbase_qbase_reset k_filterbase_super_reset

/// [Upstream resources](https://api.kde.org/kfilterbase.html#reset)
///
/// Base class method implementation
///
/// @param self KFilterBase*
///
void k_filterbase_super_reset(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#readHeader)
///
/// @param self KFilterBase*
///
bool k_filterbase_read_header(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#readHeader)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback bool func()
///
void k_filterbase_on_read_header(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_filterbase_super_read_header` instead
///
#define k_filterbase_qbase_read_header k_filterbase_super_read_header

/// [Upstream resources](https://api.kde.org/kfilterbase.html#readHeader)
///
/// Base class method implementation
///
/// @param self KFilterBase*
///
bool k_filterbase_super_read_header(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#writeHeader)
///
/// @param self KFilterBase*
/// @param filename char*
///
bool k_filterbase_write_header(void* self, char* filename);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#writeHeader)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback bool func(KFilterBase* self, libqt_string filename)
///
void k_filterbase_on_write_header(void* self, bool (*callback)(void*, libqt_string));

/// @warning DEPRECATED: Use `k_filterbase_super_write_header` instead
///
#define k_filterbase_qbase_write_header k_filterbase_super_write_header

/// [Upstream resources](https://api.kde.org/kfilterbase.html#writeHeader)
///
/// Base class method implementation
///
/// @param self KFilterBase*
/// @param filename char*
///
bool k_filterbase_super_write_header(void* self, char* filename);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#setOutBuffer)
///
/// @param self KFilterBase*
/// @param data char*
/// @param maxlen uint32_t
///
void k_filterbase_set_out_buffer(void* self, char* data, uint32_t maxlen);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#setOutBuffer)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback void func(KFilterBase* self, char* data, uint32_t maxlen)
///
void k_filterbase_on_set_out_buffer(void* self, void (*callback)(void*, char*, uint32_t));

/// @warning DEPRECATED: Use `k_filterbase_super_set_out_buffer` instead
///
#define k_filterbase_qbase_set_out_buffer k_filterbase_super_set_out_buffer

/// [Upstream resources](https://api.kde.org/kfilterbase.html#setOutBuffer)
///
/// Base class method implementation
///
/// @param self KFilterBase*
/// @param data char*
/// @param maxlen uint32_t
///
void k_filterbase_super_set_out_buffer(void* self, char* data, uint32_t maxlen);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#setInBuffer)
///
/// @param self KFilterBase*
/// @param data const char*
/// @param size uint32_t
///
void k_filterbase_set_in_buffer(void* self, const char* data, uint32_t size);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#setInBuffer)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback void func(KFilterBase* self, const char* data, uint32_t size)
///
void k_filterbase_on_set_in_buffer(void* self, void (*callback)(void*, const char*, uint32_t));

/// @warning DEPRECATED: Use `k_filterbase_super_set_in_buffer` instead
///
#define k_filterbase_qbase_set_in_buffer k_filterbase_super_set_in_buffer

/// [Upstream resources](https://api.kde.org/kfilterbase.html#setInBuffer)
///
/// Base class method implementation
///
/// @param self KFilterBase*
/// @param data const char*
/// @param size uint32_t
///
void k_filterbase_super_set_in_buffer(void* self, const char* data, uint32_t size);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferEmpty)
///
/// @param self KFilterBase*
///
bool k_filterbase_in_buffer_empty(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferEmpty)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback bool func()
///
void k_filterbase_on_in_buffer_empty(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_filterbase_super_in_buffer_empty` instead
///
#define k_filterbase_qbase_in_buffer_empty k_filterbase_super_in_buffer_empty

/// [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferEmpty)
///
/// Base class method implementation
///
/// @param self KFilterBase*
///
bool k_filterbase_super_in_buffer_empty(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferAvailable)
///
/// @param self KFilterBase*
///
int32_t k_filterbase_in_buffer_available(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferAvailable)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback int32_t func()
///
void k_filterbase_on_in_buffer_available(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `k_filterbase_super_in_buffer_available` instead
///
#define k_filterbase_qbase_in_buffer_available k_filterbase_super_in_buffer_available

/// [Upstream resources](https://api.kde.org/kfilterbase.html#inBufferAvailable)
///
/// Base class method implementation
///
/// @param self KFilterBase*
///
int32_t k_filterbase_super_in_buffer_available(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferFull)
///
/// @param self KFilterBase*
///
bool k_filterbase_out_buffer_full(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferFull)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback bool func()
///
void k_filterbase_on_out_buffer_full(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `k_filterbase_super_out_buffer_full` instead
///
#define k_filterbase_qbase_out_buffer_full k_filterbase_super_out_buffer_full

/// [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferFull)
///
/// Base class method implementation
///
/// @param self KFilterBase*
///
bool k_filterbase_super_out_buffer_full(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferAvailable)
///
/// @param self KFilterBase*
///
int32_t k_filterbase_out_buffer_available(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferAvailable)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback int32_t func()
///
void k_filterbase_on_out_buffer_available(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `k_filterbase_super_out_buffer_available` instead
///
#define k_filterbase_qbase_out_buffer_available k_filterbase_super_out_buffer_available

/// [Upstream resources](https://api.kde.org/kfilterbase.html#outBufferAvailable)
///
/// Base class method implementation
///
/// @param self KFilterBase*
///
int32_t k_filterbase_super_out_buffer_available(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#uncompress)
///
/// @param self KFilterBase*
///
/// @return enum KFilterBase__Result
///
int32_t k_filterbase_uncompress(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#uncompress)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback int32_t func()
///
void k_filterbase_on_uncompress(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `k_filterbase_super_uncompress` instead
///
#define k_filterbase_qbase_uncompress k_filterbase_super_uncompress

/// [Upstream resources](https://api.kde.org/kfilterbase.html#uncompress)
///
/// Base class method implementation
///
/// @param self KFilterBase*
///
/// @return enum KFilterBase__Result
///
int32_t k_filterbase_super_uncompress(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#compress)
///
/// @param self KFilterBase*
/// @param finish bool
///
/// @return enum KFilterBase__Result
///
int32_t k_filterbase_compress(void* self, bool finish);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#compress)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback int32_t func(KFilterBase* self, bool finish)
///
void k_filterbase_on_compress(void* self, int32_t (*callback)(void*, bool));

/// @warning DEPRECATED: Use `k_filterbase_super_compress` instead
///
#define k_filterbase_qbase_compress k_filterbase_super_compress

/// [Upstream resources](https://api.kde.org/kfilterbase.html#compress)
///
/// Base class method implementation
///
/// @param self KFilterBase*
/// @param finish bool
///
/// @return enum KFilterBase__Result
///
int32_t k_filterbase_super_compress(void* self, bool finish);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#setFilterFlags)
///
/// @param self KFilterBase*
/// @param flags enum KFilterBase__FilterFlags
///
void k_filterbase_set_filter_flags(void* self, int32_t flags);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#filterFlags)
///
/// @param self KFilterBase*
///
/// @return enum KFilterBase__FilterFlags
///
int32_t k_filterbase_filter_flags(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#virtual_hook)
///
/// @param self KFilterBase*
/// @param id int
/// @param data void*
///
void k_filterbase_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self KFilterBase*
/// @param callback void func(KFilterBase* self, int id, void* data)
///
void k_filterbase_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// @warning DEPRECATED: Use `k_filterbase_super_virtual_hook` instead
///
#define k_filterbase_qbase_virtual_hook k_filterbase_super_virtual_hook

/// [Upstream resources](https://api.kde.org/kfilterbase.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self KFilterBase*
/// @param id int
/// @param data void*
///
void k_filterbase_super_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#setDevice)
///
/// @param self KFilterBase*
/// @param dev QIODevice*
/// @param autodelete bool
///
void k_filterbase_set_device2(void* self, void* dev, bool autodelete);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#dtor.KFilterBase)
///
/// Delete this object from C++ memory.
///
/// @param self KFilterBase*
///
void k_filterbase_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfilterbase.html#public-types)

typedef enum {
    KFILTERBASE_RESULT_OK = 0,
    KFILTERBASE_RESULT_END = 1,
    KFILTERBASE_RESULT_ERROR = 2
} KFilterBase__Result;

/// [Upstream resources](https://api.kde.org/kfilterbase.html#public-types)

typedef enum {
    KFILTERBASE_FILTERFLAGS_NOHEADERS = 0,
    KFILTERBASE_FILTERFLAGS_WITHHEADERS = 1,
    KFILTERBASE_FILTERFLAGS_ZLIBHEADERS = 2
} KFilterBase__FilterFlags;

#endif
