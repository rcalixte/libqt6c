#include "libqcolor.hpp"
#include "libqiodevice.hpp"
#include "libqimage.hpp"
#include "libqimagereader.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqbitmap.hpp"
#include "libqbitmap.h"

/// https://doc.qt.io/qt-6/qbitmap.html

/// q_bitmap_new constructs a new QBitmap object.
///
///
QBitmap* q_bitmap_new() {
    return QBitmap_new();
}

/// q_bitmap_new2 constructs a new QBitmap object.
///
/// ``` QPixmap* param1 ```
QBitmap* q_bitmap_new2(void* param1) {
    return QBitmap_new2((QPixmap*)param1);
}

/// q_bitmap_new3 constructs a new QBitmap object.
///
/// ``` int w, int h ```
QBitmap* q_bitmap_new3(int w, int h) {
    return QBitmap_new3(w, h);
}

/// q_bitmap_new4 constructs a new QBitmap object.
///
/// ``` QSize* param1 ```
QBitmap* q_bitmap_new4(void* param1) {
    return QBitmap_new4((QSize*)param1);
}

/// q_bitmap_new5 constructs a new QBitmap object.
///
/// ``` const char* fileName ```
QBitmap* q_bitmap_new5(const char* fileName) {
    return QBitmap_new5(qstring(fileName));
}

/// q_bitmap_new6 constructs a new QBitmap object.
///
/// ``` QBitmap* param1 ```
QBitmap* q_bitmap_new6(void* param1) {
    return QBitmap_new6((QBitmap*)param1);
}

/// q_bitmap_new7 constructs a new QBitmap object.
///
/// ``` const char* fileName, const char* format ```
QBitmap* q_bitmap_new7(const char* fileName, const char* format) {
    return QBitmap_new7(qstring(fileName), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#operator=)
///
/// ``` QBitmap* self, QPixmap* param1 ```
void q_bitmap_operator_assign(void* self, void* param1) {
    QBitmap_OperatorAssign((QBitmap*)self, (QPixmap*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#swap)
///
/// ``` QBitmap* self, QBitmap* other ```
void q_bitmap_swap(void* self, void* other) {
    QBitmap_Swap((QBitmap*)self, (QBitmap*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#operator QVariant)
///
/// ``` QBitmap* self ```
QVariant* q_bitmap_to_q_variant(void* self) {
    return QBitmap_ToQVariant((QBitmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#clear)
///
/// ``` QBitmap* self ```
void q_bitmap_clear(void* self) {
    QBitmap_Clear((QBitmap*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
///
/// ``` QImage* image ```
QBitmap* q_bitmap_from_image(void* image) {
    return QBitmap_FromImage((QImage*)image);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromData)
///
/// ``` QSize* size, unsigned char* bits ```
QBitmap* q_bitmap_from_data(void* size, unsigned char* bits) {
    return QBitmap_FromData((QSize*)size, bits);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromPixmap)
///
/// ``` QPixmap* pixmap ```
QBitmap* q_bitmap_from_pixmap(void* pixmap) {
    return QBitmap_FromPixmap((QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#transformed)
///
/// ``` QBitmap* self, QTransform* matrix ```
QBitmap* q_bitmap_transformed(void* self, void* matrix) {
    return QBitmap_Transformed((QBitmap*)self, (QTransform*)matrix);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#operator=)
///
/// ``` QBitmap* self, QBitmap* param1 ```
void q_bitmap_operator_assign_with_q_bitmap(void* self, void* param1) {
    QBitmap_OperatorAssignWithQBitmap((QBitmap*)self, (QBitmap*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromImage)
///
/// ``` QImage* image, int flags ```
QBitmap* q_bitmap_from_image2(void* image, int64_t flags) {
    return QBitmap_FromImage2((QImage*)image, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbitmap.html#fromData)
///
/// ``` QSize* size, unsigned char* bits, enum QImage__Format monoFormat ```
QBitmap* q_bitmap_from_data3(void* size, unsigned char* bits, int64_t monoFormat) {
    return QBitmap_FromData3((QSize*)size, bits, monoFormat);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isNull)
///
/// ``` QBitmap* self ```
bool q_bitmap_is_null(void* self) {
    return QPixmap_IsNull((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#width)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_width(void* self) {
    return QPixmap_Width((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#height)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_height(void* self) {
    return QPixmap_Height((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#size)
///
/// ``` QBitmap* self ```
QSize* q_bitmap_size(void* self) {
    return QPixmap_Size((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#rect)
///
/// ``` QBitmap* self ```
QRect* q_bitmap_rect(void* self) {
    return QPixmap_Rect((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#depth)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_depth(void* self) {
    return QPixmap_Depth((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#defaultDepth)
///
///
int32_t q_bitmap_default_depth() {
    return QPixmap_DefaultDepth();
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// ``` QBitmap* self ```
void q_bitmap_fill(void* self) {
    QPixmap_Fill((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#mask)
///
/// ``` QBitmap* self ```
QBitmap* q_bitmap_mask(void* self) {
    return QPixmap_Mask((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setMask)
///
/// ``` QBitmap* self, QBitmap* mask ```
void q_bitmap_set_mask(void* self, void* mask) {
    QPixmap_SetMask((QPixmap*)self, (QBitmap*)mask);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devicePixelRatio)
///
/// ``` QBitmap* self ```
double q_bitmap_device_pixel_ratio(void* self) {
    return QPixmap_DevicePixelRatio((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#setDevicePixelRatio)
///
/// ``` QBitmap* self, double scaleFactor ```
void q_bitmap_set_device_pixel_ratio(void* self, double scaleFactor) {
    QPixmap_SetDevicePixelRatio((QPixmap*)self, scaleFactor);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#deviceIndependentSize)
///
/// ``` QBitmap* self ```
QSizeF* q_bitmap_device_independent_size(void* self) {
    return QPixmap_DeviceIndependentSize((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlpha)
///
/// ``` QBitmap* self ```
bool q_bitmap_has_alpha(void* self) {
    return QPixmap_HasAlpha((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#hasAlphaChannel)
///
/// ``` QBitmap* self ```
bool q_bitmap_has_alpha_channel(void* self) {
    return QPixmap_HasAlphaChannel((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// ``` QBitmap* self ```
QBitmap* q_bitmap_create_heuristic_mask(void* self) {
    return QPixmap_CreateHeuristicMask((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// ``` QBitmap* self, QColor* maskColor ```
QBitmap* q_bitmap_create_mask_from_color(void* self, void* maskColor) {
    return QPixmap_CreateMaskFromColor((QPixmap*)self, (QColor*)maskColor);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, int w, int h ```
QPixmap* q_bitmap_scaled(void* self, int w, int h) {
    return QPixmap_Scaled((QPixmap*)self, w, h);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, QSize* s ```
QPixmap* q_bitmap_scaled_with_q_size(void* self, void* s) {
    return QPixmap_ScaledWithQSize((QPixmap*)self, (QSize*)s);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// ``` QBitmap* self, int w ```
QPixmap* q_bitmap_scaled_to_width(void* self, int w) {
    return QPixmap_ScaledToWidth((QPixmap*)self, w);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// ``` QBitmap* self, int h ```
QPixmap* q_bitmap_scaled_to_height(void* self, int h) {
    return QPixmap_ScaledToHeight((QPixmap*)self, h);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#trueMatrix)
///
/// ``` QTransform* m, int w, int h ```
QTransform* q_bitmap_true_matrix(void* m, int w, int h) {
    return QPixmap_TrueMatrix((QTransform*)m, w, h);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#toImage)
///
/// ``` QBitmap* self ```
QImage* q_bitmap_to_image(void* self) {
    return QPixmap_ToImage((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// ``` QImageReader* imageReader ```
QPixmap* q_bitmap_from_image_reader(void* imageReader) {
    return QPixmap_FromImageReader((QImageReader*)imageReader);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QBitmap* self, const char* fileName ```
bool q_bitmap_load(void* self, const char* fileName) {
    return QPixmap_Load((QPixmap*)self, qstring(fileName));
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, unsigned char* buf, uint32_t lenVal ```
bool q_bitmap_load_from_data(void* self, unsigned char* buf, uint32_t lenVal) {
    return QPixmap_LoadFromData((QPixmap*)self, buf, lenVal);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, const char* data ```
bool q_bitmap_load_from_data_with_data(void* self, const char* data) {
    return QPixmap_LoadFromDataWithData((QPixmap*)self, qstring(data));
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, const char* fileName ```
bool q_bitmap_save(void* self, const char* fileName) {
    return QPixmap_Save((QPixmap*)self, qstring(fileName));
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, QIODevice* device ```
bool q_bitmap_save_with_device(void* self, void* device) {
    return QPixmap_SaveWithDevice((QPixmap*)self, (QIODevice*)device);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// ``` QBitmap* self, QImage* img ```
bool q_bitmap_convert_from_image(void* self, void* img) {
    return QPixmap_ConvertFromImage((QPixmap*)self, (QImage*)img);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QBitmap* self, int x, int y, int width, int height ```
QPixmap* q_bitmap_copy(void* self, int x, int y, int width, int height) {
    return QPixmap_Copy((QPixmap*)self, x, y, width, height);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QBitmap* self ```
QPixmap* q_bitmap_copy2(void* self) {
    return QPixmap_Copy2((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QBitmap* self, int dx, int dy, int x, int y, int width, int height ```
void q_bitmap_scroll(void* self, int dx, int dy, int x, int y, int width, int height) {
    QPixmap_Scroll((QPixmap*)self, dx, dy, x, y, width, height);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QBitmap* self, int dx, int dy, QRect* rect ```
void q_bitmap_scroll2(void* self, int dx, int dy, void* rect) {
    QPixmap_Scroll2((QPixmap*)self, dx, dy, (QRect*)rect);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#cacheKey)
///
/// ``` QBitmap* self ```
long long q_bitmap_cache_key(void* self) {
    return QPixmap_CacheKey((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isDetached)
///
/// ``` QBitmap* self ```
bool q_bitmap_is_detached(void* self) {
    return QPixmap_IsDetached((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#detach)
///
/// ``` QBitmap* self ```
void q_bitmap_detach(void* self) {
    QPixmap_Detach((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#isQBitmap)
///
/// ``` QBitmap* self ```
bool q_bitmap_is_q_bitmap(void* self) {
    return QPixmap_IsQBitmap((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#operator!)
///
/// ``` QBitmap* self ```
bool q_bitmap_operator_not(void* self) {
    return QPixmap_OperatorNot((QPixmap*)self);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fill)
///
/// ``` QBitmap* self, QColor* fillColor ```
void q_bitmap_fill1(void* self, void* fillColor) {
    QPixmap_Fill1((QPixmap*)self, (QColor*)fillColor);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createHeuristicMask)
///
/// ``` QBitmap* self, bool clipTight ```
QBitmap* q_bitmap_create_heuristic_mask1(void* self, bool clipTight) {
    return QPixmap_CreateHeuristicMask1((QPixmap*)self, clipTight);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#createMaskFromColor)
///
/// ``` QBitmap* self, QColor* maskColor, enum Qt__MaskMode mode ```
QBitmap* q_bitmap_create_mask_from_color2(void* self, void* maskColor, int64_t mode) {
    return QPixmap_CreateMaskFromColor2((QPixmap*)self, (QColor*)maskColor, mode);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, int w, int h, enum Qt__AspectRatioMode aspectMode ```
QPixmap* q_bitmap_scaled3(void* self, int w, int h, int64_t aspectMode) {
    return QPixmap_Scaled3((QPixmap*)self, w, h, aspectMode);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, int w, int h, enum Qt__AspectRatioMode aspectMode, enum Qt__TransformationMode mode ```
QPixmap* q_bitmap_scaled4(void* self, int w, int h, int64_t aspectMode, int64_t mode) {
    return QPixmap_Scaled4((QPixmap*)self, w, h, aspectMode, mode);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, QSize* s, enum Qt__AspectRatioMode aspectMode ```
QPixmap* q_bitmap_scaled2(void* self, void* s, int64_t aspectMode) {
    return QPixmap_Scaled2((QPixmap*)self, (QSize*)s, aspectMode);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaled)
///
/// ``` QBitmap* self, QSize* s, enum Qt__AspectRatioMode aspectMode, enum Qt__TransformationMode mode ```
QPixmap* q_bitmap_scaled32(void* self, void* s, int64_t aspectMode, int64_t mode) {
    return QPixmap_Scaled32((QPixmap*)self, (QSize*)s, aspectMode, mode);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToWidth)
///
/// ``` QBitmap* self, int w, enum Qt__TransformationMode mode ```
QPixmap* q_bitmap_scaled_to_width2(void* self, int w, int64_t mode) {
    return QPixmap_ScaledToWidth2((QPixmap*)self, w, mode);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scaledToHeight)
///
/// ``` QBitmap* self, int h, enum Qt__TransformationMode mode ```
QPixmap* q_bitmap_scaled_to_height2(void* self, int h, int64_t mode) {
    return QPixmap_ScaledToHeight2((QPixmap*)self, h, mode);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#transformed)
///
/// ``` QBitmap* self, QTransform* param1, enum Qt__TransformationMode mode ```
QPixmap* q_bitmap_transformed2(void* self, void* param1, int64_t mode) {
    return QPixmap_Transformed2((QPixmap*)self, (QTransform*)param1, mode);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#fromImageReader)
///
/// ``` QImageReader* imageReader, int flags ```
QPixmap* q_bitmap_from_image_reader2(void* imageReader, int64_t flags) {
    return QPixmap_FromImageReader2((QImageReader*)imageReader, flags);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QBitmap* self, const char* fileName, const char* format ```
bool q_bitmap_load2(void* self, const char* fileName, const char* format) {
    return QPixmap_Load2((QPixmap*)self, qstring(fileName), format);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#load)
///
/// ``` QBitmap* self, const char* fileName, const char* format, int flags ```
bool q_bitmap_load3(void* self, const char* fileName, const char* format, int64_t flags) {
    return QPixmap_Load3((QPixmap*)self, qstring(fileName), format, flags);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, unsigned char* buf, uint32_t lenVal, const char* format ```
bool q_bitmap_load_from_data3(void* self, unsigned char* buf, uint32_t lenVal, const char* format) {
    return QPixmap_LoadFromData3((QPixmap*)self, buf, lenVal, format);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, unsigned char* buf, uint32_t lenVal, const char* format, int flags ```
bool q_bitmap_load_from_data4(void* self, unsigned char* buf, uint32_t lenVal, const char* format, int64_t flags) {
    return QPixmap_LoadFromData4((QPixmap*)self, buf, lenVal, format, flags);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, const char* data, const char* format ```
bool q_bitmap_load_from_data2(void* self, const char* data, const char* format) {
    return QPixmap_LoadFromData2((QPixmap*)self, qstring(data), format);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#loadFromData)
///
/// ``` QBitmap* self, const char* data, const char* format, int flags ```
bool q_bitmap_load_from_data32(void* self, const char* data, const char* format, int64_t flags) {
    return QPixmap_LoadFromData32((QPixmap*)self, qstring(data), format, flags);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, const char* fileName, const char* format ```
bool q_bitmap_save2(void* self, const char* fileName, const char* format) {
    return QPixmap_Save2((QPixmap*)self, qstring(fileName), format);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, const char* fileName, const char* format, int quality ```
bool q_bitmap_save3(void* self, const char* fileName, const char* format, int quality) {
    return QPixmap_Save3((QPixmap*)self, qstring(fileName), format, quality);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, QIODevice* device, const char* format ```
bool q_bitmap_save22(void* self, void* device, const char* format) {
    return QPixmap_Save22((QPixmap*)self, (QIODevice*)device, format);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#save)
///
/// ``` QBitmap* self, QIODevice* device, const char* format, int quality ```
bool q_bitmap_save32(void* self, void* device, const char* format, int quality) {
    return QPixmap_Save32((QPixmap*)self, (QIODevice*)device, format, quality);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#convertFromImage)
///
/// ``` QBitmap* self, QImage* img, int flags ```
bool q_bitmap_convert_from_image2(void* self, void* img, int64_t flags) {
    return QPixmap_ConvertFromImage2((QPixmap*)self, (QImage*)img, flags);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#copy)
///
/// ``` QBitmap* self, QRect* rect ```
QPixmap* q_bitmap_copy1(void* self, void* rect) {
    return QPixmap_Copy1((QPixmap*)self, (QRect*)rect);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QBitmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed ```
void q_bitmap_scroll7(void* self, int dx, int dy, int x, int y, int width, int height, void* exposed) {
    QPixmap_Scroll7((QPixmap*)self, dx, dy, x, y, width, height, (QRegion*)exposed);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#scroll)
///
/// ``` QBitmap* self, int dx, int dy, QRect* rect, QRegion* exposed ```
void q_bitmap_scroll4(void* self, int dx, int dy, void* rect, void* exposed) {
    QPixmap_Scroll4((QPixmap*)self, dx, dy, (QRect*)rect, (QRegion*)exposed);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QBitmap* self ```
bool q_bitmap_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QBitmap* self ```
double q_bitmap_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QBitmap* self ```
int32_t q_bitmap_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_bitmap_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self ```
int32_t q_bitmap_dev_type(void* self) {
    return QBitmap_DevType((QBitmap*)self);
}

/// Inherited from QPixmap
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self ```
int32_t q_bitmap_qbase_dev_type(void* self) {
    return QBitmap_QBaseDevType((QBitmap*)self);
}

/// Inherited from QPixmap
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, int32_t (*slot)() ```
void q_bitmap_on_dev_type(void* self, int32_t (*slot)()) {
    QBitmap_OnDevType((QBitmap*)self, (intptr_t)slot);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self ```
QPaintEngine* q_bitmap_paint_engine(void* self) {
    return QBitmap_PaintEngine((QBitmap*)self);
}

/// Inherited from QPixmap
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self ```
QPaintEngine* q_bitmap_qbase_paint_engine(void* self) {
    return QBitmap_QBasePaintEngine((QBitmap*)self);
}

/// Inherited from QPixmap
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, QPaintEngine* (*slot)() ```
void q_bitmap_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QBitmap_OnPaintEngine((QBitmap*)self, (intptr_t)slot);
}

/// Inherited from QPixmap
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpixmap.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_bitmap_metric(void* self, int64_t param1) {
    return QBitmap_Metric((QBitmap*)self, param1);
}

/// Inherited from QPixmap
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_bitmap_qbase_metric(void* self, int64_t param1) {
    return QBitmap_QBaseMetric((QBitmap*)self, param1);
}

/// Inherited from QPixmap
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, int32_t (*slot)(QBitmap*, enum QPaintDevice__PaintDeviceMetric) ```
void q_bitmap_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QBitmap_OnMetric((QBitmap*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self, QPainter* painter ```
void q_bitmap_init_painter(void* self, void* painter) {
    QBitmap_InitPainter((QBitmap*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self, QPainter* painter ```
void q_bitmap_qbase_init_painter(void* self, void* painter) {
    QBitmap_QBaseInitPainter((QBitmap*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, void (*slot)(QBitmap*, QPainter*) ```
void q_bitmap_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QBitmap_OnInitPainter((QBitmap*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self, QPoint* offset ```
QPaintDevice* q_bitmap_redirected(void* self, void* offset) {
    return QBitmap_Redirected((QBitmap*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self, QPoint* offset ```
QPaintDevice* q_bitmap_qbase_redirected(void* self, void* offset) {
    return QBitmap_QBaseRedirected((QBitmap*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, QPaintDevice* (*slot)(QBitmap*, QPoint*) ```
void q_bitmap_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QBitmap_OnRedirected((QBitmap*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBitmap* self ```
QPainter* q_bitmap_shared_painter(void* self) {
    return QBitmap_SharedPainter((QBitmap*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBitmap* self ```
QPainter* q_bitmap_qbase_shared_painter(void* self) {
    return QBitmap_QBaseSharedPainter((QBitmap*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBitmap* self, QPainter* (*slot)() ```
void q_bitmap_on_shared_painter(void* self, QPainter* (*slot)()) {
    QBitmap_OnSharedPainter((QBitmap*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QBitmap* self ```
void q_bitmap_delete(void* self) {
    QBitmap_Delete((QBitmap*)(self));
}