#pragma once
#ifndef SRCQT6C_LIBQICONENGINE_H
#define SRCQT6C_LIBQICONENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qiconengine.html

/// q_iconengine_new constructs a new QIconEngine object.
///
QIconEngine* q_iconengine_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#paint)
///
/// @param self QIconEngine*
/// @param painter QPainter*
/// @param rect QRect*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void q_iconengine_paint(void* self, void* painter, void* rect, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback void fn(QIconEngine*, QPainter*, QRect*, enum QIcon__Mode, enum QIcon__State)
void q_iconengine_on_paint(void* self, void (*callback)(void*, void*, void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#paint)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param painter QPainter*
/// @param rect QRect*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void q_iconengine_qbase_paint(void* self, void* painter, void* rect, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QSize* q_iconengine_actual_size(void* self, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback QSize* fn(QIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State)
void q_iconengine_on_actual_size(void* self, QSize* (*callback)(void*, void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QSize* q_iconengine_qbase_actual_size(void* self, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QPixmap* q_iconengine_pixmap(void* self, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback QPixmap* fn(QIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State)
void q_iconengine_on_pixmap(void* self, QPixmap* (*callback)(void*, void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
QPixmap* q_iconengine_qbase_pixmap(void* self, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// @param self QIconEngine*
/// @param pixmap QPixmap*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void q_iconengine_add_pixmap(void* self, void* pixmap, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback void fn(QIconEngine*, QPixmap*, enum QIcon__Mode, enum QIcon__State)
void q_iconengine_on_add_pixmap(void* self, void (*callback)(void*, void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param pixmap QPixmap*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void q_iconengine_qbase_add_pixmap(void* self, void* pixmap, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// @param self QIconEngine*
/// @param fileName const char*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void q_iconengine_add_file(void* self, const char* fileName, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback void fn(QIconEngine*, const char*, QSize*, enum QIcon__Mode, enum QIcon__State)
void q_iconengine_on_add_file(void* self, void (*callback)(void*, const char*, void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param fileName const char*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
void q_iconengine_qbase_add_file(void* self, const char* fileName, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#key)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QIconEngine*
const char* q_iconengine_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#key)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback const char* fn()
void q_iconengine_on_key(void* self, const char* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#key)
///
/// Base class method implementation
///
/// @param self QIconEngine*
const char* q_iconengine_qbase_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#clone)
///
/// @param self QIconEngine*
QIconEngine* q_iconengine_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback QIconEngine* fn()
void q_iconengine_on_clone(void* self, QIconEngine* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#clone)
///
/// Base class method implementation
///
/// @param self QIconEngine*
QIconEngine* q_iconengine_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// @param self QIconEngine*
/// @param in QDataStream*
bool q_iconengine_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback bool fn(QIconEngine*, QDataStream*)
void q_iconengine_on_read(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param in QDataStream*
bool q_iconengine_qbase_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// @param self QIconEngine*
/// @param out QDataStream*
bool q_iconengine_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback bool fn(QIconEngine*, QDataStream*)
void q_iconengine_on_write(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param out QDataStream*
bool q_iconengine_qbase_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// @param self QIconEngine*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
libqt_list /* of QSize* */ q_iconengine_available_sizes(void* self, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback libqt_list /* of QSize* */ fn(QIconEngine*, enum QIcon__Mode, enum QIcon__State)
void q_iconengine_on_available_sizes(void* self, libqt_list /* of QSize* */ (*callback)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
libqt_list /* of QSize* */ q_iconengine_qbase_available_sizes(void* self, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QIconEngine*
const char* q_iconengine_icon_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback const char* fn()
void q_iconengine_on_icon_name(void* self, const char* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// Base class method implementation
///
/// @param self QIconEngine*
const char* q_iconengine_qbase_icon_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#isNull)
///
/// @param self QIconEngine*
bool q_iconengine_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#isNull)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback bool fn()
void q_iconengine_on_is_null(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#isNull)
///
/// Base class method implementation
///
/// @param self QIconEngine*
bool q_iconengine_qbase_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
/// @param scale double
QPixmap* q_iconengine_scaled_pixmap(void* self, void* size, int64_t mode, int64_t state, double scale);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback QPixmap* fn(QIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State, double)
void q_iconengine_on_scaled_pixmap(void* self, QPixmap* (*callback)(void*, void*, int64_t, int64_t, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
/// @param scale double
QPixmap* q_iconengine_qbase_scaled_pixmap(void* self, void* size, int64_t mode, int64_t state, double scale);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// @param self QIconEngine*
/// @param id int
/// @param data void*
void q_iconengine_virtual_hook(void* self, int id, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback void fn(QIconEngine*, int, void*)
void q_iconengine_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param id int
/// @param data void*
void q_iconengine_qbase_virtual_hook(void* self, int id, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#dtor.QIconEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QIconEngine*
void q_iconengine_delete(void* self);

/// https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html

/// q_iconengine__scaledpixmapargument_new constructs a new QIconEngine::ScaledPixmapArgument object.
///
/// @param param1 QIconEngine__ScaledPixmapArgument*
QIconEngine__ScaledPixmapArgument* q_iconengine__scaledpixmapargument_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#operator-eq)
///
/// @param self QIconEngine__ScaledPixmapArgument*
/// @param param1 QIconEngine__ScaledPixmapArgument*
void q_iconengine__scaledpixmapargument_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine::scaledpixmapargument.html#dtor.QIconEngine::ScaledPixmapArgument)
///
/// Delete this object from C++ memory.
///
/// @param self QIconEngine__ScaledPixmapArgument*
void q_iconengine__scaledpixmapargument_delete(void* self);

/// https://doc.qt.io/qt-6/qiconengine.html#types

typedef enum {
    QICONENGINE_ICONENGINEHOOK_ISNULLHOOK = 3,
    QICONENGINE_ICONENGINEHOOK_SCALEDPIXMAPHOOK = 4
} QIconEngine__IconEngineHook;

#endif
