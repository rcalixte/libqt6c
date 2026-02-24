#pragma once
#ifndef SRC_QT6C_LIBQABSTRACTFILEICONPROVIDER_H
#define SRC_QT6C_LIBQABSTRACTFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html)

/// q_abstractfileiconprovider_new constructs a new QAbstractFileIconProvider object.
///
QAbstractFileIconProvider* q_abstractfileiconprovider_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// @param self QAbstractFileIconProvider*
/// @param param1 enum QAbstractFileIconProvider__IconType
///
QIcon* q_abstractfileiconprovider_icon(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFileIconProvider*
/// @param callback QIcon* func(QAbstractFileIconProvider* self, enum QAbstractFileIconProvider__IconType param1)
///
void q_abstractfileiconprovider_on_icon(void* self, QIcon* (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `q_abstractfileiconprovider_super_icon` instead
///
#define q_abstractfileiconprovider_qbase_icon q_abstractfileiconprovider_super_icon

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// @param self QAbstractFileIconProvider*
/// @param param1 enum QAbstractFileIconProvider__IconType
///
QIcon* q_abstractfileiconprovider_super_icon(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// @param self QAbstractFileIconProvider*
/// @param param1 QFileInfo*
///
QIcon* q_abstractfileiconprovider_icon2(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFileIconProvider*
/// @param callback QIcon* func(QAbstractFileIconProvider* self, QFileInfo* param1)
///
void q_abstractfileiconprovider_on_icon2(void* self, QIcon* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_abstractfileiconprovider_super_icon2` instead
///
#define q_abstractfileiconprovider_qbase_icon2 q_abstractfileiconprovider_super_icon2

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// @param self QAbstractFileIconProvider*
/// @param param1 QFileInfo*
///
QIcon* q_abstractfileiconprovider_super_icon2(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractFileIconProvider*
/// @param param1 QFileInfo*
///
const char* q_abstractfileiconprovider_type(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFileIconProvider*
/// @param callback const char* func(QAbstractFileIconProvider* self, QFileInfo* param1)
///
void q_abstractfileiconprovider_on_type(void* self, const char* (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_abstractfileiconprovider_super_type` instead
///
#define q_abstractfileiconprovider_qbase_type q_abstractfileiconprovider_super_type

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Base class method implementation
///
/// @param self QAbstractFileIconProvider*
/// @param param1 QFileInfo*
///
const char* q_abstractfileiconprovider_super_type(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// @param self QAbstractFileIconProvider*
/// @param options flag of enum QAbstractFileIconProvider__Option
///
void q_abstractfileiconprovider_set_options(void* self, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFileIconProvider*
/// @param callback void func(QAbstractFileIconProvider* self, flag of enum QAbstractFileIconProvider__Option options)
///
void q_abstractfileiconprovider_on_set_options(void* self, void (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `q_abstractfileiconprovider_super_set_options` instead
///
#define q_abstractfileiconprovider_qbase_set_options q_abstractfileiconprovider_super_set_options

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Base class method implementation
///
/// @param self QAbstractFileIconProvider*
/// @param options flag of enum QAbstractFileIconProvider__Option
///
void q_abstractfileiconprovider_super_set_options(void* self, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// @param self QAbstractFileIconProvider*
///
/// @return flag of enum QAbstractFileIconProvider__Option
///
int32_t q_abstractfileiconprovider_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFileIconProvider*
/// @param callback int32_t func()
///
void q_abstractfileiconprovider_on_options(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_abstractfileiconprovider_super_options` instead
///
#define q_abstractfileiconprovider_qbase_options q_abstractfileiconprovider_super_options

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Base class method implementation
///
/// @param self QAbstractFileIconProvider*
///
/// @return flag of enum QAbstractFileIconProvider__Option
///
int32_t q_abstractfileiconprovider_super_options(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#dtor.QAbstractFileIconProvider)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractFileIconProvider*
///
void q_abstractfileiconprovider_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#public-types)

typedef enum {
    QABSTRACTFILEICONPROVIDER_ICONTYPE_COMPUTER = 0,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_DESKTOP = 1,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_TRASHCAN = 2,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_NETWORK = 3,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_DRIVE = 4,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_FOLDER = 5,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_FILE = 6
} QAbstractFileIconProvider__IconType;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#public-types)

typedef enum {
    QABSTRACTFILEICONPROVIDER_OPTION_DONTUSECUSTOMDIRECTORYICONS = 1
} QAbstractFileIconProvider__Option;

#endif
