#pragma once
#ifndef SRCQT6C_LIBQFILEICONPROVIDER_H
#define SRCQT6C_LIBQFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfileiconprovider.html

/// q_fileiconprovider_new constructs a new QFileIconProvider object.
///
QFileIconProvider* q_fileiconprovider_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// @param self QFileIconProvider*
/// @param typeVal enum QAbstractFileIconProvider__IconType
QIcon* q_fileiconprovider_icon(void* self, int32_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self QFileIconProvider*
/// @param callback QIcon* fn(QFileIconProvider*, enum QAbstractFileIconProvider__IconType)
void q_fileiconprovider_on_icon(void* self, QIcon* (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// @param self QFileIconProvider*
/// @param typeVal enum QAbstractFileIconProvider__IconType
QIcon* q_fileiconprovider_qbase_icon(void* self, int32_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// @param self QFileIconProvider*
/// @param info QFileInfo*
QIcon* q_fileiconprovider_icon2(void* self, void* info);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self QFileIconProvider*
/// @param callback QIcon* fn(QFileIconProvider*, QFileInfo*)
void q_fileiconprovider_on_icon2(void* self, QIcon* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// @param self QFileIconProvider*
/// @param info QFileInfo*
QIcon* q_fileiconprovider_qbase_icon2(void* self, void* info);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileIconProvider*
/// @param param1 QFileInfo*
const char* q_fileiconprovider_type(void* self, void* param1);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileIconProvider*
/// @param param1 QFileInfo*
const char* q_fileiconprovider_qbase_type(void* self, void* param1);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileIconProvider*
/// @param callback const char* fn(QFileIconProvider*, QFileInfo*)
void q_fileiconprovider_on_type(void* self, const char* (*callback)(void*, void*));

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileIconProvider*
/// @param options flag of enum QAbstractFileIconProvider__Option
void q_fileiconprovider_set_options(void* self, int64_t options);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileIconProvider*
/// @param options flag of enum QAbstractFileIconProvider__Option
void q_fileiconprovider_qbase_set_options(void* self, int64_t options);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileIconProvider*
/// @param callback void fn(QFileIconProvider*, flag of enum QAbstractFileIconProvider__Option)
void q_fileiconprovider_on_set_options(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileIconProvider*
///
/// @return flag of enum QAbstractFileIconProvider__Option
int64_t q_fileiconprovider_options(void* self);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileIconProvider*
///
/// @return flag of enum QAbstractFileIconProvider__Option
int64_t q_fileiconprovider_qbase_options(void* self);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileIconProvider*
/// @param callback int64_t fn()
void q_fileiconprovider_on_options(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#dtor.QFileIconProvider)
///
/// Delete this object from C++ memory.
///
/// @param self QFileIconProvider*
void q_fileiconprovider_delete(void* self);

#endif
