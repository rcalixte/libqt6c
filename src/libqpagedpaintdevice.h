#pragma once
#ifndef SRC_QT6C_LIBQPAGEDPAINTDEVICE_H
#define SRC_QT6C_LIBQPAGEDPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#newPage)
///
/// @param self QPagedPaintDevice*
///
bool q_pagedpaintdevice_new_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// @param self QPagedPaintDevice*
/// @param pageLayout QPageLayout*
///
bool q_pagedpaintdevice_set_page_layout(void* self, void* pageLayout);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// @param self QPagedPaintDevice*
/// @param pageSize QPageSize*
///
bool q_pagedpaintdevice_set_page_size(void* self, void* pageSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// @param self QPagedPaintDevice*
/// @param orientation enum QPageLayout__Orientation
///
bool q_pagedpaintdevice_set_page_orientation(void* self, int32_t orientation);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// @param self QPagedPaintDevice*
/// @param margins QMarginsF*
/// @param units enum QPageLayout__Unit
///
bool q_pagedpaintdevice_set_page_margins(void* self, void* margins, int32_t units);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// @param self QPagedPaintDevice*
///
QPageLayout* q_pagedpaintdevice_page_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// @param self QPagedPaintDevice*
/// @param ranges QPageRanges*
///
void q_pagedpaintdevice_set_page_ranges(void* self, void* ranges);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// @param self QPagedPaintDevice*
///
QPageRanges* q_pagedpaintdevice_page_ranges(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// @param self QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QPagedPaintDevice*
///
bool q_pagedpaintdevice_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// @param self QPagedPaintDevice*
///
QPaintEngine* q_pagedpaintdevice_paint_engine(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_width(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_height(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QPagedPaintDevice*
///
double q_pagedpaintdevice_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QPagedPaintDevice*
///
double q_pagedpaintdevice_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_pagedpaintdevice_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_pagedpaintdevice_encode_metric_f(int32_t metric, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#dtor.QPagedPaintDevice)
///
/// Delete this object from C++ memory.
///
/// @param self QPagedPaintDevice*
///
void q_pagedpaintdevice_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#public-types)

typedef enum {
    QPAGEDPAINTDEVICE_PDFVERSION_PDFVERSION_1_4 = 0,
    QPAGEDPAINTDEVICE_PDFVERSION_PDFVERSION_A1B = 1,
    QPAGEDPAINTDEVICE_PDFVERSION_PDFVERSION_1_6 = 2,
    QPAGEDPAINTDEVICE_PDFVERSION_PDFVERSION_X4 = 3
} QPagedPaintDevice__PdfVersion;

#endif
