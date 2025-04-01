#pragma once
#ifndef SRC_SVGQT6C_LIBQSVGGENERATOR_H
#define SRC_SVGQT6C_LIBQSVGGENERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqiodevice.h"
#include "../libqpaintdevice.h"
#include "../libqpaintengine.h"
#include "../libqpainter.h"
#include "../libqpoint.h"
#include "../libqrect.h"
#include "../libqsize.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qsvggenerator.html

/// q_svggenerator_new constructs a new QSvgGenerator object.
///
///
QSvgGenerator* q_svggenerator_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#title)
///
/// ``` QSvgGenerator* self ```
const char* q_svggenerator_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setTitle)
///
/// ``` QSvgGenerator* self, const char* title ```
void q_svggenerator_set_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#description)
///
/// ``` QSvgGenerator* self ```
const char* q_svggenerator_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setDescription)
///
/// ``` QSvgGenerator* self, const char* description ```
void q_svggenerator_set_description(void* self, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#size)
///
/// ``` QSvgGenerator* self ```
QSize* q_svggenerator_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setSize)
///
/// ``` QSvgGenerator* self, QSize* size ```
void q_svggenerator_set_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#viewBox)
///
/// ``` QSvgGenerator* self ```
QRect* q_svggenerator_view_box(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#viewBoxF)
///
/// ``` QSvgGenerator* self ```
QRectF* q_svggenerator_view_box_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
///
/// ``` QSvgGenerator* self, QRect* viewBox ```
void q_svggenerator_set_view_box(void* self, void* viewBox);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
///
/// ``` QSvgGenerator* self, QRectF* viewBox ```
void q_svggenerator_set_view_box_with_view_box(void* self, void* viewBox);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#fileName)
///
/// ``` QSvgGenerator* self ```
const char* q_svggenerator_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setFileName)
///
/// ``` QSvgGenerator* self, const char* fileName ```
void q_svggenerator_set_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#outputDevice)
///
/// ``` QSvgGenerator* self ```
QIODevice* q_svggenerator_output_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setOutputDevice)
///
/// ``` QSvgGenerator* self, QIODevice* outputDevice ```
void q_svggenerator_set_output_device(void* self, void* outputDevice);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setResolution)
///
/// ``` QSvgGenerator* self, int dpi ```
void q_svggenerator_set_resolution(void* self, int dpi);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#resolution)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_resolution(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
///
/// ``` QSvgGenerator* self ```
QPaintEngine* q_svggenerator_paint_engine(void* self);

/// Allows for overriding the related default method
///
/// ``` QSvgGenerator* self, QPaintEngine* (*slot)() ```
void q_svggenerator_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Base class method implementation
///
/// ``` QSvgGenerator* self ```
QPaintEngine* q_svggenerator_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
///
/// ``` QSvgGenerator* self, enum QPaintDevice__PaintDeviceMetric metric ```
int32_t q_svggenerator_metric(void* self, int64_t metric);

/// Allows for overriding the related default method
///
/// ``` QSvgGenerator* self, int32_t (*slot)(QSvgGenerator*, enum QPaintDevice__PaintDeviceMetric) ```
void q_svggenerator_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QSvgGenerator* self, enum QPaintDevice__PaintDeviceMetric metric ```
int32_t q_svggenerator_qbase_metric(void* self, int64_t metric);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QSvgGenerator* self ```
bool q_svggenerator_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_width(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_height(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QSvgGenerator* self ```
double q_svggenerator_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QSvgGenerator* self ```
double q_svggenerator_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_svggenerator_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_qbase_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgGenerator* self, int32_t (*slot)() ```
void q_svggenerator_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgGenerator* self, QPainter* painter ```
void q_svggenerator_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgGenerator* self, QPainter* painter ```
void q_svggenerator_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgGenerator* self, void (*slot)(QSvgGenerator*, QPainter*) ```
void q_svggenerator_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgGenerator* self, QPoint* offset ```
QPaintDevice* q_svggenerator_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgGenerator* self, QPoint* offset ```
QPaintDevice* q_svggenerator_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgGenerator* self, QPaintDevice* (*slot)(QSvgGenerator*, QPoint*) ```
void q_svggenerator_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgGenerator* self ```
QPainter* q_svggenerator_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgGenerator* self ```
QPainter* q_svggenerator_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgGenerator* self, QPainter* (*slot)() ```
void q_svggenerator_on_shared_painter(void* self, QPainter* (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QSvgGenerator* self ```
void q_svggenerator_delete(void* self);

#endif
