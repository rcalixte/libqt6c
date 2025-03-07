#include "libqmargins.hpp"
#include "libqpagelayout.hpp"
#include "libqpageranges.hpp"
#include "libqpagesize.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpagedpaintdevice.hpp"
#include "libqpagedpaintdevice.h"

/// https://doc.qt.io/qt-6/qpagedpaintdevice.html

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#newPage)
///
/// ``` QPagedPaintDevice* self ```
bool q_pagedpaintdevice_new_page(void* self) {
    return QPagedPaintDevice_NewPage((QPagedPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// ``` QPagedPaintDevice* self, QPageLayout* pageLayout ```
bool q_pagedpaintdevice_set_page_layout(void* self, void* pageLayout) {
    return QPagedPaintDevice_SetPageLayout((QPagedPaintDevice*)self, (QPageLayout*)pageLayout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// ``` QPagedPaintDevice* self, QPageSize* pageSize ```
bool q_pagedpaintdevice_set_page_size(void* self, void* pageSize) {
    return QPagedPaintDevice_SetPageSize((QPagedPaintDevice*)self, (QPageSize*)pageSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// ``` QPagedPaintDevice* self, enum QPageLayout__Orientation orientation ```
bool q_pagedpaintdevice_set_page_orientation(void* self, int64_t orientation) {
    return QPagedPaintDevice_SetPageOrientation((QPagedPaintDevice*)self, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// ``` QPagedPaintDevice* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_pagedpaintdevice_set_page_margins(void* self, void* margins, int64_t units) {
    return QPagedPaintDevice_SetPageMargins((QPagedPaintDevice*)self, (QMarginsF*)margins, units);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// ``` QPagedPaintDevice* self ```
QPageLayout* q_pagedpaintdevice_page_layout(void* self) {
    return QPagedPaintDevice_PageLayout((QPagedPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// ``` QPagedPaintDevice* self, QPageRanges* ranges ```
void q_pagedpaintdevice_set_page_ranges(void* self, void* ranges) {
    QPagedPaintDevice_SetPageRanges((QPagedPaintDevice*)self, (QPageRanges*)ranges);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// ``` QPagedPaintDevice* self ```
QPageRanges* q_pagedpaintdevice_page_ranges(void* self) {
    return QPagedPaintDevice_PageRanges((QPagedPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_dev_type(void* self) {
    return QPaintDevice_DevType((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPagedPaintDevice* self ```
bool q_pagedpaintdevice_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// ``` QPagedPaintDevice* self ```
QPaintEngine* q_pagedpaintdevice_paint_engine(void* self) {
    return QPaintDevice_PaintEngine((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPagedPaintDevice* self ```
double q_pagedpaintdevice_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPagedPaintDevice* self ```
double q_pagedpaintdevice_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPagedPaintDevice* self ```
int32_t q_pagedpaintdevice_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_pagedpaintdevice_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Delete this object from C++ memory.
///
/// ``` QPagedPaintDevice* self ```
void q_pagedpaintdevice_delete(void* self) {
    QPagedPaintDevice_Delete((QPagedPaintDevice*)(self));
}