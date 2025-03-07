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

QIcon* q_icon_new();
QIcon* q_icon_new2(void* pixmap);
QIcon* q_icon_new3(void* other);
QIcon* q_icon_new4(const char* fileName);
QIcon* q_icon_new5(void* engine);
void q_icon_operator_assign(void* self, void* other);
void q_icon_swap(void* self, void* other);
QVariant* q_icon_to_q_variant(void* self);
QPixmap* q_icon_pixmap(void* self, void* size);
QPixmap* q_icon_pixmap2(void* self, int w, int h);
QPixmap* q_icon_pixmap_with_extent(void* self, int extent);
QPixmap* q_icon_pixmap3(void* self, void* size, double devicePixelRatio);
QPixmap* q_icon_pixmap4(void* self, void* window, void* size);
QSize* q_icon_actual_size(void* self, void* size);
QSize* q_icon_actual_size2(void* self, void* window, void* size);
const char* q_icon_name(void* self);
void q_icon_paint(void* self, void* painter, void* rect);
void q_icon_paint2(void* self, void* painter, int x, int y, int w, int h);
bool q_icon_is_null(void* self);
bool q_icon_is_detached(void* self);
void q_icon_detach(void* self);
long long q_icon_cache_key(void* self);
void q_icon_add_pixmap(void* self, void* pixmap);
void q_icon_add_file(void* self, const char* fileName);
libqt_list /* of QSize* */ q_icon_available_sizes(void* self);
void q_icon_set_is_mask(void* self, bool isMask);
bool q_icon_is_mask(void* self);
QIcon* q_icon_from_theme(const char* name);
QIcon* q_icon_from_theme2(const char* name, void* fallback);
bool q_icon_has_theme_icon(const char* name);
const char** q_icon_theme_search_paths();
void q_icon_set_theme_search_paths(const char* searchpath[]);
const char** q_icon_fallback_search_paths();
void q_icon_set_fallback_search_paths(const char* paths[]);
const char* q_icon_theme_name();
void q_icon_set_theme_name(const char* path);
const char* q_icon_fallback_theme_name();
void q_icon_set_fallback_theme_name(const char* name);
QPixmap* q_icon_pixmap22(void* self, void* size, int64_t mode);
QPixmap* q_icon_pixmap32(void* self, void* size, int64_t mode, int64_t state);
QPixmap* q_icon_pixmap33(void* self, int w, int h, int64_t mode);
QPixmap* q_icon_pixmap42(void* self, int w, int h, int64_t mode, int64_t state);
QPixmap* q_icon_pixmap23(void* self, int extent, int64_t mode);
QPixmap* q_icon_pixmap34(void* self, int extent, int64_t mode, int64_t state);
QPixmap* q_icon_pixmap35(void* self, void* size, double devicePixelRatio, int64_t mode);
QPixmap* q_icon_pixmap43(void* self, void* size, double devicePixelRatio, int64_t mode, int64_t state);
QPixmap* q_icon_pixmap36(void* self, void* window, void* size, int64_t mode);
QPixmap* q_icon_pixmap44(void* self, void* window, void* size, int64_t mode, int64_t state);
QSize* q_icon_actual_size22(void* self, void* size, int64_t mode);
QSize* q_icon_actual_size3(void* self, void* size, int64_t mode, int64_t state);
QSize* q_icon_actual_size32(void* self, void* window, void* size, int64_t mode);
QSize* q_icon_actual_size4(void* self, void* window, void* size, int64_t mode, int64_t state);
void q_icon_paint3(void* self, void* painter, void* rect, int64_t alignment);
void q_icon_paint4(void* self, void* painter, void* rect, int64_t alignment, int64_t mode);
void q_icon_paint5(void* self, void* painter, void* rect, int64_t alignment, int64_t mode, int64_t state);
void q_icon_paint6(void* self, void* painter, int x, int y, int w, int h, int64_t alignment);
void q_icon_paint7(void* self, void* painter, int x, int y, int w, int h, int64_t alignment, int64_t mode);
void q_icon_paint8(void* self, void* painter, int x, int y, int w, int h, int64_t alignment, int64_t mode, int64_t state);
void q_icon_add_pixmap2(void* self, void* pixmap, int64_t mode);
void q_icon_add_pixmap3(void* self, void* pixmap, int64_t mode, int64_t state);
void q_icon_add_file2(void* self, const char* fileName, void* size);
void q_icon_add_file3(void* self, const char* fileName, void* size, int64_t mode);
void q_icon_add_file4(void* self, const char* fileName, void* size, int64_t mode, int64_t state);
libqt_list /* of QSize* */ q_icon_available_sizes1(void* self, int64_t mode);
libqt_list /* of QSize* */ q_icon_available_sizes2(void* self, int64_t mode, int64_t state);
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
