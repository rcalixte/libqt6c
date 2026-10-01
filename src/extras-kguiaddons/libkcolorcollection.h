#pragma once
#ifndef EXTRAS_KGUIADDONS_LIBKCOLORCOLLECTION_H
#define EXTRAS_KGUIADDONS_LIBKCOLORCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcolorcollection.html)

/// k_colorcollection_new constructs a new KColorCollection object.
///
KColorCollection* k_colorcollection_new();

/// [Upstream resources](https://api.kde.org/kcolorcollection.html)

/// k_colorcollection_new2 constructs a new KColorCollection object.
///
/// @param param1 KColorCollection*
///
KColorCollection* k_colorcollection_new2(const void* param1);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html)

/// k_colorcollection_new3 constructs a new KColorCollection object.
///
/// @param name const char*
///
KColorCollection* k_colorcollection_new3(const char* name);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#installedCollections)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** k_colorcollection_installed_collections();

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#operator-eq)
///
/// @param self KColorCollection*
/// @param param1 KColorCollection*
///
void k_colorcollection_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#save)
///
/// @param self KColorCollection*
///
bool k_colorcollection_save(void* self);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KColorCollection*
///
const char* k_colorcollection_description(const void* self);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#setDescription)
///
/// @param self KColorCollection*
/// @param desc const char*
///
void k_colorcollection_set_description(void* self, const char* desc);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KColorCollection*
///
const char* k_colorcollection_name(const void* self);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#setName)
///
/// @param self KColorCollection*
/// @param name const char*
///
void k_colorcollection_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#editable)
///
/// @param self const KColorCollection*
///
/// @return enum KColorCollection__Editable
///
int32_t k_colorcollection_editable(const void* self);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#setEditable)
///
/// @param self KColorCollection*
/// @param editable enum KColorCollection__Editable
///
void k_colorcollection_set_editable(void* self, int32_t editable);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#count)
///
/// @param self const KColorCollection*
///
int32_t k_colorcollection_count(const void* self);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#color)
///
/// @param self const KColorCollection*
/// @param index int
///
QColor* k_colorcollection_color(const void* self, int index);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#findColor)
///
/// @param self const KColorCollection*
/// @param color QColor*
///
int32_t k_colorcollection_find_color(const void* self, const void* color);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KColorCollection*
/// @param index int
///
const char* k_colorcollection_name2(const void* self, int index);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KColorCollection*
/// @param color QColor*
///
const char* k_colorcollection_name3(const void* self, const void* color);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#addColor)
///
/// @param self KColorCollection*
/// @param newColor QColor*
///
int32_t k_colorcollection_add_color(void* self, const void* newColor);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
///
/// @param self KColorCollection*
/// @param index int
/// @param newColor QColor*
///
int32_t k_colorcollection_change_color(void* self, int index, const void* newColor);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
///
/// @param self KColorCollection*
/// @param oldColor QColor*
/// @param newColor QColor*
///
int32_t k_colorcollection_change_color2(void* self, const void* oldColor, const void* newColor);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#addColor)
///
/// @param self KColorCollection*
/// @param newColor QColor*
/// @param newColorName const char*
///
int32_t k_colorcollection_add_color2(void* self, const void* newColor, const char* newColorName);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
///
/// @param self KColorCollection*
/// @param index int
/// @param newColor QColor*
/// @param newColorName const char*
///
int32_t k_colorcollection_change_color3(void* self, int index, const void* newColor, const char* newColorName);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
///
/// @param self KColorCollection*
/// @param oldColor QColor*
/// @param newColor QColor*
/// @param newColorName const char*
///
int32_t k_colorcollection_change_color32(void* self, const void* oldColor, const void* newColor, const char* newColorName);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#dtor.KColorCollection)
///
/// Delete this object from C++ memory.
///
/// @param self KColorCollection*
///
void k_colorcollection_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#public-types)

typedef enum {
    KCOLORCOLLECTION_EDITABLE_YES = 0,
    KCOLORCOLLECTION_EDITABLE_NO = 1,
    KCOLORCOLLECTION_EDITABLE_ASK = 2
} KColorCollection__Editable;

#endif
