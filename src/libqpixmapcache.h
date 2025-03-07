#pragma once
#ifndef SRCQT6C_LIBQPIXMAPCACHE_H
#define SRCQT6C_LIBQPIXMAPCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqpixmap.h"
#include <string.h>

QPixmapCache* q_pixmapcache_new(void* other);
QPixmapCache* q_pixmapcache_new2(void* other);
void q_pixmapcache_copy_assign(void* self, void* other);
void q_pixmapcache_move_assign(void* self, void* other);
int32_t q_pixmapcache_cache_limit();
void q_pixmapcache_set_cache_limit(int cacheLimit);
bool q_pixmapcache_find(const char* key, void* pixmap);
bool q_pixmapcache_find2(void* key, void* pixmap);
bool q_pixmapcache_insert(const char* key, void* pixmap);
QPixmapCache__Key* q_pixmapcache_insert_with_pixmap(void* pixmap);
bool q_pixmapcache_replace(void* key, void* pixmap);
void q_pixmapcache_remove(const char* key);
void q_pixmapcache_remove_with_key(void* key);
void q_pixmapcache_clear();
void q_pixmapcache_delete(void* self);

QPixmapCache__Key* q_pixmapcache__key_new();
QPixmapCache__Key* q_pixmapcache__key_new2(void* other);
bool q_pixmapcache__key_operator_equal(void* self, void* key);
bool q_pixmapcache__key_operator_not_equal(void* self, void* key);
void q_pixmapcache__key_operator_assign(void* self, void* other);
void q_pixmapcache__key_swap(void* self, void* other);
bool q_pixmapcache__key_is_valid(void* self);
void q_pixmapcache__key_delete(void* self);

#endif
