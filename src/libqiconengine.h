#pragma once
#ifndef SRCQT6C_LIBQICONENGINE_H
#define SRCQT6C_LIBQICONENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qiconengine.html

/// q_iconengine_new constructs a new QIconEngine object.
///
///
QIconEngine* q_iconengine_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#paint)
///
/// ``` QIconEngine* self, QPainter* painter, QRect* rect, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_paint(void* self, void* painter, void* rect, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#paint)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, void (*slot)(QIconEngine*, QPainter*, QRect*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_paint(void* self, void (*slot)(void*, void*, void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#paint)
///
/// Base class method implementation
///
/// ``` QIconEngine* self, QPainter* painter, QRect* rect, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_qbase_paint(void* self, void* painter, void* rect, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QSize* q_iconengine_actual_size(void* self, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, QSize* (*slot)(QIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_actual_size(void* self, QSize* (*slot)(void*, void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#actualSize)
///
/// Base class method implementation
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QSize* q_iconengine_qbase_actual_size(void* self, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QPixmap* q_iconengine_pixmap(void* self, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, QPixmap* (*slot)(QIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_pixmap(void* self, QPixmap* (*slot)(void*, void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#pixmap)
///
/// Base class method implementation
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QPixmap* q_iconengine_qbase_pixmap(void* self, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// ``` QIconEngine* self, QPixmap* pixmap, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_add_pixmap(void* self, void* pixmap, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, void (*slot)(QIconEngine*, QPixmap*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_add_pixmap(void* self, void (*slot)(void*, void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addPixmap)
///
/// Base class method implementation
///
/// ``` QIconEngine* self, QPixmap* pixmap, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_qbase_add_pixmap(void* self, void* pixmap, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// ``` QIconEngine* self, const char* fileName, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_add_file(void* self, const char* fileName, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, void (*slot)(QIconEngine*, const char*, QSize*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_add_file(void* self, void (*slot)(void*, const char*, void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#addFile)
///
/// Base class method implementation
///
/// ``` QIconEngine* self, const char* fileName, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
void q_iconengine_qbase_add_file(void* self, const char* fileName, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#key)
///
/// ``` QIconEngine* self ```
const char* q_iconengine_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#key)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, const char* (*slot)() ```
void q_iconengine_on_key(void* self, const char* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#key)
///
/// Base class method implementation
///
/// ``` QIconEngine* self ```
const char* q_iconengine_qbase_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#clone)
///
/// ``` QIconEngine* self ```
QIconEngine* q_iconengine_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#clone)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, QIconEngine* (*slot)() ```
void q_iconengine_on_clone(void* self, QIconEngine* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#clone)
///
/// Base class method implementation
///
/// ``` QIconEngine* self ```
QIconEngine* q_iconengine_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// ``` QIconEngine* self, QDataStream* in ```
bool q_iconengine_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, bool (*slot)(QIconEngine*, QDataStream*) ```
void q_iconengine_on_read(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#read)
///
/// Base class method implementation
///
/// ``` QIconEngine* self, QDataStream* in ```
bool q_iconengine_qbase_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// ``` QIconEngine* self, QDataStream* out ```
bool q_iconengine_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, bool (*slot)(QIconEngine*, QDataStream*) ```
void q_iconengine_on_write(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#write)
///
/// Base class method implementation
///
/// ``` QIconEngine* self, QDataStream* out ```
bool q_iconengine_qbase_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// ``` QIconEngine* self, enum QIcon__Mode mode, enum QIcon__State state ```
libqt_list /* of QSize* */ q_iconengine_available_sizes(void* self, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, libqt_list /* of QSize* */ (*slot)(QIconEngine*, enum QIcon__Mode, enum QIcon__State) ```
void q_iconengine_on_available_sizes(void* self, libqt_list /* of QSize* */ (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#availableSizes)
///
/// Base class method implementation
///
/// ``` QIconEngine* self, enum QIcon__Mode mode, enum QIcon__State state ```
libqt_list /* of QSize* */ q_iconengine_qbase_available_sizes(void* self, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// ``` QIconEngine* self ```
const char* q_iconengine_icon_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, const char* (*slot)() ```
void q_iconengine_on_icon_name(void* self, const char* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#iconName)
///
/// Base class method implementation
///
/// ``` QIconEngine* self ```
const char* q_iconengine_qbase_icon_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#isNull)
///
/// ``` QIconEngine* self ```
bool q_iconengine_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#isNull)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, bool (*slot)() ```
void q_iconengine_on_is_null(void* self, bool (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#isNull)
///
/// Base class method implementation
///
/// ``` QIconEngine* self ```
bool q_iconengine_qbase_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state, double scale ```
QPixmap* q_iconengine_scaled_pixmap(void* self, void* size, int64_t mode, int64_t state, double scale);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, QPixmap* (*slot)(QIconEngine*, QSize*, enum QIcon__Mode, enum QIcon__State, double) ```
void q_iconengine_on_scaled_pixmap(void* self, QPixmap* (*slot)(void*, void*, int64_t, int64_t, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#scaledPixmap)
///
/// Base class method implementation
///
/// ``` QIconEngine* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state, double scale ```
QPixmap* q_iconengine_qbase_scaled_pixmap(void* self, void* size, int64_t mode, int64_t state, double scale);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// ``` QIconEngine* self, int id, void* data ```
void q_iconengine_virtual_hook(void* self, int id, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// ``` QIconEngine* self, void (*slot)(QIconEngine*, int, void*) ```
void q_iconengine_on_virtual_hook(void* self, void (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#virtual_hook)
///
/// Base class method implementation
///
/// ``` QIconEngine* self, int id, void* data ```
void q_iconengine_qbase_virtual_hook(void* self, int id, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine.html#dtor.QIconEngine)
///
/// Delete this object from C++ memory.
///
/// ``` QIconEngine* self ```
void q_iconengine_delete(void* self);

/// https://doc.qt.io/qt-6/qiconengine-scaledpixmapargument.html

/// q_iconengine__scaledpixmapargument_new constructs a new QIconEngine::ScaledPixmapArgument object.
///
/// ``` QIconEngine__ScaledPixmapArgument* param1 ```
QIconEngine__ScaledPixmapArgument* q_iconengine__scaledpixmapargument_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine__scaledpixmapargument.html#operator-eq)
///
/// ``` QIconEngine__ScaledPixmapArgument* self, QIconEngine__ScaledPixmapArgument* param1 ```
void q_iconengine__scaledpixmapargument_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qiconengine::scaledpixmapargument.html#dtor.QIconEngine::ScaledPixmapArgument)
///
/// Delete this object from C++ memory.
///
/// ``` QIconEngine__ScaledPixmapArgument* self ```
void q_iconengine__scaledpixmapargument_delete(void* self);

/// https://doc.qt.io/qt-6/qiconengine.html#types

typedef enum {
    QICONENGINE_ICONENGINEHOOK_ISNULLHOOK = 3,
    QICONENGINE_ICONENGINEHOOK_SCALEDPIXMAPHOOK = 4
} QIconEngine__IconEngineHook;

#endif
