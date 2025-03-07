#include "libqpixmap.hpp"
#include <string.h>
#include "libqpixmapcache.hpp"
#include "libqpixmapcache.h"

/// https://doc.qt.io/qt-6/qpixmapcache.html

/// q_pixmapcache_new constructs a new QPixmapCache object.
///
/// ``` QPixmapCache* other ```
QPixmapCache* q_pixmapcache_new(void* other) {
    return QPixmapCache_new((QPixmapCache*)other);
}

/// q_pixmapcache_new2 constructs a new QPixmapCache object and invalidates the source QPixmapCache object.
///
/// ``` QPixmapCache* other ```
QPixmapCache* q_pixmapcache_new2(void* other) {
    return QPixmapCache_new2((QPixmapCache*)other);
}

/// q_pixmapcache_copy_assign shallow copies `other` into `self`.
///
/// ``` QPixmapCache* self, QPixmapCache* other ```
void q_pixmapcache_copy_assign(void* self, void* other) {
    QPixmapCache_CopyAssign((QPixmapCache*)self, (QPixmapCache*)other);
}

/// q_pixmapcache_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPixmapCache* self, QPixmapCache* other ```
void q_pixmapcache_move_assign(void* self, void* other) {
    QPixmapCache_MoveAssign((QPixmapCache*)self, (QPixmapCache*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#cacheLimit)
///
///
int32_t q_pixmapcache_cache_limit() {
    return QPixmapCache_CacheLimit();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#setCacheLimit)
///
/// ``` int cacheLimit ```
void q_pixmapcache_set_cache_limit(int cacheLimit) {
    QPixmapCache_SetCacheLimit(cacheLimit);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#find)
///
/// ``` const char* key, QPixmap* pixmap ```
bool q_pixmapcache_find(const char* key, void* pixmap) {
    return QPixmapCache_Find(qstring(key), (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#find)
///
/// ``` QPixmapCache__Key* key, QPixmap* pixmap ```
bool q_pixmapcache_find2(void* key, void* pixmap) {
    return QPixmapCache_Find2((QPixmapCache__Key*)key, (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
///
/// ``` const char* key, QPixmap* pixmap ```
bool q_pixmapcache_insert(const char* key, void* pixmap) {
    return QPixmapCache_Insert(qstring(key), (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#insert)
///
/// ``` QPixmap* pixmap ```
QPixmapCache__Key* q_pixmapcache_insert_with_pixmap(void* pixmap) {
    return QPixmapCache_InsertWithPixmap((QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#replace)
///
/// ``` QPixmapCache__Key* key, QPixmap* pixmap ```
bool q_pixmapcache_replace(void* key, void* pixmap) {
    return QPixmapCache_Replace((QPixmapCache__Key*)key, (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
///
/// ``` const char* key ```
void q_pixmapcache_remove(const char* key) {
    QPixmapCache_Remove(qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#remove)
///
/// ``` QPixmapCache__Key* key ```
void q_pixmapcache_remove_with_key(void* key) {
    QPixmapCache_RemoveWithKey((QPixmapCache__Key*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache.html#clear)
///
///
void q_pixmapcache_clear() {
    QPixmapCache_Clear();
}

/// Delete this object from C++ memory.
///
/// ``` QPixmapCache* self ```
void q_pixmapcache_delete(void* self) {
    QPixmapCache_Delete((QPixmapCache*)(self));
}

/// https://doc.qt.io/qt-6/qpixmapcache-key.html

/// q_pixmapcache__key_new constructs a new QPixmapCache::Key object.
///
///
QPixmapCache__Key* q_pixmapcache__key_new() {
    return QPixmapCache__Key_new();
}

/// q_pixmapcache__key_new2 constructs a new QPixmapCache::Key object.
///
/// ``` QPixmapCache__Key* other ```
QPixmapCache__Key* q_pixmapcache__key_new2(void* other) {
    return QPixmapCache__Key_new2((QPixmapCache__Key*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#operator==)
///
/// ``` QPixmapCache__Key* self, QPixmapCache__Key* key ```
bool q_pixmapcache__key_operator_equal(void* self, void* key) {
    return QPixmapCache__Key_OperatorEqual((QPixmapCache__Key*)self, (QPixmapCache__Key*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#operator!=)
///
/// ``` QPixmapCache__Key* self, QPixmapCache__Key* key ```
bool q_pixmapcache__key_operator_not_equal(void* self, void* key) {
    return QPixmapCache__Key_OperatorNotEqual((QPixmapCache__Key*)self, (QPixmapCache__Key*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#operator=)
///
/// ``` QPixmapCache__Key* self, QPixmapCache__Key* other ```
void q_pixmapcache__key_operator_assign(void* self, void* other) {
    QPixmapCache__Key_OperatorAssign((QPixmapCache__Key*)self, (QPixmapCache__Key*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#swap)
///
/// ``` QPixmapCache__Key* self, QPixmapCache__Key* other ```
void q_pixmapcache__key_swap(void* self, void* other) {
    QPixmapCache__Key_Swap((QPixmapCache__Key*)self, (QPixmapCache__Key*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmapcache__key.html#isValid)
///
/// ``` QPixmapCache__Key* self ```
bool q_pixmapcache__key_is_valid(void* self) {
    return QPixmapCache__Key_IsValid((QPixmapCache__Key*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QPixmapCache__Key* self ```
void q_pixmapcache__key_delete(void* self) {
    QPixmapCache__Key_Delete((QPixmapCache__Key*)(self));
}