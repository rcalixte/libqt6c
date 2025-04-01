#pragma once
#ifndef SRCQT6C_LIBQICON_H
#define SRCQT6C_LIBQICON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqiconengine.h"
#include "libqpainter.h"
#include "libqpixmap.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>
#include "libqvariant.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qicon.html

/// q_icon_new constructs a new QIcon object.
///
///
QIcon* q_icon_new();

/// q_icon_new2 constructs a new QIcon object.
///
/// ``` QPixmap* pixmap ```
QIcon* q_icon_new2(void* pixmap);

/// q_icon_new3 constructs a new QIcon object.
///
/// ``` QIcon* other ```
QIcon* q_icon_new3(void* other);

/// q_icon_new4 constructs a new QIcon object.
///
/// ``` const char* fileName ```
QIcon* q_icon_new4(const char* fileName);

/// q_icon_new5 constructs a new QIcon object.
///
/// ``` QIconEngine* engine ```
QIcon* q_icon_new5(void* engine);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#operator=)
///
/// ``` QIcon* self, QIcon* other ```
void q_icon_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#swap)
///
/// ``` QIcon* self, QIcon* other ```
void q_icon_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#operator QVariant)
///
/// ``` QIcon* self ```
QVariant* q_icon_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, QSize* size ```
QPixmap* q_icon_pixmap(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, int w, int h ```
QPixmap* q_icon_pixmap2(void* self, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, int extent ```
QPixmap* q_icon_pixmap_with_extent(void* self, int extent);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, QSize* size, double devicePixelRatio ```
QPixmap* q_icon_pixmap3(void* self, void* size, double devicePixelRatio);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, QWindow* window, QSize* size ```
QPixmap* q_icon_pixmap4(void* self, void* window, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// ``` QIcon* self, QSize* size ```
QSize* q_icon_actual_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// ``` QIcon* self, QWindow* window, QSize* size ```
QSize* q_icon_actual_size2(void* self, void* window, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#name)
///
/// ``` QIcon* self ```
const char* q_icon_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// ``` QIcon* self, QPainter* painter, QRect* rect ```
void q_icon_paint(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// ``` QIcon* self, QPainter* painter, int x, int y, int w, int h ```
void q_icon_paint2(void* self, void* painter, int x, int y, int w, int h);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#isNull)
///
/// ``` QIcon* self ```
bool q_icon_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#isDetached)
///
/// ``` QIcon* self ```
bool q_icon_is_detached(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#detach)
///
/// ``` QIcon* self ```
void q_icon_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#cacheKey)
///
/// ``` QIcon* self ```
long long q_icon_cache_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addPixmap)
///
/// ``` QIcon* self, QPixmap* pixmap ```
void q_icon_add_pixmap(void* self, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addFile)
///
/// ``` QIcon* self, const char* fileName ```
void q_icon_add_file(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#availableSizes)
///
/// ``` QIcon* self ```
libqt_list /* of QSize* */ q_icon_available_sizes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#setIsMask)
///
/// ``` QIcon* self, bool isMask ```
void q_icon_set_is_mask(void* self, bool isMask);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#isMask)
///
/// ``` QIcon* self ```
bool q_icon_is_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#fromTheme)
///
/// ``` const char* name ```
QIcon* q_icon_from_theme(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#fromTheme)
///
/// ``` const char* name, QIcon* fallback ```
QIcon* q_icon_from_theme2(const char* name, void* fallback);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#hasThemeIcon)
///
/// ``` const char* name ```
bool q_icon_has_theme_icon(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#themeSearchPaths)
///
///
const char** q_icon_theme_search_paths();

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#setThemeSearchPaths)
///
/// ``` const char* searchpath[] ```
void q_icon_set_theme_search_paths(const char* searchpath[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#fallbackSearchPaths)
///
///
const char** q_icon_fallback_search_paths();

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#setFallbackSearchPaths)
///
/// ``` const char* paths[] ```
void q_icon_set_fallback_search_paths(const char* paths[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#themeName)
///
///
const char* q_icon_theme_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#setThemeName)
///
/// ``` const char* path ```
void q_icon_set_theme_name(const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#fallbackThemeName)
///
///
const char* q_icon_fallback_theme_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#setFallbackThemeName)
///
/// ``` const char* name ```
void q_icon_set_fallback_theme_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, QSize* size, enum QIcon__Mode mode ```
QPixmap* q_icon_pixmap22(void* self, void* size, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QPixmap* q_icon_pixmap32(void* self, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, int w, int h, enum QIcon__Mode mode ```
QPixmap* q_icon_pixmap33(void* self, int w, int h, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, int w, int h, enum QIcon__Mode mode, enum QIcon__State state ```
QPixmap* q_icon_pixmap42(void* self, int w, int h, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, int extent, enum QIcon__Mode mode ```
QPixmap* q_icon_pixmap23(void* self, int extent, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, int extent, enum QIcon__Mode mode, enum QIcon__State state ```
QPixmap* q_icon_pixmap34(void* self, int extent, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, QSize* size, double devicePixelRatio, enum QIcon__Mode mode ```
QPixmap* q_icon_pixmap35(void* self, void* size, double devicePixelRatio, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, QSize* size, double devicePixelRatio, enum QIcon__Mode mode, enum QIcon__State state ```
QPixmap* q_icon_pixmap43(void* self, void* size, double devicePixelRatio, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, QWindow* window, QSize* size, enum QIcon__Mode mode ```
QPixmap* q_icon_pixmap36(void* self, void* window, void* size, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#pixmap)
///
/// ``` QIcon* self, QWindow* window, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QPixmap* q_icon_pixmap44(void* self, void* window, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// ``` QIcon* self, QSize* size, enum QIcon__Mode mode ```
QSize* q_icon_actual_size22(void* self, void* size, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// ``` QIcon* self, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QSize* q_icon_actual_size3(void* self, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// ``` QIcon* self, QWindow* window, QSize* size, enum QIcon__Mode mode ```
QSize* q_icon_actual_size32(void* self, void* window, void* size, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#actualSize)
///
/// ``` QIcon* self, QWindow* window, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
QSize* q_icon_actual_size4(void* self, void* window, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// ``` QIcon* self, QPainter* painter, QRect* rect, int alignment ```
void q_icon_paint3(void* self, void* painter, void* rect, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// ``` QIcon* self, QPainter* painter, QRect* rect, int alignment, enum QIcon__Mode mode ```
void q_icon_paint4(void* self, void* painter, void* rect, int64_t alignment, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// ``` QIcon* self, QPainter* painter, QRect* rect, int alignment, enum QIcon__Mode mode, enum QIcon__State state ```
void q_icon_paint5(void* self, void* painter, void* rect, int64_t alignment, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// ``` QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment ```
void q_icon_paint6(void* self, void* painter, int x, int y, int w, int h, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// ``` QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, enum QIcon__Mode mode ```
void q_icon_paint7(void* self, void* painter, int x, int y, int w, int h, int64_t alignment, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#paint)
///
/// ``` QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, enum QIcon__Mode mode, enum QIcon__State state ```
void q_icon_paint8(void* self, void* painter, int x, int y, int w, int h, int64_t alignment, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addPixmap)
///
/// ``` QIcon* self, QPixmap* pixmap, enum QIcon__Mode mode ```
void q_icon_add_pixmap2(void* self, void* pixmap, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addPixmap)
///
/// ``` QIcon* self, QPixmap* pixmap, enum QIcon__Mode mode, enum QIcon__State state ```
void q_icon_add_pixmap3(void* self, void* pixmap, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addFile)
///
/// ``` QIcon* self, const char* fileName, QSize* size ```
void q_icon_add_file2(void* self, const char* fileName, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addFile)
///
/// ``` QIcon* self, const char* fileName, QSize* size, enum QIcon__Mode mode ```
void q_icon_add_file3(void* self, const char* fileName, void* size, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#addFile)
///
/// ``` QIcon* self, const char* fileName, QSize* size, enum QIcon__Mode mode, enum QIcon__State state ```
void q_icon_add_file4(void* self, const char* fileName, void* size, int64_t mode, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#availableSizes)
///
/// ``` QIcon* self, enum QIcon__Mode mode ```
libqt_list /* of QSize* */ q_icon_available_sizes1(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qicon.html#availableSizes)
///
/// ``` QIcon* self, enum QIcon__Mode mode, enum QIcon__State state ```
libqt_list /* of QSize* */ q_icon_available_sizes2(void* self, int64_t mode, int64_t state);

/// Delete this object from C++ memory.
///
/// ``` QIcon* self ```
void q_icon_delete(void* self);

/// https://doc.qt.io/qt-6/qicon.html#types

typedef enum {
    QICON_MODE_NORMAL = 0,
    QICON_MODE_DISABLED = 1,
    QICON_MODE_ACTIVE = 2,
    QICON_MODE_SELECTED = 3
} QIcon__Mode;

typedef enum {
    QICON_STATE_ON = 0,
    QICON_STATE_OFF = 1
} QIcon__State;

#endif
