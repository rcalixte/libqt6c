#pragma once
#ifndef SRC_QT6C_LIBQICONENGINE_H
#define SRC_QT6C_LIBQICONENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html)

/// q_iconengine_new constructs a new QIconEngine object.
///
QIconEngine* q_iconengine_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#paint)
///
/// @param self QIconEngine*
/// @param painter QPainter*
/// @param rect QRect*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
void q_iconengine_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback void func(QIconEngine* self, QPainter* painter, QRect* rect, enum QIcon__Mode mode, enum QIcon__State state)
///
void q_iconengine_on_paint(void* self, void (*callback)(void*, void*, void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#paint)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param painter QPainter*
/// @param rect QRect*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
void q_iconengine_qbase_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
QSize* q_iconengine_actual_size(void* self, void* size, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback QSize* func(QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state)
///
void q_iconengine_on_actual_size(void* self, QSize* (*callback)(void*, void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
QSize* q_iconengine_qbase_actual_size(void* self, void* size, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
QPixmap* q_iconengine_pixmap(void* self, void* size, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback QPixmap* func(QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state)
///
void q_iconengine_on_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
QPixmap* q_iconengine_qbase_pixmap(void* self, void* size, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// @param self QIconEngine*
/// @param pixmap QPixmap*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
void q_iconengine_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback void func(QIconEngine* self, QPixmap* pixmap, enum QIcon__Mode mode, enum QIcon__State state)
///
void q_iconengine_on_add_pixmap(void* self, void (*callback)(void*, void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param pixmap QPixmap*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
void q_iconengine_qbase_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// @param self QIconEngine*
/// @param fileName const char*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
void q_iconengine_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback void func(QIconEngine* self, const char* fileName, QSize* size, enum QIcon__Mode mode, enum QIcon__State state)
///
void q_iconengine_on_add_file(void* self, void (*callback)(void*, const char*, void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param fileName const char*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
void q_iconengine_qbase_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#key)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QIconEngine*
///
const char* q_iconengine_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#key)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback const char* func()
///
void q_iconengine_on_key(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#key)
///
/// Base class method implementation
///
/// @param self QIconEngine*
///
const char* q_iconengine_qbase_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#clone)
///
/// @param self QIconEngine*
///
QIconEngine* q_iconengine_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback QIconEngine* func()
///
void q_iconengine_on_clone(void* self, QIconEngine* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#clone)
///
/// Base class method implementation
///
/// @param self QIconEngine*
///
QIconEngine* q_iconengine_qbase_clone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// @param self QIconEngine*
/// @param in QDataStream*
///
bool q_iconengine_read(void* self, void* in);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback bool func(QIconEngine* self, QDataStream* in)
///
void q_iconengine_on_read(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param in QDataStream*
///
bool q_iconengine_qbase_read(void* self, void* in);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// @param self QIconEngine*
/// @param out QDataStream*
///
bool q_iconengine_write(void* self, void* out);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback bool func(QIconEngine* self, QDataStream* out)
///
void q_iconengine_on_write(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param out QDataStream*
///
bool q_iconengine_qbase_write(void* self, void* out);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// @param self QIconEngine*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
libqt_list /* of QSize* */ q_iconengine_available_sizes(void* self, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback QSize** func(QIconEngine* self, enum QIcon__Mode mode, enum QIcon__State state)
///
void q_iconengine_on_available_sizes(void* self, QSize** (*callback)(void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
///
libqt_list /* of QSize* */ q_iconengine_qbase_available_sizes(void* self, int32_t mode, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QIconEngine*
///
const char* q_iconengine_icon_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback const char* func()
///
void q_iconengine_on_icon_name(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// Base class method implementation
///
/// @param self QIconEngine*
///
const char* q_iconengine_qbase_icon_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#isNull)
///
/// @param self QIconEngine*
///
bool q_iconengine_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#isNull)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback bool func()
///
void q_iconengine_on_is_null(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#isNull)
///
/// Base class method implementation
///
/// @param self QIconEngine*
///
bool q_iconengine_qbase_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
/// @param scale double
///
QPixmap* q_iconengine_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback QPixmap* func(QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state, double scale)
///
void q_iconengine_on_scaled_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param size QSize*
/// @param mode enum QIcon__Mode
/// @param state enum QIcon__State
/// @param scale double
///
QPixmap* q_iconengine_qbase_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// @param self QIconEngine*
/// @param id int
/// @param data void*
///
void q_iconengine_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self QIconEngine*
/// @param callback void func(QIconEngine* self, int id, void* data)
///
void q_iconengine_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self QIconEngine*
/// @param id int
/// @param data void*
///
void q_iconengine_qbase_virtual_hook(void* self, int id, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#dtor.QIconEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QIconEngine*
///
void q_iconengine_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html)

/// q_iconengine__scaledpixmapargument_new constructs a new QIconEngine::ScaledPixmapArgument object.
///
/// @param param1 QIconEngine__ScaledPixmapArgument*
///
QIconEngine__ScaledPixmapArgument* q_iconengine__scaledpixmapargument_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#size-var)
///
/// @param self QIconEngine__ScaledPixmapArgument*
///
QSize* q_iconengine__scaledpixmapargument_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#size-var)
///
/// @param self QIconEngine__ScaledPixmapArgument*
/// @param size QSize*
///
void q_iconengine__scaledpixmapargument_set_size(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#mode-var)
///
/// @param self QIconEngine__ScaledPixmapArgument*
///
/// @return enum QIcon__Mode
///
int32_t q_iconengine__scaledpixmapargument_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#mode-var)
///
/// @param self QIconEngine__ScaledPixmapArgument*
/// @param mode enum QIcon__Mode
///
void q_iconengine__scaledpixmapargument_set_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#state-var)
///
/// @param self QIconEngine__ScaledPixmapArgument*
///
/// @return enum QIcon__State
///
int32_t q_iconengine__scaledpixmapargument_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#state-var)
///
/// @param self QIconEngine__ScaledPixmapArgument*
/// @param state enum QIcon__State
///
void q_iconengine__scaledpixmapargument_set_state(void* self, int32_t state);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#scale-var)
///
/// @param self QIconEngine__ScaledPixmapArgument*
///
double q_iconengine__scaledpixmapargument_scale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#scale-var)
///
/// @param self QIconEngine__ScaledPixmapArgument*
/// @param scale double
///
void q_iconengine__scaledpixmapargument_set_scale(void* self, double scale);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#pixmap-var)
///
/// @param self QIconEngine__ScaledPixmapArgument*
///
QPixmap* q_iconengine__scaledpixmapargument_pixmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#pixmap-var)
///
/// @param self QIconEngine__ScaledPixmapArgument*
/// @param pixmap QPixmap*
///
void q_iconengine__scaledpixmapargument_set_pixmap(void* self, void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html#operator-eq)
///
/// @param self QIconEngine__ScaledPixmapArgument*
/// @param param1 QIconEngine__ScaledPixmapArgument*
///
void q_iconengine__scaledpixmapargument_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QIconEngine__ScaledPixmapArgument*
///
void q_iconengine__scaledpixmapargument_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qiconengine.html#public-types)

typedef enum {
    QICONENGINE_ICONENGINEHOOK_ISNULLHOOK = 3,
    QICONENGINE_ICONENGINEHOOK_SCALEDPIXMAPHOOK = 4
} QIconEngine__IconEngineHook;

#endif
