#pragma once
#ifndef SRCQT6C_LIBQFILEICONPROVIDER_H
#define SRCQT6C_LIBQFILEICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractfileiconprovider.h"
#include "libqfileinfo.h"
#include "libqicon.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qfileiconprovider.html

/// q_fileiconprovider_new constructs a new QFileIconProvider object.
///
///
QFileIconProvider* q_fileiconprovider_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// ``` QFileIconProvider* self, enum QAbstractFileIconProvider__IconType typeVal ```
QIcon* q_fileiconprovider_icon(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// ``` QFileIconProvider* self, QIcon* (*slot)(QFileIconProvider*, enum QAbstractFileIconProvider__IconType) ```
void q_fileiconprovider_on_icon(void* self, QIcon* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// ``` QFileIconProvider* self, enum QAbstractFileIconProvider__IconType typeVal ```
QIcon* q_fileiconprovider_qbase_icon(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// ``` QFileIconProvider* self, QFileInfo* info ```
QIcon* q_fileiconprovider_icon_with_info(void* self, void* info);

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// ``` QFileIconProvider* self, QIcon* (*slot)(QFileIconProvider*, QFileInfo*) ```
void q_fileiconprovider_on_icon_with_info(void* self, QIcon* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// ``` QFileIconProvider* self, QFileInfo* info ```
QIcon* q_fileiconprovider_qbase_icon_with_info(void* self, void* info);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// ``` QFileIconProvider* self, QFileInfo* param1 ```
QIcon* q_fileiconprovider_icon_with_q_file_info(void* self, void* param1);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractFileIconProvider* self, QIcon* (*slot)(QAbstractFileIconProvider*, QFileInfo*) ```
void q_fileiconprovider_on_icon_with_q_file_info(void* self, QIcon* (*slot)(void*, void*));

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#icon)
///
/// Base class method implementation
///
/// ``` QFileIconProvider* self, QFileInfo* param1 ```
QIcon* q_fileiconprovider_qbase_icon_with_q_file_info(void* self, void* param1);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileIconProvider* self, QFileInfo* param1 ```
const char* q_fileiconprovider_type(void* self, void* param1);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileIconProvider* self, QFileInfo* param1 ```
const char* q_fileiconprovider_qbase_type(void* self, void* param1);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#type)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileIconProvider* self, const char* (*slot)(QFileIconProvider*, QFileInfo*) ```
void q_fileiconprovider_on_type(void* self, const char* (*slot)(void*, void*));

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileIconProvider* self, int options ```
void q_fileiconprovider_set_options(void* self, int64_t options);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileIconProvider* self, int options ```
void q_fileiconprovider_qbase_set_options(void* self, int64_t options);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#setOptions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileIconProvider* self, void (*slot)(QFileIconProvider*, int) ```
void q_fileiconprovider_on_set_options(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFileIconProvider* self ```
int64_t q_fileiconprovider_options(void* self);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFileIconProvider* self ```
int64_t q_fileiconprovider_qbase_options(void* self);

/// Inherited from QAbstractFileIconProvider
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractfileiconprovider.html#options)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFileIconProvider* self, int64_t (*slot)() ```
void q_fileiconprovider_on_options(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qfileiconprovider.html#dtor.QFileIconProvider)
///
/// Delete this object from C++ memory.
///
/// ``` QFileIconProvider* self ```
void q_fileiconprovider_delete(void* self);

#endif
