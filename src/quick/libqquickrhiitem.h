#pragma once
#ifndef QUICK_LIBQQUICKRHIITEM_H
#define QUICK_LIBQQUICKRHIITEM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitemrenderer.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitemrenderer.html#dtor.QQuickRhiItemRenderer)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickRhiItemRenderer*
///
void q_quickrhiitemrenderer_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html)

/// q_quickrhiitem_new constructs a new QQuickRhiItem object.
///
QQuickRhiItem* q_quickrhiitem_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html)

/// q_quickrhiitem_new2 constructs a new QQuickRhiItem object.
///
/// @param parent QQuickItem*
///
QQuickRhiItem* q_quickrhiitem_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickRhiItem*
///
const QMetaObject* q_quickrhiitem_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback const QMetaObject* func()
///
void q_quickrhiitem_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickRhiItem*
///
const QMetaObject* q_quickrhiitem_super_meta_object(void* self);

/// @param self QQuickRhiItem*
/// @param param1 const char*
///
void* q_quickrhiitem_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback void* func(QQuickRhiItem* self, const char* param1)
///
void q_quickrhiitem_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickRhiItem*
/// @param param1 const char*
///
void* q_quickrhiitem_super_metacast(void* self, const char* param1);

/// @param self QQuickRhiItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickrhiitem_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback int32_t func(QQuickRhiItem* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickrhiitem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickRhiItem*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickrhiitem_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickrhiitem_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#sampleCount)
///
/// @param self QQuickRhiItem*
///
int32_t q_quickrhiitem_sample_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setSampleCount)
///
/// @param self QQuickRhiItem*
/// @param samples int
///
void q_quickrhiitem_set_sample_count(void* self, int samples);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#colorBufferFormat)
///
/// @param self QQuickRhiItem*
///
/// @return enum QQuickRhiItem__TextureFormat
///
int32_t q_quickrhiitem_color_buffer_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setColorBufferFormat)
///
/// @param self QQuickRhiItem*
/// @param format enum QQuickRhiItem__TextureFormat
///
void q_quickrhiitem_set_color_buffer_format(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isMirrorVerticallyEnabled)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_is_mirror_vertically_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setMirrorVertically)
///
/// @param self QQuickRhiItem*
/// @param enable bool
///
void q_quickrhiitem_set_mirror_vertically(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#alphaBlending)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_alpha_blending(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setAlphaBlending)
///
/// @param self QQuickRhiItem*
/// @param enable bool
///
void q_quickrhiitem_set_alpha_blending(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferWidth)
///
/// @param self QQuickRhiItem*
///
int32_t q_quickrhiitem_fixed_color_buffer_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setFixedColorBufferWidth)
///
/// @param self QQuickRhiItem*
/// @param width int
///
void q_quickrhiitem_set_fixed_color_buffer_width(void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferHeight)
///
/// @param self QQuickRhiItem*
///
int32_t q_quickrhiitem_fixed_color_buffer_height(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setFixedColorBufferHeight)
///
/// @param self QQuickRhiItem*
/// @param height int
///
void q_quickrhiitem_set_fixed_color_buffer_height(void* self, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#effectiveColorBufferSize)
///
/// @param self QQuickRhiItem*
///
QSize* q_quickrhiitem_effective_color_buffer_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isTextureProvider)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_is_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isTextureProvider)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback bool func()
///
void q_quickrhiitem_on_is_texture_provider(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isTextureProvider)
///
/// Base class method implementation
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_super_is_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#textureProvider)
///
/// @param self QQuickRhiItem*
///
QSGTextureProvider* q_quickrhiitem_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#textureProvider)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback QSGTextureProvider* func()
///
void q_quickrhiitem_on_texture_provider(void* self, QSGTextureProvider* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#textureProvider)
///
/// Base class method implementation
///
/// @param self QQuickRhiItem*
///
QSGTextureProvider* q_quickrhiitem_super_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#sampleCountChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_sample_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#sampleCountChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_sample_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#colorBufferFormatChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_color_buffer_format_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#colorBufferFormatChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_color_buffer_format_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#autoRenderTargetChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_auto_render_target_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#autoRenderTargetChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_auto_render_target_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#mirrorVerticallyChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_mirror_vertically_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#mirrorVerticallyChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_mirror_vertically_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#alphaBlendingChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_alpha_blending_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#alphaBlendingChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_alpha_blending_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferWidthChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_fixed_color_buffer_width_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferWidthChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_fixed_color_buffer_width_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferHeightChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_fixed_color_buffer_height_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#fixedColorBufferHeightChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_fixed_color_buffer_height_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#effectiveColorBufferSizeChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_effective_color_buffer_size_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#effectiveColorBufferSizeChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_effective_color_buffer_size_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#createRenderer)
///
/// @param self QQuickRhiItem*
///
QQuickRhiItemRenderer* q_quickrhiitem_create_renderer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#createRenderer)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback QQuickRhiItemRenderer* func()
///
void q_quickrhiitem_on_create_renderer(void* self, QQuickRhiItemRenderer* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#createRenderer)
///
/// Base class method implementation
///
/// @param self QQuickRhiItem*
///
QQuickRhiItemRenderer* q_quickrhiitem_super_create_renderer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isAutoRenderTargetEnabled)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_is_auto_render_target_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isAutoRenderTargetEnabled)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback bool func()
///
void q_quickrhiitem_on_is_auto_render_target_enabled(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#isAutoRenderTargetEnabled)
///
/// Base class method implementation
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_super_is_auto_render_target_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setAutoRenderTarget)
///
/// @param self QQuickRhiItem*
/// @param enabled bool
///
void q_quickrhiitem_set_auto_render_target(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setAutoRenderTarget)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, bool enabled)
///
void q_quickrhiitem_on_set_auto_render_target(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#setAutoRenderTarget)
///
/// Base class method implementation
///
/// @param self QQuickRhiItem*
/// @param enabled bool
///
void q_quickrhiitem_super_set_auto_render_target(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#updatePaintNode)
///
/// @param self QQuickRhiItem*
/// @param param1 QSGNode*
/// @param param2 QQuickItem__UpdatePaintNodeData*
///
QSGNode* q_quickrhiitem_update_paint_node(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#updatePaintNode)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback QSGNode* func(QQuickRhiItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2)
///
void q_quickrhiitem_on_update_paint_node(void* self, QSGNode* (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#updatePaintNode)
///
/// Base class method implementation
///
/// @param self QQuickRhiItem*
/// @param param1 QSGNode*
/// @param param2 QQuickItem__UpdatePaintNodeData*
///
QSGNode* q_quickrhiitem_super_update_paint_node(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#event)
///
/// @param self QQuickRhiItem*
/// @param param1 QEvent*
///
bool q_quickrhiitem_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback bool func(QQuickRhiItem* self, QEvent* param1)
///
void q_quickrhiitem_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#event)
///
/// Base class method implementation
///
/// @param self QQuickRhiItem*
/// @param param1 QEvent*
///
bool q_quickrhiitem_super_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#geometryChange)
///
/// @param self QQuickRhiItem*
/// @param newGeometry QRectF*
/// @param oldGeometry QRectF*
///
void q_quickrhiitem_geometry_change(void* self, void* newGeometry, void* oldGeometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#geometryChange)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QRectF* newGeometry, QRectF* oldGeometry)
///
void q_quickrhiitem_on_geometry_change(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#geometryChange)
///
/// Base class method implementation
///
/// @param self QQuickRhiItem*
/// @param newGeometry QRectF*
/// @param oldGeometry QRectF*
///
void q_quickrhiitem_super_geometry_change(void* self, void* newGeometry, void* oldGeometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#releaseResources)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_release_resources(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#releaseResources)
///
/// Allows for overriding the related default method
///
/// @param self QQuickRhiItem*
/// @param callback void func()
///
void q_quickrhiitem_on_release_resources(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#releaseResources)
///
/// Base class method implementation
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_super_release_resources(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickrhiitem_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickrhiitem_tr3(const char* s, const char* c, int n);

/// Inherited from QQuickItem
///
/// Upcasts to a QQmlParserStatus object
///
/// @param self QQuickRhiItem*
///
QQmlParserStatus* q_quickrhiitem_as_q_qml_parser_status(void* self);

/// Inherited from QQuickItem
///
/// Downcasts to a QQuickRhiItem object
///
/// @param _qqmlparserstatus QQmlParserStatus*
///
QQuickRhiItem* q_quickrhiitem_from_q_qml_parser_status(void* _qqmlparserstatus);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#window)
///
/// @param self QQuickRhiItem*
///
QQuickWindow* q_quickrhiitem_window(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentItem)
///
/// @param self QQuickRhiItem*
///
QQuickItem* q_quickrhiitem_parent_item(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setParentItem)
///
/// @param self QQuickRhiItem*
/// @param parent QQuickItem*
///
void q_quickrhiitem_set_parent_item(void* self, void* parent);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackBefore)
///
/// @param self QQuickRhiItem*
/// @param param1 QQuickItem*
///
void q_quickrhiitem_stack_before(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackAfter)
///
/// @param self QQuickRhiItem*
/// @param param1 QQuickItem*
///
void q_quickrhiitem_stack_after(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRect)
///
/// @param self QQuickRhiItem*
///
QRectF* q_quickrhiitem_children_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childItems)
///
/// @param self QQuickRhiItem*
///
/// @return libqt_list of QQuickItem*
///
libqt_list q_quickrhiitem_child_items(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clip)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_clip(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setClip)
///
/// @param self QQuickRhiItem*
/// @param clip bool
///
void q_quickrhiitem_set_clip(void* self, bool clip);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#state)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickRhiItem*
///
const char* q_quickrhiitem_state(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setState)
///
/// @param self QQuickRhiItem*
/// @param state const char*
///
void q_quickrhiitem_set_state(void* self, const char* state);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffset)
///
/// @param self QQuickRhiItem*
///
double q_quickrhiitem_baseline_offset(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setBaselineOffset)
///
/// @param self QQuickRhiItem*
/// @param baselineOffset double
///
void q_quickrhiitem_set_baseline_offset(void* self, double baselineOffset);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#x)
///
/// @param self QQuickRhiItem*
///
double q_quickrhiitem_x(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#y)
///
/// @param self QQuickRhiItem*
///
double q_quickrhiitem_y(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#position)
///
/// @param self QQuickRhiItem*
///
QPointF* q_quickrhiitem_position(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setX)
///
/// @param self QQuickRhiItem*
/// @param x double
///
void q_quickrhiitem_set_x(void* self, double x);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setY)
///
/// @param self QQuickRhiItem*
/// @param y double
///
void q_quickrhiitem_set_y(void* self, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setPosition)
///
/// @param self QQuickRhiItem*
/// @param position QPointF*
///
void q_quickrhiitem_set_position(void* self, void* position);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#width)
///
/// @param self QQuickRhiItem*
///
double q_quickrhiitem_width(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setWidth)
///
/// @param self QQuickRhiItem*
/// @param width double
///
void q_quickrhiitem_set_width(void* self, double width);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetWidth)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_reset_width(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitWidth)
///
/// @param self QQuickRhiItem*
/// @param implicitWidth double
///
void q_quickrhiitem_set_implicit_width(void* self, double implicitWidth);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidth)
///
/// @param self QQuickRhiItem*
///
double q_quickrhiitem_implicit_width(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#height)
///
/// @param self QQuickRhiItem*
///
double q_quickrhiitem_height(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setHeight)
///
/// @param self QQuickRhiItem*
/// @param height double
///
void q_quickrhiitem_set_height(void* self, double height);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetHeight)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_reset_height(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitHeight)
///
/// @param self QQuickRhiItem*
/// @param implicitHeight double
///
void q_quickrhiitem_set_implicit_height(void* self, double implicitHeight);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeight)
///
/// @param self QQuickRhiItem*
///
double q_quickrhiitem_implicit_height(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#size)
///
/// @param self QQuickRhiItem*
///
QSizeF* q_quickrhiitem_size(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSize)
///
/// @param self QQuickRhiItem*
/// @param size QSizeF*
///
void q_quickrhiitem_set_size(void* self, void* size);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOrigin)
///
/// @param self QQuickRhiItem*
///
/// @return enum QQuickItem__TransformOrigin
///
int32_t q_quickrhiitem_transform_origin(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOrigin)
///
/// @param self QQuickRhiItem*
/// @param transformOrigin enum QQuickItem__TransformOrigin
///
void q_quickrhiitem_set_transform_origin(void* self, int32_t transformOrigin);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginPoint)
///
/// @param self QQuickRhiItem*
///
QPointF* q_quickrhiitem_transform_origin_point(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOriginPoint)
///
/// @param self QQuickRhiItem*
/// @param transformOriginPoint QPointF*
///
void q_quickrhiitem_set_transform_origin_point(void* self, void* transformOriginPoint);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#z)
///
/// @param self QQuickRhiItem*
///
double q_quickrhiitem_z(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setZ)
///
/// @param self QQuickRhiItem*
/// @param z double
///
void q_quickrhiitem_set_z(void* self, double z);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotation)
///
/// @param self QQuickRhiItem*
///
double q_quickrhiitem_rotation(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setRotation)
///
/// @param self QQuickRhiItem*
/// @param rotation double
///
void q_quickrhiitem_set_rotation(void* self, double rotation);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scale)
///
/// @param self QQuickRhiItem*
///
double q_quickrhiitem_scale(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setScale)
///
/// @param self QQuickRhiItem*
/// @param scale double
///
void q_quickrhiitem_set_scale(void* self, double scale);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacity)
///
/// @param self QQuickRhiItem*
///
double q_quickrhiitem_opacity(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setOpacity)
///
/// @param self QQuickRhiItem*
/// @param opacity double
///
void q_quickrhiitem_set_opacity(void* self, double opacity);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isVisible)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_is_visible(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setVisible)
///
/// @param self QQuickRhiItem*
/// @param visible bool
///
void q_quickrhiitem_set_visible(void* self, bool visible);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isEnabled)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_is_enabled(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setEnabled)
///
/// @param self QQuickRhiItem*
/// @param enabled bool
///
void q_quickrhiitem_set_enabled(void* self, bool enabled);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smooth)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_smooth(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSmooth)
///
/// @param self QQuickRhiItem*
/// @param smooth bool
///
void q_quickrhiitem_set_smooth(void* self, bool smooth);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTab)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_active_focus_on_tab(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setActiveFocusOnTab)
///
/// @param self QQuickRhiItem*
/// @param activeFocusOnTab bool
///
void q_quickrhiitem_set_active_focus_on_tab(void* self, bool activeFocusOnTab);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasing)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_antialiasing(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAntialiasing)
///
/// @param self QQuickRhiItem*
/// @param antialiasing bool
///
void q_quickrhiitem_set_antialiasing(void* self, bool antialiasing);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetAntialiasing)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_reset_antialiasing(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#flags)
///
/// @param self QQuickRhiItem*
///
/// @return flag of enum QQuickItem__Flag
///
int32_t q_quickrhiitem_flags(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
///
/// @param self QQuickRhiItem*
/// @param flag enum QQuickItem__Flag
///
void q_quickrhiitem_set_flag(void* self, int32_t flag);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlags)
///
/// @param self QQuickRhiItem*
/// @param flags flag of enum QQuickItem__Flag
///
void q_quickrhiitem_set_flags(void* self, int32_t flags);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#viewportItem)
///
/// @param self QQuickRhiItem*
///
QQuickItem* q_quickrhiitem_viewport_item(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasActiveFocus)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_has_active_focus(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasFocus)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_has_focus(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
///
/// @param self QQuickRhiItem*
/// @param focus bool
///
void q_quickrhiitem_set_focus(void* self, bool focus);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
///
/// @param self QQuickRhiItem*
/// @param focus bool
/// @param reason enum Qt__FocusReason
///
void q_quickrhiitem_set_focus2(void* self, bool focus, int32_t reason);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isFocusScope)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_is_focus_scope(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scopedFocusItem)
///
/// @param self QQuickRhiItem*
///
QQuickItem* q_quickrhiitem_scoped_focus_item(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicy)
///
/// @param self QQuickRhiItem*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_quickrhiitem_focus_policy(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocusPolicy)
///
/// @param self QQuickRhiItem*
/// @param policy enum Qt__FocusPolicy
///
void q_quickrhiitem_set_focus_policy(void* self, int32_t policy);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isAncestorOf)
///
/// @param self QQuickRhiItem*
/// @param child QQuickItem*
///
bool q_quickrhiitem_is_ancestor_of(void* self, void* child);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptedMouseButtons)
///
/// @param self QQuickRhiItem*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_quickrhiitem_accepted_mouse_buttons(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptedMouseButtons)
///
/// @param self QQuickRhiItem*
/// @param buttons flag of enum Qt__MouseButton
///
void q_quickrhiitem_set_accepted_mouse_buttons(void* self, int32_t buttons);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptHoverEvents)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_accept_hover_events(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptHoverEvents)
///
/// @param self QQuickRhiItem*
/// @param enabled bool
///
void q_quickrhiitem_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptTouchEvents)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_accept_touch_events(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptTouchEvents)
///
/// @param self QQuickRhiItem*
/// @param accept bool
///
void q_quickrhiitem_set_accept_touch_events(void* self, bool accept);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#cursor)
///
/// @param self QQuickRhiItem*
///
QCursor* q_quickrhiitem_cursor(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setCursor)
///
/// @param self QQuickRhiItem*
/// @param cursor QCursor*
///
void q_quickrhiitem_set_cursor(void* self, void* cursor);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#unsetCursor)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_unset_cursor(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isUnderMouse)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_is_under_mouse(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabMouse)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_grab_mouse(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabMouse)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_ungrab_mouse(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepMouseGrab)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_keep_mouse_grab(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepMouseGrab)
///
/// @param self QQuickRhiItem*
/// @param keepMouseGrab bool
///
void q_quickrhiitem_set_keep_mouse_grab(void* self, bool keepMouseGrab);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#filtersChildMouseEvents)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_filters_child_mouse_events(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFiltersChildMouseEvents)
///
/// @param self QQuickRhiItem*
/// @param filter bool
///
void q_quickrhiitem_set_filters_child_mouse_events(void* self, bool filter);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabTouchPoints)
///
/// @param self QQuickRhiItem*
/// @param ids libqt_list of int
///
void q_quickrhiitem_grab_touch_points(void* self, libqt_list ids);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabTouchPoints)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_ungrab_touch_points(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepTouchGrab)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_keep_touch_grab(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepTouchGrab)
///
/// @param self QQuickRhiItem*
/// @param keepTouchGrab bool
///
void q_quickrhiitem_set_keep_touch_grab(void* self, bool keepTouchGrab);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
///
/// @param self QQuickRhiItem*
/// @param callback QJSValue*
///
bool q_quickrhiitem_grab_to_image(void* self, void* callback);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMask)
///
/// @param self QQuickRhiItem*
///
QObject* q_quickrhiitem_containment_mask(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setContainmentMask)
///
/// @param self QQuickRhiItem*
/// @param mask QObject*
///
void q_quickrhiitem_set_containment_mask(void* self, void* mask);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemTransform)
///
/// @param self QQuickRhiItem*
/// @param param1 QQuickItem*
/// @param param2 bool*
///
QTransform* q_quickrhiitem_item_transform(void* self, void* param1, bool* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToScene)
///
/// @param self QQuickRhiItem*
/// @param point QPointF*
///
QPointF* q_quickrhiitem_map_to_scene(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToItem)
///
/// @param self QQuickRhiItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickrhiitem_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToScene)
///
/// @param self QQuickRhiItem*
/// @param rect QRectF*
///
QRectF* q_quickrhiitem_map_rect_to_scene(void* self, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromScene)
///
/// @param self QQuickRhiItem*
/// @param point QPointF*
///
QPointF* q_quickrhiitem_map_from_scene(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromItem)
///
/// @param self QQuickRhiItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickrhiitem_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromScene)
///
/// @param self QQuickRhiItem*
/// @param rect QRectF*
///
QRectF* q_quickrhiitem_map_rect_from_scene(void* self, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#polish)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_polish(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickRhiItem*
/// @param item QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickrhiitem_map_from_item2(void* self, void* item, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickRhiItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
///
QPointF* q_quickrhiitem_map_from_item3(void* self, void* item, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickRhiItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickrhiitem_map_from_item4(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickRhiItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
QRectF* q_quickrhiitem_map_from_item5(void* self, void* item, double x, double y, double width, double height);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickRhiItem*
/// @param item QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickrhiitem_map_to_item2(void* self, void* item, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickRhiItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
///
QPointF* q_quickrhiitem_map_to_item3(void* self, void* item, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickRhiItem*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickrhiitem_map_to_item4(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickRhiItem*
/// @param item QQuickItem*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
QRectF* q_quickrhiitem_map_to_item5(void* self, void* item, double x, double y, double width, double height);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
///
/// @param self QQuickRhiItem*
/// @param x double
/// @param y double
///
QPointF* q_quickrhiitem_map_from_global2(void* self, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
///
/// @param self QQuickRhiItem*
/// @param point QPointF*
///
QPointF* q_quickrhiitem_map_from_global3(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
///
/// @param self QQuickRhiItem*
/// @param x double
/// @param y double
///
QPointF* q_quickrhiitem_map_to_global2(void* self, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
///
/// @param self QQuickRhiItem*
/// @param point QPointF*
///
QPointF* q_quickrhiitem_map_to_global3(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_force_active_focus(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
///
/// @param self QQuickRhiItem*
/// @param reason enum Qt__FocusReason
///
void q_quickrhiitem_force_active_focus2(void* self, int32_t reason);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
///
/// @param self QQuickRhiItem*
///
QQuickItem* q_quickrhiitem_next_item_in_focus_chain(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childAt)
///
/// @param self QQuickRhiItem*
/// @param x double
/// @param y double
///
QQuickItem* q_quickrhiitem_child_at(void* self, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ensurePolished)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_ensure_polished(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dumpItemTree)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_dump_item_tree(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#update)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_update(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 QRectF*
///
void q_quickrhiitem_children_rect_changed(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QRectF* param1)
///
void q_quickrhiitem_on_children_rect_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 double
///
void q_quickrhiitem_baseline_offset_changed(void* self, double param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, double param1)
///
void q_quickrhiitem_on_baseline_offset_changed(void* self, void (*callback)(void*, double));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 const char*
///
void q_quickrhiitem_state_changed(void* self, const char* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, const char* param1)
///
void q_quickrhiitem_on_state_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 bool
///
void q_quickrhiitem_focus_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, bool param1)
///
void q_quickrhiitem_on_focus_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 bool
///
void q_quickrhiitem_active_focus_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, bool param1)
///
void q_quickrhiitem_on_active_focus_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 enum Qt__FocusPolicy
///
void q_quickrhiitem_focus_policy_changed(void* self, int32_t param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, enum Qt__FocusPolicy param1)
///
void q_quickrhiitem_on_focus_policy_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 bool
///
void q_quickrhiitem_active_focus_on_tab_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, bool param1)
///
void q_quickrhiitem_on_active_focus_on_tab_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 QQuickItem*
///
void q_quickrhiitem_parent_changed(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QQuickItem* param1)
///
void q_quickrhiitem_on_parent_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 enum QQuickItem__TransformOrigin
///
void q_quickrhiitem_transform_origin_changed(void* self, int32_t param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, enum QQuickItem__TransformOrigin param1)
///
void q_quickrhiitem_on_transform_origin_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 bool
///
void q_quickrhiitem_smooth_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, bool param1)
///
void q_quickrhiitem_on_smooth_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 bool
///
void q_quickrhiitem_antialiasing_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, bool param1)
///
void q_quickrhiitem_on_antialiasing_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
///
/// @param self QQuickRhiItem*
/// @param param1 bool
///
void q_quickrhiitem_clip_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, bool param1)
///
void q_quickrhiitem_on_clip_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
///
/// @param self QQuickRhiItem*
/// @param window QQuickWindow*
///
void q_quickrhiitem_window_changed(void* self, void* window);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QQuickWindow* window)
///
void q_quickrhiitem_on_window_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_children_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_opacity_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_enabled_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_enabled_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_visible_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_visible_children_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_visible_children_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_rotation_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_rotation_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_scale_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_scale_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_x_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_x_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_y_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_y_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_width_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_width_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_height_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_height_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_z_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_z_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_implicit_width_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_implicit_width_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_implicit_height_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_implicit_height_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_containment_mask_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_containment_mask_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_palette_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_palette_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_palette_created(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_palette_created(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
///
/// @param self QQuickRhiItem*
/// @param flag enum QQuickItem__Flag
/// @param enabled bool
///
void q_quickrhiitem_set_flag2(void* self, int32_t flag, bool enabled);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
///
/// @param self QQuickRhiItem*
/// @param callback QJSValue*
/// @param targetSize QSize*
///
bool q_quickrhiitem_grab_to_image22(void* self, void* callback, void* targetSize);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
///
/// @param self QQuickRhiItem*
/// @param forward bool
///
QQuickItem* q_quickrhiitem_next_item_in_focus_chain1(void* self, bool forward);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickRhiItem*
///
const char* q_quickrhiitem_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickRhiItem*
/// @param name const char*
///
void q_quickrhiitem_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickRhiItem*
/// @param b bool
///
bool q_quickrhiitem_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickRhiItem*
///
QThread* q_quickrhiitem_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickRhiItem*
/// @param thread QThread*
///
bool q_quickrhiitem_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickRhiItem*
/// @param interval int
///
int32_t q_quickrhiitem_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickRhiItem*
/// @param time int64_t of nanoseconds
///
int32_t q_quickrhiitem_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickRhiItem*
/// @param id int
///
void q_quickrhiitem_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickRhiItem*
/// @param id enum Qt__TimerId
///
void q_quickrhiitem_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickRhiItem*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickrhiitem_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickRhiItem*
/// @param parent QObject*
///
void q_quickrhiitem_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickRhiItem*
/// @param filterObj QObject*
///
void q_quickrhiitem_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickRhiItem*
/// @param obj QObject*
///
void q_quickrhiitem_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickrhiitem_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickrhiitem_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickRhiItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickrhiitem_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickrhiitem_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickrhiitem_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRhiItem*
/// @param receiver QObject*
///
bool q_quickrhiitem_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickrhiitem_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickRhiItem*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickrhiitem_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickRhiItem*
/// @param name const char*
///
QVariant* q_quickrhiitem_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickRhiItem*
///
const char** q_quickrhiitem_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickRhiItem*
///
QBindingStorage* q_quickrhiitem_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickRhiItem*
///
const QBindingStorage* q_quickrhiitem_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self)
///
void q_quickrhiitem_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickRhiItem*
///
QObject* q_quickrhiitem_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickRhiItem*
/// @param classname const char*
///
bool q_quickrhiitem_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickRhiItem*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickrhiitem_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickRhiItem*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickrhiitem_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quickrhiitem_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quickrhiitem_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickRhiItem*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickrhiitem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRhiItem*
/// @param signal const char*
///
bool q_quickrhiitem_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRhiItem*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickrhiitem_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRhiItem*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickrhiitem_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickRhiItem*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickrhiitem_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickRhiItem*
/// @param param1 QObject*
///
void q_quickrhiitem_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QObject* param1)
///
void q_quickrhiitem_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
QRectF* q_quickrhiitem_bounding_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
QRectF* q_quickrhiitem_super_bounding_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback QRectF* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickrhiitem_on_bounding_rect(void* self, QRectF* (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
QRectF* q_quickrhiitem_clip_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
QRectF* q_quickrhiitem_super_clip_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback QRectF* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickrhiitem_on_clip_rect(void* self, QRectF* (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param point QPointF*
///
bool q_quickrhiitem_contains(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param point QPointF*
///
bool q_quickrhiitem_super_contains(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback bool func(QQuickRhiItem* self, QPointF* point)
///
void q_quickrhiitem_on_contains(void* self, bool (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_quickrhiitem_input_method_query(void* self, int32_t query);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_quickrhiitem_super_input_method_query(void* self, int32_t query);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback QVariant* func(QQuickRhiItem* self, enum Qt__InputMethodQuery query)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickrhiitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 enum QQuickItem__ItemChange
/// @param param2 QQuickItem__ItemChangeData*
///
void q_quickrhiitem_item_change(void* self, int32_t param1, void* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 enum QQuickItem__ItemChange
/// @param param2 QQuickItem__ItemChangeData*
///
void q_quickrhiitem_super_item_change(void* self, int32_t param1, void* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, enum QQuickItem__ItemChange param1, QQuickItem__ItemChangeData* param2)
///
void q_quickrhiitem_on_item_change(void* self, void (*callback)(void*, int32_t, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_class_begin(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_super_class_begin(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func()
///
void q_quickrhiitem_on_class_begin(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_super_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func()
///
void q_quickrhiitem_on_component_complete(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QKeyEvent*
///
void q_quickrhiitem_key_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QKeyEvent*
///
void q_quickrhiitem_super_key_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QKeyEvent* event)
///
void q_quickrhiitem_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QKeyEvent*
///
void q_quickrhiitem_key_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QKeyEvent*
///
void q_quickrhiitem_super_key_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QKeyEvent* event)
///
void q_quickrhiitem_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QInputMethodEvent*
///
void q_quickrhiitem_input_method_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QInputMethodEvent*
///
void q_quickrhiitem_super_input_method_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QInputMethodEvent* param1)
///
void q_quickrhiitem_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QFocusEvent*
///
void q_quickrhiitem_focus_in_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QFocusEvent*
///
void q_quickrhiitem_super_focus_in_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QFocusEvent* param1)
///
void q_quickrhiitem_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QFocusEvent*
///
void q_quickrhiitem_focus_out_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QFocusEvent*
///
void q_quickrhiitem_super_focus_out_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QFocusEvent* param1)
///
void q_quickrhiitem_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QMouseEvent*
///
void q_quickrhiitem_mouse_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QMouseEvent*
///
void q_quickrhiitem_super_mouse_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QMouseEvent* event)
///
void q_quickrhiitem_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QMouseEvent*
///
void q_quickrhiitem_mouse_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QMouseEvent*
///
void q_quickrhiitem_super_mouse_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QMouseEvent* event)
///
void q_quickrhiitem_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QMouseEvent*
///
void q_quickrhiitem_mouse_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QMouseEvent*
///
void q_quickrhiitem_super_mouse_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QMouseEvent* event)
///
void q_quickrhiitem_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QMouseEvent*
///
void q_quickrhiitem_mouse_double_click_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QMouseEvent*
///
void q_quickrhiitem_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QMouseEvent* event)
///
void q_quickrhiitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_mouse_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_super_mouse_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func()
///
void q_quickrhiitem_on_mouse_ungrab_event(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_touch_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_super_touch_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func()
///
void q_quickrhiitem_on_touch_ungrab_event(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QWheelEvent*
///
void q_quickrhiitem_wheel_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QWheelEvent*
///
void q_quickrhiitem_super_wheel_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QWheelEvent* event)
///
void q_quickrhiitem_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QTouchEvent*
///
void q_quickrhiitem_touch_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QTouchEvent*
///
void q_quickrhiitem_super_touch_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QTouchEvent* event)
///
void q_quickrhiitem_on_touch_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QHoverEvent*
///
void q_quickrhiitem_hover_enter_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QHoverEvent*
///
void q_quickrhiitem_super_hover_enter_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QHoverEvent* event)
///
void q_quickrhiitem_on_hover_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QHoverEvent*
///
void q_quickrhiitem_hover_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QHoverEvent*
///
void q_quickrhiitem_super_hover_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QHoverEvent* event)
///
void q_quickrhiitem_on_hover_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QHoverEvent*
///
void q_quickrhiitem_hover_leave_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QHoverEvent*
///
void q_quickrhiitem_super_hover_leave_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QHoverEvent* event)
///
void q_quickrhiitem_on_hover_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QDragEnterEvent*
///
void q_quickrhiitem_drag_enter_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QDragEnterEvent*
///
void q_quickrhiitem_super_drag_enter_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QDragEnterEvent* param1)
///
void q_quickrhiitem_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QDragMoveEvent*
///
void q_quickrhiitem_drag_move_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QDragMoveEvent*
///
void q_quickrhiitem_super_drag_move_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QDragMoveEvent* param1)
///
void q_quickrhiitem_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QDragLeaveEvent*
///
void q_quickrhiitem_drag_leave_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QDragLeaveEvent*
///
void q_quickrhiitem_super_drag_leave_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QDragLeaveEvent* param1)
///
void q_quickrhiitem_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QDropEvent*
///
void q_quickrhiitem_drop_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QDropEvent*
///
void q_quickrhiitem_super_drop_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QDropEvent* param1)
///
void q_quickrhiitem_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QQuickItem*
/// @param param2 QEvent*
///
bool q_quickrhiitem_child_mouse_event_filter(void* self, void* param1, void* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 QQuickItem*
/// @param param2 QEvent*
///
bool q_quickrhiitem_super_child_mouse_event_filter(void* self, void* param1, void* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback bool func(QQuickRhiItem* self, QQuickItem* param1, QEvent* param2)
///
void q_quickrhiitem_on_child_mouse_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_update_polish(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_super_update_polish(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func()
///
void q_quickrhiitem_on_update_polish(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickrhiitem_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickrhiitem_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback bool func(QQuickRhiItem* self, QObject* watched, QEvent* event)
///
void q_quickrhiitem_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QTimerEvent*
///
void q_quickrhiitem_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QTimerEvent*
///
void q_quickrhiitem_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QTimerEvent* event)
///
void q_quickrhiitem_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QChildEvent*
///
void q_quickrhiitem_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QChildEvent*
///
void q_quickrhiitem_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QChildEvent* event)
///
void q_quickrhiitem_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QEvent*
///
void q_quickrhiitem_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param event QEvent*
///
void q_quickrhiitem_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QEvent* event)
///
void q_quickrhiitem_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param signal QMetaMethod*
///
void q_quickrhiitem_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param signal QMetaMethod*
///
void q_quickrhiitem_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QMetaMethod* signal)
///
void q_quickrhiitem_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param signal QMetaMethod*
///
void q_quickrhiitem_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param signal QMetaMethod*
///
void q_quickrhiitem_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, QMetaMethod* signal)
///
void q_quickrhiitem_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_is_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_super_is_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback bool func()
///
void q_quickrhiitem_on_is_component_complete(void* self, bool (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_update_input_method(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_super_update_input_method(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func()
///
void q_quickrhiitem_on_update_input_method(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_width_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_super_width_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback bool func()
///
void q_quickrhiitem_on_width_valid(void* self, bool (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_height_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
bool q_quickrhiitem_super_height_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback bool func()
///
void q_quickrhiitem_on_height_valid(void* self, bool (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 double
/// @param param2 double
///
void q_quickrhiitem_set_implicit_size(void* self, double param1, double param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param param1 double
/// @param param2 double
///
void q_quickrhiitem_super_set_implicit_size(void* self, double param1, double param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, double param1, double param2)
///
void q_quickrhiitem_on_set_implicit_size(void* self, void (*callback)(void*, double, double));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
QObject* q_quickrhiitem_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
QObject* q_quickrhiitem_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback QObject* func()
///
void q_quickrhiitem_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
///
int32_t q_quickrhiitem_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
///
int32_t q_quickrhiitem_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback int32_t func()
///
void q_quickrhiitem_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param signal const char*
///
int32_t q_quickrhiitem_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param signal const char*
///
int32_t q_quickrhiitem_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback int32_t func(QQuickRhiItem* self, const char* signal)
///
void q_quickrhiitem_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param signal QMetaMethod*
///
bool q_quickrhiitem_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param signal QMetaMethod*
///
bool q_quickrhiitem_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickRhiItem*
/// @param callback bool func(QQuickRhiItem* self, QMetaMethod* signal)
///
void q_quickrhiitem_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickRhiItem*
/// @param callback void func(QQuickRhiItem* self, const char* objectName)
///
void q_quickrhiitem_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#dtor.QQuickRhiItem)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickRhiItem*
///
void q_quickrhiitem_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickrhiitem.html#public-types)

typedef enum {
    QQUICKRHIITEM_TEXTUREFORMAT_RGBA8 = 0,
    QQUICKRHIITEM_TEXTUREFORMAT_RGBA16F = 1,
    QQUICKRHIITEM_TEXTUREFORMAT_RGBA32F = 2,
    QQUICKRHIITEM_TEXTUREFORMAT_RGB10A2 = 3
} QQuickRhiItem__TextureFormat;

#endif
