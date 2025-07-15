#pragma once
#ifndef SRCQT6C_LIBQPIXMAPCACHE_H
#define SRCQT6C_LIBQPIXMAPCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpixmapcache.html

/// q_pixmapcache_new constructs a new QPixmapCache object.
///
/// ``` QPixmapCache* other ```
QPixmapCache* q_pixmapcache_new(void* other);

/// q_pixmapcache_new2 constructs a new QPixmapCache object and invalidates the source QPixmapCache object.
///
/// ``` QPixmapCache* other ```
QPixmapCache* q_pixmapcache_new2(void* other);

/// q_pixmapcache_copy_assign shallow copies `other` into `self`.
///
/// ``` QPixmapCache* self, QPixmapCache* other ```
void q_pixmapcache_copy_assign(void* self, void* other);

/// q_pixmapcache_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPixmapCache* self, QPixmapCache* other ```
void q_pixmapcache_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#cacheLimit)
///
///
int32_t q_pixmapcache_cache_limit();

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#setCacheLimit)
///
/// ``` int cacheLimit ```
void q_pixmapcache_set_cache_limit(int cacheLimit);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#find)
///
/// ``` const char* key, QPixmap* pixmap ```
bool q_pixmapcache_find(const char* key, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#find)
///
/// ``` QPixmapCache__Key* key, QPixmap* pixmap ```
bool q_pixmapcache_find2(void* key, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
///
/// ``` const char* key, QPixmap* pixmap ```
bool q_pixmapcache_insert(const char* key, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
///
/// ``` QPixmap* pixmap ```
QPixmapCache__Key* q_pixmapcache_insert2(void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#replace)
///
/// ``` QPixmapCache__Key* key, QPixmap* pixmap ```
bool q_pixmapcache_replace(void* key, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
///
/// ``` const char* key ```
void q_pixmapcache_remove(const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
///
/// ``` QPixmapCache__Key* key ```
void q_pixmapcache_remove2(void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#clear)
///
///
void q_pixmapcache_clear();

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#dtor.QPixmapCache)
///
/// Delete this object from C++ memory.
///
/// ``` QPixmapCache* self ```
void q_pixmapcache_delete(void* self);

/// https://doc.qt.io/qt-6/qpixmapcache-key.html

/// q_pixmapcache__key_new constructs a new QPixmapCache::Key object.
///
///
QPixmapCache__Key* q_pixmapcache__key_new();

/// q_pixmapcache__key_new2 constructs a new QPixmapCache::Key object.
///
/// ``` QPixmapCache__Key* other ```
QPixmapCache__Key* q_pixmapcache__key_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#operator==)
///
/// ``` QPixmapCache__Key* self, QPixmapCache__Key* key ```
bool q_pixmapcache__key_operator_equal(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#operator!=)
///
/// ``` QPixmapCache__Key* self, QPixmapCache__Key* key ```
bool q_pixmapcache__key_operator_not_equal(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#operator=)
///
/// ``` QPixmapCache__Key* self, QPixmapCache__Key* other ```
void q_pixmapcache__key_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#swap)
///
/// ``` QPixmapCache__Key* self, QPixmapCache__Key* other ```
void q_pixmapcache__key_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#isValid)
///
/// ``` QPixmapCache__Key* self ```
bool q_pixmapcache__key_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache::key.html#dtor.QPixmapCache::Key)
///
/// Delete this object from C++ memory.
///
/// ``` QPixmapCache__Key* self ```
void q_pixmapcache__key_delete(void* self);

#endif
