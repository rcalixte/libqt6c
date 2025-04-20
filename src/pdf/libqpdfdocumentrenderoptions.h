#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFDOCUMENTRENDEROPTIONS_H
#define SRC_PDFQT6C_LIBQPDFDOCUMENTRENDEROPTIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqrect.h"
#include "../libqsize.h"

/// https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html

/// q_pdfdocumentrenderoptions_new constructs a new QPdfDocumentRenderOptions object.
///
/// ``` QPdfDocumentRenderOptions* other ```
QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new(void* other);

/// q_pdfdocumentrenderoptions_new2 constructs a new QPdfDocumentRenderOptions object and invalidates the source QPdfDocumentRenderOptions object.
///
/// ``` QPdfDocumentRenderOptions* other ```
QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new2(void* other);

/// q_pdfdocumentrenderoptions_new3 constructs a new QPdfDocumentRenderOptions object.
///
///
QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new3();

/// q_pdfdocumentrenderoptions_new4 constructs a new QPdfDocumentRenderOptions object.
///
/// ``` QPdfDocumentRenderOptions* param1 ```
QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new4(void* param1);

/// q_pdfdocumentrenderoptions_copy_assign shallow copies `other` into `self`.
///
/// ``` QPdfDocumentRenderOptions* self, QPdfDocumentRenderOptions* other ```
void q_pdfdocumentrenderoptions_copy_assign(void* self, void* other);

/// q_pdfdocumentrenderoptions_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPdfDocumentRenderOptions* self, QPdfDocumentRenderOptions* other ```
void q_pdfdocumentrenderoptions_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#rotation)
///
/// ``` QPdfDocumentRenderOptions* self ```
int64_t q_pdfdocumentrenderoptions_rotation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRotation)
///
/// ``` QPdfDocumentRenderOptions* self, enum QPdfDocumentRenderOptions__Rotation r ```
void q_pdfdocumentrenderoptions_set_rotation(void* self, int64_t r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#renderFlags)
///
/// ``` QPdfDocumentRenderOptions* self ```
int64_t q_pdfdocumentrenderoptions_render_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRenderFlags)
///
/// ``` QPdfDocumentRenderOptions* self, int r ```
void q_pdfdocumentrenderoptions_set_render_flags(void* self, int64_t r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledClipRect)
///
/// ``` QPdfDocumentRenderOptions* self ```
QRect* q_pdfdocumentrenderoptions_scaled_clip_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledClipRect)
///
/// ``` QPdfDocumentRenderOptions* self, QRect* r ```
void q_pdfdocumentrenderoptions_set_scaled_clip_rect(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledSize)
///
/// ``` QPdfDocumentRenderOptions* self ```
QSize* q_pdfdocumentrenderoptions_scaled_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledSize)
///
/// ``` QPdfDocumentRenderOptions* self, QSize* s ```
void q_pdfdocumentrenderoptions_set_scaled_size(void* self, void* s);

/// Delete this object from C++ memory.
///
/// ``` QPdfDocumentRenderOptions* self ```
void q_pdfdocumentrenderoptions_delete(void* self);

/// https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#types

typedef enum {
    QPDFDOCUMENTRENDEROPTIONS_ROTATION_NONE = 0,
    QPDFDOCUMENTRENDEROPTIONS_ROTATION_CLOCKWISE90 = 1,
    QPDFDOCUMENTRENDEROPTIONS_ROTATION_CLOCKWISE180 = 2,
    QPDFDOCUMENTRENDEROPTIONS_ROTATION_CLOCKWISE270 = 3
} QPdfDocumentRenderOptions__Rotation;

typedef enum {
    QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_NONE = 0,
    QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_ANNOTATIONS = 1,
    QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_OPTIMIZEDFORLCD = 2,
    QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_GRAYSCALE = 4,
    QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_FORCEHALFTONE = 8,
    QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_TEXTALIASED = 16,
    QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_IMAGEALIASED = 32,
    QPDFDOCUMENTRENDEROPTIONS_RENDERFLAG_PATHALIASED = 64
} QPdfDocumentRenderOptions__RenderFlag;

#endif
