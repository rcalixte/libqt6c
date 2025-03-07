#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintdevice.h"

/// https://doc.qt.io/qt-6/qpaintdevice.html

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_dev_type(void* self) {
    return QPaintDevice_DevType((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPaintDevice* self ```
bool q_paintdevice_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintEngine)
///
/// ``` QPaintDevice* self ```
QPaintEngine* q_paintdevice_paint_engine(void* self) {
    return QPaintDevice_PaintEngine((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPaintDevice* self ```
double q_paintdevice_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPaintDevice* self ```
double q_paintdevice_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPaintDevice* self ```
int32_t q_paintdevice_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_paintdevice_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Delete this object from C++ memory.
///
/// ``` QPaintDevice* self ```
void q_paintdevice_delete(void* self) {
    QPaintDevice_Delete((QPaintDevice*)(self));
}