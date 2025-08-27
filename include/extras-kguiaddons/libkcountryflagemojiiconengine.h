#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSQT6C_LIBKCOUNTRYFLAGEMOJIICONENGINE_H
#define SRC_EXTRAS_KGUIADDONSQT6C_LIBKCOUNTRYFLAGEMOJIICONENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kcountryflagemojiiconengine.html

/// k_countryflagemojiiconengine_new constructs a new KCountryFlagEmojiIconEngine object.
///
/// @param regionOrCountry const char*
KCountryFlagEmojiIconEngine* k_countryflagemojiiconengine_new(const char* regionOrCountry);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#clone)
///
/// @param self KCountryFlagEmojiIconEngine*
QIconEngine* k_countryflagemojiiconengine_clone(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback QIconEngine* fn()
void k_countryflagemojiiconengine_on_clone(void* self, QIconEngine* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#clone)
///
/// Base class method implementation
///
/// @param self KCountryFlagEmojiIconEngine*
QIconEngine* k_countryflagemojiiconengine_qbase_clone(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#key)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KCountryFlagEmojiIconEngine*
const char* k_countryflagemojiiconengine_key(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#key)
///
/// Allows for overriding the related default method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback const char* fn()
void k_countryflagemojiiconengine_on_key(void* self, const char* (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#key)
///
/// Base class method implementation
///
/// @param self KCountryFlagEmojiIconEngine*
const char* k_countryflagemojiiconengine_qbase_key(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#paint)
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param painter QPainter*
/// @param rect QRect*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_countryflagemojiiconengine_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback void fn(KCountryFlagEmojiIconEngine*, QPainter*, QRect*, enum QIcon__Mode, enum QIcon__State)
void k_countryflagemojiiconengine_on_paint(void* self, void (*callback)(void*, void*, void*, int32_t, int32_t));

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#paint)
///
/// Base class method implementation
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param painter QPainter*
/// @param rect QRect*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_countryflagemojiiconengine_qbase_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#pixmap)
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QPixmap* k_countryflagemojiiconengine_pixmap(void* self, void* size, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#pixmap)
///
/// Allows for overriding the related default method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback QPixmap* fn(KCountryFlagEmojiIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State)
void k_countryflagemojiiconengine_on_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t));

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#pixmap)
///
/// Base class method implementation
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QPixmap* k_countryflagemojiiconengine_qbase_pixmap(void* self, void* size, int32_t mode, int32_t state);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#scaledPixmap)
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
/// @param scale double
QPixmap* k_countryflagemojiiconengine_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#scaledPixmap)
///
/// Allows for overriding the related default method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback QPixmap* fn(KCountryFlagEmojiIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State, double)
void k_countryflagemojiiconengine_on_scaled_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t, double));

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#scaledPixmap)
///
/// Base class method implementation
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
/// @param scale double
QPixmap* k_countryflagemojiiconengine_qbase_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#isNull)
///
/// @param self KCountryFlagEmojiIconEngine*
bool k_countryflagemojiiconengine_is_null(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#isNull)
///
/// Allows for overriding the related default method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback bool fn()
void k_countryflagemojiiconengine_on_is_null(void* self, bool (*callback)());

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#isNull)
///
/// Base class method implementation
///
/// @param self KCountryFlagEmojiIconEngine*
bool k_countryflagemojiiconengine_qbase_is_null(void* self);

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#setGlobalDefaultFont)
///
/// @param font QFont*
void k_countryflagemojiiconengine_set_global_default_font(void* font);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QSize* k_countryflagemojiiconengine_actual_size(void* self, void* size, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QSize* k_countryflagemojiiconengine_qbase_actual_size(void* self, void* size, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback QSize* fn(KCountryFlagEmojiIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State)
void k_countryflagemojiiconengine_on_actual_size(void* self, QSize* (*callback)(void*, void*, int32_t, int32_t));

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param pixmap QPixmap*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_countryflagemojiiconengine_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param pixmap QPixmap*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_countryflagemojiiconengine_qbase_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback void fn(KCountryFlagEmojiIconEngine*, QPixmap*, enum QIcon__Mode, enum QIcon__State)
void k_countryflagemojiiconengine_on_add_pixmap(void* self, void (*callback)(void*, void*, int32_t, int32_t));

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param fileName const char*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_countryflagemojiiconengine_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param fileName const char*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void k_countryflagemojiiconengine_qbase_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback void fn(KCountryFlagEmojiIconEngine*, const char*, QSize*, enum QIcon__Mode, enum QIcon__State)
void k_countryflagemojiiconengine_on_add_file(void* self, void (*callback)(void*, const char*, void*, int32_t, int32_t));

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param in QDataStream*
bool k_countryflagemojiiconengine_read(void* self, void* in);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param in QDataStream*
bool k_countryflagemojiiconengine_qbase_read(void* self, void* in);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback bool fn(KCountryFlagEmojiIconEngine*, QDataStream*)
void k_countryflagemojiiconengine_on_read(void* self, bool (*callback)(void*, void*));

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param out QDataStream*
bool k_countryflagemojiiconengine_write(void* self, void* out);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param out QDataStream*
bool k_countryflagemojiiconengine_qbase_write(void* self, void* out);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback bool fn(KCountryFlagEmojiIconEngine*, QDataStream*)
void k_countryflagemojiiconengine_on_write(void* self, bool (*callback)(void*, void*));

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
libqt_list /* of QSize* */ k_countryflagemojiiconengine_available_sizes(void* self, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
libqt_list /* of QSize* */ k_countryflagemojiiconengine_qbase_available_sizes(void* self, int32_t mode, int32_t state);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback libqt_list /* of QSize* */ fn(KCountryFlagEmojiIconEngine*, enum QIcon__Mode, enum QIcon__State)
void k_countryflagemojiiconengine_on_available_sizes(void* self, libqt_list /* of QSize* */ (*callback)(void*, int32_t, int32_t));

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
const char* k_countryflagemojiiconengine_icon_name(void* self);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
const char* k_countryflagemojiiconengine_qbase_icon_name(void* self);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback const char* fn()
void k_countryflagemojiiconengine_on_icon_name(void* self, const char* (*callback)());

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param id int
/// @param data void*
void k_countryflagemojiiconengine_virtual_hook(void* self, int id, void* data);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param id int
/// @param data void*
void k_countryflagemojiiconengine_qbase_virtual_hook(void* self, int id, void* data);

/// Inherited from QIconEngine
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCountryFlagEmojiIconEngine*
/// @param callback void fn(KCountryFlagEmojiIconEngine*, int, void*)
void k_countryflagemojiiconengine_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://api-staging.kde.org/kcountryflagemojiiconengine.html#dtor.KCountryFlagEmojiIconEngine)
///
/// Delete this object from C++ memory.
///
/// @param self KCountryFlagEmojiIconEngine*
void k_countryflagemojiiconengine_delete(void* self);

#endif
