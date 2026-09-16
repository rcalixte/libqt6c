#pragma once
#ifndef QUICK_LIBQQUICKFRAMEBUFFEROBJECT_H
#define QUICK_LIBQQUICKFRAMEBUFFEROBJECT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html)

/// q_quickframebufferobject_new constructs a new QQuickFramebufferObject object.
///
QQuickFramebufferObject* q_quickframebufferobject_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html)

/// q_quickframebufferobject_new2 constructs a new QQuickFramebufferObject object.
///
/// @param parent QQuickItem*
///
QQuickFramebufferObject* q_quickframebufferobject_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickFramebufferObject*
///
const QMetaObject* q_quickframebufferobject_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickFramebufferObject*
/// @param callback const QMetaObject* func()
///
void q_quickframebufferobject_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickFramebufferObject*
///
const QMetaObject* q_quickframebufferobject_super_meta_object(void* self);

/// @param self QQuickFramebufferObject*
/// @param param1 const char*
///
void* q_quickframebufferobject_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickFramebufferObject*
/// @param callback void* func(QQuickFramebufferObject* self, const char* param1)
///
void q_quickframebufferobject_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickFramebufferObject*
/// @param param1 const char*
///
void* q_quickframebufferobject_super_metacast(void* self, const char* param1);

/// @param self QQuickFramebufferObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickframebufferobject_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickFramebufferObject*
/// @param callback int32_t func(QQuickFramebufferObject* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickframebufferobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickFramebufferObject*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickframebufferobject_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickframebufferobject_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureFollowsItemSize)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_texture_follows_item_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#setTextureFollowsItemSize)
///
/// @param self QQuickFramebufferObject*
/// @param follows bool
///
void q_quickframebufferobject_set_texture_follows_item_size(void* self, bool follows);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#mirrorVertically)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_mirror_vertically(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#setMirrorVertically)
///
/// @param self QQuickFramebufferObject*
/// @param enable bool
///
void q_quickframebufferobject_set_mirror_vertically(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#createRenderer)
///
/// @param self QQuickFramebufferObject*
///
QQuickFramebufferObject__Renderer* q_quickframebufferobject_create_renderer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#createRenderer)
///
/// Allows for overriding the related default method
///
/// @param self QQuickFramebufferObject*
/// @param callback QQuickFramebufferObject__Renderer* func()
///
void q_quickframebufferobject_on_create_renderer(void* self, QQuickFramebufferObject__Renderer* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#createRenderer)
///
/// Base class method implementation
///
/// @param self QQuickFramebufferObject*
///
QQuickFramebufferObject__Renderer* q_quickframebufferobject_super_create_renderer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#isTextureProvider)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_is_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#isTextureProvider)
///
/// Allows for overriding the related default method
///
/// @param self QQuickFramebufferObject*
/// @param callback bool func()
///
void q_quickframebufferobject_on_is_texture_provider(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#isTextureProvider)
///
/// Base class method implementation
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_super_is_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureProvider)
///
/// @param self QQuickFramebufferObject*
///
QSGTextureProvider* q_quickframebufferobject_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureProvider)
///
/// Allows for overriding the related default method
///
/// @param self QQuickFramebufferObject*
/// @param callback QSGTextureProvider* func()
///
void q_quickframebufferobject_on_texture_provider(void* self, QSGTextureProvider* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureProvider)
///
/// Base class method implementation
///
/// @param self QQuickFramebufferObject*
///
QSGTextureProvider* q_quickframebufferobject_super_texture_provider(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#releaseResources)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_release_resources(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#releaseResources)
///
/// Allows for overriding the related default method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func()
///
void q_quickframebufferobject_on_release_resources(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#releaseResources)
///
/// Base class method implementation
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_super_release_resources(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#geometryChange)
///
/// @param self QQuickFramebufferObject*
/// @param newGeometry QRectF*
/// @param oldGeometry QRectF*
///
void q_quickframebufferobject_geometry_change(void* self, void* newGeometry, void* oldGeometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#geometryChange)
///
/// Allows for overriding the related default method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QRectF* newGeometry, QRectF* oldGeometry)
///
void q_quickframebufferobject_on_geometry_change(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#geometryChange)
///
/// Base class method implementation
///
/// @param self QQuickFramebufferObject*
/// @param newGeometry QRectF*
/// @param oldGeometry QRectF*
///
void q_quickframebufferobject_super_geometry_change(void* self, void* newGeometry, void* oldGeometry);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#updatePaintNode)
///
/// @param self QQuickFramebufferObject*
/// @param param1 QSGNode*
/// @param param2 QQuickItem__UpdatePaintNodeData*
///
QSGNode* q_quickframebufferobject_update_paint_node(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#updatePaintNode)
///
/// Allows for overriding the related default method
///
/// @param self QQuickFramebufferObject*
/// @param callback QSGNode* func(QQuickFramebufferObject* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2)
///
void q_quickframebufferobject_on_update_paint_node(void* self, QSGNode* (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#updatePaintNode)
///
/// Base class method implementation
///
/// @param self QQuickFramebufferObject*
/// @param param1 QSGNode*
/// @param param2 QQuickItem__UpdatePaintNodeData*
///
QSGNode* q_quickframebufferobject_super_update_paint_node(void* self, void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureFollowsItemSizeChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 bool
///
void q_quickframebufferobject_texture_follows_item_size_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#textureFollowsItemSizeChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, bool param1)
///
void q_quickframebufferobject_on_texture_follows_item_size_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#mirrorVerticallyChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 bool
///
void q_quickframebufferobject_mirror_vertically_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#mirrorVerticallyChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, bool param1)
///
void q_quickframebufferobject_on_mirror_vertically_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickframebufferobject_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickframebufferobject_tr3(const char* s, const char* c, int n);

/// Inherited from QQuickItem
///
/// Upcasts to a QQmlParserStatus object
///
/// @param self QQuickFramebufferObject*
///
QQmlParserStatus* q_quickframebufferobject_as_q_qml_parser_status(void* self);

/// Inherited from QQuickItem
///
/// Downcasts to a QQuickFramebufferObject object
///
/// @param _qqmlparserstatus QQmlParserStatus*
///
QQuickFramebufferObject* q_quickframebufferobject_from_q_qml_parser_status(void* _qqmlparserstatus);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#window)
///
/// @param self QQuickFramebufferObject*
///
QQuickWindow* q_quickframebufferobject_window(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentItem)
///
/// @param self QQuickFramebufferObject*
///
QQuickItem* q_quickframebufferobject_parent_item(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setParentItem)
///
/// @param self QQuickFramebufferObject*
/// @param parent QQuickItem*
///
void q_quickframebufferobject_set_parent_item(void* self, void* parent);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackBefore)
///
/// @param self QQuickFramebufferObject*
/// @param param1 QQuickItem*
///
void q_quickframebufferobject_stack_before(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stackAfter)
///
/// @param self QQuickFramebufferObject*
/// @param param1 QQuickItem*
///
void q_quickframebufferobject_stack_after(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRect)
///
/// @param self QQuickFramebufferObject*
///
QRectF* q_quickframebufferobject_children_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childItems)
///
/// @param self QQuickFramebufferObject*
///
/// @return libqt_list of QQuickItem*
///
libqt_list q_quickframebufferobject_child_items(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clip)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_clip(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setClip)
///
/// @param self QQuickFramebufferObject*
/// @param clip bool
///
void q_quickframebufferobject_set_clip(void* self, bool clip);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#state)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickFramebufferObject*
///
const char* q_quickframebufferobject_state(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setState)
///
/// @param self QQuickFramebufferObject*
/// @param state const char*
///
void q_quickframebufferobject_set_state(void* self, const char* state);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffset)
///
/// @param self QQuickFramebufferObject*
///
double q_quickframebufferobject_baseline_offset(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setBaselineOffset)
///
/// @param self QQuickFramebufferObject*
/// @param baselineOffset double
///
void q_quickframebufferobject_set_baseline_offset(void* self, double baselineOffset);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#x)
///
/// @param self QQuickFramebufferObject*
///
double q_quickframebufferobject_x(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#y)
///
/// @param self QQuickFramebufferObject*
///
double q_quickframebufferobject_y(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#position)
///
/// @param self QQuickFramebufferObject*
///
QPointF* q_quickframebufferobject_position(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setX)
///
/// @param self QQuickFramebufferObject*
/// @param x double
///
void q_quickframebufferobject_set_x(void* self, double x);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setY)
///
/// @param self QQuickFramebufferObject*
/// @param y double
///
void q_quickframebufferobject_set_y(void* self, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setPosition)
///
/// @param self QQuickFramebufferObject*
/// @param position QPointF*
///
void q_quickframebufferobject_set_position(void* self, void* position);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#width)
///
/// @param self QQuickFramebufferObject*
///
double q_quickframebufferobject_width(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setWidth)
///
/// @param self QQuickFramebufferObject*
/// @param width double
///
void q_quickframebufferobject_set_width(void* self, double width);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetWidth)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_reset_width(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitWidth)
///
/// @param self QQuickFramebufferObject*
/// @param implicitWidth double
///
void q_quickframebufferobject_set_implicit_width(void* self, double implicitWidth);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidth)
///
/// @param self QQuickFramebufferObject*
///
double q_quickframebufferobject_implicit_width(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#height)
///
/// @param self QQuickFramebufferObject*
///
double q_quickframebufferobject_height(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setHeight)
///
/// @param self QQuickFramebufferObject*
/// @param height double
///
void q_quickframebufferobject_set_height(void* self, double height);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetHeight)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_reset_height(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitHeight)
///
/// @param self QQuickFramebufferObject*
/// @param implicitHeight double
///
void q_quickframebufferobject_set_implicit_height(void* self, double implicitHeight);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeight)
///
/// @param self QQuickFramebufferObject*
///
double q_quickframebufferobject_implicit_height(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#size)
///
/// @param self QQuickFramebufferObject*
///
QSizeF* q_quickframebufferobject_size(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSize)
///
/// @param self QQuickFramebufferObject*
/// @param size QSizeF*
///
void q_quickframebufferobject_set_size(void* self, void* size);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOrigin)
///
/// @param self QQuickFramebufferObject*
///
/// @return enum QQuickItem__TransformOrigin
///
int32_t q_quickframebufferobject_transform_origin(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOrigin)
///
/// @param self QQuickFramebufferObject*
/// @param transformOrigin enum QQuickItem__TransformOrigin
///
void q_quickframebufferobject_set_transform_origin(void* self, int32_t transformOrigin);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginPoint)
///
/// @param self QQuickFramebufferObject*
///
QPointF* q_quickframebufferobject_transform_origin_point(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setTransformOriginPoint)
///
/// @param self QQuickFramebufferObject*
/// @param transformOriginPoint QPointF*
///
void q_quickframebufferobject_set_transform_origin_point(void* self, void* transformOriginPoint);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#z)
///
/// @param self QQuickFramebufferObject*
///
double q_quickframebufferobject_z(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setZ)
///
/// @param self QQuickFramebufferObject*
/// @param z double
///
void q_quickframebufferobject_set_z(void* self, double z);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotation)
///
/// @param self QQuickFramebufferObject*
///
double q_quickframebufferobject_rotation(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setRotation)
///
/// @param self QQuickFramebufferObject*
/// @param rotation double
///
void q_quickframebufferobject_set_rotation(void* self, double rotation);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scale)
///
/// @param self QQuickFramebufferObject*
///
double q_quickframebufferobject_scale(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setScale)
///
/// @param self QQuickFramebufferObject*
/// @param scale double
///
void q_quickframebufferobject_set_scale(void* self, double scale);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacity)
///
/// @param self QQuickFramebufferObject*
///
double q_quickframebufferobject_opacity(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setOpacity)
///
/// @param self QQuickFramebufferObject*
/// @param opacity double
///
void q_quickframebufferobject_set_opacity(void* self, double opacity);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isVisible)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_is_visible(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setVisible)
///
/// @param self QQuickFramebufferObject*
/// @param visible bool
///
void q_quickframebufferobject_set_visible(void* self, bool visible);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isEnabled)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_is_enabled(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setEnabled)
///
/// @param self QQuickFramebufferObject*
/// @param enabled bool
///
void q_quickframebufferobject_set_enabled(void* self, bool enabled);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smooth)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_smooth(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setSmooth)
///
/// @param self QQuickFramebufferObject*
/// @param smooth bool
///
void q_quickframebufferobject_set_smooth(void* self, bool smooth);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTab)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_active_focus_on_tab(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setActiveFocusOnTab)
///
/// @param self QQuickFramebufferObject*
/// @param activeFocusOnTab bool
///
void q_quickframebufferobject_set_active_focus_on_tab(void* self, bool activeFocusOnTab);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasing)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_antialiasing(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAntialiasing)
///
/// @param self QQuickFramebufferObject*
/// @param antialiasing bool
///
void q_quickframebufferobject_set_antialiasing(void* self, bool antialiasing);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#resetAntialiasing)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_reset_antialiasing(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#flags)
///
/// @param self QQuickFramebufferObject*
///
/// @return flag of enum QQuickItem__Flag
///
int32_t q_quickframebufferobject_flags(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
///
/// @param self QQuickFramebufferObject*
/// @param flag enum QQuickItem__Flag
///
void q_quickframebufferobject_set_flag(void* self, int32_t flag);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlags)
///
/// @param self QQuickFramebufferObject*
/// @param flags flag of enum QQuickItem__Flag
///
void q_quickframebufferobject_set_flags(void* self, int32_t flags);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#viewportItem)
///
/// @param self QQuickFramebufferObject*
///
QQuickItem* q_quickframebufferobject_viewport_item(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasActiveFocus)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_has_active_focus(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hasFocus)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_has_focus(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
///
/// @param self QQuickFramebufferObject*
/// @param focus bool
///
void q_quickframebufferobject_set_focus(void* self, bool focus);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocus)
///
/// @param self QQuickFramebufferObject*
/// @param focus bool
/// @param reason enum Qt__FocusReason
///
void q_quickframebufferobject_set_focus2(void* self, bool focus, int32_t reason);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isFocusScope)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_is_focus_scope(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scopedFocusItem)
///
/// @param self QQuickFramebufferObject*
///
QQuickItem* q_quickframebufferobject_scoped_focus_item(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicy)
///
/// @param self QQuickFramebufferObject*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_quickframebufferobject_focus_policy(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFocusPolicy)
///
/// @param self QQuickFramebufferObject*
/// @param policy enum Qt__FocusPolicy
///
void q_quickframebufferobject_set_focus_policy(void* self, int32_t policy);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isAncestorOf)
///
/// @param self QQuickFramebufferObject*
/// @param child QQuickItem*
///
bool q_quickframebufferobject_is_ancestor_of(void* self, void* child);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptedMouseButtons)
///
/// @param self QQuickFramebufferObject*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_quickframebufferobject_accepted_mouse_buttons(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptedMouseButtons)
///
/// @param self QQuickFramebufferObject*
/// @param buttons flag of enum Qt__MouseButton
///
void q_quickframebufferobject_set_accepted_mouse_buttons(void* self, int32_t buttons);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptHoverEvents)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_accept_hover_events(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptHoverEvents)
///
/// @param self QQuickFramebufferObject*
/// @param enabled bool
///
void q_quickframebufferobject_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#acceptTouchEvents)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_accept_touch_events(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setAcceptTouchEvents)
///
/// @param self QQuickFramebufferObject*
/// @param accept bool
///
void q_quickframebufferobject_set_accept_touch_events(void* self, bool accept);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#cursor)
///
/// @param self QQuickFramebufferObject*
///
QCursor* q_quickframebufferobject_cursor(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setCursor)
///
/// @param self QQuickFramebufferObject*
/// @param cursor QCursor*
///
void q_quickframebufferobject_set_cursor(void* self, void* cursor);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#unsetCursor)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_unset_cursor(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isUnderMouse)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_is_under_mouse(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabMouse)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_grab_mouse(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabMouse)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_ungrab_mouse(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepMouseGrab)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_keep_mouse_grab(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepMouseGrab)
///
/// @param self QQuickFramebufferObject*
/// @param keepMouseGrab bool
///
void q_quickframebufferobject_set_keep_mouse_grab(void* self, bool keepMouseGrab);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#filtersChildMouseEvents)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_filters_child_mouse_events(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFiltersChildMouseEvents)
///
/// @param self QQuickFramebufferObject*
/// @param filter bool
///
void q_quickframebufferobject_set_filters_child_mouse_events(void* self, bool filter);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabTouchPoints)
///
/// @param self QQuickFramebufferObject*
/// @param ids libqt_list of int
///
void q_quickframebufferobject_grab_touch_points(void* self, libqt_list ids);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ungrabTouchPoints)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_ungrab_touch_points(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keepTouchGrab)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_keep_touch_grab(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setKeepTouchGrab)
///
/// @param self QQuickFramebufferObject*
/// @param keepTouchGrab bool
///
void q_quickframebufferobject_set_keep_touch_grab(void* self, bool keepTouchGrab);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
///
/// @param self QQuickFramebufferObject*
/// @param callback QJSValue*
///
bool q_quickframebufferobject_grab_to_image(void* self, void* callback);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMask)
///
/// @param self QQuickFramebufferObject*
///
QObject* q_quickframebufferobject_containment_mask(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setContainmentMask)
///
/// @param self QQuickFramebufferObject*
/// @param mask QObject*
///
void q_quickframebufferobject_set_containment_mask(void* self, void* mask);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemTransform)
///
/// @param self QQuickFramebufferObject*
/// @param param1 QQuickItem*
/// @param param2 bool*
///
QTransform* q_quickframebufferobject_item_transform(void* self, void* param1, bool* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToScene)
///
/// @param self QQuickFramebufferObject*
/// @param point QPointF*
///
QPointF* q_quickframebufferobject_map_to_scene(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToItem)
///
/// @param self QQuickFramebufferObject*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickframebufferobject_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectToScene)
///
/// @param self QQuickFramebufferObject*
/// @param rect QRectF*
///
QRectF* q_quickframebufferobject_map_rect_to_scene(void* self, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromScene)
///
/// @param self QQuickFramebufferObject*
/// @param point QPointF*
///
QPointF* q_quickframebufferobject_map_from_scene(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromItem)
///
/// @param self QQuickFramebufferObject*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickframebufferobject_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapRectFromScene)
///
/// @param self QQuickFramebufferObject*
/// @param rect QRectF*
///
QRectF* q_quickframebufferobject_map_rect_from_scene(void* self, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#polish)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_polish(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickFramebufferObject*
/// @param item QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickframebufferobject_map_from_item2(void* self, void* item, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickFramebufferObject*
/// @param item QQuickItem*
/// @param x double
/// @param y double
///
QPointF* q_quickframebufferobject_map_from_item3(void* self, void* item, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickFramebufferObject*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickframebufferobject_map_from_item4(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromItem)
///
/// @param self QQuickFramebufferObject*
/// @param item QQuickItem*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
QRectF* q_quickframebufferobject_map_from_item5(void* self, void* item, double x, double y, double width, double height);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickFramebufferObject*
/// @param item QQuickItem*
/// @param point QPointF*
///
QPointF* q_quickframebufferobject_map_to_item2(void* self, void* item, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickFramebufferObject*
/// @param item QQuickItem*
/// @param x double
/// @param y double
///
QPointF* q_quickframebufferobject_map_to_item3(void* self, void* item, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickFramebufferObject*
/// @param item QQuickItem*
/// @param rect QRectF*
///
QRectF* q_quickframebufferobject_map_to_item4(void* self, void* item, void* rect);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToItem)
///
/// @param self QQuickFramebufferObject*
/// @param item QQuickItem*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
QRectF* q_quickframebufferobject_map_to_item5(void* self, void* item, double x, double y, double width, double height);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
///
/// @param self QQuickFramebufferObject*
/// @param x double
/// @param y double
///
QPointF* q_quickframebufferobject_map_from_global2(void* self, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapFromGlobal)
///
/// @param self QQuickFramebufferObject*
/// @param point QPointF*
///
QPointF* q_quickframebufferobject_map_from_global3(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
///
/// @param self QQuickFramebufferObject*
/// @param x double
/// @param y double
///
QPointF* q_quickframebufferobject_map_to_global2(void* self, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mapToGlobal)
///
/// @param self QQuickFramebufferObject*
/// @param point QPointF*
///
QPointF* q_quickframebufferobject_map_to_global3(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_force_active_focus(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#forceActiveFocus)
///
/// @param self QQuickFramebufferObject*
/// @param reason enum Qt__FocusReason
///
void q_quickframebufferobject_force_active_focus2(void* self, int32_t reason);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
///
/// @param self QQuickFramebufferObject*
///
QQuickItem* q_quickframebufferobject_next_item_in_focus_chain(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childAt)
///
/// @param self QQuickFramebufferObject*
/// @param x double
/// @param y double
///
QQuickItem* q_quickframebufferobject_child_at(void* self, double x, double y);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#ensurePolished)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_ensure_polished(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dumpItemTree)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_dump_item_tree(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#update)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_update(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 QRectF*
///
void q_quickframebufferobject_children_rect_changed(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenRectChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QRectF* param1)
///
void q_quickframebufferobject_on_children_rect_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 double
///
void q_quickframebufferobject_baseline_offset_changed(void* self, double param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#baselineOffsetChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, double param1)
///
void q_quickframebufferobject_on_baseline_offset_changed(void* self, void (*callback)(void*, double));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 const char*
///
void q_quickframebufferobject_state_changed(void* self, const char* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#stateChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, const char* param1)
///
void q_quickframebufferobject_on_state_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 bool
///
void q_quickframebufferobject_focus_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, bool param1)
///
void q_quickframebufferobject_on_focus_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 bool
///
void q_quickframebufferobject_active_focus_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, bool param1)
///
void q_quickframebufferobject_on_active_focus_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 enum Qt__FocusPolicy
///
void q_quickframebufferobject_focus_policy_changed(void* self, int32_t param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusPolicyChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, enum Qt__FocusPolicy param1)
///
void q_quickframebufferobject_on_focus_policy_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 bool
///
void q_quickframebufferobject_active_focus_on_tab_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#activeFocusOnTabChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, bool param1)
///
void q_quickframebufferobject_on_active_focus_on_tab_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 QQuickItem*
///
void q_quickframebufferobject_parent_changed(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#parentChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QQuickItem* param1)
///
void q_quickframebufferobject_on_parent_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 enum QQuickItem__TransformOrigin
///
void q_quickframebufferobject_transform_origin_changed(void* self, int32_t param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#transformOriginChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, enum QQuickItem__TransformOrigin param1)
///
void q_quickframebufferobject_on_transform_origin_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 bool
///
void q_quickframebufferobject_smooth_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#smoothChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, bool param1)
///
void q_quickframebufferobject_on_smooth_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 bool
///
void q_quickframebufferobject_antialiasing_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#antialiasingChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, bool param1)
///
void q_quickframebufferobject_on_antialiasing_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
///
/// @param self QQuickFramebufferObject*
/// @param param1 bool
///
void q_quickframebufferobject_clip_changed(void* self, bool param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, bool param1)
///
void q_quickframebufferobject_on_clip_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
///
/// @param self QQuickFramebufferObject*
/// @param window QQuickWindow*
///
void q_quickframebufferobject_window_changed(void* self, void* window);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#windowChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QQuickWindow* window)
///
void q_quickframebufferobject_on_window_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_children_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childrenChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_opacity_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#opacityChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_enabled_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#enabledChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_enabled_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_visible_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_visible_children_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#visibleChildrenChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_visible_children_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_rotation_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#rotationChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_rotation_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_scale_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#scaleChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_scale_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_x_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#xChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_x_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_y_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#yChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_y_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_width_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_width_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_height_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_height_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_z_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#zChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_z_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_implicit_width_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitWidthChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_implicit_width_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_implicit_height_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#implicitHeightChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_implicit_height_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_containment_mask_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#containmentMaskChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_containment_mask_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_palette_changed(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteChanged)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_palette_changed(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_palette_created(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#paletteCreated)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_palette_created(void* self, void (*callback)(void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setFlag)
///
/// @param self QQuickFramebufferObject*
/// @param flag enum QQuickItem__Flag
/// @param enabled bool
///
void q_quickframebufferobject_set_flag2(void* self, int32_t flag, bool enabled);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#grabToImage)
///
/// @param self QQuickFramebufferObject*
/// @param callback QJSValue*
/// @param targetSize QSize*
///
bool q_quickframebufferobject_grab_to_image22(void* self, void* callback, void* targetSize);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#nextItemInFocusChain)
///
/// @param self QQuickFramebufferObject*
/// @param forward bool
///
QQuickItem* q_quickframebufferobject_next_item_in_focus_chain1(void* self, bool forward);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickFramebufferObject*
///
const char* q_quickframebufferobject_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickFramebufferObject*
/// @param name const char*
///
void q_quickframebufferobject_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickFramebufferObject*
/// @param b bool
///
bool q_quickframebufferobject_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickFramebufferObject*
///
QThread* q_quickframebufferobject_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickFramebufferObject*
/// @param thread QThread*
///
bool q_quickframebufferobject_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickFramebufferObject*
/// @param interval int
///
int32_t q_quickframebufferobject_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickFramebufferObject*
/// @param time int64_t of nanoseconds
///
int32_t q_quickframebufferobject_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickFramebufferObject*
/// @param id int
///
void q_quickframebufferobject_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickFramebufferObject*
/// @param id enum Qt__TimerId
///
void q_quickframebufferobject_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickFramebufferObject*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickframebufferobject_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickFramebufferObject*
/// @param parent QObject*
///
void q_quickframebufferobject_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickFramebufferObject*
/// @param filterObj QObject*
///
void q_quickframebufferobject_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickFramebufferObject*
/// @param obj QObject*
///
void q_quickframebufferobject_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickframebufferobject_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickframebufferobject_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickFramebufferObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickframebufferobject_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickframebufferobject_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickframebufferobject_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickFramebufferObject*
/// @param receiver QObject*
///
bool q_quickframebufferobject_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickframebufferobject_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickFramebufferObject*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickframebufferobject_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickFramebufferObject*
/// @param name const char*
///
QVariant* q_quickframebufferobject_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickFramebufferObject*
///
const char** q_quickframebufferobject_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickFramebufferObject*
///
QBindingStorage* q_quickframebufferobject_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickFramebufferObject*
///
const QBindingStorage* q_quickframebufferobject_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self)
///
void q_quickframebufferobject_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickFramebufferObject*
///
QObject* q_quickframebufferobject_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickFramebufferObject*
/// @param classname const char*
///
bool q_quickframebufferobject_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickFramebufferObject*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickframebufferobject_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickFramebufferObject*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickframebufferobject_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quickframebufferobject_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quickframebufferobject_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickFramebufferObject*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickframebufferobject_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickFramebufferObject*
/// @param signal const char*
///
bool q_quickframebufferobject_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickFramebufferObject*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickframebufferobject_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickFramebufferObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickframebufferobject_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickFramebufferObject*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickframebufferobject_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickFramebufferObject*
/// @param param1 QObject*
///
void q_quickframebufferobject_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QObject* param1)
///
void q_quickframebufferobject_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
QRectF* q_quickframebufferobject_bounding_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
QRectF* q_quickframebufferobject_super_bounding_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#boundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback QRectF* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickframebufferobject_on_bounding_rect(void* self, QRectF* (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
QRectF* q_quickframebufferobject_clip_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
QRectF* q_quickframebufferobject_super_clip_rect(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#clipRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback QRectF* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickframebufferobject_on_clip_rect(void* self, QRectF* (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param point QPointF*
///
bool q_quickframebufferobject_contains(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param point QPointF*
///
bool q_quickframebufferobject_super_contains(void* self, void* point);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback bool func(QQuickFramebufferObject* self, QPointF* point)
///
void q_quickframebufferobject_on_contains(void* self, bool (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_quickframebufferobject_input_method_query(void* self, int32_t query);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_quickframebufferobject_super_input_method_query(void* self, int32_t query);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback QVariant* func(QQuickFramebufferObject* self, enum Qt__InputMethodQuery query)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickframebufferobject_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QEvent*
///
bool q_quickframebufferobject_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QEvent*
///
bool q_quickframebufferobject_super_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback bool func(QQuickFramebufferObject* self, QEvent* param1)
///
void q_quickframebufferobject_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 enum QQuickItem__ItemChange
/// @param param2 QQuickItem__ItemChangeData*
///
void q_quickframebufferobject_item_change(void* self, int32_t param1, void* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 enum QQuickItem__ItemChange
/// @param param2 QQuickItem__ItemChangeData*
///
void q_quickframebufferobject_super_item_change(void* self, int32_t param1, void* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#itemChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, enum QQuickItem__ItemChange param1, QQuickItem__ItemChangeData* param2)
///
void q_quickframebufferobject_on_item_change(void* self, void (*callback)(void*, int32_t, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_class_begin(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_super_class_begin(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#classBegin)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func()
///
void q_quickframebufferobject_on_class_begin(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_super_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#componentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func()
///
void q_quickframebufferobject_on_component_complete(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QKeyEvent*
///
void q_quickframebufferobject_key_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QKeyEvent*
///
void q_quickframebufferobject_super_key_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QKeyEvent* event)
///
void q_quickframebufferobject_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QKeyEvent*
///
void q_quickframebufferobject_key_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QKeyEvent*
///
void q_quickframebufferobject_super_key_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QKeyEvent* event)
///
void q_quickframebufferobject_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QInputMethodEvent*
///
void q_quickframebufferobject_input_method_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QInputMethodEvent*
///
void q_quickframebufferobject_super_input_method_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QInputMethodEvent* param1)
///
void q_quickframebufferobject_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QFocusEvent*
///
void q_quickframebufferobject_focus_in_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QFocusEvent*
///
void q_quickframebufferobject_super_focus_in_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QFocusEvent* param1)
///
void q_quickframebufferobject_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QFocusEvent*
///
void q_quickframebufferobject_focus_out_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QFocusEvent*
///
void q_quickframebufferobject_super_focus_out_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QFocusEvent* param1)
///
void q_quickframebufferobject_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QMouseEvent*
///
void q_quickframebufferobject_mouse_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QMouseEvent*
///
void q_quickframebufferobject_super_mouse_press_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QMouseEvent* event)
///
void q_quickframebufferobject_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QMouseEvent*
///
void q_quickframebufferobject_mouse_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QMouseEvent*
///
void q_quickframebufferobject_super_mouse_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QMouseEvent* event)
///
void q_quickframebufferobject_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QMouseEvent*
///
void q_quickframebufferobject_mouse_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QMouseEvent*
///
void q_quickframebufferobject_super_mouse_release_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QMouseEvent* event)
///
void q_quickframebufferobject_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QMouseEvent*
///
void q_quickframebufferobject_mouse_double_click_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QMouseEvent*
///
void q_quickframebufferobject_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QMouseEvent* event)
///
void q_quickframebufferobject_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_mouse_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_super_mouse_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#mouseUngrabEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func()
///
void q_quickframebufferobject_on_mouse_ungrab_event(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_touch_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_super_touch_ungrab_event(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchUngrabEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func()
///
void q_quickframebufferobject_on_touch_ungrab_event(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QWheelEvent*
///
void q_quickframebufferobject_wheel_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QWheelEvent*
///
void q_quickframebufferobject_super_wheel_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QWheelEvent* event)
///
void q_quickframebufferobject_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QTouchEvent*
///
void q_quickframebufferobject_touch_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QTouchEvent*
///
void q_quickframebufferobject_super_touch_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#touchEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QTouchEvent* event)
///
void q_quickframebufferobject_on_touch_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QHoverEvent*
///
void q_quickframebufferobject_hover_enter_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QHoverEvent*
///
void q_quickframebufferobject_super_hover_enter_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QHoverEvent* event)
///
void q_quickframebufferobject_on_hover_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QHoverEvent*
///
void q_quickframebufferobject_hover_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QHoverEvent*
///
void q_quickframebufferobject_super_hover_move_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QHoverEvent* event)
///
void q_quickframebufferobject_on_hover_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QHoverEvent*
///
void q_quickframebufferobject_hover_leave_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QHoverEvent*
///
void q_quickframebufferobject_super_hover_leave_event(void* self, void* event);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#hoverLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QHoverEvent* event)
///
void q_quickframebufferobject_on_hover_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QDragEnterEvent*
///
void q_quickframebufferobject_drag_enter_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QDragEnterEvent*
///
void q_quickframebufferobject_super_drag_enter_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QDragEnterEvent* param1)
///
void q_quickframebufferobject_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QDragMoveEvent*
///
void q_quickframebufferobject_drag_move_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QDragMoveEvent*
///
void q_quickframebufferobject_super_drag_move_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QDragMoveEvent* param1)
///
void q_quickframebufferobject_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QDragLeaveEvent*
///
void q_quickframebufferobject_drag_leave_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QDragLeaveEvent*
///
void q_quickframebufferobject_super_drag_leave_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QDragLeaveEvent* param1)
///
void q_quickframebufferobject_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QDropEvent*
///
void q_quickframebufferobject_drop_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QDropEvent*
///
void q_quickframebufferobject_super_drop_event(void* self, void* param1);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QDropEvent* param1)
///
void q_quickframebufferobject_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QQuickItem*
/// @param param2 QEvent*
///
bool q_quickframebufferobject_child_mouse_event_filter(void* self, void* param1, void* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 QQuickItem*
/// @param param2 QEvent*
///
bool q_quickframebufferobject_super_child_mouse_event_filter(void* self, void* param1, void* param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#childMouseEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback bool func(QQuickFramebufferObject* self, QQuickItem* param1, QEvent* param2)
///
void q_quickframebufferobject_on_child_mouse_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_update_polish(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_super_update_polish(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updatePolish)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func()
///
void q_quickframebufferobject_on_update_polish(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickframebufferobject_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickframebufferobject_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback bool func(QQuickFramebufferObject* self, QObject* watched, QEvent* event)
///
void q_quickframebufferobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QTimerEvent*
///
void q_quickframebufferobject_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QTimerEvent*
///
void q_quickframebufferobject_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QTimerEvent* event)
///
void q_quickframebufferobject_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QChildEvent*
///
void q_quickframebufferobject_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QChildEvent*
///
void q_quickframebufferobject_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QChildEvent* event)
///
void q_quickframebufferobject_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QEvent*
///
void q_quickframebufferobject_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param event QEvent*
///
void q_quickframebufferobject_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QEvent* event)
///
void q_quickframebufferobject_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param signal QMetaMethod*
///
void q_quickframebufferobject_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param signal QMetaMethod*
///
void q_quickframebufferobject_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QMetaMethod* signal)
///
void q_quickframebufferobject_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param signal QMetaMethod*
///
void q_quickframebufferobject_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param signal QMetaMethod*
///
void q_quickframebufferobject_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, QMetaMethod* signal)
///
void q_quickframebufferobject_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_is_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_super_is_component_complete(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#isComponentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback bool func()
///
void q_quickframebufferobject_on_is_component_complete(void* self, bool (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_update_input_method(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_super_update_input_method(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#updateInputMethod)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func()
///
void q_quickframebufferobject_on_update_input_method(void* self, void (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_width_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_super_width_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#widthValid)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback bool func()
///
void q_quickframebufferobject_on_width_valid(void* self, bool (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_height_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
bool q_quickframebufferobject_super_height_valid(void* self);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#heightValid)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback bool func()
///
void q_quickframebufferobject_on_height_valid(void* self, bool (*callback)());

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 double
/// @param param2 double
///
void q_quickframebufferobject_set_implicit_size(void* self, double param1, double param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param param1 double
/// @param param2 double
///
void q_quickframebufferobject_super_set_implicit_size(void* self, double param1, double param2);

/// Inherited from QQuickItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickitem.html#setImplicitSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, double param1, double param2)
///
void q_quickframebufferobject_on_set_implicit_size(void* self, void (*callback)(void*, double, double));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
QObject* q_quickframebufferobject_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
QObject* q_quickframebufferobject_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback QObject* func()
///
void q_quickframebufferobject_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
int32_t q_quickframebufferobject_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
///
int32_t q_quickframebufferobject_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback int32_t func()
///
void q_quickframebufferobject_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param signal const char*
///
int32_t q_quickframebufferobject_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param signal const char*
///
int32_t q_quickframebufferobject_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback int32_t func(QQuickFramebufferObject* self, const char* signal)
///
void q_quickframebufferobject_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param signal QMetaMethod*
///
bool q_quickframebufferobject_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param signal QMetaMethod*
///
bool q_quickframebufferobject_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickFramebufferObject*
/// @param callback bool func(QQuickFramebufferObject* self, QMetaMethod* signal)
///
void q_quickframebufferobject_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickFramebufferObject*
/// @param callback void func(QQuickFramebufferObject* self, const char* objectName)
///
void q_quickframebufferobject_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject.html#dtor.QQuickFramebufferObject)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickFramebufferObject*
///
void q_quickframebufferobject_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickframebufferobject-renderer.html)
#endif
