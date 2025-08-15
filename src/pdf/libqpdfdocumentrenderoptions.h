#pragma once
#ifndef SRC_PDFQT6C_LIBQPDFDOCUMENTRENDEROPTIONS_H
#define SRC_PDFQT6C_LIBQPDFDOCUMENTRENDEROPTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html

/// q_pdfdocumentrenderoptions_new constructs a new QPdfDocumentRenderOptions object.
///
/// @param other QPdfDocumentRenderOptions*
QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new(void* other);

/// q_pdfdocumentrenderoptions_new2 constructs a new QPdfDocumentRenderOptions object and invalidates the source QPdfDocumentRenderOptions object.
///
/// @param other QPdfDocumentRenderOptions*
QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new2(void* other);

/// q_pdfdocumentrenderoptions_new3 constructs a new QPdfDocumentRenderOptions object.
///
QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new3();

/// q_pdfdocumentrenderoptions_new4 constructs a new QPdfDocumentRenderOptions object.
///
/// @param param1 QPdfDocumentRenderOptions*
QPdfDocumentRenderOptions* q_pdfdocumentrenderoptions_new4(void* param1);

/// q_pdfdocumentrenderoptions_copy_assign shallow copies `other` into `self`.
///
/// @param self QPdfDocumentRenderOptions*
/// @param other QPdfDocumentRenderOptions*
void q_pdfdocumentrenderoptions_copy_assign(void* self, void* other);

/// q_pdfdocumentrenderoptions_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QPdfDocumentRenderOptions*
/// @param other QPdfDocumentRenderOptions*
void q_pdfdocumentrenderoptions_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#rotation)
///
/// @param self QPdfDocumentRenderOptions*
///
/// @return enum QPdfDocumentRenderOptions__Rotation
int64_t q_pdfdocumentrenderoptions_rotation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRotation)
///
/// @param self QPdfDocumentRenderOptions*
/// @param r enum QPdfDocumentRenderOptions__Rotation
void q_pdfdocumentrenderoptions_set_rotation(void* self, int64_t r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#renderFlags)
///
/// @param self QPdfDocumentRenderOptions*
///
/// @return flag of enum QPdfDocumentRenderOptions__RenderFlag
int64_t q_pdfdocumentrenderoptions_render_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setRenderFlags)
///
/// @param self QPdfDocumentRenderOptions*
/// @param r flag of enum QPdfDocumentRenderOptions__RenderFlag
void q_pdfdocumentrenderoptions_set_render_flags(void* self, int64_t r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledClipRect)
///
/// @param self QPdfDocumentRenderOptions*
QRect* q_pdfdocumentrenderoptions_scaled_clip_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledClipRect)
///
/// @param self QPdfDocumentRenderOptions*
/// @param r QRect*
void q_pdfdocumentrenderoptions_set_scaled_clip_rect(void* self, void* r);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#scaledSize)
///
/// @param self QPdfDocumentRenderOptions*
QSize* q_pdfdocumentrenderoptions_scaled_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#setScaledSize)
///
/// @param self QPdfDocumentRenderOptions*
/// @param s QSize*
void q_pdfdocumentrenderoptions_set_scaled_size(void* self, void* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfdocumentrenderoptions.html#dtor.QPdfDocumentRenderOptions)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfDocumentRenderOptions*
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
