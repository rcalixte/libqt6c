#pragma once
#ifndef SRCQT6C_LIBQABSTRACTFILEICONPROVIDER_H
#define SRCQT6C_LIBQABSTRACTFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractfileiconprovider.html

/// q_abstractfileiconprovider_new constructs a new QAbstractFileIconProvider object.
///
QAbstractFileIconProvider* q_abstractfileiconprovider_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// @param self QAbstractFileIconProvider*
/// @param param1 enum QAbstractFileIconProvider__IconType
QIcon* q_abstractfileiconprovider_icon(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFileIconProvider*
/// @param callback QIcon* fn(QAbstractFileIconProvider*, enum QAbstractFileIconProvider__IconType)
void q_abstractfileiconprovider_on_icon(void* self, QIcon* (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// @param self QAbstractFileIconProvider*
/// @param param1 enum QAbstractFileIconProvider__IconType
QIcon* q_abstractfileiconprovider_qbase_icon(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// @param self QAbstractFileIconProvider*
/// @param param1 QFileInfo*
QIcon* q_abstractfileiconprovider_icon2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFileIconProvider*
/// @param callback QIcon* fn(QAbstractFileIconProvider*, QFileInfo*)
void q_abstractfileiconprovider_on_icon2(void* self, QIcon* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// @param self QAbstractFileIconProvider*
/// @param param1 QFileInfo*
QIcon* q_abstractfileiconprovider_qbase_icon2(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractFileIconProvider*
/// @param param1 QFileInfo*
const char* q_abstractfileiconprovider_type(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFileIconProvider*
/// @param callback const char* fn(QAbstractFileIconProvider*, QFileInfo*)
void q_abstractfileiconprovider_on_type(void* self, const char* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Base class method implementation
///
/// @param self QAbstractFileIconProvider*
/// @param param1 QFileInfo*
const char* q_abstractfileiconprovider_qbase_type(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// @param self QAbstractFileIconProvider*
/// @param options flag of enum QAbstractFileIconProvider__Option
void q_abstractfileiconprovider_set_options(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFileIconProvider*
/// @param callback void fn(QAbstractFileIconProvider*, flag of enum QAbstractFileIconProvider__Option)
void q_abstractfileiconprovider_on_set_options(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Base class method implementation
///
/// @param self QAbstractFileIconProvider*
/// @param options flag of enum QAbstractFileIconProvider__Option
void q_abstractfileiconprovider_qbase_set_options(void* self, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// @param self QAbstractFileIconProvider*
///
/// @return flag of enum QAbstractFileIconProvider__Option
int64_t q_abstractfileiconprovider_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractFileIconProvider*
/// @param callback int64_t fn()
void q_abstractfileiconprovider_on_options(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Base class method implementation
///
/// @param self QAbstractFileIconProvider*
///
/// @return flag of enum QAbstractFileIconProvider__Option
int64_t q_abstractfileiconprovider_qbase_options(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#dtor.QAbstractFileIconProvider)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractFileIconProvider*
void q_abstractfileiconprovider_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractfileiconprovider.html#types

typedef enum {
    QABSTRACTFILEICONPROVIDER_ICONTYPE_COMPUTER = 0,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_DESKTOP = 1,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_TRASHCAN = 2,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_NETWORK = 3,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_DRIVE = 4,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_FOLDER = 5,
    QABSTRACTFILEICONPROVIDER_ICONTYPE_FILE = 6
} QAbstractFileIconProvider__IconType;

typedef enum {
    QABSTRACTFILEICONPROVIDER_OPTION_DONTUSECUSTOMDIRECTORYICONS = 1
} QAbstractFileIconProvider__Option;

#endif
