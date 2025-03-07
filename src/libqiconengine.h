#pragma once
#ifndef SRCQT6C_LIBQICONENGINE_H
#define SRCQT6C_LIBQICONENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqdatastream.h"
#include "libqpainter.h"
#include "libqpixmap.h"
#include "libqrect.h"
#include "libqsize.h"
#include <string.h>

QIconEngine* q_iconengine_new();
void q_iconengine_paint(void* self, void* painter, void* rect, int64_t mode, int64_t state);
void q_iconengine_on_paint(void* self, void (*slot)(void*, void*, void*, int64_t, int64_t));
void q_iconengine_qbase_paint(void* self, void* painter, void* rect, int64_t mode, int64_t state);
QSize* q_iconengine_actual_size(void* self, void* size, int64_t mode, int64_t state);
void q_iconengine_on_actual_size(void* self, QSize* (*slot)(void*, void*, int64_t, int64_t));
QSize* q_iconengine_qbase_actual_size(void* self, void* size, int64_t mode, int64_t state);
QPixmap* q_iconengine_pixmap(void* self, void* size, int64_t mode, int64_t state);
void q_iconengine_on_pixmap(void* self, QPixmap* (*slot)(void*, void*, int64_t, int64_t));
QPixmap* q_iconengine_qbase_pixmap(void* self, void* size, int64_t mode, int64_t state);
void q_iconengine_add_pixmap(void* self, void* pixmap, int64_t mode, int64_t state);
void q_iconengine_on_add_pixmap(void* self, void (*slot)(void*, void*, int64_t, int64_t));
void q_iconengine_qbase_add_pixmap(void* self, void* pixmap, int64_t mode, int64_t state);
void q_iconengine_add_file(void* self, const char* fileName, void* size, int64_t mode, int64_t state);
void q_iconengine_on_add_file(void* self, void (*slot)(void*, const char*, void*, int64_t, int64_t));
void q_iconengine_qbase_add_file(void* self, const char* fileName, void* size, int64_t mode, int64_t state);
const char* q_iconengine_key(void* self);
void q_iconengine_on_key(void* self, const char* (*slot)());
const char* q_iconengine_qbase_key(void* self);
QIconEngine* q_iconengine_clone(void* self);
void q_iconengine_on_clone(void* self, QIconEngine* (*slot)());
QIconEngine* q_iconengine_qbase_clone(void* self);
bool q_iconengine_read(void* self, void* in);
void q_iconengine_on_read(void* self, bool (*slot)(void*, void*));
bool q_iconengine_qbase_read(void* self, void* in);
bool q_iconengine_write(void* self, void* out);
void q_iconengine_on_write(void* self, bool (*slot)(void*, void*));
bool q_iconengine_qbase_write(void* self, void* out);
libqt_list /* of QSize* */ q_iconengine_available_sizes(void* self, int64_t mode, int64_t state);
void q_iconengine_on_available_sizes(void* self, libqt_list /* of QSize* */ (*slot)(void*, int64_t, int64_t));
libqt_list /* of QSize* */ q_iconengine_qbase_available_sizes(void* self, int64_t mode, int64_t state);
const char* q_iconengine_icon_name(void* self);
void q_iconengine_on_icon_name(void* self, const char* (*slot)());
const char* q_iconengine_qbase_icon_name(void* self);
bool q_iconengine_is_null(void* self);
void q_iconengine_on_is_null(void* self, bool (*slot)());
bool q_iconengine_qbase_is_null(void* self);
QPixmap* q_iconengine_scaled_pixmap(void* self, void* size, int64_t mode, int64_t state, double scale);
void q_iconengine_on_scaled_pixmap(void* self, QPixmap* (*slot)(void*, void*, int64_t, int64_t, double));
QPixmap* q_iconengine_qbase_scaled_pixmap(void* self, void* size, int64_t mode, int64_t state, double scale);
void q_iconengine_virtual_hook(void* self, int id, void* data);
void q_iconengine_on_virtual_hook(void* self, void (*slot)(void*, int, void*));
void q_iconengine_qbase_virtual_hook(void* self, int id, void* data);
void q_iconengine_delete(void* self);

QIconEngine__ScaledPixmapArgument* q_iconengine__scaledpixmapargument_new(void* param1);
void q_iconengine__scaledpixmapargument_operator_assign(void* self, void* param1);
void q_iconengine__scaledpixmapargument_delete(void* self);

/// https://doc.qt.io/qt-6/qiconengine.html#types

typedef enum {
    QICONENGINE_ICONENGINEHOOK_ISNULLHOOK = 3,
    QICONENGINE_ICONENGINEHOOK_SCALEDPIXMAPHOOK = 4
} QIconEngine__IconEngineHook;

#endif
