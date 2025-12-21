#pragma once
#ifndef SRC_EXTRAS_KSVG_QT6C_LIBSVG_H
#define SRC_EXTRAS_KSVG_QT6C_LIBSVG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksvg-svg.html)

/// k_svg__svg_new constructs a new KSvg::Svg object.
///
KSvg__Svg* k_svg__svg_new();

/// [Upstream resources](https://api.kde.org/ksvg-svg.html)

/// k_svg__svg_new2 constructs a new KSvg::Svg object.
///
/// @param parent QObject*
///
KSvg__Svg* k_svg__svg_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSvg__Svg*
///
const QMetaObject* k_svg__svg_meta_object(void* self);

/// @param self KSvg__Svg*
/// @param param1 const char*
///
void* k_svg__svg_metacast(void* self, const char* param1);

/// @param self KSvg__Svg*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_svg__svg_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSvg__Svg*
/// @param callback int32_t func(KSvg__Svg* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_svg__svg_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSvg__Svg*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_svg__svg_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_svg__svg_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setDevicePixelRatio)
///
/// @param self KSvg__Svg*
/// @param factor double
///
void k_svg__svg_set_device_pixel_ratio(void* self, double factor);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#devicePixelRatio)
///
/// @param self KSvg__Svg*
///
double k_svg__svg_device_pixel_ratio(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
///
/// @param self KSvg__Svg*
///
QPixmap* k_svg__svg_pixmap(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
///
/// @param self KSvg__Svg*
/// @param size QSize*
///
QImage* k_svg__svg_image(void* self, void* size);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__Svg*
/// @param painter QPainter*
/// @param point QPointF*
///
void k_svg__svg_paint(void* self, void* painter, void* point);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__Svg*
/// @param painter QPainter*
/// @param x int
/// @param y int
///
void k_svg__svg_paint2(void* self, void* painter, int x, int y);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__Svg*
/// @param painter QPainter*
/// @param rect QRectF*
///
void k_svg__svg_paint3(void* self, void* painter, void* rect);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__Svg*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param width int
/// @param height int
///
void k_svg__svg_paint4(void* self, void* painter, int x, int y, int width, int height);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#size)
///
/// @param self KSvg__Svg*
///
QSizeF* k_svg__svg_size(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
///
/// @param self KSvg__Svg*
/// @param width double
/// @param height double
///
void k_svg__svg_resize(void* self, double width, double height);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
///
/// @param self KSvg__Svg*
/// @param size QSizeF*
///
void k_svg__svg_resize2(void* self, void* size);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#resize)
///
/// @param self KSvg__Svg*
///
void k_svg__svg_resize3(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#elementSize)
///
/// @param self KSvg__Svg*
/// @param elementId const char*
///
QSizeF* k_svg__svg_element_size(void* self, const char* elementId);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#elementRect)
///
/// @param self KSvg__Svg*
/// @param elementId const char*
///
QRectF* k_svg__svg_element_rect(void* self, const char* elementId);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#hasElement)
///
/// @param self KSvg__Svg*
/// @param elementId const char*
///
bool k_svg__svg_has_element(void* self, const char* elementId);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#isValid)
///
/// @param self KSvg__Svg*
///
bool k_svg__svg_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setContainsMultipleImages)
///
/// @param self KSvg__Svg*
/// @param multiple bool
///
void k_svg__svg_set_contains_multiple_images(void* self, bool multiple);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#containsMultipleImages)
///
/// @param self KSvg__Svg*
///
bool k_svg__svg_contains_multiple_images(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setImagePath)
///
/// @param self KSvg__Svg*
/// @param svgFilePath const char*
///
void k_svg__svg_set_image_path(void* self, const char* svgFilePath);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setImagePath)
///
/// Allows for overriding the related default method
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, const char* svgFilePath)
///
void k_svg__svg_on_set_image_path(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setImagePath)
///
/// Base class method implementation
///
/// @param self KSvg__Svg*
/// @param svgFilePath const char*
///
void k_svg__svg_qbase_set_image_path(void* self, const char* svgFilePath);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePath)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSvg__Svg*
///
const char* k_svg__svg_image_path(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setUsingRenderingCache)
///
/// @param self KSvg__Svg*
/// @param useCache bool
///
void k_svg__svg_set_using_rendering_cache(void* self, bool useCache);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#isUsingRenderingCache)
///
/// @param self KSvg__Svg*
///
bool k_svg__svg_is_using_rendering_cache(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSet)
///
/// @param self KSvg__Svg*
///
bool k_svg__svg_from_current_image_set(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setImageSet)
///
/// @param self KSvg__Svg*
/// @param theme KSvg__ImageSet*
///
void k_svg__svg_set_image_set(void* self, void* theme);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSet)
///
/// @param self KSvg__Svg*
///
KSvg__ImageSet* k_svg__svg_image_set(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setStatus)
///
/// @param self KSvg__Svg*
/// @param status enum KSvg__Svg__Status
///
void k_svg__svg_set_status(void* self, int32_t status);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#status)
///
/// @param self KSvg__Svg*
///
/// @return enum KSvg__Svg__Status
///
int32_t k_svg__svg_status(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setColorSet)
///
/// @param self KSvg__Svg*
/// @param colorSet enum KSvg__Svg__ColorSet
///
void k_svg__svg_set_color_set(void* self, int32_t colorSet);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSet)
///
/// @param self KSvg__Svg*
///
/// @return enum KSvg__Svg__ColorSet
///
int32_t k_svg__svg_color_set(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#color)
///
/// @param self KSvg__Svg*
/// @param colorName enum KSvg__Svg__StyleSheetColor
///
QColor* k_svg__svg_color(void* self, int32_t colorName);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#setColor)
///
/// @param self KSvg__Svg*
/// @param colorName enum KSvg__Svg__StyleSheetColor
/// @param color QColor*
///
void k_svg__svg_set_color(void* self, int32_t colorName, void* color);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#clearColorOverrides)
///
/// @param self KSvg__Svg*
///
void k_svg__svg_clear_color_overrides(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
///
/// @param self KSvg__Svg*
///
void k_svg__svg_repaint_needed(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#repaintNeeded)
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self)
///
void k_svg__svg_on_repaint_needed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
///
/// @param self KSvg__Svg*
///
void k_svg__svg_size_changed(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#sizeChanged)
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self)
///
void k_svg__svg_on_size_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
///
/// @param self KSvg__Svg*
///
void k_svg__svg_image_path_changed(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imagePathChanged)
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self)
///
void k_svg__svg_on_image_path_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
///
/// @param self KSvg__Svg*
///
void k_svg__svg_color_hint_changed(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#colorHintChanged)
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self)
///
void k_svg__svg_on_color_hint_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
///
/// @param self KSvg__Svg*
/// @param fromCurrentImageSet bool
///
void k_svg__svg_from_current_image_set_changed(void* self, bool fromCurrentImageSet);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#fromCurrentImageSetChanged)
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, bool fromCurrentImageSet)
///
void k_svg__svg_on_from_current_image_set_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
///
/// @param self KSvg__Svg*
/// @param status enum KSvg__Svg__Status
///
void k_svg__svg_status_changed(void* self, int32_t status);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#statusChanged)
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, enum KSvg__Svg__Status status)
///
void k_svg__svg_on_status_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
///
/// @param self KSvg__Svg*
/// @param colorSet enum KSvg__Svg__ColorSet
///
void k_svg__svg_color_set_changed(void* self, int32_t colorSet);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#colorSetChanged)
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, enum KSvg__Svg__ColorSet colorSet)
///
void k_svg__svg_on_color_set_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
///
/// @param self KSvg__Svg*
/// @param imageSet KSvg__ImageSet*
///
void k_svg__svg_image_set_changed(void* self, void* imageSet);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#imageSetChanged)
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, KSvg__ImageSet* imageSet)
///
void k_svg__svg_on_image_set_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_svg__svg_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_svg__svg_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#pixmap)
///
/// @param self KSvg__Svg*
/// @param elementID const char*
///
QPixmap* k_svg__svg_pixmap1(void* self, const char* elementID);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#image)
///
/// @param self KSvg__Svg*
/// @param size QSize*
/// @param elementID const char*
///
QImage* k_svg__svg_image2(void* self, void* size, const char* elementID);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__Svg*
/// @param painter QPainter*
/// @param point QPointF*
/// @param elementID const char*
///
void k_svg__svg_paint32(void* self, void* painter, void* point, const char* elementID);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__Svg*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param elementID const char*
///
void k_svg__svg_paint42(void* self, void* painter, int x, int y, const char* elementID);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__Svg*
/// @param painter QPainter*
/// @param rect QRectF*
/// @param elementID const char*
///
void k_svg__svg_paint33(void* self, void* painter, void* rect, const char* elementID);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#paint)
///
/// @param self KSvg__Svg*
/// @param painter QPainter*
/// @param x int
/// @param y int
/// @param width int
/// @param height int
/// @param elementID const char*
///
void k_svg__svg_paint6(void* self, void* painter, int x, int y, int width, int height, const char* elementID);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KSvg__Svg*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_svg__svg_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self KSvg__Svg*
/// @param callback bool func(KSvg__Svg* self, QObject* watched, QEvent* event)
///
void k_svg__svg_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Base class method implementation
///
/// @param self KSvg__Svg*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_svg__svg_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSvg__Svg*
///
const char* k_svg__svg_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSvg__Svg*
/// @param name char*
///
void k_svg__svg_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSvg__Svg*
///
bool k_svg__svg_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSvg__Svg*
///
bool k_svg__svg_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSvg__Svg*
///
bool k_svg__svg_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSvg__Svg*
///
bool k_svg__svg_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSvg__Svg*
/// @param b bool
///
bool k_svg__svg_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSvg__Svg*
///
QThread* k_svg__svg_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSvg__Svg*
/// @param thread QThread*
///
bool k_svg__svg_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSvg__Svg*
/// @param interval int
///
int32_t k_svg__svg_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSvg__Svg*
/// @param id int
///
void k_svg__svg_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSvg__Svg*
/// @param id enum Qt__TimerId
///
void k_svg__svg_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSvg__Svg*
///
libqt_list /* of QObject* */ k_svg__svg_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSvg__Svg*
/// @param parent QObject*
///
void k_svg__svg_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSvg__Svg*
/// @param filterObj QObject*
///
void k_svg__svg_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSvg__Svg*
/// @param obj QObject*
///
void k_svg__svg_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_svg__svg_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSvg__Svg*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_svg__svg_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_svg__svg_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_svg__svg_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSvg__Svg*
///
void k_svg__svg_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSvg__Svg*
///
void k_svg__svg_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSvg__Svg*
/// @param name const char*
/// @param value QVariant*
///
bool k_svg__svg_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSvg__Svg*
/// @param name const char*
///
QVariant* k_svg__svg_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSvg__Svg*
///
const char** k_svg__svg_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSvg__Svg*
///
QBindingStorage* k_svg__svg_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSvg__Svg*
///
const QBindingStorage* k_svg__svg_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__Svg*
///
void k_svg__svg_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self)
///
void k_svg__svg_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSvg__Svg*
///
QObject* k_svg__svg_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSvg__Svg*
/// @param classname const char*
///
bool k_svg__svg_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSvg__Svg*
///
void k_svg__svg_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSvg__Svg*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_svg__svg_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSvg__Svg*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_svg__svg_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_svg__svg_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSvg__Svg*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_svg__svg_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__Svg*
/// @param param1 QObject*
///
void k_svg__svg_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, QObject* param1)
///
void k_svg__svg_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__Svg*
/// @param event QEvent*
///
bool k_svg__svg_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param event QEvent*
///
bool k_svg__svg_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param callback bool func(KSvg__Svg* self, QEvent* event)
///
void k_svg__svg_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__Svg*
/// @param event QTimerEvent*
///
void k_svg__svg_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param event QTimerEvent*
///
void k_svg__svg_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, QTimerEvent* event)
///
void k_svg__svg_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__Svg*
/// @param event QChildEvent*
///
void k_svg__svg_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param event QChildEvent*
///
void k_svg__svg_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, QChildEvent* event)
///
void k_svg__svg_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__Svg*
/// @param event QEvent*
///
void k_svg__svg_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param event QEvent*
///
void k_svg__svg_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, QEvent* event)
///
void k_svg__svg_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__Svg*
/// @param signal QMetaMethod*
///
void k_svg__svg_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param signal QMetaMethod*
///
void k_svg__svg_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, QMetaMethod* signal)
///
void k_svg__svg_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__Svg*
/// @param signal QMetaMethod*
///
void k_svg__svg_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param signal QMetaMethod*
///
void k_svg__svg_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, QMetaMethod* signal)
///
void k_svg__svg_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__Svg*
///
QObject* k_svg__svg_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__Svg*
///
QObject* k_svg__svg_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param callback QObject* func()
///
void k_svg__svg_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__Svg*
///
int32_t k_svg__svg_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__Svg*
///
int32_t k_svg__svg_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param callback int32_t func()
///
void k_svg__svg_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__Svg*
/// @param signal const char*
///
int32_t k_svg__svg_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param signal const char*
///
int32_t k_svg__svg_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param callback int32_t func(KSvg__Svg* self, const char* signal)
///
void k_svg__svg_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSvg__Svg*
/// @param signal QMetaMethod*
///
bool k_svg__svg_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param signal QMetaMethod*
///
bool k_svg__svg_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSvg__Svg*
/// @param callback bool func(KSvg__Svg* self, QMetaMethod* signal)
///
void k_svg__svg_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSvg__Svg*
/// @param callback void func(KSvg__Svg* self, const char* objectName)
///
void k_svg__svg_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KSvg__Svg*
///
void k_svg__svg_delete(void* self);

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#public-types)

typedef enum {
    KSVG_SVG_STATUS_NORMAL = 0,
    KSVG_SVG_STATUS_SELECTED = 1,
    KSVG_SVG_STATUS_INACTIVE = 2
} KSvg__Svg__Status;

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#public-types)

typedef enum {
    KSVG_SVG_COLORSET_VIEW = 0,
    KSVG_SVG_COLORSET_WINDOW = 1,
    KSVG_SVG_COLORSET_BUTTON = 2,
    KSVG_SVG_COLORSET_SELECTION = 3,
    KSVG_SVG_COLORSET_TOOLTIP = 4,
    KSVG_SVG_COLORSET_COMPLEMENTARY = 5,
    KSVG_SVG_COLORSET_HEADER = 6
} KSvg__Svg__ColorSet;

/// [Upstream resources](https://api.kde.org/ksvg-svg.html#public-types)

typedef enum {
    KSVG_SVG_STYLESHEETCOLOR_TEXT = 0,
    KSVG_SVG_STYLESHEETCOLOR_BACKGROUND = 1,
    KSVG_SVG_STYLESHEETCOLOR_HIGHLIGHT = 2,
    KSVG_SVG_STYLESHEETCOLOR_HIGHLIGHTEDTEXT = 3,
    KSVG_SVG_STYLESHEETCOLOR_POSITIVETEXT = 4,
    KSVG_SVG_STYLESHEETCOLOR_NEUTRALTEXT = 5,
    KSVG_SVG_STYLESHEETCOLOR_NEGATIVETEXT = 6,
    KSVG_SVG_STYLESHEETCOLOR_BUTTONTEXT = 7,
    KSVG_SVG_STYLESHEETCOLOR_BUTTONBACKGROUND = 8,
    KSVG_SVG_STYLESHEETCOLOR_BUTTONHOVER = 9,
    KSVG_SVG_STYLESHEETCOLOR_BUTTONFOCUS = 10,
    KSVG_SVG_STYLESHEETCOLOR_BUTTONHIGHLIGHTEDTEXT = 11,
    KSVG_SVG_STYLESHEETCOLOR_BUTTONPOSITIVETEXT = 12,
    KSVG_SVG_STYLESHEETCOLOR_BUTTONNEUTRALTEXT = 13,
    KSVG_SVG_STYLESHEETCOLOR_BUTTONNEGATIVETEXT = 14,
    KSVG_SVG_STYLESHEETCOLOR_VIEWTEXT = 15,
    KSVG_SVG_STYLESHEETCOLOR_VIEWBACKGROUND = 16,
    KSVG_SVG_STYLESHEETCOLOR_VIEWHOVER = 17,
    KSVG_SVG_STYLESHEETCOLOR_VIEWFOCUS = 18,
    KSVG_SVG_STYLESHEETCOLOR_VIEWHIGHLIGHTEDTEXT = 19,
    KSVG_SVG_STYLESHEETCOLOR_VIEWPOSITIVETEXT = 20,
    KSVG_SVG_STYLESHEETCOLOR_VIEWNEUTRALTEXT = 21,
    KSVG_SVG_STYLESHEETCOLOR_VIEWNEGATIVETEXT = 22,
    KSVG_SVG_STYLESHEETCOLOR_TOOLTIPTEXT = 23,
    KSVG_SVG_STYLESHEETCOLOR_TOOLTIPBACKGROUND = 24,
    KSVG_SVG_STYLESHEETCOLOR_TOOLTIPHOVER = 25,
    KSVG_SVG_STYLESHEETCOLOR_TOOLTIPFOCUS = 26,
    KSVG_SVG_STYLESHEETCOLOR_TOOLTIPHIGHLIGHTEDTEXT = 27,
    KSVG_SVG_STYLESHEETCOLOR_TOOLTIPPOSITIVETEXT = 28,
    KSVG_SVG_STYLESHEETCOLOR_TOOLTIPNEUTRALTEXT = 29,
    KSVG_SVG_STYLESHEETCOLOR_TOOLTIPNEGATIVETEXT = 30,
    KSVG_SVG_STYLESHEETCOLOR_COMPLEMENTARYTEXT = 31,
    KSVG_SVG_STYLESHEETCOLOR_COMPLEMENTARYBACKGROUND = 32,
    KSVG_SVG_STYLESHEETCOLOR_COMPLEMENTARYHOVER = 33,
    KSVG_SVG_STYLESHEETCOLOR_COMPLEMENTARYFOCUS = 34,
    KSVG_SVG_STYLESHEETCOLOR_COMPLEMENTARYHIGHLIGHTEDTEXT = 35,
    KSVG_SVG_STYLESHEETCOLOR_COMPLEMENTARYPOSITIVETEXT = 36,
    KSVG_SVG_STYLESHEETCOLOR_COMPLEMENTARYNEUTRALTEXT = 37,
    KSVG_SVG_STYLESHEETCOLOR_COMPLEMENTARYNEGATIVETEXT = 38,
    KSVG_SVG_STYLESHEETCOLOR_HEADERTEXT = 39,
    KSVG_SVG_STYLESHEETCOLOR_HEADERBACKGROUND = 40,
    KSVG_SVG_STYLESHEETCOLOR_HEADERHOVER = 41,
    KSVG_SVG_STYLESHEETCOLOR_HEADERFOCUS = 42,
    KSVG_SVG_STYLESHEETCOLOR_HEADERHIGHLIGHTEDTEXT = 43,
    KSVG_SVG_STYLESHEETCOLOR_HEADERPOSITIVETEXT = 44,
    KSVG_SVG_STYLESHEETCOLOR_HEADERNEUTRALTEXT = 45,
    KSVG_SVG_STYLESHEETCOLOR_HEADERNEGATIVETEXT = 46
} KSvg__Svg__StyleSheetColor;

#endif
