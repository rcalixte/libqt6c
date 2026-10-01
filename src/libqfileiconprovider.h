#pragma once
#ifndef LIBQFILEICONPROVIDER_H
#define LIBQFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html)

/// q_fileiconprovider_new constructs a new QFileIconProvider object.
///
QFileIconProvider* q_fileiconprovider_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// @param self const QFileIconProvider*
/// @param type enum QAbstractFileIconProvider__IconType
///
QIcon* q_fileiconprovider_icon(const void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self const QFileIconProvider*
/// @param callback QIcon* func(const QFileIconProvider* self, enum QAbstractFileIconProvider__IconType type)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_fileiconprovider_on_icon(const void* self, QIcon* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// @param self const QFileIconProvider*
/// @param type enum QAbstractFileIconProvider__IconType
///
QIcon* q_fileiconprovider_super_icon(const void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// @param self const QFileIconProvider*
/// @param info QFileInfo*
///
QIcon* q_fileiconprovider_icon2(const void* self, const void* info);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self const QFileIconProvider*
/// @param callback QIcon* func(const QFileIconProvider* self, QFileInfo* info)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_fileiconprovider_on_icon2(const void* self, QIcon* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// @param self const QFileIconProvider*
/// @param info QFileInfo*
///
QIcon* q_fileiconprovider_super_icon2(const void* self, const void* info);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileIconProvider*
/// @param param1 QFileInfo*
///
const char* q_fileiconprovider_type(const void* self, const void* param1);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileIconProvider*
/// @param param1 QFileInfo*
///
const char* q_fileiconprovider_super_type(const void* self, const void* param1);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFileIconProvider*
/// @param callback const char* func(QFileIconProvider* self, QFileInfo* param1)
///
void q_fileiconprovider_on_type(const void* self, const char* (*callback)(const void*, const void*));

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileIconProvider*
/// @param options flag of enum QAbstractFileIconProvider__Option
///
void q_fileiconprovider_set_options(void* self, int32_t options);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileIconProvider*
/// @param options flag of enum QAbstractFileIconProvider__Option
///
void q_fileiconprovider_super_set_options(void* self, int32_t options);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileIconProvider*
/// @param callback void func(QFileIconProvider* self, flag of enum QAbstractFileIconProvider__Option options)
///
void q_fileiconprovider_on_set_options(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QFileIconProvider*
///
/// @return flag of enum QAbstractFileIconProvider__Option
///
int32_t q_fileiconprovider_options(const void* self);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QFileIconProvider*
///
/// @return flag of enum QAbstractFileIconProvider__Option
///
int32_t q_fileiconprovider_super_options(const void* self);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QFileIconProvider*
/// @param callback int32_t func(QFileIconProvider* self)
///
void q_fileiconprovider_on_options(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#dtor.QFileIconProvider)
///
/// Delete this object from C++ memory.
///
/// @param self QFileIconProvider*
///
void q_fileiconprovider_delete(void* self);

#endif
