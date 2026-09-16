#pragma once
#ifndef QUICK_LIBQQUICKPAINTEDITEM_H
#define QUICK_LIBQQUICKPAINTEDITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html)

/// q_quickpainteditem_new constructs a new QQuickPaintedItem object.
///
QQuickPaintedItem* q_quickpainteditem_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html)

/// q_quickpainteditem_new2 constructs a new QQuickPaintedItem object.
///
/// @param parent QQuickItem*
///
QQuickPaintedItem* q_quickpainteditem_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickPaintedItem*
///
const QMetaObject* q_quickpainteditem_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickPaintedItem*
/// @param callback const QMetaObject* func()
///
void q_quickpainteditem_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickPaintedItem*
///
const QMetaObject* q_quickpainteditem_super_meta_object(void* self);

/// @param self QQuickPaintedItem*
/// @param param1 const char*
///
void* q_quickpainteditem_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickPaintedItem*
/// @param callback void* func(QQuickPaintedItem* self, const char* param1)
///
void q_quickpainteditem_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickPaintedItem*
/// @param param1 const char*
///
void* q_quickpainteditem_super_metacast(void* self, const char* param1);

/// @param self QQuickPaintedItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickpainteditem_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickPaintedItem*
/// @param callback int32_t func(QQuickPaintedItem* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickpainteditem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickPaintedItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickpainteditem_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickpainteditem_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#update)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#opaquePainting)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_opaque_painting(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setOpaquePainting)
///
/// @param self QQuickPaintedItem*
/// @param opaque bool
///
void q_quickpainteditem_set_opaque_painting(void* self, bool opaque);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#antialiasing)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_antialiasing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setAntialiasing)
///
/// @param self QQuickPaintedItem*
/// @param enable bool
///
void q_quickpainteditem_set_antialiasing(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#mipmap)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_mipmap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setMipmap)
///
/// @param self QQuickPaintedItem*
/// @param enable bool
///
void q_quickpainteditem_set_mipmap(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#performanceHints)
///
/// @param self QQuickPaintedItem*
///
/// @return flag of enum QQuickPaintedItem__PerformanceHint
///
int32_t q_quickpainteditem_performance_hints(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setPerformanceHint)
///
/// @param self QQuickPaintedItem*
/// @param hint enum QQuickPaintedItem__PerformanceHint
///
void q_quickpainteditem_set_performance_hint(void* self, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setPerformanceHints)
///
/// @param self QQuickPaintedItem*
/// @param hints flag of enum QQuickPaintedItem__PerformanceHint
///
void q_quickpainteditem_set_performance_hints(void* self, int32_t hints);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsBoundingRect)
///
/// @param self QQuickPaintedItem*
///
QRectF* q_quickpainteditem_contents_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsSize)
///
/// @param self QQuickPaintedItem*
///
QSize* q_quickpainteditem_contents_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setContentsSize)
///
/// @param self QQuickPaintedItem*
/// @param contentsSize QSize*
///
void q_quickpainteditem_set_contents_size(void* self, void* contentsSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#resetContentsSize)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_reset_contents_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsScale)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_contents_scale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setContentsScale)
///
/// @param self QQuickPaintedItem*
/// @param contentsScale double
///
void q_quickpainteditem_set_contents_scale(void* self, double contentsScale);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureSize)
///
/// @param self QQuickPaintedItem*
///
QSize* q_quickpainteditem_texture_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setTextureSize)
///
/// @param self QQuickPaintedItem*
/// @param size QSize*
///
void q_quickpainteditem_set_texture_size(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#fillColor)
///
/// @param self QQuickPaintedItem*
///
QColor* q_quickpainteditem_fill_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setFillColor)
///
/// @param self QQuickPaintedItem*
/// @param fillColor QColor*
///
void q_quickpainteditem_set_fill_color(void* self, void* fillColor);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#renderTarget)
///
/// @param self QQuickPaintedItem*
///
/// @return enum QQuickPaintedItem__RenderTarget
///
int32_t q_quickpainteditem_render_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setRenderTarget)
///
/// @param self QQuickPaintedItem*
/// @param target enum QQuickPaintedItem__RenderTarget
///
void q_quickpainteditem_set_render_target(void* self, int32_t target);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#paint)
///
/// @param self QQuickPaintedItem*
/// @param painter QPainter*
///
void q_quickpainteditem_paint(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QPainter* painter)
///
void q_quickpainteditem_on_paint(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#paint)
///
/// Base class method implementation
///
/// @param self QQuickPaintedItem*
/// @param painter QPainter*
///
void q_quickpainteditem_super_paint(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#isTextureProvider)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_is_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#isTextureProvider)
///
/// Allows for overriding the related default method
///
/// @param self QQuickPaintedItem*
/// @param callback bool func()
///
void q_quickpainteditem_on_is_texture_provider(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#isTextureProvider)
///
/// Base class method implementation
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_super_is_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureProvider)
///
/// @param self QQuickPaintedItem*
///
QSGTextureProvider* q_quickpainteditem_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureProvider)
///
/// Allows for overriding the related default method
///
/// @param self QQuickPaintedItem*
/// @param callback QSGTextureProvider* func()
///
void q_quickpainteditem_on_texture_provider(void* self, QSGTextureProvider* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureProvider)
///
/// Base class method implementation
///
/// @param self QQuickPaintedItem*
///
QSGTextureProvider* q_quickpainteditem_super_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#fillColorChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_fill_color_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#fillColorChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_fill_color_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsSizeChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_contents_size_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsSizeChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_contents_size_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsScaleChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_contents_scale_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#contentsScaleChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_contents_scale_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#renderTargetChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_render_target_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#renderTargetChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_render_target_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureSizeChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_texture_size_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#textureSizeChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_texture_size_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#updatePaintNode)
///
/// @param self QQuickPaintedItem*
/// @param param1 QSGNode*
/// @param param2 QQuickItem__UpdatePaintNodeData*
///
QSGNode* q_quickpainteditem_update_paint_node(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#updatePaintNode)
///
/// Allows for overriding the related default method
///
/// @param self QQuickPaintedItem*
/// @param callback QSGNode* func(QQuickPaintedItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2)
///
void q_quickpainteditem_on_update_paint_node(void* self, QSGNode* (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#updatePaintNode)
///
/// Base class method implementation
///
/// @param self QQuickPaintedItem*
/// @param param1 QSGNode*
/// @param param2 QQuickItem__UpdatePaintNodeData*
///
QSGNode* q_quickpainteditem_super_update_paint_node(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#releaseResources)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_release_resources(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#releaseResources)
///
/// Allows for overriding the related default method
///
/// @param self QQuickPaintedItem*
/// @param callback void func()
///
void q_quickpainteditem_on_release_resources(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#releaseResources)
///
/// Base class method implementation
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_super_release_resources(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#itemChange)
///
/// @param self QQuickPaintedItem*
/// @param param1 enum QQuickItem__ItemChange
/// @param param2 QQuickItem__ItemChangeData*
///
void q_quickpainteditem_item_change(void* self, int32_t param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#itemChange)
///
/// Allows for overriding the related default method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, enum QQuickItem__ItemChange param1, QQuickItem__ItemChangeData* param2)
///
void q_quickpainteditem_on_item_change(void* self, void (*callback)(void*, int32_t, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#itemChange)
///
/// Base class method implementation
///
/// @param self QQuickPaintedItem*
/// @param param1 enum QQuickItem__ItemChange
/// @param param2 QQuickItem__ItemChangeData*
///
void q_quickpainteditem_super_item_change(void* self, int32_t param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickpainteditem_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickpainteditem_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#update)
///
/// @param self QQuickPaintedItem*
/// @param rect QRect*
///
void q_quickpainteditem_update1(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#setPerformanceHint)
///
/// @param self QQuickPaintedItem*
/// @param hint enum QQuickPaintedItem__PerformanceHint
/// @param enabled bool
///
void q_quickpainteditem_set_performance_hint2(void* self, int32_t hint, bool enabled);

/// Inherited from QQuickItem
///
/// Upcasts to a QQmlParserStatus object
///
/// @param self QQuickPaintedItem*
///
QQmlParserStatus* q_quickpainteditem_as_q_qml_parser_status(void* self);

/// Inherited from QQuickItem
///
/// Downcasts to a QQuickPaintedItem object
///
/// @param _qqmlparserstatus QQmlParserStatus*
///
QQuickPaintedItem* q_quickpainteditem_from_q_qml_parser_status(void* _qqmlparserstatus);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#window)
///
/// @param self QQuickPaintedItem*
///
QQuickWindow* q_quickpainteditem_window(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentItem)
///
/// @param self QQuickPaintedItem*
///
QQuickItem* q_quickpainteditem_parent_item(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setParentItem)
///
/// @param self QQuickPaintedItem*
/// @param parent QQuickItem*
///
void q_quickpainteditem_set_parent_item(void* self, void* parent);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackBefore)
///
/// @param self QQuickPaintedItem*
/// @param param1 QQuickItem*
///
void q_quickpainteditem_stack_before(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackAfter)
///
/// @param self QQuickPaintedItem*
/// @param param1 QQuickItem*
///
void q_quickpainteditem_stack_after(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRect)
///
/// @param self QQuickPaintedItem*
///
QRectF* q_quickpainteditem_children_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childItems)
///
/// @param self QQuickPaintedItem*
///
/// @return libqt_list of QQuickItem*
///
libqt_list q_quickpainteditem_child_items(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clip)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_clip(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setClip)
///
/// @param self QQuickPaintedItem*
/// @param clip bool
///
void q_quickpainteditem_set_clip(void* self, bool clip);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#state)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickPaintedItem*
///
const char* q_quickpainteditem_state(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setState)
///
/// @param self QQuickPaintedItem*
/// @param state const char*
///
void q_quickpainteditem_set_state(void* self, const char* state);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffset)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_baseline_offset(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setBaselineOffset)
///
/// @param self QQuickPaintedItem*
/// @param baselineOffset double
///
void q_quickpainteditem_set_baseline_offset(void* self, double baselineOffset);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#x)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_x(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#y)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_y(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#position)
///
/// @param self QQuickPaintedItem*
///
QPointF* q_quickpainteditem_position(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setX)
///
/// @param self QQuickPaintedItem*
/// @param x double
///
void q_quickpainteditem_set_x(void* self, double x);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setY)
///
/// @param self QQuickPaintedItem*
/// @param y double
///
void q_quickpainteditem_set_y(void* self, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setPosition)
///
/// @param self QQuickPaintedItem*
/// @param position QPointF*
///
void q_quickpainteditem_set_position(void* self, void* position);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#width)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_width(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setWidth)
///
/// @param self QQuickPaintedItem*
/// @param width double
///
void q_quickpainteditem_set_width(void* self, double width);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetWidth)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_reset_width(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitWidth)
///
/// @param self QQuickPaintedItem*
/// @param implicitWidth double
///
void q_quickpainteditem_set_implicit_width(void* self, double implicitWidth);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidth)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_implicit_width(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#height)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_height(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setHeight)
///
/// @param self QQuickPaintedItem*
/// @param height double
///
void q_quickpainteditem_set_height(void* self, double height);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetHeight)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_reset_height(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitHeight)
///
/// @param self QQuickPaintedItem*
/// @param implicitHeight double
///
void q_quickpainteditem_set_implicit_height(void* self, double implicitHeight);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeight)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_implicit_height(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#size)
///
/// @param self QQuickPaintedItem*
///
QSizeF* q_quickpainteditem_size(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSize)
///
/// @param self QQuickPaintedItem*
/// @param size QSizeF*
///
void q_quickpainteditem_set_size(void* self, void* size);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOrigin)
///
/// @param self QQuickPaintedItem*
///
/// @return enum QQuickItem__TransformOrigin
///
int32_t q_quickpainteditem_transform_origin(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOrigin)
///
/// @param self QQuickPaintedItem*
/// @param transformOrigin enum QQuickItem__TransformOrigin
///
void q_quickpainteditem_set_transform_origin(void* self, int32_t transformOrigin);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginPoint)
///
/// @param self QQuickPaintedItem*
///
QPointF* q_quickpainteditem_transform_origin_point(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOriginPoint)
///
/// @param self QQuickPaintedItem*
/// @param transformOriginPoint QPointF*
///
void q_quickpainteditem_set_transform_origin_point(void* self, void* transformOriginPoint);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#z)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_z(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setZ)
///
/// @param self QQuickPaintedItem*
/// @param z double
///
void q_quickpainteditem_set_z(void* self, double z);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotation)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_rotation(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setRotation)
///
/// @param self QQuickPaintedItem*
/// @param rotation double
///
void q_quickpainteditem_set_rotation(void* self, double rotation);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scale)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_scale(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setScale)
///
/// @param self QQuickPaintedItem*
/// @param scale double
///
void q_quickpainteditem_set_scale(void* self, double scale);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacity)
///
/// @param self QQuickPaintedItem*
///
double q_quickpainteditem_opacity(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setOpacity)
///
/// @param self QQuickPaintedItem*
/// @param opacity double
///
void q_quickpainteditem_set_opacity(void* self, double opacity);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isVisible)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_is_visible(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setVisible)
///
/// @param self QQuickPaintedItem*
/// @param visible bool
///
void q_quickpainteditem_set_visible(void* self, bool visible);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isEnabled)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_is_enabled(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setEnabled)
///
/// @param self QQuickPaintedItem*
/// @param enabled bool
///
void q_quickpainteditem_set_enabled(void* self, bool enabled);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smooth)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_smooth(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSmooth)
///
/// @param self QQuickPaintedItem*
/// @param smooth bool
///
void q_quickpainteditem_set_smooth(void* self, bool smooth);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTab)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_active_focus_on_tab(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setActiveFocusOnTab)
///
/// @param self QQuickPaintedItem*
/// @param activeFocusOnTab bool
///
void q_quickpainteditem_set_active_focus_on_tab(void* self, bool activeFocusOnTab);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetAntialiasing)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_reset_antialiasing(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#flags)
///
/// @param self QQuickPaintedItem*
///
/// @return flag of enum QQuickItem__Flag
///
int32_t q_quickpainteditem_flags(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
///
/// @param self QQuickPaintedItem*
/// @param flag enum QQuickItem__Flag
///
void q_quickpainteditem_set_flag(void* self, int32_t flag);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlags)
///
/// @param self QQuickPaintedItem*
/// @param flags flag of enum QQuickItem__Flag
///
void q_quickpainteditem_set_flags(void* self, int32_t flags);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#viewportItem)
///
/// @param self QQuickPaintedItem*
///
QQuickItem* q_quickpainteditem_viewport_item(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasActiveFocus)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_has_active_focus(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasFocus)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_has_focus(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
///
/// @param self QQuickPaintedItem*
/// @param focus bool
///
void q_quickpainteditem_set_focus(void* self, bool focus);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
///
/// @param self QQuickPaintedItem*
/// @param focus bool
/// @param reason enum Qt__FocusReason
///
void q_quickpainteditem_set_focus2(void* self, bool focus, int32_t reason);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isFocusScope)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_is_focus_scope(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scopedFocusItem)
///
/// @param self QQuickPaintedItem*
///
QQuickItem* q_quickpainteditem_scoped_focus_item(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicy)
///
/// @param self QQuickPaintedItem*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_quickpainteditem_focus_policy(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocusPolicy)
///
/// @param self QQuickPaintedItem*
/// @param policy enum Qt__FocusPolicy
///
void q_quickpainteditem_set_focus_policy(void* self, int32_t policy);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isAncestorOf)
///
/// @param self QQuickPaintedItem*
/// @param child QQuickItem*
///
bool q_quickpainteditem_is_ancestor_of(void* self, void* child);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptedMouseButtons)
///
/// @param self QQuickPaintedItem*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_quickpainteditem_accepted_mouse_buttons(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptedMouseButtons)
///
/// @param self QQuickPaintedItem*
/// @param buttons flag of enum Qt__MouseButton
///
void q_quickpainteditem_set_accepted_mouse_buttons(void* self, int32_t buttons);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptHoverEvents)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_accept_hover_events(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptHoverEvents)
///
/// @param self QQuickPaintedItem*
/// @param enabled bool
///
void q_quickpainteditem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptTouchEvents)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_accept_touch_events(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptTouchEvents)
///
/// @param self QQuickPaintedItem*
/// @param accept bool
///
void q_quickpainteditem_set_accept_touch_events(void* self, bool accept);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#cursor)
///
/// @param self QQuickPaintedItem*
///
QCursor* q_quickpainteditem_cursor(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setCursor)
///
/// @param self QQuickPaintedItem*
/// @param cursor QCursor*
///
void q_quickpainteditem_set_cursor(void* self, void* cursor);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#unsetCursor)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_unset_cursor(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isUnderMouse)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_is_under_mouse(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabMouse)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_grab_mouse(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabMouse)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_ungrab_mouse(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepMouseGrab)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_keep_mouse_grab(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepMouseGrab)
///
/// @param self QQuickPaintedItem*
/// @param keepMouseGrab bool
///
void q_quickpainteditem_set_keep_mouse_grab(void* self, bool keepMouseGrab);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#filtersChildMouseEvents)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_filters_child_mouse_events(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFiltersChildMouseEvents)
///
/// @param self QQuickPaintedItem*
/// @param filter bool
///
void q_quickpainteditem_set_filters_child_mouse_events(void* self, bool filter);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabTouchPoints)
///
/// @param self QQuickPaintedItem*
/// @param ids libqt_list of int
///
void q_quickpainteditem_grab_touch_points(void* self, libqt_list ids);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabTouchPoints)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_ungrab_touch_points(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepTouchGrab)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_keep_touch_grab(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepTouchGrab)
///
/// @param self QQuickPaintedItem*
/// @param keepTouchGrab bool
///
void q_quickpainteditem_set_keep_touch_grab(void* self, bool keepTouchGrab);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
///
/// @param self QQuickPaintedItem*
/// @param callback QJSValue*
///
bool q_quickpainteditem_grab_to_image(void* self, void* callback);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMask)
///
/// @param self QQuickPaintedItem*
///
QObject* q_quickpainteditem_containment_mask(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setContainmentMask)
///
/// @param self QQuickPaintedItem*
/// @param mask QObject*
///
void q_quickpainteditem_set_containment_mask(void* self, void* mask);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemTransform)
///
/// @param self QQuickPaintedItem*
/// @param param1 QQuickItem*
/// @param param2 bool*
///
QTransform* q_quickpainteditem_item_transform(void* self, void* param1, bool* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToScene)
///
/// @param self QQuickPaintedItem*
/// @param point QPointF*
///
QPointF* q_quickpainteditem_map_to_scene(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToItem)
///
/// @param self QQuickPaintedItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickpainteditem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToScene)
///
/// @param self QQuickPaintedItem*
/// @param rect QRectF*
///
QRectF* q_quickpainteditem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromScene)
///
/// @param self QQuickPaintedItem*
/// @param point QPointF*
///
QPointF* q_quickpainteditem_map_from_scene(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromItem)
///
/// @param self QQuickPaintedItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickpainteditem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromScene)
///
/// @param self QQuickPaintedItem*
/// @param rect QRectF*
///
QRectF* q_quickpainteditem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#polish)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_polish(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickPaintedItem*
/// @param item QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickpainteditem_map_from_item2(void* self, void* item, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickPaintedItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
///
QPointF* q_quickpainteditem_map_from_item3(void* self, void* item, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickPaintedItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickpainteditem_map_from_item4(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickPaintedItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
QRectF* q_quickpainteditem_map_from_item5(void* self, void* item, double x, double y, double width, double height);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickPaintedItem*
/// @param item QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickpainteditem_map_to_item2(void* self, void* item, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickPaintedItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
///
QPointF* q_quickpainteditem_map_to_item3(void* self, void* item, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickPaintedItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickpainteditem_map_to_item4(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickPaintedItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
QRectF* q_quickpainteditem_map_to_item5(void* self, void* item, double x, double y, double width, double height);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
///
/// @param self QQuickPaintedItem*
/// @param x double
/// @param y double
///
QPointF* q_quickpainteditem_map_from_global2(void* self, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
///
/// @param self QQuickPaintedItem*
/// @param point QPointF*
///
QPointF* q_quickpainteditem_map_from_global3(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
///
/// @param self QQuickPaintedItem*
/// @param x double
/// @param y double
///
QPointF* q_quickpainteditem_map_to_global2(void* self, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
///
/// @param self QQuickPaintedItem*
/// @param point QPointF*
///
QPointF* q_quickpainteditem_map_to_global3(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_force_active_focus(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
///
/// @param self QQuickPaintedItem*
/// @param reason enum Qt__FocusReason
///
void q_quickpainteditem_force_active_focus2(void* self, int32_t reason);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
///
/// @param self QQuickPaintedItem*
///
QQuickItem* q_quickpainteditem_next_item_in_focus_chain(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childAt)
///
/// @param self QQuickPaintedItem*
/// @param x double
/// @param y double
///
QQuickItem* q_quickpainteditem_child_at(void* self, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ensurePolished)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_ensure_polished(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dumpItemTree)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_dump_item_tree(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 QRectF*
///
void q_quickpainteditem_children_rect_changed(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QRectF* param1)
///
void q_quickpainteditem_on_children_rect_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 double
///
void q_quickpainteditem_baseline_offset_changed(void* self, double param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, double param1)
///
void q_quickpainteditem_on_baseline_offset_changed(void* self, void (*callback)(void*, double));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 const char*
///
void q_quickpainteditem_state_changed(void* self, const char* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, const char* param1)
///
void q_quickpainteditem_on_state_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 bool
///
void q_quickpainteditem_focus_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, bool param1)
///
void q_quickpainteditem_on_focus_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 bool
///
void q_quickpainteditem_active_focus_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, bool param1)
///
void q_quickpainteditem_on_active_focus_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 enum Qt__FocusPolicy
///
void q_quickpainteditem_focus_policy_changed(void* self, int32_t param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, enum Qt__FocusPolicy param1)
///
void q_quickpainteditem_on_focus_policy_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 bool
///
void q_quickpainteditem_active_focus_on_tab_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, bool param1)
///
void q_quickpainteditem_on_active_focus_on_tab_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 QQuickItem*
///
void q_quickpainteditem_parent_changed(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QQuickItem* param1)
///
void q_quickpainteditem_on_parent_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 enum QQuickItem__TransformOrigin
///
void q_quickpainteditem_transform_origin_changed(void* self, int32_t param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, enum QQuickItem__TransformOrigin param1)
///
void q_quickpainteditem_on_transform_origin_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 bool
///
void q_quickpainteditem_smooth_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, bool param1)
///
void q_quickpainteditem_on_smooth_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 bool
///
void q_quickpainteditem_antialiasing_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, bool param1)
///
void q_quickpainteditem_on_antialiasing_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
///
/// @param self QQuickPaintedItem*
/// @param param1 bool
///
void q_quickpainteditem_clip_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, bool param1)
///
void q_quickpainteditem_on_clip_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
///
/// @param self QQuickPaintedItem*
/// @param window QQuickWindow*
///
void q_quickpainteditem_window_changed(void* self, void* window);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QQuickWindow* window)
///
void q_quickpainteditem_on_window_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_children_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_opacity_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_enabled_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_enabled_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_visible_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_visible_children_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_visible_children_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_rotation_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_rotation_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_scale_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_scale_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_x_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_x_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_y_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_y_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_width_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_width_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_height_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_height_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_z_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_z_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_implicit_width_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_implicit_width_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_implicit_height_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_implicit_height_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_containment_mask_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_containment_mask_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_palette_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_palette_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_palette_created(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_palette_created(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
///
/// @param self QQuickPaintedItem*
/// @param flag enum QQuickItem__Flag
/// @param enabled bool
///
void q_quickpainteditem_set_flag2(void* self, int32_t flag, bool enabled);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
///
/// @param self QQuickPaintedItem*
/// @param callback QJSValue*
/// @param targetSize QSize*
///
bool q_quickpainteditem_grab_to_image22(void* self, void* callback, void* targetSize);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
///
/// @param self QQuickPaintedItem*
/// @param forward bool
///
QQuickItem* q_quickpainteditem_next_item_in_focus_chain1(void* self, bool forward);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickPaintedItem*
///
const char* q_quickpainteditem_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickPaintedItem*
/// @param name const char*
///
void q_quickpainteditem_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickPaintedItem*
/// @param b bool
///
bool q_quickpainteditem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickPaintedItem*
///
QThread* q_quickpainteditem_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickPaintedItem*
/// @param thread QThread*
///
bool q_quickpainteditem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickPaintedItem*
/// @param interval int
///
int32_t q_quickpainteditem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickPaintedItem*
/// @param time int64_t of nanoseconds
///
int32_t q_quickpainteditem_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickPaintedItem*
/// @param id int
///
void q_quickpainteditem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickPaintedItem*
/// @param id enum Qt__TimerId
///
void q_quickpainteditem_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickPaintedItem*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickpainteditem_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickPaintedItem*
/// @param parent QObject*
///
void q_quickpainteditem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickPaintedItem*
/// @param filterObj QObject*
///
void q_quickpainteditem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickPaintedItem*
/// @param obj QObject*
///
void q_quickpainteditem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickpainteditem_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickpainteditem_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickPaintedItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickpainteditem_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickpainteditem_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickpainteditem_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickPaintedItem*
/// @param receiver QObject*
///
bool q_quickpainteditem_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickpainteditem_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickPaintedItem*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickpainteditem_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickPaintedItem*
/// @param name const char*
///
QVariant* q_quickpainteditem_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickPaintedItem*
///
const char** q_quickpainteditem_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickPaintedItem*
///
QBindingStorage* q_quickpainteditem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickPaintedItem*
///
const QBindingStorage* q_quickpainteditem_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self)
///
void q_quickpainteditem_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickPaintedItem*
///
QObject* q_quickpainteditem_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickPaintedItem*
/// @param classname const char*
///
bool q_quickpainteditem_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickPaintedItem*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickpainteditem_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickPaintedItem*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickpainteditem_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickpainteditem_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quickpainteditem_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickPaintedItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickpainteditem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickPaintedItem*
/// @param signal const char*
///
bool q_quickpainteditem_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickPaintedItem*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickpainteditem_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickPaintedItem*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickpainteditem_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickPaintedItem*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickpainteditem_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickPaintedItem*
/// @param param1 QObject*
///
void q_quickpainteditem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QObject* param1)
///
void q_quickpainteditem_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
QRectF* q_quickpainteditem_bounding_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
QRectF* q_quickpainteditem_super_bounding_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback QRectF* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickpainteditem_on_bounding_rect(void* self, QRectF* (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
QRectF* q_quickpainteditem_clip_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
QRectF* q_quickpainteditem_super_clip_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback QRectF* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickpainteditem_on_clip_rect(void* self, QRectF* (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param point QPointF*
///
bool q_quickpainteditem_contains(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param point QPointF*
///
bool q_quickpainteditem_super_contains(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback bool func(QQuickPaintedItem* self, QPointF* point)
///
void q_quickpainteditem_on_contains(void* self, bool (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_quickpainteditem_input_method_query(void* self, int32_t query);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_quickpainteditem_super_input_method_query(void* self, int32_t query);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback QVariant* func(QQuickPaintedItem* self, enum Qt__InputMethodQuery query)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickpainteditem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QEvent*
///
bool q_quickpainteditem_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QEvent*
///
bool q_quickpainteditem_super_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback bool func(QQuickPaintedItem* self, QEvent* param1)
///
void q_quickpainteditem_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param newGeometry QRectF*
/// @param oldGeometry QRectF*
///
void q_quickpainteditem_geometry_change(void* self, void* newGeometry, void* oldGeometry);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param newGeometry QRectF*
/// @param oldGeometry QRectF*
///
void q_quickpainteditem_super_geometry_change(void* self, void* newGeometry, void* oldGeometry);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#geometryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QRectF* newGeometry, QRectF* oldGeometry)
///
void q_quickpainteditem_on_geometry_change(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_class_begin(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_super_class_begin(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func()
///
void q_quickpainteditem_on_class_begin(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_super_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func()
///
void q_quickpainteditem_on_component_complete(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QKeyEvent*
///
void q_quickpainteditem_key_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QKeyEvent*
///
void q_quickpainteditem_super_key_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QKeyEvent* event)
///
void q_quickpainteditem_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QKeyEvent*
///
void q_quickpainteditem_key_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QKeyEvent*
///
void q_quickpainteditem_super_key_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QKeyEvent* event)
///
void q_quickpainteditem_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QInputMethodEvent*
///
void q_quickpainteditem_input_method_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QInputMethodEvent*
///
void q_quickpainteditem_super_input_method_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QInputMethodEvent* param1)
///
void q_quickpainteditem_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QFocusEvent*
///
void q_quickpainteditem_focus_in_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QFocusEvent*
///
void q_quickpainteditem_super_focus_in_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QFocusEvent* param1)
///
void q_quickpainteditem_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QFocusEvent*
///
void q_quickpainteditem_focus_out_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QFocusEvent*
///
void q_quickpainteditem_super_focus_out_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QFocusEvent* param1)
///
void q_quickpainteditem_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QMouseEvent*
///
void q_quickpainteditem_mouse_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QMouseEvent*
///
void q_quickpainteditem_super_mouse_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QMouseEvent* event)
///
void q_quickpainteditem_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QMouseEvent*
///
void q_quickpainteditem_mouse_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QMouseEvent*
///
void q_quickpainteditem_super_mouse_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QMouseEvent* event)
///
void q_quickpainteditem_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QMouseEvent*
///
void q_quickpainteditem_mouse_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QMouseEvent*
///
void q_quickpainteditem_super_mouse_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QMouseEvent* event)
///
void q_quickpainteditem_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QMouseEvent*
///
void q_quickpainteditem_mouse_double_click_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QMouseEvent*
///
void q_quickpainteditem_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QMouseEvent* event)
///
void q_quickpainteditem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_mouse_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_super_mouse_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func()
///
void q_quickpainteditem_on_mouse_ungrab_event(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_touch_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_super_touch_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func()
///
void q_quickpainteditem_on_touch_ungrab_event(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QWheelEvent*
///
void q_quickpainteditem_wheel_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QWheelEvent*
///
void q_quickpainteditem_super_wheel_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QWheelEvent* event)
///
void q_quickpainteditem_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QTouchEvent*
///
void q_quickpainteditem_touch_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QTouchEvent*
///
void q_quickpainteditem_super_touch_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QTouchEvent* event)
///
void q_quickpainteditem_on_touch_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QHoverEvent*
///
void q_quickpainteditem_hover_enter_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QHoverEvent*
///
void q_quickpainteditem_super_hover_enter_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QHoverEvent* event)
///
void q_quickpainteditem_on_hover_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QHoverEvent*
///
void q_quickpainteditem_hover_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QHoverEvent*
///
void q_quickpainteditem_super_hover_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QHoverEvent* event)
///
void q_quickpainteditem_on_hover_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QHoverEvent*
///
void q_quickpainteditem_hover_leave_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QHoverEvent*
///
void q_quickpainteditem_super_hover_leave_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QHoverEvent* event)
///
void q_quickpainteditem_on_hover_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QDragEnterEvent*
///
void q_quickpainteditem_drag_enter_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QDragEnterEvent*
///
void q_quickpainteditem_super_drag_enter_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QDragEnterEvent* param1)
///
void q_quickpainteditem_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QDragMoveEvent*
///
void q_quickpainteditem_drag_move_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QDragMoveEvent*
///
void q_quickpainteditem_super_drag_move_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QDragMoveEvent* param1)
///
void q_quickpainteditem_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QDragLeaveEvent*
///
void q_quickpainteditem_drag_leave_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QDragLeaveEvent*
///
void q_quickpainteditem_super_drag_leave_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QDragLeaveEvent* param1)
///
void q_quickpainteditem_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QDropEvent*
///
void q_quickpainteditem_drop_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QDropEvent*
///
void q_quickpainteditem_super_drop_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QDropEvent* param1)
///
void q_quickpainteditem_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QQuickItem*
/// @param param2 QEvent*
///
bool q_quickpainteditem_child_mouse_event_filter(void* self, void* param1, void* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 QQuickItem*
/// @param param2 QEvent*
///
bool q_quickpainteditem_super_child_mouse_event_filter(void* self, void* param1, void* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback bool func(QQuickPaintedItem* self, QQuickItem* param1, QEvent* param2)
///
void q_quickpainteditem_on_child_mouse_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_update_polish(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_super_update_polish(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func()
///
void q_quickpainteditem_on_update_polish(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickpainteditem_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickpainteditem_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback bool func(QQuickPaintedItem* self, QObject* watched, QEvent* event)
///
void q_quickpainteditem_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QTimerEvent*
///
void q_quickpainteditem_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QTimerEvent*
///
void q_quickpainteditem_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QTimerEvent* event)
///
void q_quickpainteditem_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QChildEvent*
///
void q_quickpainteditem_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QChildEvent*
///
void q_quickpainteditem_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QChildEvent* event)
///
void q_quickpainteditem_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QEvent*
///
void q_quickpainteditem_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param event QEvent*
///
void q_quickpainteditem_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QEvent* event)
///
void q_quickpainteditem_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param signal QMetaMethod*
///
void q_quickpainteditem_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param signal QMetaMethod*
///
void q_quickpainteditem_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QMetaMethod* signal)
///
void q_quickpainteditem_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param signal QMetaMethod*
///
void q_quickpainteditem_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param signal QMetaMethod*
///
void q_quickpainteditem_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, QMetaMethod* signal)
///
void q_quickpainteditem_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_is_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_super_is_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback bool func()
///
void q_quickpainteditem_on_is_component_complete(void* self, bool (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_update_input_method(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_super_update_input_method(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func()
///
void q_quickpainteditem_on_update_input_method(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_width_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_super_width_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback bool func()
///
void q_quickpainteditem_on_width_valid(void* self, bool (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_height_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
bool q_quickpainteditem_super_height_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback bool func()
///
void q_quickpainteditem_on_height_valid(void* self, bool (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 double
/// @param param2 double
///
void q_quickpainteditem_set_implicit_size(void* self, double param1, double param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param param1 double
/// @param param2 double
///
void q_quickpainteditem_super_set_implicit_size(void* self, double param1, double param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, double param1, double param2)
///
void q_quickpainteditem_on_set_implicit_size(void* self, void (*callback)(void*, double, double));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
QObject* q_quickpainteditem_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
QObject* q_quickpainteditem_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback QObject* func()
///
void q_quickpainteditem_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
///
int32_t q_quickpainteditem_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
///
int32_t q_quickpainteditem_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback int32_t func()
///
void q_quickpainteditem_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param signal const char*
///
int32_t q_quickpainteditem_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param signal const char*
///
int32_t q_quickpainteditem_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback int32_t func(QQuickPaintedItem* self, const char* signal)
///
void q_quickpainteditem_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param signal QMetaMethod*
///
bool q_quickpainteditem_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param signal QMetaMethod*
///
bool q_quickpainteditem_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickPaintedItem*
/// @param callback bool func(QQuickPaintedItem* self, QMetaMethod* signal)
///
void q_quickpainteditem_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickPaintedItem*
/// @param callback void func(QQuickPaintedItem* self, const char* objectName)
///
void q_quickpainteditem_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#dtor.QQuickPaintedItem)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickPaintedItem*
///
void q_quickpainteditem_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#public-types)

typedef enum {
    QQUICKPAINTEDITEM_RENDERTARGET_IMAGE = 0,
    QQUICKPAINTEDITEM_RENDERTARGET_FRAMEBUFFEROBJECT = 1,
    QQUICKPAINTEDITEM_RENDERTARGET_INVERTEDYFRAMEBUFFEROBJECT = 2
} QQuickPaintedItem__RenderTarget;

/// [Upstream resources](https://doc.qt.io/qt-6/qquickpainteditem.html#public-types)

typedef enum {
    QQUICKPAINTEDITEM_PERFORMANCEHINT_FASTFBORESIZING = 1
} QQuickPaintedItem__PerformanceHint;

#endif
