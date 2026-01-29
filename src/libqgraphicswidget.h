#pragma once
#ifndef SRC_QT6C_LIBQGRAPHICSWIDGET_H
#define SRC_QT6C_LIBQGRAPHICSWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html)

/// q_graphicswidget_new constructs a new QGraphicsWidget object.
///
QGraphicsWidget* q_graphicswidget_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html)

/// q_graphicswidget_new2 constructs a new QGraphicsWidget object.
///
/// @param parent QGraphicsItem*
///
QGraphicsWidget* q_graphicswidget_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html)

/// q_graphicswidget_new3 constructs a new QGraphicsWidget object.
///
/// @param parent QGraphicsItem*
/// @param wFlags flag of enum Qt__WindowType
///
QGraphicsWidget* q_graphicswidget_new3(void* parent, int32_t wFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsWidget*
///
const QMetaObject* q_graphicswidget_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback const QMetaObject* func()
///
void q_graphicswidget_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
///
const QMetaObject* q_graphicswidget_qbase_meta_object(void* self);

/// @param self QGraphicsWidget*
/// @param param1 const char*
///
void* q_graphicswidget_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void* func(QGraphicsWidget* self, const char* param1)
///
void q_graphicswidget_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param param1 const char*
///
void* q_graphicswidget_qbase_metacast(void* self, const char* param1);

/// @param self QGraphicsWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicswidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback int32_t func(QGraphicsWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_graphicswidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_graphicswidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_graphicswidget_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// @param self QGraphicsWidget*
///
QGraphicsLayout* q_graphicswidget_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// @param self QGraphicsWidget*
/// @param layout QGraphicsLayout*
///
void q_graphicswidget_set_layout(void* self, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_adjust_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// @param self QGraphicsWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_graphicswidget_layout_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// @param self QGraphicsWidget*
/// @param direction enum Qt__LayoutDirection
///
void q_graphicswidget_set_layout_direction(void* self, int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_unset_layout_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// @param self QGraphicsWidget*
///
QStyle* q_graphicswidget_style(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// @param self QGraphicsWidget*
/// @param style QStyle*
///
void q_graphicswidget_set_style(void* self, void* style);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// @param self QGraphicsWidget*
///
QFont* q_graphicswidget_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// @param self QGraphicsWidget*
/// @param font QFont*
///
void q_graphicswidget_set_font(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// @param self QGraphicsWidget*
///
QPalette* q_graphicswidget_palette(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// @param self QGraphicsWidget*
/// @param palette QPalette*
///
void q_graphicswidget_set_palette(void* self, void* palette);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_auto_fill_background(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// @param self QGraphicsWidget*
/// @param enabled bool
///
void q_graphicswidget_set_auto_fill_background(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// @param self QGraphicsWidget*
/// @param size QSizeF*
///
void q_graphicswidget_resize(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// @param self QGraphicsWidget*
/// @param w double
/// @param h double
///
void q_graphicswidget_resize2(void* self, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// @param self QGraphicsWidget*
///
QSizeF* q_graphicswidget_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// @param self QGraphicsWidget*
/// @param rect QRectF*
///
void q_graphicswidget_set_geometry(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QRectF* rect)
///
void q_graphicswidget_on_set_geometry(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param rect QRectF*
///
void q_graphicswidget_qbase_set_geometry(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_graphicswidget_set_geometry2(void* self, double x, double y, double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// @param self QGraphicsWidget*
///
QRectF* q_graphicswidget_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// @param self QGraphicsWidget*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_graphicswidget_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// @param self QGraphicsWidget*
/// @param margins QMarginsF*
///
void q_graphicswidget_set_contents_margins2(void* self, void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// @param self QGraphicsWidget*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicswidget_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, double* left, double* top, double* right, double* bottom)
///
void q_graphicswidget_on_get_contents_margins(void* self, void (*callback)(void*, double*, double*, double*, double*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicswidget_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// @param self QGraphicsWidget*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
void q_graphicswidget_set_window_frame_margins(void* self, double left, double top, double right, double bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// @param self QGraphicsWidget*
/// @param margins QMarginsF*
///
void q_graphicswidget_set_window_frame_margins2(void* self, void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// @param self QGraphicsWidget*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
///
void q_graphicswidget_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_unset_window_frame_margins(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// @param self QGraphicsWidget*
///
QRectF* q_graphicswidget_window_frame_geometry(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// @param self QGraphicsWidget*
///
QRectF* q_graphicswidget_window_frame_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// @param self QGraphicsWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_graphicswidget_window_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// @param self QGraphicsWidget*
///
/// @return enum Qt__WindowType
///
int32_t q_graphicswidget_window_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// @param self QGraphicsWidget*
/// @param wFlags flag of enum Qt__WindowType
///
void q_graphicswidget_set_window_flags(void* self, int32_t wFlags);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_active_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// @param self QGraphicsWidget*
/// @param title const char*
///
void q_graphicswidget_set_window_title(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsWidget*
///
const char* q_graphicswidget_window_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// @param self QGraphicsWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_graphicswidget_focus_policy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// @param self QGraphicsWidget*
/// @param policy enum Qt__FocusPolicy
///
void q_graphicswidget_set_focus_policy(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// @param first QGraphicsWidget*
/// @param second QGraphicsWidget*
///
void q_graphicswidget_set_tab_order(void* first, void* second);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// @param self QGraphicsWidget*
///
QGraphicsWidget* q_graphicswidget_focus_widget(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// @param self QGraphicsWidget*
/// @param sequence QKeySequence*
///
int32_t q_graphicswidget_grab_shortcut(void* self, void* sequence);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// @param self QGraphicsWidget*
/// @param id int
///
void q_graphicswidget_release_shortcut(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// @param self QGraphicsWidget*
/// @param id int
///
void q_graphicswidget_set_shortcut_enabled(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// @param self QGraphicsWidget*
/// @param id int
///
void q_graphicswidget_set_shortcut_auto_repeat(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// @param self QGraphicsWidget*
/// @param action QAction*
///
void q_graphicswidget_add_action(void* self, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// @param self QGraphicsWidget*
/// @param actions libqt_list of QAction*
///
void q_graphicswidget_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// @param self QGraphicsWidget*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_graphicswidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// @param self QGraphicsWidget*
/// @param before QAction*
/// @param action QAction*
///
void q_graphicswidget_insert_action(void* self, void* before, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// @param self QGraphicsWidget*
/// @param action QAction*
///
void q_graphicswidget_remove_action(void* self, void* action);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// @param self QGraphicsWidget*
///
/// @return libqt_list of QAction*
///
libqt_list q_graphicswidget_actions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// @param self QGraphicsWidget*
/// @param attribute enum Qt__WidgetAttribute
///
void q_graphicswidget_set_attribute(void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// @param self QGraphicsWidget*
/// @param attribute enum Qt__WidgetAttribute
///
bool q_graphicswidget_test_attribute(void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// @param self QGraphicsWidget*
///
int32_t q_graphicswidget_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback int32_t func()
///
void q_graphicswidget_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
///
int32_t q_graphicswidget_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// @param self QGraphicsWidget*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_graphicswidget_paint(void* self, void* painter, void* option, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget)
///
void q_graphicswidget_on_paint(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_graphicswidget_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// @param self QGraphicsWidget*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_graphicswidget_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget)
///
void q_graphicswidget_on_paint_window_frame(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
///
void q_graphicswidget_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// @param self QGraphicsWidget*
///
QRectF* q_graphicswidget_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback QRectF* func()
///
void q_graphicswidget_on_bounding_rect(void* self, QRectF* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
///
QRectF* q_graphicswidget_qbase_bounding_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// @param self QGraphicsWidget*
///
QPainterPath* q_graphicswidget_shape(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback QPainterPath* func()
///
void q_graphicswidget_on_shape(void* self, QPainterPath* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
///
QPainterPath* q_graphicswidget_qbase_shape(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_geometry_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_geometry_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_layout_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_layout_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_close(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// @param self QGraphicsWidget*
/// @param option QStyleOption*
///
void q_graphicswidget_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QStyleOption* option)
///
void q_graphicswidget_on_init_style_option(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param option QStyleOption*
///
void q_graphicswidget_qbase_init_style_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// @param self QGraphicsWidget*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicswidget_size_hint(void* self, int32_t which, void* constraint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback QSizeF* func(QGraphicsWidget* self, enum Qt__SizeHint which, QSizeF* constraint)
///
void q_graphicswidget_on_size_hint(void* self, QSizeF* (*callback)(void*, int32_t, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicswidget_qbase_size_hint(void* self, int32_t which, void* constraint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_update_geometry(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func()
///
void q_graphicswidget_on_update_geometry(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_qbase_update_geometry(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// @param self QGraphicsWidget*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
///
QVariant* q_graphicswidget_item_change(void* self, int32_t change, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback QVariant* func(QGraphicsWidget* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value)
///
void q_graphicswidget_on_item_change(void* self, QVariant* (*callback)(void*, int32_t, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
///
QVariant* q_graphicswidget_qbase_item_change(void* self, int32_t change, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// @param self QGraphicsWidget*
/// @param propertyName const char*
/// @param value QVariant*
///
QVariant* q_graphicswidget_property_change(void* self, const char* propertyName, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback QVariant* func(QGraphicsWidget* self, const char* propertyName, QVariant* value)
///
void q_graphicswidget_on_property_change(void* self, QVariant* (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param propertyName const char*
/// @param value QVariant*
///
QVariant* q_graphicswidget_qbase_property_change(void* self, const char* propertyName, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
bool q_graphicswidget_scene_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, QEvent* event)
///
void q_graphicswidget_on_scene_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
bool q_graphicswidget_qbase_scene_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// @param self QGraphicsWidget*
/// @param e QEvent*
///
bool q_graphicswidget_window_frame_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, QEvent* e)
///
void q_graphicswidget_on_window_frame_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param e QEvent*
///
bool q_graphicswidget_qbase_window_frame_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// @param self QGraphicsWidget*
/// @param pos QPointF*
///
/// @return enum Qt__WindowFrameSection
///
int32_t q_graphicswidget_window_frame_section_at(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback int32_t func(QGraphicsWidget* self, QPointF* pos)
///
void q_graphicswidget_on_window_frame_section_at(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param pos QPointF*
///
/// @return enum Qt__WindowFrameSection
///
int32_t q_graphicswidget_qbase_window_frame_section_at(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
bool q_graphicswidget_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, QEvent* event)
///
void q_graphicswidget_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
bool q_graphicswidget_qbase_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_change_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QEvent* event)
///
void q_graphicswidget_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_qbase_change_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// @param self QGraphicsWidget*
/// @param event QCloseEvent*
///
void q_graphicswidget_close_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QCloseEvent* event)
///
void q_graphicswidget_on_close_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QCloseEvent*
///
void q_graphicswidget_qbase_close_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// @param self QGraphicsWidget*
/// @param event QFocusEvent*
///
void q_graphicswidget_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QFocusEvent* event)
///
void q_graphicswidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QFocusEvent*
///
void q_graphicswidget_qbase_focus_in_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// @param self QGraphicsWidget*
/// @param next bool
///
bool q_graphicswidget_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, bool next)
///
void q_graphicswidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param next bool
///
bool q_graphicswidget_qbase_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// @param self QGraphicsWidget*
/// @param event QFocusEvent*
///
void q_graphicswidget_focus_out_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QFocusEvent* event)
///
void q_graphicswidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QFocusEvent*
///
void q_graphicswidget_qbase_focus_out_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// @param self QGraphicsWidget*
/// @param event QHideEvent*
///
void q_graphicswidget_hide_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QHideEvent* event)
///
void q_graphicswidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QHideEvent*
///
void q_graphicswidget_qbase_hide_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneMoveEvent*
///
void q_graphicswidget_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event)
///
void q_graphicswidget_on_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneMoveEvent*
///
void q_graphicswidget_qbase_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_polish_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func()
///
void q_graphicswidget_on_polish_event(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_qbase_polish_event(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneResizeEvent*
///
void q_graphicswidget_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event)
///
void q_graphicswidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneResizeEvent*
///
void q_graphicswidget_qbase_resize_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// @param self QGraphicsWidget*
/// @param event QShowEvent*
///
void q_graphicswidget_show_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QShowEvent* event)
///
void q_graphicswidget_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QShowEvent*
///
void q_graphicswidget_qbase_show_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicswidget_hover_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event)
///
void q_graphicswidget_on_hover_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicswidget_qbase_hover_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicswidget_hover_leave_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event)
///
void q_graphicswidget_on_hover_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicswidget_qbase_hover_leave_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_grab_mouse_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QEvent* event)
///
void q_graphicswidget_on_grab_mouse_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_qbase_grab_mouse_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_ungrab_mouse_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QEvent* event)
///
void q_graphicswidget_on_ungrab_mouse_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_qbase_ungrab_mouse_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_grab_keyboard_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QEvent* event)
///
void q_graphicswidget_on_grab_keyboard_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_qbase_grab_keyboard_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_ungrab_keyboard_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QEvent* event)
///
void q_graphicswidget_on_ungrab_keyboard_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_qbase_ungrab_keyboard_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_graphicswidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_graphicswidget_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// @param self QGraphicsWidget*
/// @param sequence QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_graphicswidget_grab_shortcut2(void* self, void* sequence, int32_t context);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// @param self QGraphicsWidget*
/// @param id int
/// @param enabled bool
///
void q_graphicswidget_set_shortcut_enabled2(void* self, int id, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// @param self QGraphicsWidget*
/// @param id int
/// @param enabled bool
///
void q_graphicswidget_set_shortcut_auto_repeat2(void* self, int id, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// @param self QGraphicsWidget*
/// @param attribute enum Qt__WidgetAttribute
/// @param on bool
///
void q_graphicswidget_set_attribute2(void* self, int32_t attribute, bool on);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QGraphicsWidget*
/// @param type enum Qt__GestureType
///
void q_graphicswidget_grab_gesture(void* self, int32_t type);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// @param self QGraphicsWidget*
/// @param type enum Qt__GestureType
///
void q_graphicswidget_ungrab_gesture(void* self, int32_t type);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_parent_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_enabled_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_x_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_y_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_z_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_rotation_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_scale_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_width_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_height_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QGraphicsWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_graphicswidget_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsWidget*
///
const char* q_graphicswidget_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsWidget*
/// @param name char*
///
void q_graphicswidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsWidget*
/// @param b bool
///
bool q_graphicswidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsWidget*
///
QThread* q_graphicswidget_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsWidget*
/// @param thread QThread*
///
bool q_graphicswidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsWidget*
/// @param interval int
///
int32_t q_graphicswidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsWidget*
/// @param time int64_t of nanoseconds
///
int32_t q_graphicswidget_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsWidget*
/// @param id int
///
void q_graphicswidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsWidget*
/// @param id enum Qt__TimerId
///
void q_graphicswidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsWidget*
///
/// @return libqt_list of QObject*
///
libqt_list q_graphicswidget_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsWidget*
/// @param parent QObject*
///
void q_graphicswidget_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsWidget*
/// @param filterObj QObject*
///
void q_graphicswidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsWidget*
/// @param obj QObject*
///
void q_graphicswidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_graphicswidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_graphicswidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_graphicswidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_graphicswidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsWidget*
/// @param name const char*
/// @param value QVariant*
///
bool q_graphicswidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsWidget*
/// @param name const char*
///
QVariant* q_graphicswidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QGraphicsWidget*
///
const char** q_graphicswidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsWidget*
///
QBindingStorage* q_graphicswidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsWidget*
///
const QBindingStorage* q_graphicswidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self)
///
void q_graphicswidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsWidget*
///
QObject* q_graphicswidget_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsWidget*
/// @param classname const char*
///
bool q_graphicswidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicswidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsWidget*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_graphicswidget_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_graphicswidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_graphicswidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsWidget*
/// @param param1 QObject*
///
void q_graphicswidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QObject* param1)
///
void q_graphicswidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// @param self QGraphicsWidget*
///
QGraphicsScene* q_graphicswidget_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// @param self QGraphicsWidget*
///
QGraphicsItem* q_graphicswidget_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// @param self QGraphicsWidget*
///
QGraphicsItem* q_graphicswidget_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// @param self QGraphicsWidget*
///
QGraphicsObject* q_graphicswidget_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// @param self QGraphicsWidget*
///
QGraphicsWidget* q_graphicswidget_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// @param self QGraphicsWidget*
///
QGraphicsWidget* q_graphicswidget_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// @param self QGraphicsWidget*
///
QGraphicsWidget* q_graphicswidget_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// @param self QGraphicsWidget*
///
QGraphicsItem* q_graphicswidget_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// @param self QGraphicsWidget*
/// @param parent QGraphicsItem*
///
void q_graphicswidget_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// @param self QGraphicsWidget*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicswidget_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QGraphicsWidget*
///
QGraphicsObject* q_graphicswidget_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QGraphicsWidget*
///
const QGraphicsObject* q_graphicswidget_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// @param self QGraphicsWidget*
///
QGraphicsItemGroup* q_graphicswidget_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// @param self QGraphicsWidget*
/// @param group QGraphicsItemGroup*
///
void q_graphicswidget_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// @param self QGraphicsWidget*
///
/// @return flag of enum QGraphicsItem__GraphicsItemFlag
///
int32_t q_graphicswidget_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QGraphicsWidget*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
///
void q_graphicswidget_set_flag(void* self, int32_t flag);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// @param self QGraphicsWidget*
/// @param flags flag of enum QGraphicsItem__GraphicsItemFlag
///
void q_graphicswidget_set_flags(void* self, int32_t flags);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// @param self QGraphicsWidget*
///
/// @return enum QGraphicsItem__CacheMode
///
int32_t q_graphicswidget_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QGraphicsWidget*
/// @param mode enum QGraphicsItem__CacheMode
///
void q_graphicswidget_set_cache_mode(void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// @param self QGraphicsWidget*
///
/// @return enum QGraphicsItem__PanelModality
///
int32_t q_graphicswidget_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// @param self QGraphicsWidget*
/// @param panelModality enum QGraphicsItem__PanelModality
///
void q_graphicswidget_set_panel_modality(void* self, int32_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGraphicsWidget*
///
const char* q_graphicswidget_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// @param self QGraphicsWidget*
/// @param toolTip const char*
///
void q_graphicswidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// @param self QGraphicsWidget*
///
QCursor* q_graphicswidget_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// @param self QGraphicsWidget*
/// @param cursor QCursor*
///
void q_graphicswidget_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// @param self QGraphicsWidget*
/// @param parent QGraphicsItem*
///
bool q_graphicswidget_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// @param self QGraphicsWidget*
/// @param visible bool
///
void q_graphicswidget_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// @param self QGraphicsWidget*
/// @param enabled bool
///
void q_graphicswidget_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// @param self QGraphicsWidget*
/// @param selected bool
///
void q_graphicswidget_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// @param self QGraphicsWidget*
/// @param on bool
///
void q_graphicswidget_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// @param self QGraphicsWidget*
/// @param opacity double
///
void q_graphicswidget_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// @param self QGraphicsWidget*
///
QGraphicsEffect* q_graphicswidget_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// @param self QGraphicsWidget*
/// @param effect QGraphicsEffect*
///
void q_graphicswidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// @param self QGraphicsWidget*
///
/// @return flag of enum Qt__MouseButton
///
int32_t q_graphicswidget_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// @param self QGraphicsWidget*
/// @param buttons flag of enum Qt__MouseButton
///
void q_graphicswidget_set_accepted_mouse_buttons(void* self, int32_t buttons);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// @param self QGraphicsWidget*
/// @param enabled bool
///
void q_graphicswidget_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// @param self QGraphicsWidget*
/// @param enabled bool
///
void q_graphicswidget_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// @param self QGraphicsWidget*
/// @param enabled bool
///
void q_graphicswidget_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// @param self QGraphicsWidget*
/// @param enabled bool
///
void q_graphicswidget_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// @param self QGraphicsWidget*
/// @param active bool
///
void q_graphicswidget_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// @param self QGraphicsWidget*
///
QGraphicsItem* q_graphicswidget_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
///
void q_graphicswidget_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// @param self QGraphicsWidget*
///
QGraphicsItem* q_graphicswidget_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// @param self QGraphicsWidget*
///
QGraphicsItem* q_graphicswidget_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// @param self QGraphicsWidget*
///
QPointF* q_graphicswidget_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// @param self QGraphicsWidget*
/// @param x double
///
void q_graphicswidget_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// @param self QGraphicsWidget*
/// @param y double
///
void q_graphicswidget_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// @param self QGraphicsWidget*
///
QPointF* q_graphicswidget_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QGraphicsWidget*
/// @param pos QPointF*
///
void q_graphicswidget_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
///
void q_graphicswidget_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// @param self QGraphicsWidget*
/// @param dx double
/// @param dy double
///
void q_graphicswidget_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
void q_graphicswidget_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// @param self QGraphicsWidget*
///
QTransform* q_graphicswidget_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// @param self QGraphicsWidget*
///
QTransform* q_graphicswidget_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// @param self QGraphicsWidget*
/// @param viewportTransform QTransform*
///
QTransform* q_graphicswidget_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self QGraphicsWidget*
/// @param other QGraphicsItem*
///
QTransform* q_graphicswidget_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QGraphicsWidget*
/// @param matrix QTransform*
///
void q_graphicswidget_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// @param self QGraphicsWidget*
/// @param angle double
///
void q_graphicswidget_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// @param self QGraphicsWidget*
/// @param scale double
///
void q_graphicswidget_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// @param self QGraphicsWidget*
///
/// @return libqt_list of QGraphicsTransform*
///
libqt_list q_graphicswidget_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// @param self QGraphicsWidget*
/// @param transformations libqt_list of QGraphicsTransform*
///
void q_graphicswidget_set_transformations(void* self, libqt_list /* of QGraphicsTransform* */ transformations);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// @param self QGraphicsWidget*
///
QPointF* q_graphicswidget_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QGraphicsWidget*
/// @param origin QPointF*
///
void q_graphicswidget_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QGraphicsWidget*
/// @param ax double
/// @param ay double
///
void q_graphicswidget_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// @param self QGraphicsWidget*
/// @param z double
///
void q_graphicswidget_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// @param self QGraphicsWidget*
/// @param sibling QGraphicsItem*
///
void q_graphicswidget_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// @param self QGraphicsWidget*
///
QRectF* q_graphicswidget_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// @param self QGraphicsWidget*
///
QRectF* q_graphicswidget_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// @param self QGraphicsWidget*
///
QPainterPath* q_graphicswidget_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QGraphicsWidget*
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicswidget_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
bool q_graphicswidget_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// @param self QGraphicsWidget*
/// @param itemToDeviceTransform QTransform*
///
QRegion* q_graphicswidget_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// @param self QGraphicsWidget*
/// @param granularity double
///
void q_graphicswidget_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
///
void q_graphicswidget_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QGraphicsWidget*
/// @param dx double
/// @param dy double
///
void q_graphicswidget_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_graphicswidget_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QGraphicsWidget*
/// @param point QPointF*
///
QPointF* q_graphicswidget_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QGraphicsWidget*
/// @param point QPointF*
///
QPointF* q_graphicswidget_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_graphicswidget_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QGraphicsWidget*
/// @param rect QRectF*
///
QRectF* q_graphicswidget_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QGraphicsWidget*
/// @param rect QRectF*
///
QRectF* q_graphicswidget_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_graphicswidget_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QGraphicsWidget*
/// @param path QPainterPath*
///
QPainterPath* q_graphicswidget_map_to_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QGraphicsWidget*
/// @param path QPainterPath*
///
QPainterPath* q_graphicswidget_map_to_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
/// @param point QPointF*
///
QPointF* q_graphicswidget_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QGraphicsWidget*
/// @param point QPointF*
///
QPointF* q_graphicswidget_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QGraphicsWidget*
/// @param point QPointF*
///
QPointF* q_graphicswidget_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
/// @param rect QRectF*
///
QRectF* q_graphicswidget_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QGraphicsWidget*
/// @param rect QRectF*
///
QRectF* q_graphicswidget_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QGraphicsWidget*
/// @param rect QRectF*
///
QRectF* q_graphicswidget_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
///
QPainterPath* q_graphicswidget_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QGraphicsWidget*
/// @param path QPainterPath*
///
QPainterPath* q_graphicswidget_map_from_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QGraphicsWidget*
/// @param path QPainterPath*
///
QPainterPath* q_graphicswidget_map_from_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_graphicswidget_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
///
QPointF* q_graphicswidget_map_to_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
///
QPointF* q_graphicswidget_map_to_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicswidget_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicswidget_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicswidget_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
///
QPointF* q_graphicswidget_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
///
QPointF* q_graphicswidget_map_from_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
///
QPointF* q_graphicswidget_map_from_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicswidget_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicswidget_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
///
QRectF* q_graphicswidget_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// @param self QGraphicsWidget*
/// @param child QGraphicsItem*
///
bool q_graphicswidget_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// @param self QGraphicsWidget*
/// @param other QGraphicsItem*
///
QGraphicsItem* q_graphicswidget_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// @param self QGraphicsWidget*
/// @param key int
///
QVariant* q_graphicswidget_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// @param self QGraphicsWidget*
/// @param key int
/// @param value QVariant*
///
void q_graphicswidget_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// @param self QGraphicsWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_graphicswidget_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// @param self QGraphicsWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_graphicswidget_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// @param self QGraphicsWidget*
/// @param filterItem QGraphicsItem*
///
void q_graphicswidget_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// @param self QGraphicsWidget*
/// @param filterItem QGraphicsItem*
///
void q_graphicswidget_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QGraphicsWidget*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
/// @param enabled bool
///
void q_graphicswidget_set_flag2(void* self, int32_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QGraphicsWidget*
/// @param mode enum QGraphicsItem__CacheMode
/// @param cacheSize QSize*
///
void q_graphicswidget_set_cache_mode2(void* self, int32_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QGraphicsWidget*
/// @param focusReason enum Qt__FocusReason
///
void q_graphicswidget_set_focus1(void* self, int32_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsWidget*
/// @param rect QRectF*
///
void q_graphicswidget_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsWidget*
/// @param rect QRectF*
/// @param xmargin int
///
void q_graphicswidget_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsWidget*
/// @param rect QRectF*
/// @param xmargin int
/// @param ymargin int
///
void q_graphicswidget_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
///
void q_graphicswidget_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
/// @param ymargin int
///
void q_graphicswidget_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self QGraphicsWidget*
/// @param other QGraphicsItem*
/// @param ok bool*
///
QTransform* q_graphicswidget_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QGraphicsWidget*
/// @param matrix QTransform*
/// @param combine bool
///
void q_graphicswidget_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QGraphicsWidget*
/// @param mode enum Qt__ItemSelectionMode
///
/// @return libqt_list of QGraphicsItem*
///
libqt_list q_graphicswidget_colliding_items1(void* self, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QGraphicsWidget*
/// @param rect QRectF*
///
bool q_graphicswidget_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsWidget*
/// @param rect QRectF*
///
void q_graphicswidget_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QGraphicsWidget*
/// @param dx double
/// @param dy double
/// @param rect QRectF*
///
void q_graphicswidget_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsWidget*
/// @param policy QSizePolicy*
///
void q_graphicswidget_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsWidget*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
///
void q_graphicswidget_set_size_policy2(void* self, int32_t hPolicy, int32_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self QGraphicsWidget*
///
QSizePolicy* q_graphicswidget_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsWidget*
/// @param size QSizeF*
///
void q_graphicswidget_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsWidget*
/// @param w double
/// @param h double
///
void q_graphicswidget_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self QGraphicsWidget*
///
QSizeF* q_graphicswidget_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QGraphicsWidget*
/// @param width double
///
void q_graphicswidget_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QGraphicsWidget*
/// @param height double
///
void q_graphicswidget_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsWidget*
/// @param size QSizeF*
///
void q_graphicswidget_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsWidget*
/// @param w double
/// @param h double
///
void q_graphicswidget_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self QGraphicsWidget*
///
QSizeF* q_graphicswidget_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QGraphicsWidget*
/// @param width double
///
void q_graphicswidget_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QGraphicsWidget*
/// @param height double
///
void q_graphicswidget_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsWidget*
/// @param size QSizeF*
///
void q_graphicswidget_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsWidget*
/// @param w double
/// @param h double
///
void q_graphicswidget_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self QGraphicsWidget*
///
QSizeF* q_graphicswidget_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QGraphicsWidget*
/// @param width double
///
void q_graphicswidget_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QGraphicsWidget*
/// @param height double
///
void q_graphicswidget_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self QGraphicsWidget*
///
double q_graphicswidget_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self QGraphicsWidget*
///
QRectF* q_graphicswidget_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self QGraphicsWidget*
///
QRectF* q_graphicswidget_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QGraphicsWidget*
/// @param which enum Qt__SizeHint
///
QSizeF* q_graphicswidget_effective_size_hint(void* self, int32_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self QGraphicsWidget*
///
QGraphicsLayoutItem* q_graphicswidget_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QGraphicsWidget*
/// @param parent QGraphicsLayoutItem*
///
void q_graphicswidget_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self QGraphicsWidget*
///
QGraphicsItem* q_graphicswidget_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsWidget*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
///
void q_graphicswidget_set_size_policy3(void* self, int32_t hPolicy, int32_t vPolicy, int32_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QGraphicsWidget*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
///
QSizeF* q_graphicswidget_effective_size_hint2(void* self, int32_t which, void* constraint);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicswidget_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_graphicswidget_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, QObject* watched, QEvent* event)
///
void q_graphicswidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QTimerEvent*
///
void q_graphicswidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QTimerEvent*
///
void q_graphicswidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QTimerEvent* event)
///
void q_graphicswidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QChildEvent*
///
void q_graphicswidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QChildEvent*
///
void q_graphicswidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QChildEvent* event)
///
void q_graphicswidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QEvent*
///
void q_graphicswidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QEvent* event)
///
void q_graphicswidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param signal QMetaMethod*
///
void q_graphicswidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param signal QMetaMethod*
///
void q_graphicswidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QMetaMethod* signal)
///
void q_graphicswidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param signal QMetaMethod*
///
void q_graphicswidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param signal QMetaMethod*
///
void q_graphicswidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QMetaMethod* signal)
///
void q_graphicswidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param phase int
///
void q_graphicswidget_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param phase int
///
void q_graphicswidget_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, int phase)
///
void q_graphicswidget_on_advance(void* self, void (*callback)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param point QPointF*
///
bool q_graphicswidget_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param point QPointF*
///
bool q_graphicswidget_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, QPointF* point)
///
void q_graphicswidget_on_contains(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_graphicswidget_collides_with_item(void* self, void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_graphicswidget_qbase_collides_with_item(void* self, void* other, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode)
///
void q_graphicswidget_on_collides_with_item(void* self, bool (*callback)(void*, void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_graphicswidget_collides_with_path(void* self, void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
///
bool q_graphicswidget_qbase_collides_with_path(void* self, void* path, int32_t mode);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, QPainterPath* path, enum Qt__ItemSelectionMode mode)
///
void q_graphicswidget_on_collides_with_path(void* self, bool (*callback)(void*, void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
///
bool q_graphicswidget_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
///
bool q_graphicswidget_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, QGraphicsItem* item)
///
void q_graphicswidget_on_is_obscured_by(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
///
QPainterPath* q_graphicswidget_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
///
QPainterPath* q_graphicswidget_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback QPainterPath* func()
///
void q_graphicswidget_on_opaque_area(void* self, QPainterPath* (*callback)());

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param watched QGraphicsItem*
/// @param event QEvent*
///
bool q_graphicswidget_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param watched QGraphicsItem*
/// @param event QEvent*
///
bool q_graphicswidget_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event)
///
void q_graphicswidget_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneContextMenuEvent*
///
void q_graphicswidget_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneContextMenuEvent*
///
void q_graphicswidget_qbase_context_menu_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event)
///
void q_graphicswidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicswidget_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicswidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicswidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicswidget_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicswidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicswidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicswidget_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicswidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicswidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicswidget_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneDragDropEvent*
///
void q_graphicswidget_qbase_drop_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event)
///
void q_graphicswidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicswidget_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneHoverEvent*
///
void q_graphicswidget_qbase_hover_enter_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event)
///
void q_graphicswidget_on_hover_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QKeyEvent*
///
void q_graphicswidget_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QKeyEvent*
///
void q_graphicswidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QKeyEvent* event)
///
void q_graphicswidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QKeyEvent*
///
void q_graphicswidget_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QKeyEvent*
///
void q_graphicswidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QKeyEvent* event)
///
void q_graphicswidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicswidget_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicswidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicswidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicswidget_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicswidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicswidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicswidget_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicswidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicswidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicswidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneMouseEvent*
///
void q_graphicswidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event)
///
void q_graphicswidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneWheelEvent*
///
void q_graphicswidget_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QGraphicsSceneWheelEvent*
///
void q_graphicswidget_qbase_wheel_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsSceneWheelEvent* event)
///
void q_graphicswidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QInputMethodEvent*
///
void q_graphicswidget_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param event QInputMethodEvent*
///
void q_graphicswidget_qbase_input_method_event(void* self, void* event);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QInputMethodEvent* event)
///
void q_graphicswidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_graphicswidget_input_method_query(void* self, int32_t query);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_graphicswidget_qbase_input_method_query(void* self, int32_t query);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback QVariant* func(QGraphicsWidget* self, enum Qt__InputMethodQuery query)
///
void q_graphicswidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param extension enum QGraphicsItem__Extension
///
bool q_graphicswidget_supports_extension(void* self, int32_t extension);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param extension enum QGraphicsItem__Extension
///
bool q_graphicswidget_qbase_supports_extension(void* self, int32_t extension);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, enum QGraphicsItem__Extension extension)
///
void q_graphicswidget_on_supports_extension(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
///
void q_graphicswidget_set_extension(void* self, int32_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
///
void q_graphicswidget_qbase_set_extension(void* self, int32_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, enum QGraphicsItem__Extension extension, QVariant* variant)
///
void q_graphicswidget_on_set_extension(void* self, void (*callback)(void*, int32_t, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param variant QVariant*
///
QVariant* q_graphicswidget_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param variant QVariant*
///
QVariant* q_graphicswidget_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback QVariant* func(QGraphicsWidget* self, QVariant* variant)
///
void q_graphicswidget_on_extension(void* self, QVariant* (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
///
bool q_graphicswidget_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback bool func()
///
void q_graphicswidget_on_is_empty(void* self, bool (*callback)());

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func()
///
void q_graphicswidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
///
QObject* q_graphicswidget_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
///
QObject* q_graphicswidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback QObject* func()
///
void q_graphicswidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
///
int32_t q_graphicswidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
///
int32_t q_graphicswidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback int32_t func()
///
void q_graphicswidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param signal const char*
///
int32_t q_graphicswidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param signal const char*
///
int32_t q_graphicswidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback int32_t func(QGraphicsWidget* self, const char* signal)
///
void q_graphicswidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param signal QMetaMethod*
///
bool q_graphicswidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param signal QMetaMethod*
///
bool q_graphicswidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback bool func(QGraphicsWidget* self, QMetaMethod* signal)
///
void q_graphicswidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func()
///
void q_graphicswidget_on_add_to_index(void* self, void (*callback)());

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func()
///
void q_graphicswidget_on_remove_from_index(void* self, void (*callback)());

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func()
///
void q_graphicswidget_on_prepare_geometry_change(void* self, void (*callback)());

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
///
void q_graphicswidget_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param item QGraphicsItem*
///
void q_graphicswidget_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, QGraphicsItem* item)
///
void q_graphicswidget_on_set_graphics_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param ownedByLayout bool
///
void q_graphicswidget_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param ownedByLayout bool
///
void q_graphicswidget_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, bool ownedByLayout)
///
void q_graphicswidget_on_set_owned_by_layout(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsWidget*
/// @param callback void func(QGraphicsWidget* self, const char* objectName)
///
void q_graphicswidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#dtor.QGraphicsWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsWidget*
///
void q_graphicswidget_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgraphicswidget.html#public-types)

typedef enum {
    QGRAPHICSWIDGET__TYPE = 11
} QGraphicsWidget__;

#endif
