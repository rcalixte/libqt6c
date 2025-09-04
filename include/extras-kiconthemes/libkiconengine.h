#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESQT6C_LIBKICONENGINE_H
#define SRC_EXTRAS_KICONTHEMESQT6C_LIBKICONENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kiconengine.html

/// k_iconengine_new constructs a new KIconEngine object.
///
/// @param iconName const char*
/// @param iconLoader KIconLoader*
/// @param overlays const char**
KIconEngine* k_iconengine_new(const char* iconName, void* iconLoader, const char* overlays[]);

/// k_iconengine_new2 constructs a new KIconEngine object.
///
/// @param iconName const char*
/// @param iconLoader KIconLoader*
KIconEngine* k_iconengine_new2(const char* iconName, void* iconLoader);

/// k_iconengine_new3 constructs a new KIconEngine object.
///
/// @param iconName const char*
/// @param colors KIconColors*
/// @param iconLoader KIconLoader*
KIconEngine* k_iconengine_new3(const char* iconName, void* colors, void* iconLoader);

/// k_iconengine_new4 constructs a new KIconEngine object.
///
/// @param iconName const char*
/// @param colors KIconColors*
/// @param iconLoader KIconLoader*
/// @param overlays const char**
KIconEngine* k_iconengine_new4(const char* iconName, void* colors, void* iconLoader, const char* overlays[]);

/// k_iconengine_new5 constructs a new KIconEngine object.
///
/// @param param1 KIconEngine*
KIconEngine* k_iconengine_new5(void* param1);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#actualSize)
///
/// @param self KIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QSize* k_iconengine_actual_size(void* self, void* size, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#actualSize)
///
/// Allows for overriding the related default method
///
/// @param self KIconEngine*
/// @param callback QSize* func(KIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state)
void k_iconengine_on_actual_size(void* self, QSize* (*callback)(void*, void*, int32_t, int32_t));

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#actualSize)
///
/// Base class method implementation
///
/// @param self KIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QSize* k_iconengine_qbase_actual_size(void* self, void* size, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#paint)
///
/// @param self KIconEngine*
/// @param painter QPainter*
/// @param rect QRect*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_iconengine_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self KIconEngine*
/// @param callback void func(KIconEngine* self, QPainter* painter, QRect* rect, enum QIcon__Mode mode, enum QIcon__State state)
void k_iconengine_on_paint(void* self, void (*callback)(void*, void*, void*, int32_t, int32_t));

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#paint)
///
/// Base class method implementation
///
/// @param self KIconEngine*
/// @param painter QPainter*
/// @param rect QRect*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_iconengine_qbase_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#pixmap)
///
/// @param self KIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QPixmap* k_iconengine_pixmap(void* self, void* size, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#pixmap)
///
/// Allows for overriding the related default method
///
/// @param self KIconEngine*
/// @param callback QPixmap* func(KIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state)
void k_iconengine_on_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t));

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#pixmap)
///
/// Base class method implementation
///
/// @param self KIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QPixmap* k_iconengine_qbase_pixmap(void* self, void* size, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#scaledPixmap)
///
/// @param self KIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
/// @param scale double
QPixmap* k_iconengine_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#scaledPixmap)
///
/// Allows for overriding the related default method
///
/// @param self KIconEngine*
/// @param callback QPixmap* func(KIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state, double scale)
void k_iconengine_on_scaled_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t, double));

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#scaledPixmap)
///
/// Base class method implementation
///
/// @param self KIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
/// @param scale double
QPixmap* k_iconengine_qbase_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#iconName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconEngine*
const char* k_iconengine_icon_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#iconName)
///
/// Allows for overriding the related default method
///
/// @param self KIconEngine*
/// @param callback const char* func()
void k_iconengine_on_icon_name(void* self, const char* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#iconName)
///
/// Base class method implementation
///
/// @param self KIconEngine*
const char* k_iconengine_qbase_icon_name(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#availableSizes)
///
/// @param self KIconEngine*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
libqt_list /* of QSize* */ k_iconengine_available_sizes(void* self, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#availableSizes)
///
/// Allows for overriding the related default method
///
/// @param self KIconEngine*
/// @param callback libqt_list /* of QSize* */ func(KIconEngine* self, enum QIcon__Mode mode, enum QIcon__State state)
void k_iconengine_on_available_sizes(void* self, libqt_list /* of QSize* */ (*callback)(void*, int32_t, int32_t));

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#availableSizes)
///
/// Base class method implementation
///
/// @param self KIconEngine*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
libqt_list /* of QSize* */ k_iconengine_qbase_available_sizes(void* self, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#isNull)
///
/// @param self KIconEngine*
bool k_iconengine_is_null(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#isNull)
///
/// Allows for overriding the related default method
///
/// @param self KIconEngine*
/// @param callback bool func()
void k_iconengine_on_is_null(void* self, bool (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#isNull)
///
/// Base class method implementation
///
/// @param self KIconEngine*
bool k_iconengine_qbase_is_null(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#key)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconEngine*
const char* k_iconengine_key(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#key)
///
/// Allows for overriding the related default method
///
/// @param self KIconEngine*
/// @param callback const char* func()
void k_iconengine_on_key(void* self, const char* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#key)
///
/// Base class method implementation
///
/// @param self KIconEngine*
const char* k_iconengine_qbase_key(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#clone)
///
/// @param self KIconEngine*
QIconEngine* k_iconengine_clone(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self KIconEngine*
/// @param callback QIconEngine* func()
void k_iconengine_on_clone(void* self, QIconEngine* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#clone)
///
/// Base class method implementation
///
/// @param self KIconEngine*
QIconEngine* k_iconengine_qbase_clone(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#read)
///
/// @param self KIconEngine*
/// @param in QDataStream*
bool k_iconengine_read(void* self, void* in);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#read)
///
/// Allows for overriding the related default method
///
/// @param self KIconEngine*
/// @param callback bool func(KIconEngine* self, QDataStream* in)
void k_iconengine_on_read(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#read)
///
/// Base class method implementation
///
/// @param self KIconEngine*
/// @param in QDataStream*
bool k_iconengine_qbase_read(void* self, void* in);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#write)
///
/// @param self KIconEngine*
/// @param out QDataStream*
bool k_iconengine_write(void* self, void* out);

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#write)
///
/// Allows for overriding the related default method
///
/// @param self KIconEngine*
/// @param callback bool func(KIconEngine* self, QDataStream* out)
void k_iconengine_on_write(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#write)
///
/// Base class method implementation
///
/// @param self KIconEngine*
/// @param out QDataStream*
bool k_iconengine_qbase_write(void* self, void* out);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconEngine*
/// @param pixmap QPixmap*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_iconengine_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconEngine*
/// @param pixmap QPixmap*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_iconengine_qbase_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconEngine*
/// @param callback void func(KIconEngine* self, QPixmap* pixmap, enum QIcon__Mode mode, enum QIcon__State state)
void k_iconengine_on_add_pixmap(void* self, void (*callback)(void*, void*, int32_t, int32_t));

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconEngine*
/// @param fileName const char*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_iconengine_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconEngine*
/// @param fileName const char*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_iconengine_qbase_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconEngine*
/// @param callback void func(KIconEngine* self, const char* fileName, QSize* size, enum QIcon__Mode mode, enum QIcon__State state)
void k_iconengine_on_add_file(void* self, void (*callback)(void*, const char*, void*, int32_t, int32_t));

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconEngine*
/// @param id int
/// @param data void*
void k_iconengine_virtual_hook(void* self, int id, void* data);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconEngine*
/// @param id int
/// @param data void*
void k_iconengine_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconEngine*
/// @param callback void func(KIconEngine* self, int id, void* data)
void k_iconengine_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://api-staging.kde.org/kiconengine.html#dtor.KIconEngine)
///
/// Delete this object from C++ memory.
///
/// @param self KIconEngine*
void k_iconengine_delete(void* self);

#endif
