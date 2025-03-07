#include "libqbitmap.hpp"
#include "libqcolor.hpp"
#include "libqiodevice.hpp"
#include "libqimage.hpp"
#include "libqimagereader.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqpixmap.hpp"
#include "libqpixmap.h"

/// https://doc.qt.io/qt-6/qpixmap.html

/// q_pixmap_new constructs a new QPixmap object.
///
///
QPixmap* q_pixmap_new() {
    return QPixmap_new();
}

/// q_pixmap_new2 constructs a new QPixmap object.
///
/// ``` int w, int h ```
QPixmap* q_pixmap_new2(int w, int h) {
    return QPixmap_new2(w, h);
}

/// q_pixmap_new3 constructs a new QPixmap object.
///
/// ``` QSize* param1 ```
QPixmap* q_pixmap_new3(void* param1) {
    return QPixmap_new3((QSize*)param1);
}

/// q_pixmap_new4 constructs a new QPixmap object.
///
/// ``` const char* fileName ```
QPixmap* q_pixmap_new4(const char* fileName) {
    return QPixmap_new4(qstring(fileName));
}

/// q_pixmap_new5 constructs a new QPixmap object.
///
/// ``` QPixmap* param1 ```
QPixmap* q_pixmap_new5(void* param1) {
    return QPixmap_new5((QPixmap*)param1);
}

/// q_pixmap_new6 constructs a new QPixmap object.
///
/// ``` const char* fileName, const char* format ```
QPixmap* q_pixmap_new6(const char* fileName, const char* format) {
    return QPixmap_new6(qstring(fileName), format);
}

/// q_pixmap_new7 constructs a new QPixmap object.
///
/// ``` const char* fileName, const char* format, int flags ```
QPixmap* q_pixmap_new7(const char* fileName, const char* format, int64_t flags) {
    return QPixmap_new7(qstring(fileName), format, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator=)
///
/// ``` QPixmap* self, QPixmap* param1 ```
void q_pixmap_operator_assign(void* self, void* param1) {
    QPixmap_OperatorAssign((QPixmap*)self, (QPixmap*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#swap)
///
/// ``` QPixmap* self, QPixmap* other ```
void q_pixmap_swap(void* self, void* other) {
    QPixmap_Swap((QPixmap*)self, (QPixmap*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator QVariant)
///
/// ``` QPixmap* self ```
QVariant* q_pixmap_to_q_variant(void* self) {
    return QPixmap_ToQVariant((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isNull)
///
/// ``` QPixmap* self ```
bool q_pixmap_is_null(void* self) {
    return QPixmap_IsNull((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_dev_type(void* self) {
    return QPixmap_DevType((QPixmap*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPixmap* self, int32_t (*slot)() ```
void q_pixmap_on_dev_type(void* self, int32_t (*slot)()) {
    QPixmap_OnDevType((QPixmap*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPixmap* self ```
int32_t q_pixmap_qbase_dev_type(void* self) {
    return QPixmap_QBaseDevType((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#width)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_width(void* self) {
    return QPixmap_Width((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#height)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_height(void* self) {
    return QPixmap_Height((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#size)
///
/// ``` QPixmap* self ```
QSize* q_pixmap_size(void* self) {
    return QPixmap_Size((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#rect)
///
/// ``` QPixmap* self ```
QRect* q_pixmap_rect(void* self) {
    return QPixmap_Rect((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#depth)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_depth(void* self) {
    return QPixmap_Depth((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
///
///
int32_t q_pixmap_default_depth() {
    return QPixmap_DefaultDepth();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// ``` QPixmap* self ```
void q_pixmap_fill(void* self) {
    QPixmap_Fill((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#mask)
///
/// ``` QPixmap* self ```
QBitmap* q_pixmap_mask(void* self) {
    return QPixmap_Mask((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setMask)
///
/// ``` QPixmap* self, QBitmap* mask ```
void q_pixmap_set_mask(void* self, void* mask) {
    QPixmap_SetMask((QPixmap*)self, (QBitmap*)mask);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
///
/// ``` QPixmap* self ```
double q_pixmap_device_pixel_ratio(void* self) {
    return QPixmap_DevicePixelRatio((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
///
/// ``` QPixmap* self, double scaleFactor ```
void q_pixmap_set_device_pixel_ratio(void* self, double scaleFactor) {
    QPixmap_SetDevicePixelRatio((QPixmap*)self, scaleFactor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
///
/// ``` QPixmap* self ```
QSizeF* q_pixmap_device_independent_size(void* self) {
    return QPixmap_DeviceIndependentSize((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
///
/// ``` QPixmap* self ```
bool q_pixmap_has_alpha(void* self) {
    return QPixmap_HasAlpha((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
///
/// ``` QPixmap* self ```
bool q_pixmap_has_alpha_channel(void* self) {
    return QPixmap_HasAlphaChannel((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// ``` QPixmap* self ```
QBitmap* q_pixmap_create_heuristic_mask(void* self) {
    return QPixmap_CreateHeuristicMask((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// ``` QPixmap* self, QColor* maskColor ```
QBitmap* q_pixmap_create_mask_from_color(void* self, void* maskColor) {
    return QPixmap_CreateMaskFromColor((QPixmap*)self, (QColor*)maskColor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, int w, int h ```
QPixmap* q_pixmap_scaled(void* self, int w, int h) {
    return QPixmap_Scaled((QPixmap*)self, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, QSize* s ```
QPixmap* q_pixmap_scaled_with_q_size(void* self, void* s) {
    return QPixmap_ScaledWithQSize((QPixmap*)self, (QSize*)s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// ``` QPixmap* self, int w ```
QPixmap* q_pixmap_scaled_to_width(void* self, int w) {
    return QPixmap_ScaledToWidth((QPixmap*)self, w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// ``` QPixmap* self, int h ```
QPixmap* q_pixmap_scaled_to_height(void* self, int h) {
    return QPixmap_ScaledToHeight((QPixmap*)self, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// ``` QPixmap* self, QTransform* param1 ```
QPixmap* q_pixmap_transformed(void* self, void* param1) {
    return QPixmap_Transformed((QPixmap*)self, (QTransform*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
///
/// ``` QTransform* m, int w, int h ```
QTransform* q_pixmap_true_matrix(void* m, int w, int h) {
    return QPixmap_TrueMatrix((QTransform*)m, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#toImage)
///
/// ``` QPixmap* self ```
QImage* q_pixmap_to_image(void* self) {
    return QPixmap_ToImage((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
///
/// ``` QImage* image ```
QPixmap* q_pixmap_from_image(void* image) {
    return QPixmap_FromImage((QImage*)image);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// ``` QImageReader* imageReader ```
QPixmap* q_pixmap_from_image_reader(void* imageReader) {
    return QPixmap_FromImageReader((QImageReader*)imageReader);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QPixmap* self, const char* fileName ```
bool q_pixmap_load(void* self, const char* fileName) {
    return QPixmap_Load((QPixmap*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, unsigned char* buf, uint32_t lenVal ```
bool q_pixmap_load_from_data(void* self, unsigned char* buf, uint32_t lenVal) {
    return QPixmap_LoadFromData((QPixmap*)self, buf, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, const char* data ```
bool q_pixmap_load_from_data_with_data(void* self, const char* data) {
    return QPixmap_LoadFromDataWithData((QPixmap*)self, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, const char* fileName ```
bool q_pixmap_save(void* self, const char* fileName) {
    return QPixmap_Save((QPixmap*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, QIODevice* device ```
bool q_pixmap_save_with_device(void* self, void* device) {
    return QPixmap_SaveWithDevice((QPixmap*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// ``` QPixmap* self, QImage* img ```
bool q_pixmap_convert_from_image(void* self, void* img) {
    return QPixmap_ConvertFromImage((QPixmap*)self, (QImage*)img);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QPixmap* self, int x, int y, int width, int height ```
QPixmap* q_pixmap_copy(void* self, int x, int y, int width, int height) {
    return QPixmap_Copy((QPixmap*)self, x, y, width, height);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QPixmap* self ```
QPixmap* q_pixmap_copy2(void* self) {
    return QPixmap_Copy2((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QPixmap* self, int dx, int dy, int x, int y, int width, int height ```
void q_pixmap_scroll(void* self, int dx, int dy, int x, int y, int width, int height) {
    QPixmap_Scroll((QPixmap*)self, dx, dy, x, y, width, height);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QPixmap* self, int dx, int dy, QRect* rect ```
void q_pixmap_scroll2(void* self, int dx, int dy, void* rect) {
    QPixmap_Scroll2((QPixmap*)self, dx, dy, (QRect*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
///
/// ``` QPixmap* self ```
long long q_pixmap_cache_key(void* self) {
    return QPixmap_CacheKey((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
///
/// ``` QPixmap* self ```
bool q_pixmap_is_detached(void* self) {
    return QPixmap_IsDetached((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#detach)
///
/// ``` QPixmap* self ```
void q_pixmap_detach(void* self) {
    QPixmap_Detach((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
///
/// ``` QPixmap* self ```
bool q_pixmap_is_q_bitmap(void* self) {
    return QPixmap_IsQBitmap((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// ``` QPixmap* self ```
QPaintEngine* q_pixmap_paint_engine(void* self) {
    return QPixmap_PaintEngine((QPixmap*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPixmap* self, QPaintEngine* (*slot)() ```
void q_pixmap_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPixmap_OnPaintEngine((QPixmap*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPixmap* self ```
QPaintEngine* q_pixmap_qbase_paint_engine(void* self) {
    return QPixmap_QBasePaintEngine((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator!)
///
/// ``` QPixmap* self ```
bool q_pixmap_operator_not(void* self) {
    return QPixmap_OperatorNot((QPixmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// ``` QPixmap* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_pixmap_metric(void* self, int64_t param1) {
    return QPixmap_Metric((QPixmap*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QPixmap* self, int32_t (*slot)(QPixmap*, enum QPaintDevice__PaintDeviceMetric) ```
void q_pixmap_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPixmap_OnMetric((QPixmap*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPixmap* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_pixmap_qbase_metric(void* self, int64_t param1) {
    return QPixmap_QBaseMetric((QPixmap*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// ``` QPixmap* self, QColor* fillColor ```
void q_pixmap_fill1(void* self, void* fillColor) {
    QPixmap_Fill1((QPixmap*)self, (QColor*)fillColor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// ``` QPixmap* self, bool clipTight ```
QBitmap* q_pixmap_create_heuristic_mask1(void* self, bool clipTight) {
    return QPixmap_CreateHeuristicMask1((QPixmap*)self, clipTight);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// ``` QPixmap* self, QColor* maskColor, enum Qt__MaskMode mode ```
QBitmap* q_pixmap_create_mask_from_color2(void* self, void* maskColor, int64_t mode) {
    return QPixmap_CreateMaskFromColor2((QPixmap*)self, (QColor*)maskColor, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, int w, int h, enum Qt__AspectRatioMode aspectMode ```
QPixmap* q_pixmap_scaled3(void* self, int w, int h, int64_t aspectMode) {
    return QPixmap_Scaled3((QPixmap*)self, w, h, aspectMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, int w, int h, enum Qt__AspectRatioMode aspectMode, enum Qt__TransformationMode mode ```
QPixmap* q_pixmap_scaled4(void* self, int w, int h, int64_t aspectMode, int64_t mode) {
    return QPixmap_Scaled4((QPixmap*)self, w, h, aspectMode, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, QSize* s, enum Qt__AspectRatioMode aspectMode ```
QPixmap* q_pixmap_scaled2(void* self, void* s, int64_t aspectMode) {
    return QPixmap_Scaled2((QPixmap*)self, (QSize*)s, aspectMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QPixmap* self, QSize* s, enum Qt__AspectRatioMode aspectMode, enum Qt__TransformationMode mode ```
QPixmap* q_pixmap_scaled32(void* self, void* s, int64_t aspectMode, int64_t mode) {
    return QPixmap_Scaled32((QPixmap*)self, (QSize*)s, aspectMode, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// ``` QPixmap* self, int w, enum Qt__TransformationMode mode ```
QPixmap* q_pixmap_scaled_to_width2(void* self, int w, int64_t mode) {
    return QPixmap_ScaledToWidth2((QPixmap*)self, w, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// ``` QPixmap* self, int h, enum Qt__TransformationMode mode ```
QPixmap* q_pixmap_scaled_to_height2(void* self, int h, int64_t mode) {
    return QPixmap_ScaledToHeight2((QPixmap*)self, h, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// ``` QPixmap* self, QTransform* param1, enum Qt__TransformationMode mode ```
QPixmap* q_pixmap_transformed2(void* self, void* param1, int64_t mode) {
    return QPixmap_Transformed2((QPixmap*)self, (QTransform*)param1, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImage)
///
/// ``` QImage* image, int flags ```
QPixmap* q_pixmap_from_image2(void* image, int64_t flags) {
    return QPixmap_FromImage2((QImage*)image, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// ``` QImageReader* imageReader, int flags ```
QPixmap* q_pixmap_from_image_reader2(void* imageReader, int64_t flags) {
    return QPixmap_FromImageReader2((QImageReader*)imageReader, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QPixmap* self, const char* fileName, const char* format ```
bool q_pixmap_load2(void* self, const char* fileName, const char* format) {
    return QPixmap_Load2((QPixmap*)self, qstring(fileName), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QPixmap* self, const char* fileName, const char* format, int flags ```
bool q_pixmap_load3(void* self, const char* fileName, const char* format, int64_t flags) {
    return QPixmap_Load3((QPixmap*)self, qstring(fileName), format, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, unsigned char* buf, uint32_t lenVal, const char* format ```
bool q_pixmap_load_from_data3(void* self, unsigned char* buf, uint32_t lenVal, const char* format) {
    return QPixmap_LoadFromData3((QPixmap*)self, buf, lenVal, format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, unsigned char* buf, uint32_t lenVal, const char* format, int flags ```
bool q_pixmap_load_from_data4(void* self, unsigned char* buf, uint32_t lenVal, const char* format, int64_t flags) {
    return QPixmap_LoadFromData4((QPixmap*)self, buf, lenVal, format, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, const char* data, const char* format ```
bool q_pixmap_load_from_data2(void* self, const char* data, const char* format) {
    return QPixmap_LoadFromData2((QPixmap*)self, qstring(data), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QPixmap* self, const char* data, const char* format, int flags ```
bool q_pixmap_load_from_data32(void* self, const char* data, const char* format, int64_t flags) {
    return QPixmap_LoadFromData32((QPixmap*)self, qstring(data), format, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, const char* fileName, const char* format ```
bool q_pixmap_save2(void* self, const char* fileName, const char* format) {
    return QPixmap_Save2((QPixmap*)self, qstring(fileName), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, const char* fileName, const char* format, int quality ```
bool q_pixmap_save3(void* self, const char* fileName, const char* format, int quality) {
    return QPixmap_Save3((QPixmap*)self, qstring(fileName), format, quality);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, QIODevice* device, const char* format ```
bool q_pixmap_save22(void* self, void* device, const char* format) {
    return QPixmap_Save22((QPixmap*)self, (QIODevice*)device, format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QPixmap* self, QIODevice* device, const char* format, int quality ```
bool q_pixmap_save32(void* self, void* device, const char* format, int quality) {
    return QPixmap_Save32((QPixmap*)self, (QIODevice*)device, format, quality);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// ``` QPixmap* self, QImage* img, int flags ```
bool q_pixmap_convert_from_image2(void* self, void* img, int64_t flags) {
    return QPixmap_ConvertFromImage2((QPixmap*)self, (QImage*)img, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QPixmap* self, QRect* rect ```
QPixmap* q_pixmap_copy1(void* self, void* rect) {
    return QPixmap_Copy1((QPixmap*)self, (QRect*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QPixmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed ```
void q_pixmap_scroll7(void* self, int dx, int dy, int x, int y, int width, int height, void* exposed) {
    QPixmap_Scroll7((QPixmap*)self, dx, dy, x, y, width, height, (QRegion*)exposed);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QPixmap* self, int dx, int dy, QRect* rect, QRegion* exposed ```
void q_pixmap_scroll4(void* self, int dx, int dy, void* rect, void* exposed) {
    QPixmap_Scroll4((QPixmap*)self, dx, dy, (QRect*)rect, (QRegion*)exposed);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPixmap* self ```
bool q_pixmap_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPixmap* self ```
double q_pixmap_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPixmap* self ```
int32_t q_pixmap_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_pixmap_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPixmap* self, QPainter* painter ```
void q_pixmap_init_painter(void* self, void* painter) {
    QPixmap_InitPainter((QPixmap*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPixmap* self, QPainter* painter ```
void q_pixmap_qbase_init_painter(void* self, void* painter) {
    QPixmap_QBaseInitPainter((QPixmap*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPixmap* self, void (*slot)(QPixmap*, QPainter*) ```
void q_pixmap_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPixmap_OnInitPainter((QPixmap*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPixmap* self, QPoint* offset ```
QPaintDevice* q_pixmap_redirected(void* self, void* offset) {
    return QPixmap_Redirected((QPixmap*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPixmap* self, QPoint* offset ```
QPaintDevice* q_pixmap_qbase_redirected(void* self, void* offset) {
    return QPixmap_QBaseRedirected((QPixmap*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPixmap* self, QPaintDevice* (*slot)(QPixmap*, QPoint*) ```
void q_pixmap_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPixmap_OnRedirected((QPixmap*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPixmap* self ```
QPainter* q_pixmap_shared_painter(void* self) {
    return QPixmap_SharedPainter((QPixmap*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPixmap* self ```
QPainter* q_pixmap_qbase_shared_painter(void* self) {
    return QPixmap_QBaseSharedPainter((QPixmap*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPixmap* self, QPainter* (*slot)() ```
void q_pixmap_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPixmap_OnSharedPainter((QPixmap*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPixmap* self ```
void q_pixmap_delete(void* self) {
    QPixmap_Delete((QPixmap*)(self));
}