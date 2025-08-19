#pragma once
#ifndef SRCQT6C_LIBQPIXMAPCACHE_H
#define SRCQT6C_LIBQPIXMAPCACHE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpixmapcache.html

/// q_pixmapcache_new constructs a new QPixmapCache object.
///
/// @param other QPixmapCache*
QPixmapCache* q_pixmapcache_new(void* other);

/// q_pixmapcache_new2 constructs a new QPixmapCache object and invalidates the source QPixmapCache object.
///
/// @param other QPixmapCache*
QPixmapCache* q_pixmapcache_new2(void* other);

/// q_pixmapcache_copy_assign shallow copies `other` into `self`.
///
/// @param self QPixmapCache*
/// @param other QPixmapCache*
void q_pixmapcache_copy_assign(void* self, void* other);

/// q_pixmapcache_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QPixmapCache*
/// @param other QPixmapCache*
void q_pixmapcache_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#cacheLimit)
///
int32_t q_pixmapcache_cache_limit();

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#setCacheLimit)
///
/// @param cacheLimit int
void q_pixmapcache_set_cache_limit(int cacheLimit);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#find)
///
/// @param key const char*
/// @param pixmap QPixmap*
bool q_pixmapcache_find(const char* key, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#find)
///
/// @param key QPixmapCache__Key*
/// @param pixmap QPixmap*
bool q_pixmapcache_find2(void* key, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
///
/// @param key const char*
/// @param pixmap QPixmap*
bool q_pixmapcache_insert(const char* key, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
///
/// @param pixmap QPixmap*
QPixmapCache__Key* q_pixmapcache_insert2(void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#replace)
///
/// @param key QPixmapCache__Key*
/// @param pixmap QPixmap*
bool q_pixmapcache_replace(void* key, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
///
/// @param key const char*
void q_pixmapcache_remove(const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
///
/// @param key QPixmapCache__Key*
void q_pixmapcache_remove2(void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#clear)
///
void q_pixmapcache_clear();

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#dtor.QPixmapCache)
///
/// Delete this object from C++ memory.
///
/// @param self QPixmapCache*
void q_pixmapcache_delete(void* self);

/// https://doc.qt.io/qt-6/qpixmapcache-key.html

/// q_pixmapcache__key_new constructs a new QPixmapCache::Key object.
///
QPixmapCache__Key* q_pixmapcache__key_new();

/// q_pixmapcache__key_new2 constructs a new QPixmapCache::Key object.
///
/// @param other QPixmapCache__Key*
QPixmapCache__Key* q_pixmapcache__key_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache-key.html#operator-eq-eq)
///
/// @param self QPixmapCache__Key*
/// @param key QPixmapCache__Key*
bool q_pixmapcache__key_operator_equal(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache-key.html#operator-not-eq)
///
/// @param self QPixmapCache__Key*
/// @param key QPixmapCache__Key*
bool q_pixmapcache__key_operator_not_equal(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache-key.html#operator-eq)
///
/// @param self QPixmapCache__Key*
/// @param other QPixmapCache__Key*
void q_pixmapcache__key_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache-key.html#swap)
///
/// @param self QPixmapCache__Key*
/// @param other QPixmapCache__Key*
void q_pixmapcache__key_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache-key.html#isValid)
///
/// @param self QPixmapCache__Key*
bool q_pixmapcache__key_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self QPixmapCache__Key*
void q_pixmapcache__key_delete(void* self);

#endif
