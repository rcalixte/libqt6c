#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTWIDGETBOX_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTWIDGETBOX_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html)

/// q_designerwidgetboxinterface_new constructs a new QDesignerWidgetBoxInterface object.
///
/// @param parent QWidget*
///
QDesignerWidgetBoxInterface* q_designerwidgetboxinterface_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html)

/// q_designerwidgetboxinterface_new2 constructs a new QDesignerWidgetBoxInterface object.
///
QDesignerWidgetBoxInterface* q_designerwidgetboxinterface_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html)

/// q_designerwidgetboxinterface_new3 constructs a new QDesignerWidgetBoxInterface object.
///
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QDesignerWidgetBoxInterface* q_designerwidgetboxinterface_new3(void* parent, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDesignerWidgetBoxInterface*
///
const QMetaObject* q_designerwidgetboxinterface_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback const QMetaObject* func()
///
void q_designerwidgetboxinterface_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
///
const QMetaObject* q_designerwidgetboxinterface_qbase_meta_object(void* self);

/// @param self QDesignerWidgetBoxInterface*
/// @param param1 const char*
///
void* q_designerwidgetboxinterface_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void* func(QDesignerWidgetBoxInterface* self, const char* param1)
///
void q_designerwidgetboxinterface_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 const char*
///
void* q_designerwidgetboxinterface_qbase_metacast(void* self, const char* param1);

/// @param self QDesignerWidgetBoxInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerwidgetboxinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback int32_t func(QDesignerWidgetBoxInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designerwidgetboxinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerwidgetboxinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerwidgetboxinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#categoryCount)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_category_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#categoryCount)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback int32_t func()
///
void q_designerwidgetboxinterface_on_category_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#categoryCount)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_qbase_category_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#category)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
///
QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface_category(void* self, int cat_idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#category)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback QDesignerWidgetBoxInterface__Category* func(QDesignerWidgetBoxInterface* self, int cat_idx)
///
void q_designerwidgetboxinterface_on_category(void* self, QDesignerWidgetBoxInterface__Category* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#category)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
///
QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface_qbase_category(void* self, int cat_idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#addCategory)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat QDesignerWidgetBoxInterface__Category*
///
void q_designerwidgetboxinterface_add_category(void* self, void* cat);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#addCategory)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QDesignerWidgetBoxInterface__Category* cat)
///
void q_designerwidgetboxinterface_on_add_category(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#addCategory)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat QDesignerWidgetBoxInterface__Category*
///
void q_designerwidgetboxinterface_qbase_add_category(void* self, void* cat);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#removeCategory)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
///
void q_designerwidgetboxinterface_remove_category(void* self, int cat_idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#removeCategory)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, int cat_idx)
///
void q_designerwidgetboxinterface_on_remove_category(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#removeCategory)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
///
void q_designerwidgetboxinterface_qbase_remove_category(void* self, int cat_idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#widgetCount)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
///
int32_t q_designerwidgetboxinterface_widget_count(void* self, int cat_idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#widgetCount)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback int32_t func(QDesignerWidgetBoxInterface* self, int cat_idx)
///
void q_designerwidgetboxinterface_on_widget_count(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#widgetCount)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
///
int32_t q_designerwidgetboxinterface_qbase_widget_count(void* self, int cat_idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#widget)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
/// @param wgt_idx int
///
QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface_widget(void* self, int cat_idx, int wgt_idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback QDesignerWidgetBoxInterface__Widget* func(QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx)
///
void q_designerwidgetboxinterface_on_widget(void* self, QDesignerWidgetBoxInterface__Widget* (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#widget)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
/// @param wgt_idx int
///
QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface_qbase_widget(void* self, int cat_idx, int wgt_idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#addWidget)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
/// @param wgt QDesignerWidgetBoxInterface__Widget*
///
void q_designerwidgetboxinterface_add_widget(void* self, int cat_idx, void* wgt);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#addWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, int cat_idx, QDesignerWidgetBoxInterface__Widget* wgt)
///
void q_designerwidgetboxinterface_on_add_widget(void* self, void (*callback)(void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#addWidget)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
/// @param wgt QDesignerWidgetBoxInterface__Widget*
///
void q_designerwidgetboxinterface_qbase_add_widget(void* self, int cat_idx, void* wgt);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#removeWidget)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
/// @param wgt_idx int
///
void q_designerwidgetboxinterface_remove_widget(void* self, int cat_idx, int wgt_idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#removeWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, int cat_idx, int wgt_idx)
///
void q_designerwidgetboxinterface_on_remove_widget(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#removeWidget)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cat_idx int
/// @param wgt_idx int
///
void q_designerwidgetboxinterface_qbase_remove_widget(void* self, int cat_idx, int wgt_idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#findOrInsertCategory)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param categoryName const char*
///
int32_t q_designerwidgetboxinterface_find_or_insert_category(void* self, const char* categoryName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#dropWidgets)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param item_list libqt_list of QDesignerDnDItemInterface*
/// @param global_mouse_pos QPoint*
///
void q_designerwidgetboxinterface_drop_widgets(void* self, libqt_list /* of QDesignerDnDItemInterface* */ item_list, void* global_mouse_pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#dropWidgets)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QDesignerDnDItemInterface** item_list, QPoint* global_mouse_pos)
///
void q_designerwidgetboxinterface_on_drop_widgets(void* self, void (*callback)(void*, QDesignerDnDItemInterface**, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#dropWidgets)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
/// @param item_list libqt_list of QDesignerDnDItemInterface*
/// @param global_mouse_pos QPoint*
///
void q_designerwidgetboxinterface_qbase_drop_widgets(void* self, libqt_list /* of QDesignerDnDItemInterface* */ item_list, void* global_mouse_pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#setFileName)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param file_name const char*
///
void q_designerwidgetboxinterface_set_file_name(void* self, const char* file_name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#setFileName)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, const char* file_name)
///
void q_designerwidgetboxinterface_on_set_file_name(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#setFileName)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
/// @param file_name const char*
///
void q_designerwidgetboxinterface_qbase_set_file_name(void* self, const char* file_name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#fileName)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback const char* func()
///
void q_designerwidgetboxinterface_on_file_name(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#fileName)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_qbase_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#load)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_load(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#load)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback bool func()
///
void q_designerwidgetboxinterface_on_load(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#load)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_qbase_load(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#save)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_save(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#save)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback bool func()
///
void q_designerwidgetboxinterface_on_save(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#save)
///
/// Base class method implementation
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_qbase_save(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerwidgetboxinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerwidgetboxinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QDesignerWidgetBoxInterface*
///
uintptr_t q_designerwidgetboxinterface_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QDesignerWidgetBoxInterface*
///
uintptr_t q_designerwidgetboxinterface_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QDesignerWidgetBoxInterface*
///
uintptr_t q_designerwidgetboxinterface_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QDesignerWidgetBoxInterface*
///
QStyle* q_designerwidgetboxinterface_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param style QStyle*
///
void q_designerwidgetboxinterface_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return enum Qt__WindowModality
///
int32_t q_designerwidgetboxinterface_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param windowModality enum Qt__WindowModality
///
void q_designerwidgetboxinterface_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QWidget*
///
bool q_designerwidgetboxinterface_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param enabled bool
///
void q_designerwidgetboxinterface_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param disabled bool
///
void q_designerwidgetboxinterface_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param windowModified bool
///
void q_designerwidgetboxinterface_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QDesignerWidgetBoxInterface*
///
QRect* q_designerwidgetboxinterface_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QDesignerWidgetBoxInterface*
///
const QRect* q_designerwidgetboxinterface_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QDesignerWidgetBoxInterface*
///
QRect* q_designerwidgetboxinterface_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QDesignerWidgetBoxInterface*
///
QPoint* q_designerwidgetboxinterface_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QDesignerWidgetBoxInterface*
///
QSize* q_designerwidgetboxinterface_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QDesignerWidgetBoxInterface*
///
QSize* q_designerwidgetboxinterface_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QDesignerWidgetBoxInterface*
///
QRect* q_designerwidgetboxinterface_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QDesignerWidgetBoxInterface*
///
QRect* q_designerwidgetboxinterface_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QDesignerWidgetBoxInterface*
///
QRegion* q_designerwidgetboxinterface_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QDesignerWidgetBoxInterface*
///
QSize* q_designerwidgetboxinterface_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QDesignerWidgetBoxInterface*
///
QSize* q_designerwidgetboxinterface_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param minimumSize QSize*
///
void q_designerwidgetboxinterface_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param minw int
/// @param minh int
///
void q_designerwidgetboxinterface_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param maximumSize QSize*
///
void q_designerwidgetboxinterface_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param maxw int
/// @param maxh int
///
void q_designerwidgetboxinterface_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param minw int
///
void q_designerwidgetboxinterface_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param minh int
///
void q_designerwidgetboxinterface_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param maxw int
///
void q_designerwidgetboxinterface_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param maxh int
///
void q_designerwidgetboxinterface_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QDesignerWidgetBoxInterface*
///
QSize* q_designerwidgetboxinterface_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param sizeIncrement QSize*
///
void q_designerwidgetboxinterface_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param w int
/// @param h int
///
void q_designerwidgetboxinterface_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QDesignerWidgetBoxInterface*
///
QSize* q_designerwidgetboxinterface_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param baseSize QSize*
///
void q_designerwidgetboxinterface_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param basew int
/// @param baseh int
///
void q_designerwidgetboxinterface_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param fixedSize QSize*
///
void q_designerwidgetboxinterface_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param w int
/// @param h int
///
void q_designerwidgetboxinterface_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param w int
///
void q_designerwidgetboxinterface_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param h int
///
void q_designerwidgetboxinterface_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QPointF*
///
QPointF* q_designerwidgetboxinterface_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QPoint*
///
QPoint* q_designerwidgetboxinterface_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QPointF*
///
QPointF* q_designerwidgetboxinterface_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QPoint*
///
QPoint* q_designerwidgetboxinterface_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QPointF*
///
QPointF* q_designerwidgetboxinterface_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QPoint*
///
QPoint* q_designerwidgetboxinterface_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QPointF*
///
QPointF* q_designerwidgetboxinterface_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QPoint*
///
QPoint* q_designerwidgetboxinterface_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designerwidgetboxinterface_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designerwidgetboxinterface_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designerwidgetboxinterface_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designerwidgetboxinterface_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QDesignerWidgetBoxInterface*
///
QWidget* q_designerwidgetboxinterface_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QDesignerWidgetBoxInterface*
///
QWidget* q_designerwidgetboxinterface_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QDesignerWidgetBoxInterface*
///
QWidget* q_designerwidgetboxinterface_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QDesignerWidgetBoxInterface*
///
const QPalette* q_designerwidgetboxinterface_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param palette QPalette*
///
void q_designerwidgetboxinterface_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_designerwidgetboxinterface_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designerwidgetboxinterface_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_designerwidgetboxinterface_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designerwidgetboxinterface_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QDesignerWidgetBoxInterface*
///
const QFont* q_designerwidgetboxinterface_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param font QFont*
///
void q_designerwidgetboxinterface_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QDesignerWidgetBoxInterface*
///
QFontMetrics* q_designerwidgetboxinterface_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QDesignerWidgetBoxInterface*
///
QFontInfo* q_designerwidgetboxinterface_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QDesignerWidgetBoxInterface*
///
QCursor* q_designerwidgetboxinterface_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param cursor QCursor*
///
void q_designerwidgetboxinterface_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param enable bool
///
void q_designerwidgetboxinterface_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param enable bool
///
void q_designerwidgetboxinterface_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param mask QBitmap*
///
void q_designerwidgetboxinterface_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param mask QRegion*
///
void q_designerwidgetboxinterface_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QDesignerWidgetBoxInterface*
///
QRegion* q_designerwidgetboxinterface_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param target QPaintDevice*
///
void q_designerwidgetboxinterface_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param painter QPainter*
///
void q_designerwidgetboxinterface_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerWidgetBoxInterface*
///
QPixmap* q_designerwidgetboxinterface_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QDesignerWidgetBoxInterface*
///
QGraphicsEffect* q_designerwidgetboxinterface_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param effect QGraphicsEffect*
///
void q_designerwidgetboxinterface_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param type enum Qt__GestureType
///
void q_designerwidgetboxinterface_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param type enum Qt__GestureType
///
void q_designerwidgetboxinterface_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param windowTitle const char*
///
void q_designerwidgetboxinterface_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param styleSheet const char*
///
void q_designerwidgetboxinterface_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param icon QIcon*
///
void q_designerwidgetboxinterface_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QDesignerWidgetBoxInterface*
///
QIcon* q_designerwidgetboxinterface_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param windowIconText const char*
///
void q_designerwidgetboxinterface_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param windowRole const char*
///
void q_designerwidgetboxinterface_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param filePath const char*
///
void q_designerwidgetboxinterface_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param level double
///
void q_designerwidgetboxinterface_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QDesignerWidgetBoxInterface*
///
double q_designerwidgetboxinterface_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param toolTip const char*
///
void q_designerwidgetboxinterface_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param msec int
///
void q_designerwidgetboxinterface_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param statusTip const char*
///
void q_designerwidgetboxinterface_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param whatsThis const char*
///
void q_designerwidgetboxinterface_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param name const char*
///
void q_designerwidgetboxinterface_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param description const char*
///
void q_designerwidgetboxinterface_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param direction enum Qt__LayoutDirection
///
void q_designerwidgetboxinterface_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_designerwidgetboxinterface_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param locale QLocale*
///
void q_designerwidgetboxinterface_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QDesignerWidgetBoxInterface*
///
QLocale* q_designerwidgetboxinterface_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param reason enum Qt__FocusReason
///
void q_designerwidgetboxinterface_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_designerwidgetboxinterface_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param policy enum Qt__FocusPolicy
///
void q_designerwidgetboxinterface_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_designerwidgetboxinterface_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param focusProxy QWidget*
///
void q_designerwidgetboxinterface_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QDesignerWidgetBoxInterface*
///
QWidget* q_designerwidgetboxinterface_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_designerwidgetboxinterface_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_designerwidgetboxinterface_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QCursor*
///
void q_designerwidgetboxinterface_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param key QKeySequence*
///
int32_t q_designerwidgetboxinterface_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param id int
///
void q_designerwidgetboxinterface_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param id int
///
void q_designerwidgetboxinterface_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param id int
///
void q_designerwidgetboxinterface_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_designerwidgetboxinterface_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_designerwidgetboxinterface_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param enable bool
///
void q_designerwidgetboxinterface_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QDesignerWidgetBoxInterface*
///
QGraphicsProxyWidget* q_designerwidgetboxinterface_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerwidgetboxinterface_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QRect*
///
void q_designerwidgetboxinterface_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QRegion*
///
void q_designerwidgetboxinterface_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerwidgetboxinterface_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QRect*
///
void q_designerwidgetboxinterface_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QRegion*
///
void q_designerwidgetboxinterface_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param hidden bool
///
void q_designerwidgetboxinterface_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QWidget*
///
void q_designerwidgetboxinterface_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param x int
/// @param y int
///
void q_designerwidgetboxinterface_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QPoint*
///
void q_designerwidgetboxinterface_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param w int
/// @param h int
///
void q_designerwidgetboxinterface_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QSize*
///
void q_designerwidgetboxinterface_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerwidgetboxinterface_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param geometry QRect*
///
void q_designerwidgetboxinterface_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
char* q_designerwidgetboxinterface_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param geometry const char*
///
bool q_designerwidgetboxinterface_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QWidget*
///
bool q_designerwidgetboxinterface_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_designerwidgetboxinterface_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designerwidgetboxinterface_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designerwidgetboxinterface_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QDesignerWidgetBoxInterface*
///
QSizePolicy* q_designerwidgetboxinterface_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param sizePolicy QSizePolicy*
///
void q_designerwidgetboxinterface_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_designerwidgetboxinterface_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QDesignerWidgetBoxInterface*
///
QRegion* q_designerwidgetboxinterface_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_designerwidgetboxinterface_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param margins QMargins*
///
void q_designerwidgetboxinterface_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QDesignerWidgetBoxInterface*
///
QMargins* q_designerwidgetboxinterface_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QDesignerWidgetBoxInterface*
///
QRect* q_designerwidgetboxinterface_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QDesignerWidgetBoxInterface*
///
QLayout* q_designerwidgetboxinterface_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param layout QLayout*
///
void q_designerwidgetboxinterface_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param parent QWidget*
///
void q_designerwidgetboxinterface_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_designerwidgetboxinterface_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param dx int
/// @param dy int
///
void q_designerwidgetboxinterface_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_designerwidgetboxinterface_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QDesignerWidgetBoxInterface*
///
QWidget* q_designerwidgetboxinterface_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QDesignerWidgetBoxInterface*
///
QWidget* q_designerwidgetboxinterface_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QDesignerWidgetBoxInterface*
///
QWidget* q_designerwidgetboxinterface_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param on bool
///
void q_designerwidgetboxinterface_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param action QAction*
///
void q_designerwidgetboxinterface_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param actions libqt_list of QAction*
///
void q_designerwidgetboxinterface_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_designerwidgetboxinterface_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param before QAction*
/// @param action QAction*
///
void q_designerwidgetboxinterface_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param action QAction*
///
void q_designerwidgetboxinterface_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return libqt_list of QAction*
///
libqt_list q_designerwidgetboxinterface_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param text const char*
///
QAction* q_designerwidgetboxinterface_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_designerwidgetboxinterface_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designerwidgetboxinterface_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designerwidgetboxinterface_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QDesignerWidgetBoxInterface*
///
QWidget* q_designerwidgetboxinterface_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designerwidgetboxinterface_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_designerwidgetboxinterface_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 enum Qt__WindowType
///
void q_designerwidgetboxinterface_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designerwidgetboxinterface_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return enum Qt__WindowType
///
int32_t q_designerwidgetboxinterface_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_designerwidgetboxinterface_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param x int
/// @param y int
///
QWidget* q_designerwidgetboxinterface_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param p QPoint*
///
QWidget* q_designerwidgetboxinterface_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param p QPointF*
///
QWidget* q_designerwidgetboxinterface_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 enum Qt__WidgetAttribute
///
void q_designerwidgetboxinterface_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_designerwidgetboxinterface_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param child QWidget*
///
bool q_designerwidgetboxinterface_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param enabled bool
///
void q_designerwidgetboxinterface_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QDesignerWidgetBoxInterface*
///
QBackingStore* q_designerwidgetboxinterface_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QDesignerWidgetBoxInterface*
///
QWindow* q_designerwidgetboxinterface_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QDesignerWidgetBoxInterface*
///
QScreen* q_designerwidgetboxinterface_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param screen QScreen*
///
void q_designerwidgetboxinterface_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_designerwidgetboxinterface_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param title const char*
///
void q_designerwidgetboxinterface_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, const char* title)
///
void q_designerwidgetboxinterface_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param icon QIcon*
///
void q_designerwidgetboxinterface_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QIcon* icon)
///
void q_designerwidgetboxinterface_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param iconText const char*
///
void q_designerwidgetboxinterface_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, const char* iconText)
///
void q_designerwidgetboxinterface_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param pos QPoint*
///
void q_designerwidgetboxinterface_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QPoint* pos)
///
void q_designerwidgetboxinterface_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_designerwidgetboxinterface_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_designerwidgetboxinterface_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_designerwidgetboxinterface_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designerwidgetboxinterface_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designerwidgetboxinterface_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_designerwidgetboxinterface_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designerwidgetboxinterface_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designerwidgetboxinterface_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param rectangle QRect*
///
QPixmap* q_designerwidgetboxinterface_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_designerwidgetboxinterface_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_designerwidgetboxinterface_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param id int
/// @param enable bool
///
void q_designerwidgetboxinterface_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param id int
/// @param enable bool
///
void q_designerwidgetboxinterface_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_designerwidgetboxinterface_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_designerwidgetboxinterface_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_designerwidgetboxinterface_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_designerwidgetboxinterface_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char* q_designerwidgetboxinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param name char*
///
void q_designerwidgetboxinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param b bool
///
bool q_designerwidgetboxinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDesignerWidgetBoxInterface*
///
QThread* q_designerwidgetboxinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param thread QThread*
///
bool q_designerwidgetboxinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param interval int
///
int32_t q_designerwidgetboxinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designerwidgetboxinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param id int
///
void q_designerwidgetboxinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param id enum Qt__TimerId
///
void q_designerwidgetboxinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDesignerWidgetBoxInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerwidgetboxinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param filterObj QObject*
///
void q_designerwidgetboxinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param obj QObject*
///
void q_designerwidgetboxinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_designerwidgetboxinterface_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerwidgetboxinterface_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerwidgetboxinterface_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerwidgetboxinterface_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerwidgetboxinterface_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param receiver QObject*
///
bool q_designerwidgetboxinterface_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerwidgetboxinterface_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerwidgetboxinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param name const char*
///
QVariant* q_designerwidgetboxinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerWidgetBoxInterface*
///
const char** q_designerwidgetboxinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerWidgetBoxInterface*
///
QBindingStorage* q_designerwidgetboxinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerWidgetBoxInterface*
///
const QBindingStorage* q_designerwidgetboxinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self)
///
void q_designerwidgetboxinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDesignerWidgetBoxInterface*
///
QObject* q_designerwidgetboxinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param classname const char*
///
bool q_designerwidgetboxinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerwidgetboxinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designerwidgetboxinterface_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_designerwidgetboxinterface_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_designerwidgetboxinterface_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerwidgetboxinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param signal const char*
///
bool q_designerwidgetboxinterface_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_designerwidgetboxinterface_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerwidgetboxinterface_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param receiver QObject*
/// @param member const char*
///
bool q_designerwidgetboxinterface_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QObject*
///
void q_designerwidgetboxinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QObject* param1)
///
void q_designerwidgetboxinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QDesignerWidgetBoxInterface*
///
double q_designerwidgetboxinterface_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QDesignerWidgetBoxInterface*
///
double q_designerwidgetboxinterface_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_designerwidgetboxinterface_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_designerwidgetboxinterface_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback int32_t func()
///
void q_designerwidgetboxinterface_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param visible bool
///
void q_designerwidgetboxinterface_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param visible bool
///
void q_designerwidgetboxinterface_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, bool visible)
///
void q_designerwidgetboxinterface_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
QSize* q_designerwidgetboxinterface_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
QSize* q_designerwidgetboxinterface_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback QSize* func()
///
void q_designerwidgetboxinterface_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
QSize* q_designerwidgetboxinterface_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
QSize* q_designerwidgetboxinterface_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback QSize* func()
///
void q_designerwidgetboxinterface_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 int
///
int32_t q_designerwidgetboxinterface_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 int
///
int32_t q_designerwidgetboxinterface_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback int32_t func(QDesignerWidgetBoxInterface* self, int param1)
///
void q_designerwidgetboxinterface_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback bool func()
///
void q_designerwidgetboxinterface_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
QPaintEngine* q_designerwidgetboxinterface_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
QPaintEngine* q_designerwidgetboxinterface_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback QPaintEngine* func()
///
void q_designerwidgetboxinterface_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QEvent*
///
bool q_designerwidgetboxinterface_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QEvent*
///
bool q_designerwidgetboxinterface_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback bool func(QDesignerWidgetBoxInterface* self, QEvent* event)
///
void q_designerwidgetboxinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QMouseEvent*
///
void q_designerwidgetboxinterface_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QMouseEvent*
///
void q_designerwidgetboxinterface_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QMouseEvent* event)
///
void q_designerwidgetboxinterface_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QMouseEvent*
///
void q_designerwidgetboxinterface_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QMouseEvent*
///
void q_designerwidgetboxinterface_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QMouseEvent* event)
///
void q_designerwidgetboxinterface_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QMouseEvent*
///
void q_designerwidgetboxinterface_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QMouseEvent*
///
void q_designerwidgetboxinterface_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QMouseEvent* event)
///
void q_designerwidgetboxinterface_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QMouseEvent*
///
void q_designerwidgetboxinterface_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QMouseEvent*
///
void q_designerwidgetboxinterface_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QMouseEvent* event)
///
void q_designerwidgetboxinterface_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QWheelEvent*
///
void q_designerwidgetboxinterface_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QWheelEvent*
///
void q_designerwidgetboxinterface_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QWheelEvent* event)
///
void q_designerwidgetboxinterface_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QKeyEvent*
///
void q_designerwidgetboxinterface_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QKeyEvent*
///
void q_designerwidgetboxinterface_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QKeyEvent* event)
///
void q_designerwidgetboxinterface_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QKeyEvent*
///
void q_designerwidgetboxinterface_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QKeyEvent*
///
void q_designerwidgetboxinterface_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QKeyEvent* event)
///
void q_designerwidgetboxinterface_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QFocusEvent*
///
void q_designerwidgetboxinterface_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QFocusEvent*
///
void q_designerwidgetboxinterface_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QFocusEvent* event)
///
void q_designerwidgetboxinterface_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QFocusEvent*
///
void q_designerwidgetboxinterface_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QFocusEvent*
///
void q_designerwidgetboxinterface_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QFocusEvent* event)
///
void q_designerwidgetboxinterface_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QEnterEvent*
///
void q_designerwidgetboxinterface_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QEnterEvent*
///
void q_designerwidgetboxinterface_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QEnterEvent* event)
///
void q_designerwidgetboxinterface_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QEvent*
///
void q_designerwidgetboxinterface_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QEvent*
///
void q_designerwidgetboxinterface_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QEvent* event)
///
void q_designerwidgetboxinterface_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QPaintEvent*
///
void q_designerwidgetboxinterface_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QPaintEvent*
///
void q_designerwidgetboxinterface_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QPaintEvent* event)
///
void q_designerwidgetboxinterface_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QMoveEvent*
///
void q_designerwidgetboxinterface_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QMoveEvent*
///
void q_designerwidgetboxinterface_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QMoveEvent* event)
///
void q_designerwidgetboxinterface_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QResizeEvent*
///
void q_designerwidgetboxinterface_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QResizeEvent*
///
void q_designerwidgetboxinterface_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QResizeEvent* event)
///
void q_designerwidgetboxinterface_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QCloseEvent*
///
void q_designerwidgetboxinterface_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QCloseEvent*
///
void q_designerwidgetboxinterface_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QCloseEvent* event)
///
void q_designerwidgetboxinterface_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QContextMenuEvent*
///
void q_designerwidgetboxinterface_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QContextMenuEvent*
///
void q_designerwidgetboxinterface_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QContextMenuEvent* event)
///
void q_designerwidgetboxinterface_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QTabletEvent*
///
void q_designerwidgetboxinterface_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QTabletEvent*
///
void q_designerwidgetboxinterface_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QTabletEvent* event)
///
void q_designerwidgetboxinterface_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QActionEvent*
///
void q_designerwidgetboxinterface_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QActionEvent*
///
void q_designerwidgetboxinterface_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QActionEvent* event)
///
void q_designerwidgetboxinterface_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QDragEnterEvent*
///
void q_designerwidgetboxinterface_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QDragEnterEvent*
///
void q_designerwidgetboxinterface_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QDragEnterEvent* event)
///
void q_designerwidgetboxinterface_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QDragMoveEvent*
///
void q_designerwidgetboxinterface_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QDragMoveEvent*
///
void q_designerwidgetboxinterface_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QDragMoveEvent* event)
///
void q_designerwidgetboxinterface_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QDragLeaveEvent*
///
void q_designerwidgetboxinterface_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QDragLeaveEvent*
///
void q_designerwidgetboxinterface_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QDragLeaveEvent* event)
///
void q_designerwidgetboxinterface_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QDropEvent*
///
void q_designerwidgetboxinterface_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QDropEvent*
///
void q_designerwidgetboxinterface_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QDropEvent* event)
///
void q_designerwidgetboxinterface_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QShowEvent*
///
void q_designerwidgetboxinterface_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QShowEvent*
///
void q_designerwidgetboxinterface_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QShowEvent* event)
///
void q_designerwidgetboxinterface_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QHideEvent*
///
void q_designerwidgetboxinterface_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QHideEvent*
///
void q_designerwidgetboxinterface_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QHideEvent* event)
///
void q_designerwidgetboxinterface_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_designerwidgetboxinterface_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_designerwidgetboxinterface_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback bool func(QDesignerWidgetBoxInterface* self, const char* eventType, void* message, intptr_t* result)
///
void q_designerwidgetboxinterface_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QEvent*
///
void q_designerwidgetboxinterface_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QEvent*
///
void q_designerwidgetboxinterface_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QEvent* param1)
///
void q_designerwidgetboxinterface_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_designerwidgetboxinterface_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_designerwidgetboxinterface_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback int32_t func(QDesignerWidgetBoxInterface* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_designerwidgetboxinterface_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param painter QPainter*
///
void q_designerwidgetboxinterface_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param painter QPainter*
///
void q_designerwidgetboxinterface_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QPainter* painter)
///
void q_designerwidgetboxinterface_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param offset QPoint*
///
QPaintDevice* q_designerwidgetboxinterface_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param offset QPoint*
///
QPaintDevice* q_designerwidgetboxinterface_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback QPaintDevice* func(QDesignerWidgetBoxInterface* self, QPoint* offset)
///
void q_designerwidgetboxinterface_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
QPainter* q_designerwidgetboxinterface_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
QPainter* q_designerwidgetboxinterface_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback QPainter* func()
///
void q_designerwidgetboxinterface_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QInputMethodEvent*
///
void q_designerwidgetboxinterface_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 QInputMethodEvent*
///
void q_designerwidgetboxinterface_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QInputMethodEvent* param1)
///
void q_designerwidgetboxinterface_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_designerwidgetboxinterface_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_designerwidgetboxinterface_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback QVariant* func(QDesignerWidgetBoxInterface* self, enum Qt__InputMethodQuery param1)
///
void q_designerwidgetboxinterface_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param next bool
///
bool q_designerwidgetboxinterface_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param next bool
///
bool q_designerwidgetboxinterface_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback bool func(QDesignerWidgetBoxInterface* self, bool next)
///
void q_designerwidgetboxinterface_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerwidgetboxinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerwidgetboxinterface_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback bool func(QDesignerWidgetBoxInterface* self, QObject* watched, QEvent* event)
///
void q_designerwidgetboxinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QTimerEvent*
///
void q_designerwidgetboxinterface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QTimerEvent*
///
void q_designerwidgetboxinterface_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QTimerEvent* event)
///
void q_designerwidgetboxinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QChildEvent*
///
void q_designerwidgetboxinterface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QChildEvent*
///
void q_designerwidgetboxinterface_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QChildEvent* event)
///
void q_designerwidgetboxinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QEvent*
///
void q_designerwidgetboxinterface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param event QEvent*
///
void q_designerwidgetboxinterface_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QEvent* event)
///
void q_designerwidgetboxinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetboxinterface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetboxinterface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QMetaMethod* signal)
///
void q_designerwidgetboxinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetboxinterface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param signal QMetaMethod*
///
void q_designerwidgetboxinterface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, QMetaMethod* signal)
///
void q_designerwidgetboxinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func()
///
void q_designerwidgetboxinterface_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func()
///
void q_designerwidgetboxinterface_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func()
///
void q_designerwidgetboxinterface_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback bool func()
///
void q_designerwidgetboxinterface_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
bool q_designerwidgetboxinterface_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback bool func()
///
void q_designerwidgetboxinterface_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
QObject* q_designerwidgetboxinterface_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
QObject* q_designerwidgetboxinterface_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback QObject* func()
///
void q_designerwidgetboxinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
///
int32_t q_designerwidgetboxinterface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback int32_t func()
///
void q_designerwidgetboxinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param signal const char*
///
int32_t q_designerwidgetboxinterface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param signal const char*
///
int32_t q_designerwidgetboxinterface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback int32_t func(QDesignerWidgetBoxInterface* self, const char* signal)
///
void q_designerwidgetboxinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param signal QMetaMethod*
///
bool q_designerwidgetboxinterface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param signal QMetaMethod*
///
bool q_designerwidgetboxinterface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback bool func(QDesignerWidgetBoxInterface* self, QMetaMethod* signal)
///
void q_designerwidgetboxinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_designerwidgetboxinterface_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_designerwidgetboxinterface_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback double func(QDesignerWidgetBoxInterface* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_designerwidgetboxinterface_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerWidgetBoxInterface*
/// @param callback void func(QDesignerWidgetBoxInterface* self, const char* objectName)
///
void q_designerwidgetboxinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface.html#dtor.QDesignerWidgetBoxInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerWidgetBoxInterface*
///
void q_designerwidgetboxinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html)

/// q_designerwidgetboxinterface__widget_new constructs a new QDesignerWidgetBoxInterface::Widget object.
///
QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html)

/// q_designerwidgetboxinterface__widget_new2 constructs a new QDesignerWidgetBoxInterface::Widget object.
///
/// @param w QDesignerWidgetBoxInterface__Widget*
///
QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new2(void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html)

/// q_designerwidgetboxinterface__widget_new3 constructs a new QDesignerWidgetBoxInterface::Widget object.
///
/// @param aname const char*
///
QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new3(const char* aname);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html)

/// q_designerwidgetboxinterface__widget_new4 constructs a new QDesignerWidgetBoxInterface::Widget object.
///
/// @param aname const char*
/// @param xml const char*
///
QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new4(const char* aname, const char* xml);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html)

/// q_designerwidgetboxinterface__widget_new5 constructs a new QDesignerWidgetBoxInterface::Widget object.
///
/// @param aname const char*
/// @param xml const char*
/// @param icon_name const char*
///
QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new5(const char* aname, const char* xml, const char* icon_name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html)

/// q_designerwidgetboxinterface__widget_new6 constructs a new QDesignerWidgetBoxInterface::Widget object.
///
/// @param aname const char*
/// @param xml const char*
/// @param icon_name const char*
/// @param atype enum QDesignerWidgetBoxInterface__Widget__Type
///
QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__widget_new6(const char* aname, const char* xml, const char* icon_name, int32_t atype);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html#operator-eq)
///
/// @param self QDesignerWidgetBoxInterface__Widget*
/// @param w QDesignerWidgetBoxInterface__Widget*
///
void q_designerwidgetboxinterface__widget_operator_assign(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface__Widget*
///
const char* q_designerwidgetboxinterface__widget_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html#setName)
///
/// @param self QDesignerWidgetBoxInterface__Widget*
/// @param aname const char*
///
void q_designerwidgetboxinterface__widget_set_name(void* self, const char* aname);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html#domXml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface__Widget*
///
const char* q_designerwidgetboxinterface__widget_dom_xml(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html#setDomXml)
///
/// @param self QDesignerWidgetBoxInterface__Widget*
/// @param xml const char*
///
void q_designerwidgetboxinterface__widget_set_dom_xml(void* self, const char* xml);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface__Widget*
///
const char* q_designerwidgetboxinterface__widget_icon_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html#setIconName)
///
/// @param self QDesignerWidgetBoxInterface__Widget*
/// @param icon_name const char*
///
void q_designerwidgetboxinterface__widget_set_icon_name(void* self, const char* icon_name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html#type)
///
/// @param self QDesignerWidgetBoxInterface__Widget*
///
/// @return enum QDesignerWidgetBoxInterface__Widget__Type
///
int32_t q_designerwidgetboxinterface__widget_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html#setType)
///
/// @param self QDesignerWidgetBoxInterface__Widget*
/// @param atype enum QDesignerWidgetBoxInterface__Widget__Type
///
void q_designerwidgetboxinterface__widget_set_type(void* self, int32_t atype);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-widget.html#isNull)
///
/// @param self QDesignerWidgetBoxInterface__Widget*
///
bool q_designerwidgetboxinterface__widget_is_null(void* self);

/// Delete this object from C++ memory.
///
/// @param self QDesignerWidgetBoxInterface__Widget*
///
void q_designerwidgetboxinterface__widget_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html)

/// q_designerwidgetboxinterface__category_new constructs a new QDesignerWidgetBoxInterface::Category object.
///
QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface__category_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html)

/// q_designerwidgetboxinterface__category_new2 constructs a new QDesignerWidgetBoxInterface::Category object.
///
/// @param param1 QDesignerWidgetBoxInterface__Category*
///
QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface__category_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html)

/// q_designerwidgetboxinterface__category_new3 constructs a new QDesignerWidgetBoxInterface::Category object.
///
/// @param aname const char*
///
QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface__category_new3(const char* aname);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html)

/// q_designerwidgetboxinterface__category_new4 constructs a new QDesignerWidgetBoxInterface::Category object.
///
/// @param aname const char*
/// @param atype enum QDesignerWidgetBoxInterface__Category__Type
///
QDesignerWidgetBoxInterface__Category* q_designerwidgetboxinterface__category_new4(const char* aname, int32_t atype);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerWidgetBoxInterface__Category*
///
const char* q_designerwidgetboxinterface__category_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html#setName)
///
/// @param self QDesignerWidgetBoxInterface__Category*
/// @param aname const char*
///
void q_designerwidgetboxinterface__category_set_name(void* self, const char* aname);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html#widgetCount)
///
/// @param self QDesignerWidgetBoxInterface__Category*
///
int32_t q_designerwidgetboxinterface__category_widget_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html#widget)
///
/// @param self QDesignerWidgetBoxInterface__Category*
/// @param idx int
///
QDesignerWidgetBoxInterface__Widget* q_designerwidgetboxinterface__category_widget(void* self, int idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html#removeWidget)
///
/// @param self QDesignerWidgetBoxInterface__Category*
/// @param idx int
///
void q_designerwidgetboxinterface__category_remove_widget(void* self, int idx);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html#addWidget)
///
/// @param self QDesignerWidgetBoxInterface__Category*
/// @param awidget QDesignerWidgetBoxInterface__Widget*
///
void q_designerwidgetboxinterface__category_add_widget(void* self, void* awidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html#type)
///
/// @param self QDesignerWidgetBoxInterface__Category*
///
/// @return enum QDesignerWidgetBoxInterface__Category__Type
///
int32_t q_designerwidgetboxinterface__category_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html#setType)
///
/// @param self QDesignerWidgetBoxInterface__Category*
/// @param atype enum QDesignerWidgetBoxInterface__Category__Type
///
void q_designerwidgetboxinterface__category_set_type(void* self, int32_t atype);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerwidgetboxinterface-category.html#isNull)
///
/// @param self QDesignerWidgetBoxInterface__Category*
///
bool q_designerwidgetboxinterface__category_is_null(void* self);

/// Delete this object from C++ memory.
///
/// @param self QDesignerWidgetBoxInterface__Category*
///
void q_designerwidgetboxinterface__category_delete(void* self);

/// [Upstream resources](https://api.kde.org/abstractwidgetbox.html#public-types)

typedef enum {
    QDESIGNERWIDGETBOXINTERFACE_WIDGET_TYPE_DEFAULT = 0,
    QDESIGNERWIDGETBOXINTERFACE_WIDGET_TYPE_CUSTOM = 1
} QDesignerWidgetBoxInterface__Widget__Type;

/// [Upstream resources](https://api.kde.org/abstractwidgetbox.html#public-types)

typedef enum {
    QDESIGNERWIDGETBOXINTERFACE_CATEGORY_TYPE_DEFAULT = 0,
    QDESIGNERWIDGETBOXINTERFACE_CATEGORY_TYPE_SCRATCHPAD = 1
} QDesignerWidgetBoxInterface__Category__Type;

#endif
