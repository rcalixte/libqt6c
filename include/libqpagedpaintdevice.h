#pragma once
#ifndef LIBQPAGEDPAINTDEVICE_H
#define LIBQPAGEDPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// @param self QPagedPaintDevice*
/// @param pageLayout QPageLayout*
///
bool q_pagedpaintdevice_set_page_layout(void* self, const void* pageLayout);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// @param self QPagedPaintDevice*
/// @param pageSize QPageSize*
///
bool q_pagedpaintdevice_set_page_size(void* self, const void* pageSize);

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
bool q_pagedpaintdevice_set_page_margins(void* self, const void* margins, int32_t units);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// @param self const QPagedPaintDevice*
///
QPageLayout* q_pagedpaintdevice_page_layout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// @param self QPagedPaintDevice*
/// @param ranges QPageRanges*
///
void q_pagedpaintdevice_set_page_ranges(void* self, const void* ranges);

/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// @param self const QPagedPaintDevice*
///
QPageRanges* q_pagedpaintdevice_page_ranges(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// @param self const QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_dev_type(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QPagedPaintDevice*
///
bool q_pagedpaintdevice_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self const QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_width(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self const QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_height(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QPagedPaintDevice*
///
double q_pagedpaintdevice_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QPagedPaintDevice*
///
double q_pagedpaintdevice_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QPagedPaintDevice*
///
int32_t q_pagedpaintdevice_depth(const void* self);

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
