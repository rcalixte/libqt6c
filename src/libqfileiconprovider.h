#pragma once
#ifndef SRC_QT6C_LIBQFILEICONPROVIDER_H
#define SRC_QT6C_LIBQFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html)

/// q_fileiconprovider_new constructs a new QFileIconProvider object.
///
QFileIconProvider* q_fileiconprovider_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// @param self QFileIconProvider*
/// @param type enum QAbstractFileIconProvider__IconType
///
QIcon* q_fileiconprovider_icon(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self QFileIconProvider*
/// @param callback QIcon* func(QFileIconProvider* self, enum QAbstractFileIconProvider__IconType type)
///
void q_fileiconprovider_on_icon(void* self, QIcon* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// @param self QFileIconProvider*
/// @param type enum QAbstractFileIconProvider__IconType
///
QIcon* q_fileiconprovider_qbase_icon(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// @param self QFileIconProvider*
/// @param info QFileInfo*
///
QIcon* q_fileiconprovider_icon2(void* self, void* info);

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// @param self QFileIconProvider*
/// @param callback QIcon* func(QFileIconProvider* self, QFileInfo* info)
///
void q_fileiconprovider_on_icon2(void* self, QIcon* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// @param self QFileIconProvider*
/// @param info QFileInfo*
///
QIcon* q_fileiconprovider_qbase_icon2(void* self, void* info);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFileIconProvider*
/// @param param1 QFileInfo*
///
const char* q_fileiconprovider_type(void* self, void* param1);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileIconProvider*
/// @param param1 QFileInfo*
///
const char* q_fileiconprovider_qbase_type(void* self, void* param1);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileIconProvider*
/// @param callback const char* func(QFileIconProvider* self, QFileInfo* param1)
///
void q_fileiconprovider_on_type(void* self, const char* (*callback)(void*, void*));

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
void q_fileiconprovider_qbase_set_options(void* self, int32_t options);

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
/// @param self QFileIconProvider*
///
/// @return flag of enum QAbstractFileIconProvider__Option
///
int32_t q_fileiconprovider_options(void* self);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFileIconProvider*
///
/// @return flag of enum QAbstractFileIconProvider__Option
///
int32_t q_fileiconprovider_qbase_options(void* self);

/// Inherited from QAbstractFileIconProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFileIconProvider*
/// @param callback int32_t func()
///
void q_fileiconprovider_on_options(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qfileiconprovider.html#dtor.QFileIconProvider)
///
/// Delete this object from C++ memory.
///
/// @param self QFileIconProvider*
///
void q_fileiconprovider_delete(void* self);

#endif
