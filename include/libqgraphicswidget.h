#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSWIDGET_H
#define SRCQT6C_LIBQGRAPHICSWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicswidget.html

/// q_graphicswidget_new constructs a new QGraphicsWidget object.
///
///
QGraphicsWidget* q_graphicswidget_new();

/// q_graphicswidget_new2 constructs a new QGraphicsWidget object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsWidget* q_graphicswidget_new2(void* parent);

/// q_graphicswidget_new3 constructs a new QGraphicsWidget object.
///
/// ``` QGraphicsItem* parent, int wFlags ```
QGraphicsWidget* q_graphicswidget_new3(void* parent, int64_t wFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsWidget* self ```
const QMetaObject* q_graphicswidget_meta_object(void* self);

/// ``` QGraphicsWidget* self, const char* param1 ```
void* q_graphicswidget_metacast(void* self, const char* param1);

/// ``` QGraphicsWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicswidget_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, int32_t (*slot)(QGraphicsWidget*, enum QMetaObject__Call, int, void*) ```
void q_graphicswidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicswidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicswidget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// ``` QGraphicsWidget* self ```
QGraphicsLayout* q_graphicswidget_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// ``` QGraphicsWidget* self, QGraphicsLayout* layout ```
void q_graphicswidget_set_layout(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_adjust_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_layout_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// ``` QGraphicsWidget* self, enum Qt__LayoutDirection direction ```
void q_graphicswidget_set_layout_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_unset_layout_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// ``` QGraphicsWidget* self ```
QStyle* q_graphicswidget_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// ``` QGraphicsWidget* self, QStyle* style ```
void q_graphicswidget_set_style(void* self, void* style);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// ``` QGraphicsWidget* self ```
QFont* q_graphicswidget_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// ``` QGraphicsWidget* self, QFont* font ```
void q_graphicswidget_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// ``` QGraphicsWidget* self ```
QPalette* q_graphicswidget_palette(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// ``` QGraphicsWidget* self, QPalette* palette ```
void q_graphicswidget_set_palette(void* self, void* palette);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_auto_fill_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_auto_fill_background(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QGraphicsWidget* self, QSizeF* size ```
void q_graphicswidget_resize(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QGraphicsWidget* self, double w, double h ```
void q_graphicswidget_resize2(void* self, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// ``` QGraphicsWidget* self ```
QSizeF* q_graphicswidget_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
void q_graphicswidget_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QRectF*) ```
void q_graphicswidget_on_set_geometry(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
void q_graphicswidget_qbase_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
void q_graphicswidget_set_geometry2(void* self, double x, double y, double w, double h);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QGraphicsWidget* self, double left, double top, double right, double bottom ```
void q_graphicswidget_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QGraphicsWidget* self, QMarginsF* margins ```
void q_graphicswidget_set_contents_margins_with_margins(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// ``` QGraphicsWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicswidget_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, double*, double*, double*, double*) ```
void q_graphicswidget_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicswidget_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QGraphicsWidget* self, double left, double top, double right, double bottom ```
void q_graphicswidget_set_window_frame_margins(void* self, double left, double top, double right, double bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QGraphicsWidget* self, QMarginsF* margins ```
void q_graphicswidget_set_window_frame_margins_with_margins(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// ``` QGraphicsWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicswidget_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_unset_window_frame_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_window_frame_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_window_frame_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_window_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_window_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// ``` QGraphicsWidget* self, int wFlags ```
void q_graphicswidget_set_window_flags(void* self, int64_t wFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_active_window(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// ``` QGraphicsWidget* self, const char* title ```
void q_graphicswidget_set_window_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// ``` QGraphicsWidget* self ```
const char* q_graphicswidget_window_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_focus_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// ``` QGraphicsWidget* self, enum Qt__FocusPolicy policy ```
void q_graphicswidget_set_focus_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// ``` QGraphicsWidget* first, QGraphicsWidget* second ```
void q_graphicswidget_set_tab_order(void* first, void* second);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// ``` QGraphicsWidget* self ```
QGraphicsWidget* q_graphicswidget_focus_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QGraphicsWidget* self, QKeySequence* sequence ```
int32_t q_graphicswidget_grab_shortcut(void* self, void* sequence);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// ``` QGraphicsWidget* self, int id ```
void q_graphicswidget_release_shortcut(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QGraphicsWidget* self, int id ```
void q_graphicswidget_set_shortcut_enabled(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsWidget* self, int id ```
void q_graphicswidget_set_shortcut_auto_repeat(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// ``` QGraphicsWidget* self, QAction* action ```
void q_graphicswidget_add_action(void* self, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// ``` QGraphicsWidget* self, libqt_list /* of QAction* */ actions ```
void q_graphicswidget_add_actions(void* self, libqt_list actions);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// ``` QGraphicsWidget* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_graphicswidget_insert_actions(void* self, void* before, libqt_list actions);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// ``` QGraphicsWidget* self, QAction* before, QAction* action ```
void q_graphicswidget_insert_action(void* self, void* before, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// ``` QGraphicsWidget* self, QAction* action ```
void q_graphicswidget_remove_action(void* self, void* action);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// ``` QGraphicsWidget* self ```
libqt_list /* of QAction* */ q_graphicswidget_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QGraphicsWidget* self, enum Qt__WidgetAttribute attribute ```
void q_graphicswidget_set_attribute(void* self, int64_t attribute);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// ``` QGraphicsWidget* self, enum Qt__WidgetAttribute attribute ```
bool q_graphicswidget_test_attribute(void* self, int64_t attribute);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// ``` QGraphicsWidget* self ```
int32_t q_graphicswidget_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, int32_t (*slot)() ```
void q_graphicswidget_on_type(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self ```
int32_t q_graphicswidget_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// ``` QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicswidget_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicswidget_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicswidget_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// ``` QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicswidget_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicswidget_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicswidget_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, QRectF* (*slot)() ```
void q_graphicswidget_on_bounding_rect(void* self, QRectF* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_qbase_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// ``` QGraphicsWidget* self ```
QPainterPath* q_graphicswidget_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, QPainterPath* (*slot)() ```
void q_graphicswidget_on_shape(void* self, QPainterPath* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self ```
QPainterPath* q_graphicswidget_qbase_shape(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_geometry_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*) ```
void q_graphicswidget_on_geometry_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_layout_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*) ```
void q_graphicswidget_on_layout_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// ``` QGraphicsWidget* self, QStyleOption* option ```
void q_graphicswidget_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QStyleOption*) ```
void q_graphicswidget_on_init_style_option(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QStyleOption* option ```
void q_graphicswidget_qbase_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// ``` QGraphicsWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicswidget_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, QSizeF* (*slot)(QGraphicsWidget*, enum Qt__SizeHint, QSizeF*) ```
void q_graphicswidget_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicswidget_qbase_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_update_geometry(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_update_geometry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicswidget_item_change(void* self, int64_t change, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, QVariant* (*slot)(QGraphicsWidget*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicswidget_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicswidget_qbase_item_change(void* self, int64_t change, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// ``` QGraphicsWidget* self, const char* propertyName, QVariant* value ```
QVariant* q_graphicswidget_property_change(void* self, const char* propertyName, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, QVariant* (*slot)(QGraphicsWidget*, const char*, QVariant*) ```
void q_graphicswidget_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, const char* propertyName, QVariant* value ```
QVariant* q_graphicswidget_qbase_property_change(void* self, const char* propertyName, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
bool q_graphicswidget_scene_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_scene_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
bool q_graphicswidget_qbase_scene_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// ``` QGraphicsWidget* self, QEvent* e ```
bool q_graphicswidget_window_frame_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_window_frame_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* e ```
bool q_graphicswidget_qbase_window_frame_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// ``` QGraphicsWidget* self, QPointF* pos ```
int64_t q_graphicswidget_window_frame_section_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, int64_t (*slot)(QGraphicsWidget*, QPointF*) ```
void q_graphicswidget_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QPointF* pos ```
int64_t q_graphicswidget_qbase_window_frame_section_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
bool q_graphicswidget_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
bool q_graphicswidget_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// ``` QGraphicsWidget* self, QCloseEvent* event ```
void q_graphicswidget_close_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QCloseEvent*) ```
void q_graphicswidget_on_close_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QCloseEvent* event ```
void q_graphicswidget_qbase_close_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// ``` QGraphicsWidget* self, QFocusEvent* event ```
void q_graphicswidget_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QFocusEvent*) ```
void q_graphicswidget_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QFocusEvent* event ```
void q_graphicswidget_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// ``` QGraphicsWidget* self, bool next ```
bool q_graphicswidget_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, bool) ```
void q_graphicswidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, bool next ```
bool q_graphicswidget_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// ``` QGraphicsWidget* self, QFocusEvent* event ```
void q_graphicswidget_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QFocusEvent*) ```
void q_graphicswidget_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QFocusEvent* event ```
void q_graphicswidget_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// ``` QGraphicsWidget* self, QHideEvent* event ```
void q_graphicswidget_hide_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QHideEvent*) ```
void q_graphicswidget_on_hide_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QHideEvent* event ```
void q_graphicswidget_qbase_hide_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMoveEvent* event ```
void q_graphicswidget_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneMoveEvent*) ```
void q_graphicswidget_on_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMoveEvent* event ```
void q_graphicswidget_qbase_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_polish_event(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_polish_event(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_polish_event(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// ``` QGraphicsWidget* self, QGraphicsSceneResizeEvent* event ```
void q_graphicswidget_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneResizeEvent*) ```
void q_graphicswidget_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QGraphicsSceneResizeEvent* event ```
void q_graphicswidget_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// ``` QGraphicsWidget* self, QShowEvent* event ```
void q_graphicswidget_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QShowEvent*) ```
void q_graphicswidget_on_show_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QShowEvent* event ```
void q_graphicswidget_qbase_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_hover_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicswidget_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_qbase_hover_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_hover_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicswidget_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_qbase_hover_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_grab_mouse_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_grab_mouse_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_grab_mouse_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_ungrab_mouse_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_ungrab_mouse_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_grab_keyboard_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_grab_keyboard_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_grab_keyboard_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_ungrab_keyboard_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_ungrab_keyboard_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicswidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicswidget_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QGraphicsWidget* self, QKeySequence* sequence, enum Qt__ShortcutContext context ```
int32_t q_graphicswidget_grab_shortcut2(void* self, void* sequence, int64_t context);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QGraphicsWidget* self, int id, bool enabled ```
void q_graphicswidget_set_shortcut_enabled2(void* self, int id, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsWidget* self, int id, bool enabled ```
void q_graphicswidget_set_shortcut_auto_repeat2(void* self, int id, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QGraphicsWidget* self, enum Qt__WidgetAttribute attribute, bool on ```
void q_graphicswidget_set_attribute2(void* self, int64_t attribute, bool on);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsWidget* self, enum Qt__GestureType typeVal ```
void q_graphicswidget_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QGraphicsWidget* self, enum Qt__GestureType typeVal ```
void q_graphicswidget_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_parent_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_enabled_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_x_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_y_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_z_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_rotation_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_scale_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_children_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_width_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_height_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicswidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsWidget* self ```
const char* q_graphicswidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsWidget* self, char* name ```
void q_graphicswidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsWidget* self, bool b ```
bool q_graphicswidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsWidget* self ```
QThread* q_graphicswidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsWidget* self, QThread* thread ```
bool q_graphicswidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsWidget* self, int interval ```
int32_t q_graphicswidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsWidget* self, int id ```
void q_graphicswidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsWidget* self, enum Qt__TimerId id ```
void q_graphicswidget_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsWidget* self ```
libqt_list /* of QObject* */ q_graphicswidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsWidget* self, QObject* parent ```
void q_graphicswidget_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsWidget* self, QObject* filterObj ```
void q_graphicswidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsWidget* self, QObject* obj ```
void q_graphicswidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicswidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicswidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicswidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicswidget_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsWidget* self, const char* name, QVariant* value ```
bool q_graphicswidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsWidget* self, const char* name ```
QVariant* q_graphicswidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsWidget* self ```
const char** q_graphicswidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsWidget* self ```
QBindingStorage* q_graphicswidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsWidget* self ```
const QBindingStorage* q_graphicswidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsWidget* self, void (*slot)(QObject*) ```
void q_graphicswidget_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsWidget* self ```
QObject* q_graphicswidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsWidget* self, const char* classname ```
bool q_graphicswidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsWidget* self, QThread* thread, Disambiguated_t* param2 ```
bool q_graphicswidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicswidget_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicswidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicswidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsWidget* self, QObject* param1 ```
void q_graphicswidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsWidget* self, void (*slot)(QObject*, QObject*) ```
void q_graphicswidget_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsWidget* self ```
QGraphicsScene* q_graphicswidget_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsWidget* self ```
QGraphicsObject* q_graphicswidget_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsWidget* self ```
QGraphicsWidget* q_graphicswidget_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsWidget* self ```
QGraphicsWidget* q_graphicswidget_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsWidget* self ```
QGraphicsWidget* q_graphicswidget_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* parent ```
void q_graphicswidget_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsWidget* self ```
libqt_list /* of QGraphicsItem* */ q_graphicswidget_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsWidget* self ```
QGraphicsObject* q_graphicswidget_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsWidget* self ```
const QGraphicsObject* q_graphicswidget_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItemGroup* q_graphicswidget_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsWidget* self, QGraphicsItemGroup* group ```
void q_graphicswidget_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicswidget_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsWidget* self, int flags ```
void q_graphicswidget_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicswidget_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicswidget_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsWidget* self ```
const char* q_graphicswidget_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsWidget* self, const char* toolTip ```
void q_graphicswidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsWidget* self ```
QCursor* q_graphicswidget_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsWidget* self, QCursor* cursor ```
void q_graphicswidget_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* parent ```
bool q_graphicswidget_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsWidget* self, bool visible ```
void q_graphicswidget_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsWidget* self, bool selected ```
void q_graphicswidget_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsWidget* self, bool on ```
void q_graphicswidget_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsWidget* self, double opacity ```
void q_graphicswidget_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsWidget* self ```
QGraphicsEffect* q_graphicswidget_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsWidget* self, QGraphicsEffect* effect ```
void q_graphicswidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsWidget* self, int buttons ```
void q_graphicswidget_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsWidget* self, bool active ```
void q_graphicswidget_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item ```
void q_graphicswidget_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsWidget* self ```
QPointF* q_graphicswidget_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsWidget* self, double x ```
void q_graphicswidget_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsWidget* self, double y ```
void q_graphicswidget_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsWidget* self ```
QPointF* q_graphicswidget_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsWidget* self, QPointF* pos ```
void q_graphicswidget_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsWidget* self, double x, double y ```
void q_graphicswidget_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsWidget* self, double dx, double dy ```
void q_graphicswidget_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
void q_graphicswidget_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsWidget* self ```
QTransform* q_graphicswidget_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsWidget* self ```
QTransform* q_graphicswidget_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsWidget* self, QTransform* viewportTransform ```
QTransform* q_graphicswidget_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* other ```
QTransform* q_graphicswidget_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsWidget* self, QTransform* matrix ```
void q_graphicswidget_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsWidget* self, double angle ```
void q_graphicswidget_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsWidget* self, double scale ```
void q_graphicswidget_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsWidget* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicswidget_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsWidget* self, libqt_list /* of QGraphicsTransform* */ transformations ```
void q_graphicswidget_set_transformations(void* self, libqt_list transformations);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsWidget* self ```
QPointF* q_graphicswidget_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsWidget* self, QPointF* origin ```
void q_graphicswidget_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsWidget* self, double ax, double ay ```
void q_graphicswidget_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsWidget* self, double z ```
void q_graphicswidget_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* sibling ```
void q_graphicswidget_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsWidget* self ```
QPainterPath* q_graphicswidget_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsWidget* self ```
libqt_list /* of QGraphicsItem* */ q_graphicswidget_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
bool q_graphicswidget_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsWidget* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicswidget_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsWidget* self, double granularity ```
void q_graphicswidget_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsWidget* self, double x, double y, double width, double height ```
void q_graphicswidget_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsWidget* self, double dx, double dy ```
void q_graphicswidget_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicswidget_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsWidget* self, QPointF* point ```
QPointF* q_graphicswidget_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsWidget* self, QPointF* point ```
QPointF* q_graphicswidget_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsWidget* self, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsWidget* self, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicswidget_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsWidget* self, QPointF* point ```
QPointF* q_graphicswidget_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsWidget* self, QPointF* point ```
QPointF* q_graphicswidget_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsWidget* self, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsWidget* self, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicswidget_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsWidget* self, double x, double y ```
QPointF* q_graphicswidget_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsWidget* self, double x, double y ```
QPointF* q_graphicswidget_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicswidget_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsWidget* self, double x, double y ```
QPointF* q_graphicswidget_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsWidget* self, double x, double y ```
QPointF* q_graphicswidget_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* child ```
bool q_graphicswidget_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicswidget_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsWidget* self, int key ```
QVariant* q_graphicswidget_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsWidget* self, int key, QVariant* value ```
void q_graphicswidget_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsWidget* self, int hints ```
void q_graphicswidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* filterItem ```
void q_graphicswidget_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* filterItem ```
void q_graphicswidget_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicswidget_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicswidget_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsWidget* self, enum Qt__FocusReason focusReason ```
void q_graphicswidget_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
void q_graphicswidget_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, QRectF* rect, int xmargin ```
void q_graphicswidget_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicswidget_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h, int xmargin ```
void q_graphicswidget_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicswidget_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicswidget_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsWidget* self, QTransform* matrix, bool combine ```
void q_graphicswidget_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsWidget* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicswidget_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
bool q_graphicswidget_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
void q_graphicswidget_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsWidget* self, double dx, double dy, QRectF* rect ```
void q_graphicswidget_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsWidget* self, QSizePolicy* policy ```
void q_graphicswidget_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsWidget* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_graphicswidget_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QGraphicsWidget* self ```
QSizePolicy* q_graphicswidget_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsWidget* self, QSizeF* size ```
void q_graphicswidget_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsWidget* self, double w, double h ```
void q_graphicswidget_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QGraphicsWidget* self ```
QSizeF* q_graphicswidget_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QGraphicsWidget* self, double width ```
void q_graphicswidget_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QGraphicsWidget* self, double height ```
void q_graphicswidget_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsWidget* self, QSizeF* size ```
void q_graphicswidget_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsWidget* self, double w, double h ```
void q_graphicswidget_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QGraphicsWidget* self ```
QSizeF* q_graphicswidget_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QGraphicsWidget* self, double width ```
void q_graphicswidget_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QGraphicsWidget* self, double height ```
void q_graphicswidget_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsWidget* self, QSizeF* size ```
void q_graphicswidget_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsWidget* self, double w, double h ```
void q_graphicswidget_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QGraphicsWidget* self ```
QSizeF* q_graphicswidget_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QGraphicsWidget* self, double width ```
void q_graphicswidget_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QGraphicsWidget* self, double height ```
void q_graphicswidget_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsWidget* self, enum Qt__SizeHint which ```
QSizeF* q_graphicswidget_effective_size_hint(void* self, int64_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsLayoutItem* q_graphicswidget_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QGraphicsWidget* self, QGraphicsLayoutItem* parent ```
void q_graphicswidget_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsWidget* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_graphicswidget_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicswidget_effective_size_hint2(void* self, int64_t which, void* constraint);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QObject* watched, QEvent* event ```
bool q_graphicswidget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QObject* watched, QEvent* event ```
bool q_graphicswidget_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QObject*, QEvent*) ```
void q_graphicswidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QTimerEvent* event ```
void q_graphicswidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QTimerEvent* event ```
void q_graphicswidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QTimerEvent*) ```
void q_graphicswidget_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QChildEvent* event ```
void q_graphicswidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QChildEvent* event ```
void q_graphicswidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QChildEvent*) ```
void q_graphicswidget_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
void q_graphicswidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
void q_graphicswidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QMetaMethod*) ```
void q_graphicswidget_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
void q_graphicswidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
void q_graphicswidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QMetaMethod*) ```
void q_graphicswidget_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, int phase ```
void q_graphicswidget_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, int phase ```
void q_graphicswidget_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, int) ```
void q_graphicswidget_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QPointF* point ```
bool q_graphicswidget_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QPointF* point ```
bool q_graphicswidget_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QPointF*) ```
void q_graphicswidget_on_contains(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicswidget_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicswidget_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicswidget_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicswidget_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicswidget_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicswidget_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item ```
bool q_graphicswidget_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item ```
bool q_graphicswidget_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QGraphicsItem*) ```
void q_graphicswidget_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
QPainterPath* q_graphicswidget_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
QPainterPath* q_graphicswidget_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QPainterPath* (*slot)() ```
void q_graphicswidget_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicswidget_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicswidget_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QGraphicsItem*, QEvent*) ```
void q_graphicswidget_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicswidget_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicswidget_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicswidget_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicswidget_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicswidget_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicswidget_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicswidget_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicswidget_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QKeyEvent* event ```
void q_graphicswidget_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QKeyEvent* event ```
void q_graphicswidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QKeyEvent*) ```
void q_graphicswidget_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QKeyEvent* event ```
void q_graphicswidget_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QKeyEvent* event ```
void q_graphicswidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QKeyEvent*) ```
void q_graphicswidget_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicswidget_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicswidget_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicswidget_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicswidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneWheelEvent* event ```
void q_graphicswidget_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneWheelEvent* event ```
void q_graphicswidget_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneWheelEvent*) ```
void q_graphicswidget_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QInputMethodEvent* event ```
void q_graphicswidget_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QInputMethodEvent* event ```
void q_graphicswidget_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QInputMethodEvent*) ```
void q_graphicswidget_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicswidget_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicswidget_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QVariant* (*slot)(QGraphicsWidget*, enum Qt__InputMethodQuery) ```
void q_graphicswidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__Extension extension ```
bool q_graphicswidget_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__Extension extension ```
bool q_graphicswidget_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, enum QGraphicsItem__Extension) ```
void q_graphicswidget_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicswidget_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicswidget_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicswidget_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QVariant* variant ```
QVariant* q_graphicswidget_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QVariant* variant ```
QVariant* q_graphicswidget_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QVariant* (*slot)(QGraphicsWidget*, QVariant*) ```
void q_graphicswidget_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)() ```
void q_graphicswidget_on_is_empty(void* self, bool (*slot)());

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
QObject* q_graphicswidget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
QObject* q_graphicswidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QObject* (*slot)() ```
void q_graphicswidget_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
int32_t q_graphicswidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
int32_t q_graphicswidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, int32_t (*slot)() ```
void q_graphicswidget_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, const char* signal ```
int32_t q_graphicswidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, const char* signal ```
int32_t q_graphicswidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, int32_t (*slot)(QGraphicsWidget*, const char*) ```
void q_graphicswidget_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
bool q_graphicswidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
bool q_graphicswidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QMetaMethod*) ```
void q_graphicswidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_prepare_geometry_change(void* self, void (*slot)());

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item ```
void q_graphicswidget_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item ```
void q_graphicswidget_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsItem*) ```
void q_graphicswidget_on_set_graphics_item(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, bool ownedByLayout ```
void q_graphicswidget_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool ownedByLayout ```
void q_graphicswidget_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, bool) ```
void q_graphicswidget_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QGraphicsWidget* self, void (*slot)(QObject*, const char*) ```
void q_graphicswidget_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#dtor.QGraphicsWidget)
///
/// Delete this object from C++ memory.
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicswidget.html#types

typedef enum {
    QGRAPHICSWIDGET__TYPE = 11
} QGraphicsWidget__;

#endif
