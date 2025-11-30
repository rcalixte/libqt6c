#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKCOLORCOLLECTION_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKCOLORCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kcolorcollection.html

/// k_colorcollection_new constructs a new KColorCollection object.
///
KColorCollection* k_colorcollection_new();

/// k_colorcollection_new2 constructs a new KColorCollection object.
///
/// @param param1 KColorCollection*
KColorCollection* k_colorcollection_new2(void* param1);

/// k_colorcollection_new3 constructs a new KColorCollection object.
///
/// @param name const char*
KColorCollection* k_colorcollection_new3(const char* name);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#installedCollections)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_colorcollection_installed_collections();

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#operator-eq)
///
/// @param self KColorCollection*
/// @param param1 KColorCollection*
void k_colorcollection_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#save)
///
/// @param self KColorCollection*
bool k_colorcollection_save(void* self);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KColorCollection*
const char* k_colorcollection_description(void* self);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#setDescription)
///
/// @param self KColorCollection*
/// @param desc const char*
void k_colorcollection_set_description(void* self, const char* desc);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KColorCollection*
const char* k_colorcollection_name(void* self);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#setName)
///
/// @param self KColorCollection*
/// @param name const char*
void k_colorcollection_set_name(void* self, const char* name);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#editable)
///
/// @param self KColorCollection*
///
/// @return enum KColorCollection__Editable
int32_t k_colorcollection_editable(void* self);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#setEditable)
///
/// @param self KColorCollection*
/// @param editable enum KColorCollection__Editable
void k_colorcollection_set_editable(void* self, int32_t editable);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#count)
///
/// @param self KColorCollection*
int32_t k_colorcollection_count(void* self);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#color)
///
/// @param self KColorCollection*
/// @param index int
QColor* k_colorcollection_color(void* self, int index);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#findColor)
///
/// @param self KColorCollection*
/// @param color QColor*
int32_t k_colorcollection_find_color(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KColorCollection*
/// @param index int
const char* k_colorcollection_name2(void* self, int index);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KColorCollection*
/// @param color QColor*
const char* k_colorcollection_name3(void* self, void* color);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#addColor)
///
/// @param self KColorCollection*
/// @param newColor QColor*
int32_t k_colorcollection_add_color(void* self, void* newColor);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
///
/// @param self KColorCollection*
/// @param index int
/// @param newColor QColor*
int32_t k_colorcollection_change_color(void* self, int index, void* newColor);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
///
/// @param self KColorCollection*
/// @param oldColor QColor*
/// @param newColor QColor*
int32_t k_colorcollection_change_color2(void* self, void* oldColor, void* newColor);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#addColor)
///
/// @param self KColorCollection*
/// @param newColor QColor*
/// @param newColorName const char*
int32_t k_colorcollection_add_color2(void* self, void* newColor, const char* newColorName);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
///
/// @param self KColorCollection*
/// @param index int
/// @param newColor QColor*
/// @param newColorName const char*
int32_t k_colorcollection_change_color3(void* self, int index, void* newColor, const char* newColorName);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#changeColor)
///
/// @param self KColorCollection*
/// @param oldColor QColor*
/// @param newColor QColor*
/// @param newColorName const char*
int32_t k_colorcollection_change_color32(void* self, void* oldColor, void* newColor, const char* newColorName);

/// [Upstream resources](https://api.kde.org/kcolorcollection.html#dtor.KColorCollection)
///
/// Delete this object from C++ memory.
///
/// @param self KColorCollection*
void k_colorcollection_delete(void* self);

/// https://api.kde.org/kcolorcollection.html#types

typedef enum {
    KCOLORCOLLECTION_EDITABLE_YES = 0,
    KCOLORCOLLECTION_EDITABLE_NO = 1,
    KCOLORCOLLECTION_EDITABLE_ASK = 2
} KColorCollection__Editable;

#endif
