#pragma once
#ifndef SRCQT6C_LIBQPAGEDPAINTDEVICE_H
#define SRCQT6C_LIBQPAGEDPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqmargins.h"
#include "libqpagelayout.h"
#include "libqpageranges.h"
#include "libqpagesize.h"
#include "libqpaintdevice.h"

/// https://doc.qt.io/qt-6/qpagedpaintdevice.html

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#newPage)
///
/// ``` QPagedPaintDevice* self ```
bool q_pagedpaintdevice_new_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// ``` QPagedPaintDevice* self, QPageLayout* pageLayout ```
bool q_pagedpaintdevice_set_page_layout(void* self, void* pageLayout);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// ``` QPagedPaintDevice* self, QPageSize* pageSize ```
bool q_pagedpaintdevice_set_page_size(void* self, void* pageSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// ``` QPagedPaintDevice* self, enum QPageLayout__Orientation orientation ```
bool q_pagedpaintdevice_set_page_orientation(void* self, int64_t orientation);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// ``` QPagedPaintDevice* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_pagedpaintdevice_set_page_margins(void* self, void* margins, int64_t units);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// ``` QPagedPaintDevice* self ```
QPageLayout* q_pagedpaintdevice_page_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// ``` QPagedPaintDevice* self, QPageRanges* ranges ```
void q_pagedpaintdevice_set_page_ranges(void* self, void* ranges);

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// ``` QPagedPaintDevice* self ```
QPageRanges* q_pagedpaintdevice_page_ranges(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPagedPaintDevice* self ```
bool q_pagedpaintdevice_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// ``` QPagedPaintDevice* self ```
QPaintEngine* q_pagedpaintdevice_paint_engine(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_width(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_height(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPagedPaintDevice* self ```
double q_pagedpaintdevice_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPagedPaintDevice* self ```
double q_pagedpaintdevice_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_pagedpaintdevice_device_pixel_ratio_f_scale();

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#dtor.QPagedPaintDevice)
///
/// Delete this object from C++ memory.
///
/// ``` QPagedPaintDevice* self ```
void q_pagedpaintdevice_delete(void* self);

/// https://doc.qt.io/qt-6/qpagedpaintdevice.html#types

typedef enum {
    QPAGEDPAINTDEVICE_PDFVERSION_PDFVERSION_1_4 = 0,
    QPAGEDPAINTDEVICE_PDFVERSION_PDFVERSION_A1B = 1,
    QPAGEDPAINTDEVICE_PDFVERSION_PDFVERSION_1_6 = 2
} QPagedPaintDevice__PdfVersion;

#endif
