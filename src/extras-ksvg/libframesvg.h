#pragma once
#ifndef SRC_EXTRAS_KSVG_QT6C_LIBFRAMESVG_H
#define SRC_EXTRAS_KSVG_QT6C_LIBFRAMESVG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html)

/// k_svg__framesvg_new constructs a new KSvg::FrameSvg object.
///
KSvg__FrameSvg* k_svg__framesvg_new();

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html)

/// k_svg__framesvg_new2 constructs a new KSvg::FrameSvg object.
///
/// @param parent QObject*
///
KSvg__FrameSvg* k_svg__framesvg_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSvg__FrameSvg*
///
const QMetaObject* k_svg__framesvg_meta_object(void* self);

/// @param self KSvg__FrameSvg*
/// @param param1 const char*
///
void* k_svg__framesvg_metacast(void* self, const char* param1);

/// @param self KSvg__FrameSvg*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_svg__framesvg_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSvg__FrameSvg*
/// @param callback int32_t func(KSvg__FrameSvg* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_svg__framesvg_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSvg__FrameSvg*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_svg__framesvg_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_svg__framesvg_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setImagePath)
///
/// @param self KSvg__FrameSvg*
/// @param path const char*
///
void k_svg__framesvg_set_image_path(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setImagePath)
///
/// Allows for overriding the related default method
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, const char* path)
///
void k_svg__framesvg_on_set_image_path(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setImagePath)
///
/// Base class method implementation
///
/// @param self KSvg__FrameSvg*
/// @param path const char*
///
void k_svg__framesvg_qbase_set_image_path(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setEnabledBorders)
///
/// @param self KSvg__FrameSvg*
/// @param borders flag of enum KSvg__FrameSvg__EnabledBorder
///
void k_svg__framesvg_set_enabled_borders(void* self, const int32_t borders);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#enabledBorders)
///
/// @param self KSvg__FrameSvg*
///
/// @return flag of enum KSvg__FrameSvg__EnabledBorder
///
int32_t k_svg__framesvg_enabled_borders(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#resizeFrame)
///
/// @param self KSvg__FrameSvg*
/// @param size QSizeF*
///
void k_svg__framesvg_resize_frame(void* self, void* size);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#frameSize)
///
/// @param self KSvg__FrameSvg*
///
QSizeF* k_svg__framesvg_frame_size(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#marginSize)
///
/// @param self KSvg__FrameSvg*
/// @param edge enum KSvg__FrameSvg__MarginEdge
///
double k_svg__framesvg_margin_size(void* self, int32_t edge);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#getMargins)
///
/// @param self KSvg__FrameSvg*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void k_svg__framesvg_get_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#fixedMarginSize)
///
/// @param self KSvg__FrameSvg*
/// @param edge enum KSvg__FrameSvg__MarginEdge
///
double k_svg__framesvg_fixed_margin_size(void* self, int32_t edge);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#getFixedMargins)
///
/// @param self KSvg__FrameSvg*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void k_svg__framesvg_get_fixed_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#insetSize)
///
/// @param self KSvg__FrameSvg*
/// @param edge enum KSvg__FrameSvg__MarginEdge
///
double k_svg__framesvg_inset_size(void* self, int32_t edge);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#getInset)
///
/// @param self KSvg__FrameSvg*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void k_svg__framesvg_get_inset(void* self, double* left, double* top, double* right, double* bottom);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#contentsRect)
///
/// @param self KSvg__FrameSvg*
///
QRectF* k_svg__framesvg_contents_rect(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setElementPrefix)
///
/// @param self KSvg__FrameSvg*
/// @param location enum KSvg__FrameSvg__LocationPrefix
///
void k_svg__framesvg_set_element_prefix(void* self, int32_t location);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setElementPrefix)
///
/// @param self KSvg__FrameSvg*
/// @param prefix const char*
///
void k_svg__framesvg_set_element_prefix2(void* self, const char* prefix);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#hasElementPrefix)
///
/// @param self KSvg__FrameSvg*
/// @param prefix const char*
///
bool k_svg__framesvg_has_element_prefix(void* self, const char* prefix);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#hasElementPrefix)
///
/// @param self KSvg__FrameSvg*
/// @param location enum KSvg__FrameSvg__LocationPrefix
///
bool k_svg__framesvg_has_element_prefix2(void* self, int32_t location);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#prefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSvg__FrameSvg*
///
const char* k_svg__framesvg_prefix(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#mask)
///
/// @param self KSvg__FrameSvg*
///
QRegion* k_svg__framesvg_mask(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#alphaMask)
///
/// @param self KSvg__FrameSvg*
///
QPixmap* k_svg__framesvg_alpha_mask(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setCacheAllRenderedFrames)
///
/// @param self KSvg__FrameSvg*
/// @param cache bool
///
void k_svg__framesvg_set_cache_all_rendered_frames(void* self, bool cache);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#cacheAllRenderedFrames)
///
/// @param self KSvg__FrameSvg*
///
bool k_svg__framesvg_cache_all_rendered_frames(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#clearCache)
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_clear_cache(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#framePixmap)
///
/// @param self KSvg__FrameSvg*
///
QPixmap* k_svg__framesvg_frame_pixmap(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
/// @param target QRectF*
///
void k_svg__framesvg_paint_frame(void* self, void* painter, void* target);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
///
void k_svg__framesvg_paint_frame2(void* self, void* painter);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#actualPrefix)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSvg__FrameSvg*
///
const char* k_svg__framesvg_actual_prefix(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#isRepaintBlocked)
///
/// @param self KSvg__FrameSvg*
///
bool k_svg__framesvg_is_repaint_blocked(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#setRepaintBlocked)
///
/// @param self KSvg__FrameSvg*
/// @param blocked bool
///
void k_svg__framesvg_set_repaint_blocked(void* self, bool blocked);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#minimumDrawingHeight)
///
/// @param self KSvg__FrameSvg*
///
int32_t k_svg__framesvg_minimum_drawing_height(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#minimumDrawingWidth)
///
/// @param self KSvg__FrameSvg*
///
int32_t k_svg__framesvg_minimum_drawing_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_svg__framesvg_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_svg__framesvg_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
/// @param target QRectF*
/// @param source QRectF*
///
void k_svg__framesvg_paint_frame3(void* self, void* painter, void* target, void* source);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#paintFrame)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
/// @param pos QPointF*
///
void k_svg__framesvg_paint_frame22(void* self, void* painter, void* pos);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setDevicePixelRatio)
///
/// @param self KSvg__FrameSvg*
/// @param factor double
///
void k_svg__framesvg_set_device_pixel_ratio(void* self, double factor);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#devicePixelRatio)
///
/// @param self KSvg__FrameSvg*
///
double k_svg__framesvg_device_pixel_ratio(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
///
/// @param self KSvg__FrameSvg*
///
QPixmap* k_svg__framesvg_pixmap(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
///
/// @param self KSvg__FrameSvg*
/// @param size QSize*
///
QImage* k_svg__framesvg_image(void* self, void* size);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
/// @param point QPointF*
///
void k_svg__framesvg_paint(void* self, void* painter, void* point);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
/// @param x int
/// @param y int
///
void k_svg__framesvg_paint2(void* self, void* painter, int x, int y);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
/// @param rect QRectF*
///
void k_svg__framesvg_paint3(void* self, void* painter, void* rect);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param width int
/// @param height int
///
void k_svg__framesvg_paint4(void* self, void* painter, int x, int y, int width, int height);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#size)
///
/// @param self KSvg__FrameSvg*
///
QSizeF* k_svg__framesvg_size(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
///
/// @param self KSvg__FrameSvg*
/// @param width double
/// @param height double
///
void k_svg__framesvg_resize(void* self, double width, double height);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
///
/// @param self KSvg__FrameSvg*
/// @param size QSizeF*
///
void k_svg__framesvg_resize2(void* self, void* size);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_resize3(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#elementSize)
///
/// @param self KSvg__FrameSvg*
/// @param elementId const char*
///
QSizeF* k_svg__framesvg_element_size(void* self, const char* elementId);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#elementRect)
///
/// @param self KSvg__FrameSvg*
/// @param elementId const char*
///
QRectF* k_svg__framesvg_element_rect(void* self, const char* elementId);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#hasElement)
///
/// @param self KSvg__FrameSvg*
/// @param elementId const char*
///
bool k_svg__framesvg_has_element(void* self, const char* elementId);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#isValid)
///
/// @param self KSvg__FrameSvg*
///
bool k_svg__framesvg_is_valid(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setContainsMultipleImages)
///
/// @param self KSvg__FrameSvg*
/// @param multiple bool
///
void k_svg__framesvg_set_contains_multiple_images(void* self, bool multiple);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#containsMultipleImages)
///
/// @param self KSvg__FrameSvg*
///
bool k_svg__framesvg_contains_multiple_images(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSvg__FrameSvg*
///
const char* k_svg__framesvg_image_path(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setUsingRenderingCache)
///
/// @param self KSvg__FrameSvg*
/// @param useCache bool
///
void k_svg__framesvg_set_using_rendering_cache(void* self, bool useCache);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#isUsingRenderingCache)
///
/// @param self KSvg__FrameSvg*
///
bool k_svg__framesvg_is_using_rendering_cache(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSet)
///
/// @param self KSvg__FrameSvg*
///
bool k_svg__framesvg_from_current_image_set(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setImageSet)
///
/// @param self KSvg__FrameSvg*
/// @param theme KSvg__ImageSet*
///
void k_svg__framesvg_set_image_set(void* self, void* theme);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSet)
///
/// @param self KSvg__FrameSvg*
///
KSvg__ImageSet* k_svg__framesvg_image_set(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setStatus)
///
/// @param self KSvg__FrameSvg*
/// @param status enum KSvg__Svg__Status
///
void k_svg__framesvg_set_status(void* self, int32_t status);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#status)
///
/// @param self KSvg__FrameSvg*
///
/// @return enum KSvg__Svg__Status
///
int32_t k_svg__framesvg_status(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setColorSet)
///
/// @param self KSvg__FrameSvg*
/// @param colorSet enum KSvg__Svg__ColorSet
///
void k_svg__framesvg_set_color_set(void* self, int32_t colorSet);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSet)
///
/// @param self KSvg__FrameSvg*
///
/// @return enum KSvg__Svg__ColorSet
///
int32_t k_svg__framesvg_color_set(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#color)
///
/// @param self KSvg__FrameSvg*
/// @param colorName enum KSvg__Svg__StyleSheetColor
///
QColor* k_svg__framesvg_color(void* self, int32_t colorName);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setColor)
///
/// @param self KSvg__FrameSvg*
/// @param colorName enum KSvg__Svg__StyleSheetColor
/// @param color QColor*
///
void k_svg__framesvg_set_color(void* self, int32_t colorName, void* color);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#clearColorOverrides)
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_clear_color_overrides(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_repaint_needed(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self)
///
void k_svg__framesvg_on_repaint_needed(void* self, void (*callback)(void*));

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_size_changed(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self)
///
void k_svg__framesvg_on_size_changed(void* self, void (*callback)(void*));

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_image_path_changed(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self)
///
void k_svg__framesvg_on_image_path_changed(void* self, void (*callback)(void*));

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_color_hint_changed(void* self);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self)
///
void k_svg__framesvg_on_color_hint_changed(void* self, void (*callback)(void*));

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
///
/// @param self KSvg__FrameSvg*
/// @param fromCurrentImageSet bool
///
void k_svg__framesvg_from_current_image_set_changed(void* self, bool fromCurrentImageSet);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, bool fromCurrentImageSet)
///
void k_svg__framesvg_on_from_current_image_set_changed(void* self, void (*callback)(void*, bool));

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
///
/// @param self KSvg__FrameSvg*
/// @param status enum KSvg__Svg__Status
///
void k_svg__framesvg_status_changed(void* self, int32_t status);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, enum KSvg__Svg__Status status)
///
void k_svg__framesvg_on_status_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
///
/// @param self KSvg__FrameSvg*
/// @param colorSet enum KSvg__Svg__ColorSet
///
void k_svg__framesvg_color_set_changed(void* self, int32_t colorSet);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, enum KSvg__Svg__ColorSet colorSet)
///
void k_svg__framesvg_on_color_set_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
///
/// @param self KSvg__FrameSvg*
/// @param imageSet KSvg__ImageSet*
///
void k_svg__framesvg_image_set_changed(void* self, void* imageSet);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, KSvg__ImageSet* imageSet)
///
void k_svg__framesvg_on_image_set_changed(void* self, void (*callback)(void*, void*));

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
///
/// @param self KSvg__FrameSvg*
/// @param elementID const char*
///
QPixmap* k_svg__framesvg_pixmap1(void* self, const char* elementID);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
///
/// @param self KSvg__FrameSvg*
/// @param size QSize*
/// @param elementID const char*
///
QImage* k_svg__framesvg_image2(void* self, void* size, const char* elementID);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
/// @param point QPointF*
/// @param elementID const char*
///
void k_svg__framesvg_paint32(void* self, void* painter, void* point, const char* elementID);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param elementID const char*
///
void k_svg__framesvg_paint42(void* self, void* painter, int x, int y, const char* elementID);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
/// @param rect QRectF*
/// @param elementID const char*
///
void k_svg__framesvg_paint33(void* self, void* painter, void* rect, const char* elementID);

/// Inherited from KSvg::Svg
///
/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__FrameSvg*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param width int
/// @param height int
/// @param elementID const char*
///
void k_svg__framesvg_paint6(void* self, void* painter, int x, int y, int width, int height, const char* elementID);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KSvg__FrameSvg*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_svg__framesvg_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KSvg__FrameSvg*
/// @param callback bool func(KSvg__FrameSvg* self, QObject* watched, QEvent* event)
///
void k_svg__framesvg_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KSvg__FrameSvg*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_svg__framesvg_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSvg__FrameSvg*
///
const char* k_svg__framesvg_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSvg__FrameSvg*
/// @param name char*
///
void k_svg__framesvg_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSvg__FrameSvg*
///
bool k_svg__framesvg_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSvg__FrameSvg*
///
bool k_svg__framesvg_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSvg__FrameSvg*
///
bool k_svg__framesvg_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSvg__FrameSvg*
///
bool k_svg__framesvg_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSvg__FrameSvg*
/// @param b bool
///
bool k_svg__framesvg_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSvg__FrameSvg*
///
QThread* k_svg__framesvg_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSvg__FrameSvg*
/// @param thread QThread*
///
bool k_svg__framesvg_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSvg__FrameSvg*
/// @param interval int
///
int32_t k_svg__framesvg_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSvg__FrameSvg*
/// @param id int
///
void k_svg__framesvg_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSvg__FrameSvg*
/// @param id enum Qt__TimerId
///
void k_svg__framesvg_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSvg__FrameSvg*
///
libqt_list /* of QObject* */ k_svg__framesvg_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSvg__FrameSvg*
/// @param parent QObject*
///
void k_svg__framesvg_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSvg__FrameSvg*
/// @param filterObj QObject*
///
void k_svg__framesvg_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSvg__FrameSvg*
/// @param obj QObject*
///
void k_svg__framesvg_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_svg__framesvg_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSvg__FrameSvg*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_svg__framesvg_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_svg__framesvg_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_svg__framesvg_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSvg__FrameSvg*
/// @param name const char*
/// @param value QVariant*
///
bool k_svg__framesvg_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSvg__FrameSvg*
/// @param name const char*
///
QVariant* k_svg__framesvg_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSvg__FrameSvg*
///
const char** k_svg__framesvg_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSvg__FrameSvg*
///
QBindingStorage* k_svg__framesvg_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSvg__FrameSvg*
///
const QBindingStorage* k_svg__framesvg_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self)
///
void k_svg__framesvg_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSvg__FrameSvg*
///
QObject* k_svg__framesvg_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSvg__FrameSvg*
/// @param classname const char*
///
bool k_svg__framesvg_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSvg__FrameSvg*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_svg__framesvg_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSvg__FrameSvg*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_svg__framesvg_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_svg__framesvg_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSvg__FrameSvg*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_svg__framesvg_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__FrameSvg*
/// @param param1 QObject*
///
void k_svg__framesvg_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, QObject* param1)
///
void k_svg__framesvg_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param event QEvent*
///
bool k_svg__framesvg_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param event QEvent*
///
bool k_svg__framesvg_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param callback bool func(KSvg__FrameSvg* self, QEvent* event)
///
void k_svg__framesvg_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param event QTimerEvent*
///
void k_svg__framesvg_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param event QTimerEvent*
///
void k_svg__framesvg_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, QTimerEvent* event)
///
void k_svg__framesvg_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param event QChildEvent*
///
void k_svg__framesvg_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param event QChildEvent*
///
void k_svg__framesvg_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, QChildEvent* event)
///
void k_svg__framesvg_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param event QEvent*
///
void k_svg__framesvg_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param event QEvent*
///
void k_svg__framesvg_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, QEvent* event)
///
void k_svg__framesvg_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param signal QMetaMethod*
///
void k_svg__framesvg_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param signal QMetaMethod*
///
void k_svg__framesvg_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, QMetaMethod* signal)
///
void k_svg__framesvg_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param signal QMetaMethod*
///
void k_svg__framesvg_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param signal QMetaMethod*
///
void k_svg__framesvg_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, QMetaMethod* signal)
///
void k_svg__framesvg_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__FrameSvg*
///
QObject* k_svg__framesvg_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
///
QObject* k_svg__framesvg_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param callback QObject* func()
///
void k_svg__framesvg_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__FrameSvg*
///
int32_t k_svg__framesvg_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
///
int32_t k_svg__framesvg_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param callback int32_t func()
///
void k_svg__framesvg_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param signal const char*
///
int32_t k_svg__framesvg_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param signal const char*
///
int32_t k_svg__framesvg_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param callback int32_t func(KSvg__FrameSvg* self, const char* signal)
///
void k_svg__framesvg_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param signal QMetaMethod*
///
bool k_svg__framesvg_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param signal QMetaMethod*
///
bool k_svg__framesvg_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__FrameSvg*
/// @param callback bool func(KSvg__FrameSvg* self, QMetaMethod* signal)
///
void k_svg__framesvg_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSvg__FrameSvg*
/// @param callback void func(KSvg__FrameSvg* self, const char* objectName)
///
void k_svg__framesvg_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KSvg__FrameSvg*
///
void k_svg__framesvg_delete(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#public-types)

typedef enum {
    KSVG_FRAMESVG_ENABLEDBORDER_NOBORDER = 0,
    KSVG_FRAMESVG_ENABLEDBORDER_TOPBORDER = 1,
    KSVG_FRAMESVG_ENABLEDBORDER_BOTTOMBORDER = 2,
    KSVG_FRAMESVG_ENABLEDBORDER_LEFTBORDER = 4,
    KSVG_FRAMESVG_ENABLEDBORDER_RIGHTBORDER = 8,
    KSVG_FRAMESVG_ENABLEDBORDER_ALLBORDERS = 15
} KSvg__FrameSvg__EnabledBorder;

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#public-types)

typedef enum {
    KSVG_FRAMESVG_LOCATIONPREFIX_FLOATING = 0,
    KSVG_FRAMESVG_LOCATIONPREFIX_TOPEDGE = 1,
    KSVG_FRAMESVG_LOCATIONPREFIX_BOTTOMEDGE = 2,
    KSVG_FRAMESVG_LOCATIONPREFIX_LEFTEDGE = 3,
    KSVG_FRAMESVG_LOCATIONPREFIX_RIGHTEDGE = 4
} KSvg__FrameSvg__LocationPrefix;

/// [Upstream resources](https://api.kde.org/ksvg-framesvg.html#public-types)

typedef enum {
    KSVG_FRAMESVG_MARGINEDGE_TOPMARGIN = 0,
    KSVG_FRAMESVG_MARGINEDGE_BOTTOMMARGIN = 1,
    KSVG_FRAMESVG_MARGINEDGE_LEFTMARGIN = 2,
    KSVG_FRAMESVG_MARGINEDGE_RIGHTMARGIN = 3
} KSvg__FrameSvg__MarginEdge;

#endif
