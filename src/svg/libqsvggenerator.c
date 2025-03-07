#include "../libqiodevice.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "libqsvggenerator.hpp"
#include "libqsvggenerator.h"

/// https://doc.qt.io/qt-6/qsvggenerator.html

/// q_svggenerator_new constructs a new QSvgGenerator object.
///
///
QSvgGenerator* q_svggenerator_new() {
    return QSvgGenerator_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#title)
///
/// ``` QSvgGenerator* self ```
const char* q_svggenerator_title(void* self) {
    libqt_string _str = QSvgGenerator_Title((QSvgGenerator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setTitle)
///
/// ``` QSvgGenerator* self, const char* title ```
void q_svggenerator_set_title(void* self, const char* title) {
    QSvgGenerator_SetTitle((QSvgGenerator*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#description)
///
/// ``` QSvgGenerator* self ```
const char* q_svggenerator_description(void* self) {
    libqt_string _str = QSvgGenerator_Description((QSvgGenerator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setDescription)
///
/// ``` QSvgGenerator* self, const char* description ```
void q_svggenerator_set_description(void* self, const char* description) {
    QSvgGenerator_SetDescription((QSvgGenerator*)self, qstring(description));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#size)
///
/// ``` QSvgGenerator* self ```
QSize* q_svggenerator_size(void* self) {
    return QSvgGenerator_Size((QSvgGenerator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setSize)
///
/// ``` QSvgGenerator* self, QSize* size ```
void q_svggenerator_set_size(void* self, void* size) {
    QSvgGenerator_SetSize((QSvgGenerator*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#viewBox)
///
/// ``` QSvgGenerator* self ```
QRect* q_svggenerator_view_box(void* self) {
    return QSvgGenerator_ViewBox((QSvgGenerator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#viewBoxF)
///
/// ``` QSvgGenerator* self ```
QRectF* q_svggenerator_view_box_f(void* self) {
    return QSvgGenerator_ViewBoxF((QSvgGenerator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
///
/// ``` QSvgGenerator* self, QRect* viewBox ```
void q_svggenerator_set_view_box(void* self, void* viewBox) {
    QSvgGenerator_SetViewBox((QSvgGenerator*)self, (QRect*)viewBox);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setViewBox)
///
/// ``` QSvgGenerator* self, QRectF* viewBox ```
void q_svggenerator_set_view_box_with_view_box(void* self, void* viewBox) {
    QSvgGenerator_SetViewBoxWithViewBox((QSvgGenerator*)self, (QRectF*)viewBox);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#fileName)
///
/// ``` QSvgGenerator* self ```
const char* q_svggenerator_file_name(void* self) {
    libqt_string _str = QSvgGenerator_FileName((QSvgGenerator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setFileName)
///
/// ``` QSvgGenerator* self, const char* fileName ```
void q_svggenerator_set_file_name(void* self, const char* fileName) {
    QSvgGenerator_SetFileName((QSvgGenerator*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#outputDevice)
///
/// ``` QSvgGenerator* self ```
QIODevice* q_svggenerator_output_device(void* self) {
    return QSvgGenerator_OutputDevice((QSvgGenerator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setOutputDevice)
///
/// ``` QSvgGenerator* self, QIODevice* outputDevice ```
void q_svggenerator_set_output_device(void* self, void* outputDevice) {
    QSvgGenerator_SetOutputDevice((QSvgGenerator*)self, (QIODevice*)outputDevice);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#setResolution)
///
/// ``` QSvgGenerator* self, int dpi ```
void q_svggenerator_set_resolution(void* self, int dpi) {
    QSvgGenerator_SetResolution((QSvgGenerator*)self, dpi);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#resolution)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_resolution(void* self) {
    return QSvgGenerator_Resolution((QSvgGenerator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#paintEngine)
///
/// ``` QSvgGenerator* self ```
QPaintEngine* q_svggenerator_paint_engine(void* self) {
    return QSvgGenerator_PaintEngine((QSvgGenerator*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSvgGenerator* self, QPaintEngine* (*slot)() ```
void q_svggenerator_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QSvgGenerator_OnPaintEngine((QSvgGenerator*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSvgGenerator* self ```
QPaintEngine* q_svggenerator_qbase_paint_engine(void* self) {
    return QSvgGenerator_QBasePaintEngine((QSvgGenerator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvggenerator.html#metric)
///
/// ``` QSvgGenerator* self, enum QPaintDevice__PaintDeviceMetric metric ```
int32_t q_svggenerator_metric(void* self, int64_t metric) {
    return QSvgGenerator_Metric((QSvgGenerator*)self, metric);
}

/// Allows for overriding the related default method
///
/// ``` QSvgGenerator* self, int32_t (*slot)(QSvgGenerator*, enum QPaintDevice__PaintDeviceMetric) ```
void q_svggenerator_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QSvgGenerator_OnMetric((QSvgGenerator*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSvgGenerator* self, enum QPaintDevice__PaintDeviceMetric metric ```
int32_t q_svggenerator_qbase_metric(void* self, int64_t metric) {
    return QSvgGenerator_QBaseMetric((QSvgGenerator*)self, metric);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QSvgGenerator* self ```
bool q_svggenerator_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QSvgGenerator* self ```
double q_svggenerator_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QSvgGenerator* self ```
double q_svggenerator_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_svggenerator_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_dev_type(void* self) {
    return QSvgGenerator_DevType((QSvgGenerator*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgGenerator* self ```
int32_t q_svggenerator_qbase_dev_type(void* self) {
    return QSvgGenerator_QBaseDevType((QSvgGenerator*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgGenerator* self, int32_t (*slot)() ```
void q_svggenerator_on_dev_type(void* self, int32_t (*slot)()) {
    QSvgGenerator_OnDevType((QSvgGenerator*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgGenerator* self, QPainter* painter ```
void q_svggenerator_init_painter(void* self, void* painter) {
    QSvgGenerator_InitPainter((QSvgGenerator*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgGenerator* self, QPainter* painter ```
void q_svggenerator_qbase_init_painter(void* self, void* painter) {
    QSvgGenerator_QBaseInitPainter((QSvgGenerator*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgGenerator* self, void (*slot)(QSvgGenerator*, QPainter*) ```
void q_svggenerator_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QSvgGenerator_OnInitPainter((QSvgGenerator*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgGenerator* self, QPoint* offset ```
QPaintDevice* q_svggenerator_redirected(void* self, void* offset) {
    return QSvgGenerator_Redirected((QSvgGenerator*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgGenerator* self, QPoint* offset ```
QPaintDevice* q_svggenerator_qbase_redirected(void* self, void* offset) {
    return QSvgGenerator_QBaseRedirected((QSvgGenerator*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgGenerator* self, QPaintDevice* (*slot)(QSvgGenerator*, QPoint*) ```
void q_svggenerator_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QSvgGenerator_OnRedirected((QSvgGenerator*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgGenerator* self ```
QPainter* q_svggenerator_shared_painter(void* self) {
    return QSvgGenerator_SharedPainter((QSvgGenerator*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgGenerator* self ```
QPainter* q_svggenerator_qbase_shared_painter(void* self) {
    return QSvgGenerator_QBaseSharedPainter((QSvgGenerator*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgGenerator* self, QPainter* (*slot)() ```
void q_svggenerator_on_shared_painter(void* self, QPainter* (*slot)()) {
    QSvgGenerator_OnSharedPainter((QSvgGenerator*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSvgGenerator* self ```
void q_svggenerator_delete(void* self) {
    QSvgGenerator_Delete((QSvgGenerator*)(self));
}