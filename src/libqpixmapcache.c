#include "libqpixmap.hpp"
#include <string.h>
#include "libqpixmapcache.hpp"
#include "libqpixmapcache.h"

QPixmapCache* q_pixmapcache_new(void* other) {
    return QPixmapCache_new((QPixmapCache*)other);
}

QPixmapCache* q_pixmapcache_new2(void* other) {
    return QPixmapCache_new2((QPixmapCache*)other);
}

void q_pixmapcache_copy_assign(void* self, void* other) {
    QPixmapCache_CopyAssign((QPixmapCache*)self, (QPixmapCache*)other);
}

void q_pixmapcache_move_assign(void* self, void* other) {
    QPixmapCache_MoveAssign((QPixmapCache*)self, (QPixmapCache*)other);
}

int32_t q_pixmapcache_cache_limit() {
    return QPixmapCache_CacheLimit();
}

void q_pixmapcache_set_cache_limit(int cacheLimit) {
    QPixmapCache_SetCacheLimit(cacheLimit);
}

bool q_pixmapcache_find(const char* key, void* pixmap) {
    return QPixmapCache_Find(qstring(key), (QPixmap*)pixmap);
}

bool q_pixmapcache_find2(void* key, void* pixmap) {
    return QPixmapCache_Find2((QPixmapCache__Key*)key, (QPixmap*)pixmap);
}

bool q_pixmapcache_insert(const char* key, void* pixmap) {
    return QPixmapCache_Insert(qstring(key), (QPixmap*)pixmap);
}

QPixmapCache__Key* q_pixmapcache_insert2(void* pixmap) {
    return QPixmapCache_Insert2((QPixmap*)pixmap);
}

bool q_pixmapcache_replace(void* key, void* pixmap) {
    return QPixmapCache_Replace((QPixmapCache__Key*)key, (QPixmap*)pixmap);
}

void q_pixmapcache_remove(const char* key) {
    QPixmapCache_Remove(qstring(key));
}

void q_pixmapcache_remove2(void* key) {
    QPixmapCache_Remove2((QPixmapCache__Key*)key);
}

void q_pixmapcache_clear() {
    QPixmapCache_Clear();
}

void q_pixmapcache_delete(void* self) {
    QPixmapCache_Delete((QPixmapCache*)(self));
}

QPixmapCache__Key* q_pixmapcache__key_new() {
    return QPixmapCache__Key_new();
}

QPixmapCache__Key* q_pixmapcache__key_new2(void* other) {
    return QPixmapCache__Key_new2((QPixmapCache__Key*)other);
}

bool q_pixmapcache__key_operator_equal(void* self, void* key) {
    return QPixmapCache__Key_OperatorEqual((QPixmapCache__Key*)self, (QPixmapCache__Key*)key);
}

bool q_pixmapcache__key_operator_not_equal(void* self, void* key) {
    return QPixmapCache__Key_OperatorNotEqual((QPixmapCache__Key*)self, (QPixmapCache__Key*)key);
}

void q_pixmapcache__key_operator_assign(void* self, void* other) {
    QPixmapCache__Key_OperatorAssign((QPixmapCache__Key*)self, (QPixmapCache__Key*)other);
}

void q_pixmapcache__key_swap(void* self, void* other) {
    QPixmapCache__Key_Swap((QPixmapCache__Key*)self, (QPixmapCache__Key*)other);
}

bool q_pixmapcache__key_is_valid(void* self) {
    return QPixmapCache__Key_IsValid((QPixmapCache__Key*)self);
}

void q_pixmapcache__key_delete(void* self) {
    QPixmapCache__Key_Delete((QPixmapCache__Key*)(self));
}
