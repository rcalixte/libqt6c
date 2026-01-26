#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTPROPERTYEDITOR_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTPROPERTYEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html)

/// q_designerpropertyeditorinterface_new constructs a new QDesignerPropertyEditorInterface object.
///
/// @param parent QWidget*
///
QDesignerPropertyEditorInterface* q_designerpropertyeditorinterface_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html)

/// q_designerpropertyeditorinterface_new2 constructs a new QDesignerPropertyEditorInterface object.
///
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QDesignerPropertyEditorInterface* q_designerpropertyeditorinterface_new2(void* parent, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDesignerPropertyEditorInterface*
///
const QMetaObject* q_designerpropertyeditorinterface_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback const QMetaObject* func()
///
void q_designerpropertyeditorinterface_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QDesignerPropertyEditorInterface*
///
const QMetaObject* q_designerpropertyeditorinterface_qbase_meta_object(void* self);

/// @param self QDesignerPropertyEditorInterface*
/// @param param1 const char*
///
void* q_designerpropertyeditorinterface_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void* func(QDesignerPropertyEditorInterface* self, const char* param1)
///
void q_designerpropertyeditorinterface_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 const char*
///
void* q_designerpropertyeditorinterface_qbase_metacast(void* self, const char* param1);

/// @param self QDesignerPropertyEditorInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerpropertyeditorinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback int32_t func(QDesignerPropertyEditorInterface* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_designerpropertyeditorinterface_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerpropertyeditorinterface_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerpropertyeditorinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#core)
///
/// @param self QDesignerPropertyEditorInterface*
///
QDesignerFormEditorInterface* q_designerpropertyeditorinterface_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#core)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback QDesignerFormEditorInterface* func()
///
void q_designerpropertyeditorinterface_on_core(void* self, QDesignerFormEditorInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#core)
///
/// Base class method implementation
///
/// @param self QDesignerPropertyEditorInterface*
///
QDesignerFormEditorInterface* q_designerpropertyeditorinterface_qbase_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#isReadOnly)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_read_only(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#isReadOnly)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback bool func()
///
void q_designerpropertyeditorinterface_on_is_read_only(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#isReadOnly)
///
/// Base class method implementation
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_qbase_is_read_only(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#object)
///
/// @param self QDesignerPropertyEditorInterface*
///
QObject* q_designerpropertyeditorinterface_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#object)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback QObject* func()
///
void q_designerpropertyeditorinterface_on_object(void* self, QObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#object)
///
/// Base class method implementation
///
/// @param self QDesignerPropertyEditorInterface*
///
QObject* q_designerpropertyeditorinterface_qbase_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#currentPropertyName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_current_property_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#currentPropertyName)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback const char* func()
///
void q_designerpropertyeditorinterface_on_current_property_name(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#currentPropertyName)
///
/// Base class method implementation
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_qbase_current_property_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#propertyChanged)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param name const char*
/// @param value QVariant*
///
void q_designerpropertyeditorinterface_property_changed(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#propertyChanged)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, const char* name, QVariant* value)
///
void q_designerpropertyeditorinterface_on_property_changed(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#setObject)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param object QObject*
///
void q_designerpropertyeditorinterface_set_object(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#setObject)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QObject* object)
///
void q_designerpropertyeditorinterface_on_set_object(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#setObject)
///
/// Base class method implementation
///
/// @param self QDesignerPropertyEditorInterface*
/// @param object QObject*
///
void q_designerpropertyeditorinterface_qbase_set_object(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#setPropertyValue)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param name const char*
/// @param value QVariant*
/// @param changed bool
///
void q_designerpropertyeditorinterface_set_property_value(void* self, const char* name, void* value, bool changed);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#setPropertyValue)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, const char* name, QVariant* value, bool changed)
///
void q_designerpropertyeditorinterface_on_set_property_value(void* self, void (*callback)(void*, const char*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#setPropertyValue)
///
/// Base class method implementation
///
/// @param self QDesignerPropertyEditorInterface*
/// @param name const char*
/// @param value QVariant*
/// @param changed bool
///
void q_designerpropertyeditorinterface_qbase_set_property_value(void* self, const char* name, void* value, bool changed);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#setReadOnly)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param readOnly bool
///
void q_designerpropertyeditorinterface_set_read_only(void* self, bool readOnly);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#setReadOnly)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, bool readOnly)
///
void q_designerpropertyeditorinterface_on_set_read_only(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#setReadOnly)
///
/// Base class method implementation
///
/// @param self QDesignerPropertyEditorInterface*
/// @param readOnly bool
///
void q_designerpropertyeditorinterface_qbase_set_read_only(void* self, bool readOnly);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerpropertyeditorinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerpropertyeditorinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QDesignerPropertyEditorInterface*
///
uintptr_t q_designerpropertyeditorinterface_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QDesignerPropertyEditorInterface*
///
uintptr_t q_designerpropertyeditorinterface_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QDesignerPropertyEditorInterface*
///
uintptr_t q_designerpropertyeditorinterface_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QDesignerPropertyEditorInterface*
///
QStyle* q_designerpropertyeditorinterface_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param style QStyle*
///
void q_designerpropertyeditorinterface_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return enum Qt__WindowModality
///
int32_t q_designerpropertyeditorinterface_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param windowModality enum Qt__WindowModality
///
void q_designerpropertyeditorinterface_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QWidget*
///
bool q_designerpropertyeditorinterface_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param enabled bool
///
void q_designerpropertyeditorinterface_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param disabled bool
///
void q_designerpropertyeditorinterface_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param windowModified bool
///
void q_designerpropertyeditorinterface_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QDesignerPropertyEditorInterface*
///
QRect* q_designerpropertyeditorinterface_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QDesignerPropertyEditorInterface*
///
const QRect* q_designerpropertyeditorinterface_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QDesignerPropertyEditorInterface*
///
QRect* q_designerpropertyeditorinterface_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QDesignerPropertyEditorInterface*
///
QPoint* q_designerpropertyeditorinterface_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QDesignerPropertyEditorInterface*
///
QSize* q_designerpropertyeditorinterface_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QDesignerPropertyEditorInterface*
///
QSize* q_designerpropertyeditorinterface_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QDesignerPropertyEditorInterface*
///
QRect* q_designerpropertyeditorinterface_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QDesignerPropertyEditorInterface*
///
QRect* q_designerpropertyeditorinterface_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QDesignerPropertyEditorInterface*
///
QRegion* q_designerpropertyeditorinterface_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QDesignerPropertyEditorInterface*
///
QSize* q_designerpropertyeditorinterface_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QDesignerPropertyEditorInterface*
///
QSize* q_designerpropertyeditorinterface_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param minimumSize QSize*
///
void q_designerpropertyeditorinterface_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param minw int
/// @param minh int
///
void q_designerpropertyeditorinterface_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param maximumSize QSize*
///
void q_designerpropertyeditorinterface_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param maxw int
/// @param maxh int
///
void q_designerpropertyeditorinterface_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param minw int
///
void q_designerpropertyeditorinterface_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param minh int
///
void q_designerpropertyeditorinterface_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param maxw int
///
void q_designerpropertyeditorinterface_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param maxh int
///
void q_designerpropertyeditorinterface_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QDesignerPropertyEditorInterface*
///
QSize* q_designerpropertyeditorinterface_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param sizeIncrement QSize*
///
void q_designerpropertyeditorinterface_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param w int
/// @param h int
///
void q_designerpropertyeditorinterface_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QDesignerPropertyEditorInterface*
///
QSize* q_designerpropertyeditorinterface_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param baseSize QSize*
///
void q_designerpropertyeditorinterface_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param basew int
/// @param baseh int
///
void q_designerpropertyeditorinterface_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param fixedSize QSize*
///
void q_designerpropertyeditorinterface_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param w int
/// @param h int
///
void q_designerpropertyeditorinterface_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param w int
///
void q_designerpropertyeditorinterface_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param h int
///
void q_designerpropertyeditorinterface_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QPointF*
///
QPointF* q_designerpropertyeditorinterface_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QPoint*
///
QPoint* q_designerpropertyeditorinterface_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QPointF*
///
QPointF* q_designerpropertyeditorinterface_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QPoint*
///
QPoint* q_designerpropertyeditorinterface_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QPointF*
///
QPointF* q_designerpropertyeditorinterface_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QPoint*
///
QPoint* q_designerpropertyeditorinterface_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QPointF*
///
QPointF* q_designerpropertyeditorinterface_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QPoint*
///
QPoint* q_designerpropertyeditorinterface_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designerpropertyeditorinterface_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designerpropertyeditorinterface_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designerpropertyeditorinterface_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designerpropertyeditorinterface_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QDesignerPropertyEditorInterface*
///
QWidget* q_designerpropertyeditorinterface_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QDesignerPropertyEditorInterface*
///
QWidget* q_designerpropertyeditorinterface_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QDesignerPropertyEditorInterface*
///
QWidget* q_designerpropertyeditorinterface_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QDesignerPropertyEditorInterface*
///
const QPalette* q_designerpropertyeditorinterface_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param palette QPalette*
///
void q_designerpropertyeditorinterface_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_designerpropertyeditorinterface_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designerpropertyeditorinterface_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_designerpropertyeditorinterface_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designerpropertyeditorinterface_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QDesignerPropertyEditorInterface*
///
const QFont* q_designerpropertyeditorinterface_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param font QFont*
///
void q_designerpropertyeditorinterface_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QDesignerPropertyEditorInterface*
///
QFontMetrics* q_designerpropertyeditorinterface_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QDesignerPropertyEditorInterface*
///
QFontInfo* q_designerpropertyeditorinterface_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QDesignerPropertyEditorInterface*
///
QCursor* q_designerpropertyeditorinterface_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param cursor QCursor*
///
void q_designerpropertyeditorinterface_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param enable bool
///
void q_designerpropertyeditorinterface_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param enable bool
///
void q_designerpropertyeditorinterface_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param mask QBitmap*
///
void q_designerpropertyeditorinterface_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param mask QRegion*
///
void q_designerpropertyeditorinterface_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QDesignerPropertyEditorInterface*
///
QRegion* q_designerpropertyeditorinterface_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param target QPaintDevice*
///
void q_designerpropertyeditorinterface_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param painter QPainter*
///
void q_designerpropertyeditorinterface_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerPropertyEditorInterface*
///
QPixmap* q_designerpropertyeditorinterface_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QDesignerPropertyEditorInterface*
///
QGraphicsEffect* q_designerpropertyeditorinterface_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param effect QGraphicsEffect*
///
void q_designerpropertyeditorinterface_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param type enum Qt__GestureType
///
void q_designerpropertyeditorinterface_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param type enum Qt__GestureType
///
void q_designerpropertyeditorinterface_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param windowTitle const char*
///
void q_designerpropertyeditorinterface_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param styleSheet const char*
///
void q_designerpropertyeditorinterface_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param icon QIcon*
///
void q_designerpropertyeditorinterface_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QDesignerPropertyEditorInterface*
///
QIcon* q_designerpropertyeditorinterface_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param windowIconText const char*
///
void q_designerpropertyeditorinterface_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param windowRole const char*
///
void q_designerpropertyeditorinterface_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param filePath const char*
///
void q_designerpropertyeditorinterface_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param level double
///
void q_designerpropertyeditorinterface_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QDesignerPropertyEditorInterface*
///
double q_designerpropertyeditorinterface_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param toolTip const char*
///
void q_designerpropertyeditorinterface_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param msec int
///
void q_designerpropertyeditorinterface_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param statusTip const char*
///
void q_designerpropertyeditorinterface_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param whatsThis const char*
///
void q_designerpropertyeditorinterface_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param name const char*
///
void q_designerpropertyeditorinterface_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param description const char*
///
void q_designerpropertyeditorinterface_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param direction enum Qt__LayoutDirection
///
void q_designerpropertyeditorinterface_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_designerpropertyeditorinterface_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param locale QLocale*
///
void q_designerpropertyeditorinterface_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QDesignerPropertyEditorInterface*
///
QLocale* q_designerpropertyeditorinterface_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param reason enum Qt__FocusReason
///
void q_designerpropertyeditorinterface_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_designerpropertyeditorinterface_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param policy enum Qt__FocusPolicy
///
void q_designerpropertyeditorinterface_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_designerpropertyeditorinterface_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param focusProxy QWidget*
///
void q_designerpropertyeditorinterface_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QDesignerPropertyEditorInterface*
///
QWidget* q_designerpropertyeditorinterface_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_designerpropertyeditorinterface_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_designerpropertyeditorinterface_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QCursor*
///
void q_designerpropertyeditorinterface_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param key QKeySequence*
///
int32_t q_designerpropertyeditorinterface_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param id int
///
void q_designerpropertyeditorinterface_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param id int
///
void q_designerpropertyeditorinterface_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param id int
///
void q_designerpropertyeditorinterface_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_designerpropertyeditorinterface_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_designerpropertyeditorinterface_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param enable bool
///
void q_designerpropertyeditorinterface_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QDesignerPropertyEditorInterface*
///
QGraphicsProxyWidget* q_designerpropertyeditorinterface_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerpropertyeditorinterface_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QRect*
///
void q_designerpropertyeditorinterface_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QRegion*
///
void q_designerpropertyeditorinterface_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerpropertyeditorinterface_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QRect*
///
void q_designerpropertyeditorinterface_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QRegion*
///
void q_designerpropertyeditorinterface_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param hidden bool
///
void q_designerpropertyeditorinterface_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QWidget*
///
void q_designerpropertyeditorinterface_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param x int
/// @param y int
///
void q_designerpropertyeditorinterface_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QPoint*
///
void q_designerpropertyeditorinterface_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param w int
/// @param h int
///
void q_designerpropertyeditorinterface_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QSize*
///
void q_designerpropertyeditorinterface_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerpropertyeditorinterface_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param geometry QRect*
///
void q_designerpropertyeditorinterface_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
char* q_designerpropertyeditorinterface_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param geometry const char*
///
bool q_designerpropertyeditorinterface_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QWidget*
///
bool q_designerpropertyeditorinterface_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_designerpropertyeditorinterface_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designerpropertyeditorinterface_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designerpropertyeditorinterface_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QDesignerPropertyEditorInterface*
///
QSizePolicy* q_designerpropertyeditorinterface_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param sizePolicy QSizePolicy*
///
void q_designerpropertyeditorinterface_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_designerpropertyeditorinterface_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QDesignerPropertyEditorInterface*
///
QRegion* q_designerpropertyeditorinterface_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_designerpropertyeditorinterface_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param margins QMargins*
///
void q_designerpropertyeditorinterface_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QDesignerPropertyEditorInterface*
///
QMargins* q_designerpropertyeditorinterface_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QDesignerPropertyEditorInterface*
///
QRect* q_designerpropertyeditorinterface_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QDesignerPropertyEditorInterface*
///
QLayout* q_designerpropertyeditorinterface_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param layout QLayout*
///
void q_designerpropertyeditorinterface_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param parent QWidget*
///
void q_designerpropertyeditorinterface_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_designerpropertyeditorinterface_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param dx int
/// @param dy int
///
void q_designerpropertyeditorinterface_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_designerpropertyeditorinterface_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QDesignerPropertyEditorInterface*
///
QWidget* q_designerpropertyeditorinterface_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QDesignerPropertyEditorInterface*
///
QWidget* q_designerpropertyeditorinterface_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QDesignerPropertyEditorInterface*
///
QWidget* q_designerpropertyeditorinterface_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param on bool
///
void q_designerpropertyeditorinterface_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param action QAction*
///
void q_designerpropertyeditorinterface_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param actions libqt_list of QAction*
///
void q_designerpropertyeditorinterface_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_designerpropertyeditorinterface_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param before QAction*
/// @param action QAction*
///
void q_designerpropertyeditorinterface_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param action QAction*
///
void q_designerpropertyeditorinterface_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return libqt_list of QAction*
///
libqt_list q_designerpropertyeditorinterface_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param text const char*
///
QAction* q_designerpropertyeditorinterface_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_designerpropertyeditorinterface_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designerpropertyeditorinterface_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designerpropertyeditorinterface_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QDesignerPropertyEditorInterface*
///
QWidget* q_designerpropertyeditorinterface_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designerpropertyeditorinterface_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_designerpropertyeditorinterface_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 enum Qt__WindowType
///
void q_designerpropertyeditorinterface_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designerpropertyeditorinterface_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return enum Qt__WindowType
///
int32_t q_designerpropertyeditorinterface_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_designerpropertyeditorinterface_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param x int
/// @param y int
///
QWidget* q_designerpropertyeditorinterface_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param p QPoint*
///
QWidget* q_designerpropertyeditorinterface_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param p QPointF*
///
QWidget* q_designerpropertyeditorinterface_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 enum Qt__WidgetAttribute
///
void q_designerpropertyeditorinterface_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_designerpropertyeditorinterface_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param child QWidget*
///
bool q_designerpropertyeditorinterface_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param enabled bool
///
void q_designerpropertyeditorinterface_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QDesignerPropertyEditorInterface*
///
QBackingStore* q_designerpropertyeditorinterface_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QDesignerPropertyEditorInterface*
///
QWindow* q_designerpropertyeditorinterface_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QDesignerPropertyEditorInterface*
///
QScreen* q_designerpropertyeditorinterface_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param screen QScreen*
///
void q_designerpropertyeditorinterface_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_designerpropertyeditorinterface_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param title const char*
///
void q_designerpropertyeditorinterface_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, const char* title)
///
void q_designerpropertyeditorinterface_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param icon QIcon*
///
void q_designerpropertyeditorinterface_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QIcon* icon)
///
void q_designerpropertyeditorinterface_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param iconText const char*
///
void q_designerpropertyeditorinterface_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, const char* iconText)
///
void q_designerpropertyeditorinterface_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param pos QPoint*
///
void q_designerpropertyeditorinterface_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QPoint* pos)
///
void q_designerpropertyeditorinterface_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_designerpropertyeditorinterface_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_designerpropertyeditorinterface_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_designerpropertyeditorinterface_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designerpropertyeditorinterface_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designerpropertyeditorinterface_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_designerpropertyeditorinterface_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designerpropertyeditorinterface_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designerpropertyeditorinterface_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param rectangle QRect*
///
QPixmap* q_designerpropertyeditorinterface_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_designerpropertyeditorinterface_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_designerpropertyeditorinterface_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param id int
/// @param enable bool
///
void q_designerpropertyeditorinterface_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param id int
/// @param enable bool
///
void q_designerpropertyeditorinterface_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_designerpropertyeditorinterface_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_designerpropertyeditorinterface_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_designerpropertyeditorinterface_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_designerpropertyeditorinterface_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char* q_designerpropertyeditorinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param name char*
///
void q_designerpropertyeditorinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param b bool
///
bool q_designerpropertyeditorinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDesignerPropertyEditorInterface*
///
QThread* q_designerpropertyeditorinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param thread QThread*
///
bool q_designerpropertyeditorinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param interval int
///
int32_t q_designerpropertyeditorinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designerpropertyeditorinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param id int
///
void q_designerpropertyeditorinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param id enum Qt__TimerId
///
void q_designerpropertyeditorinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDesignerPropertyEditorInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerpropertyeditorinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param filterObj QObject*
///
void q_designerpropertyeditorinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param obj QObject*
///
void q_designerpropertyeditorinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerpropertyeditorinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerpropertyeditorinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerpropertyeditorinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerpropertyeditorinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerpropertyeditorinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param name const char*
///
QVariant* q_designerpropertyeditorinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerPropertyEditorInterface*
///
const char** q_designerpropertyeditorinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerPropertyEditorInterface*
///
QBindingStorage* q_designerpropertyeditorinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerPropertyEditorInterface*
///
const QBindingStorage* q_designerpropertyeditorinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self)
///
void q_designerpropertyeditorinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDesignerPropertyEditorInterface*
///
QObject* q_designerpropertyeditorinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param classname const char*
///
bool q_designerpropertyeditorinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_designerpropertyeditorinterface_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerpropertyeditorinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designerpropertyeditorinterface_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_designerpropertyeditorinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerpropertyeditorinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QObject*
///
void q_designerpropertyeditorinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QObject* param1)
///
void q_designerpropertyeditorinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QDesignerPropertyEditorInterface*
///
double q_designerpropertyeditorinterface_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QDesignerPropertyEditorInterface*
///
double q_designerpropertyeditorinterface_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_designerpropertyeditorinterface_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_designerpropertyeditorinterface_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback int32_t func()
///
void q_designerpropertyeditorinterface_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param visible bool
///
void q_designerpropertyeditorinterface_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param visible bool
///
void q_designerpropertyeditorinterface_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, bool visible)
///
void q_designerpropertyeditorinterface_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
QSize* q_designerpropertyeditorinterface_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
QSize* q_designerpropertyeditorinterface_qbase_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback QSize* func()
///
void q_designerpropertyeditorinterface_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
QSize* q_designerpropertyeditorinterface_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
QSize* q_designerpropertyeditorinterface_qbase_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback QSize* func()
///
void q_designerpropertyeditorinterface_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 int
///
int32_t q_designerpropertyeditorinterface_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 int
///
int32_t q_designerpropertyeditorinterface_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback int32_t func(QDesignerPropertyEditorInterface* self, int param1)
///
void q_designerpropertyeditorinterface_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback bool func()
///
void q_designerpropertyeditorinterface_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
QPaintEngine* q_designerpropertyeditorinterface_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
QPaintEngine* q_designerpropertyeditorinterface_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback QPaintEngine* func()
///
void q_designerpropertyeditorinterface_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QEvent*
///
bool q_designerpropertyeditorinterface_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QEvent*
///
bool q_designerpropertyeditorinterface_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback bool func(QDesignerPropertyEditorInterface* self, QEvent* event)
///
void q_designerpropertyeditorinterface_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QMouseEvent*
///
void q_designerpropertyeditorinterface_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QMouseEvent*
///
void q_designerpropertyeditorinterface_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QMouseEvent* event)
///
void q_designerpropertyeditorinterface_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QMouseEvent*
///
void q_designerpropertyeditorinterface_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QMouseEvent*
///
void q_designerpropertyeditorinterface_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QMouseEvent* event)
///
void q_designerpropertyeditorinterface_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QMouseEvent*
///
void q_designerpropertyeditorinterface_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QMouseEvent*
///
void q_designerpropertyeditorinterface_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QMouseEvent* event)
///
void q_designerpropertyeditorinterface_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QMouseEvent*
///
void q_designerpropertyeditorinterface_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QMouseEvent*
///
void q_designerpropertyeditorinterface_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QMouseEvent* event)
///
void q_designerpropertyeditorinterface_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QWheelEvent*
///
void q_designerpropertyeditorinterface_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QWheelEvent*
///
void q_designerpropertyeditorinterface_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QWheelEvent* event)
///
void q_designerpropertyeditorinterface_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QKeyEvent*
///
void q_designerpropertyeditorinterface_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QKeyEvent*
///
void q_designerpropertyeditorinterface_qbase_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QKeyEvent* event)
///
void q_designerpropertyeditorinterface_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QKeyEvent*
///
void q_designerpropertyeditorinterface_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QKeyEvent*
///
void q_designerpropertyeditorinterface_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QKeyEvent* event)
///
void q_designerpropertyeditorinterface_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QFocusEvent*
///
void q_designerpropertyeditorinterface_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QFocusEvent*
///
void q_designerpropertyeditorinterface_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QFocusEvent* event)
///
void q_designerpropertyeditorinterface_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QFocusEvent*
///
void q_designerpropertyeditorinterface_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QFocusEvent*
///
void q_designerpropertyeditorinterface_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QFocusEvent* event)
///
void q_designerpropertyeditorinterface_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QEnterEvent*
///
void q_designerpropertyeditorinterface_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QEnterEvent*
///
void q_designerpropertyeditorinterface_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QEnterEvent* event)
///
void q_designerpropertyeditorinterface_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QEvent*
///
void q_designerpropertyeditorinterface_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QEvent*
///
void q_designerpropertyeditorinterface_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QEvent* event)
///
void q_designerpropertyeditorinterface_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QPaintEvent*
///
void q_designerpropertyeditorinterface_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QPaintEvent*
///
void q_designerpropertyeditorinterface_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QPaintEvent* event)
///
void q_designerpropertyeditorinterface_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QMoveEvent*
///
void q_designerpropertyeditorinterface_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QMoveEvent*
///
void q_designerpropertyeditorinterface_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QMoveEvent* event)
///
void q_designerpropertyeditorinterface_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QResizeEvent*
///
void q_designerpropertyeditorinterface_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QResizeEvent*
///
void q_designerpropertyeditorinterface_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QResizeEvent* event)
///
void q_designerpropertyeditorinterface_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QCloseEvent*
///
void q_designerpropertyeditorinterface_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QCloseEvent*
///
void q_designerpropertyeditorinterface_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QCloseEvent* event)
///
void q_designerpropertyeditorinterface_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QContextMenuEvent*
///
void q_designerpropertyeditorinterface_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QContextMenuEvent*
///
void q_designerpropertyeditorinterface_qbase_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QContextMenuEvent* event)
///
void q_designerpropertyeditorinterface_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QTabletEvent*
///
void q_designerpropertyeditorinterface_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QTabletEvent*
///
void q_designerpropertyeditorinterface_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QTabletEvent* event)
///
void q_designerpropertyeditorinterface_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QActionEvent*
///
void q_designerpropertyeditorinterface_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QActionEvent*
///
void q_designerpropertyeditorinterface_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QActionEvent* event)
///
void q_designerpropertyeditorinterface_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QDragEnterEvent*
///
void q_designerpropertyeditorinterface_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QDragEnterEvent*
///
void q_designerpropertyeditorinterface_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QDragEnterEvent* event)
///
void q_designerpropertyeditorinterface_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QDragMoveEvent*
///
void q_designerpropertyeditorinterface_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QDragMoveEvent*
///
void q_designerpropertyeditorinterface_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QDragMoveEvent* event)
///
void q_designerpropertyeditorinterface_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QDragLeaveEvent*
///
void q_designerpropertyeditorinterface_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QDragLeaveEvent*
///
void q_designerpropertyeditorinterface_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QDragLeaveEvent* event)
///
void q_designerpropertyeditorinterface_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QDropEvent*
///
void q_designerpropertyeditorinterface_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QDropEvent*
///
void q_designerpropertyeditorinterface_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QDropEvent* event)
///
void q_designerpropertyeditorinterface_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QShowEvent*
///
void q_designerpropertyeditorinterface_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QShowEvent*
///
void q_designerpropertyeditorinterface_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QShowEvent* event)
///
void q_designerpropertyeditorinterface_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QHideEvent*
///
void q_designerpropertyeditorinterface_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QHideEvent*
///
void q_designerpropertyeditorinterface_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QHideEvent* event)
///
void q_designerpropertyeditorinterface_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_designerpropertyeditorinterface_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_designerpropertyeditorinterface_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback bool func(QDesignerPropertyEditorInterface* self, const char* eventType, void* message, intptr_t* result)
///
void q_designerpropertyeditorinterface_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QEvent*
///
void q_designerpropertyeditorinterface_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QEvent*
///
void q_designerpropertyeditorinterface_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QEvent* param1)
///
void q_designerpropertyeditorinterface_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_designerpropertyeditorinterface_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_designerpropertyeditorinterface_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback int32_t func(QDesignerPropertyEditorInterface* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_designerpropertyeditorinterface_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param painter QPainter*
///
void q_designerpropertyeditorinterface_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param painter QPainter*
///
void q_designerpropertyeditorinterface_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QPainter* painter)
///
void q_designerpropertyeditorinterface_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param offset QPoint*
///
QPaintDevice* q_designerpropertyeditorinterface_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param offset QPoint*
///
QPaintDevice* q_designerpropertyeditorinterface_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback QPaintDevice* func(QDesignerPropertyEditorInterface* self, QPoint* offset)
///
void q_designerpropertyeditorinterface_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
QPainter* q_designerpropertyeditorinterface_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
QPainter* q_designerpropertyeditorinterface_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback QPainter* func()
///
void q_designerpropertyeditorinterface_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QInputMethodEvent*
///
void q_designerpropertyeditorinterface_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 QInputMethodEvent*
///
void q_designerpropertyeditorinterface_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QInputMethodEvent* param1)
///
void q_designerpropertyeditorinterface_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_designerpropertyeditorinterface_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_designerpropertyeditorinterface_qbase_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback QVariant* func(QDesignerPropertyEditorInterface* self, enum Qt__InputMethodQuery param1)
///
void q_designerpropertyeditorinterface_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param next bool
///
bool q_designerpropertyeditorinterface_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param next bool
///
bool q_designerpropertyeditorinterface_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback bool func(QDesignerPropertyEditorInterface* self, bool next)
///
void q_designerpropertyeditorinterface_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerpropertyeditorinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerpropertyeditorinterface_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback bool func(QDesignerPropertyEditorInterface* self, QObject* watched, QEvent* event)
///
void q_designerpropertyeditorinterface_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QTimerEvent*
///
void q_designerpropertyeditorinterface_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QTimerEvent*
///
void q_designerpropertyeditorinterface_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QTimerEvent* event)
///
void q_designerpropertyeditorinterface_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QChildEvent*
///
void q_designerpropertyeditorinterface_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QChildEvent*
///
void q_designerpropertyeditorinterface_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QChildEvent* event)
///
void q_designerpropertyeditorinterface_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QEvent*
///
void q_designerpropertyeditorinterface_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param event QEvent*
///
void q_designerpropertyeditorinterface_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QEvent* event)
///
void q_designerpropertyeditorinterface_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param signal QMetaMethod*
///
void q_designerpropertyeditorinterface_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param signal QMetaMethod*
///
void q_designerpropertyeditorinterface_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QMetaMethod* signal)
///
void q_designerpropertyeditorinterface_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param signal QMetaMethod*
///
void q_designerpropertyeditorinterface_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param signal QMetaMethod*
///
void q_designerpropertyeditorinterface_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, QMetaMethod* signal)
///
void q_designerpropertyeditorinterface_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func()
///
void q_designerpropertyeditorinterface_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func()
///
void q_designerpropertyeditorinterface_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func()
///
void q_designerpropertyeditorinterface_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback bool func()
///
void q_designerpropertyeditorinterface_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
bool q_designerpropertyeditorinterface_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback bool func()
///
void q_designerpropertyeditorinterface_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
QObject* q_designerpropertyeditorinterface_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
QObject* q_designerpropertyeditorinterface_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback QObject* func()
///
void q_designerpropertyeditorinterface_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
///
int32_t q_designerpropertyeditorinterface_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback int32_t func()
///
void q_designerpropertyeditorinterface_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param signal const char*
///
int32_t q_designerpropertyeditorinterface_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param signal const char*
///
int32_t q_designerpropertyeditorinterface_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback int32_t func(QDesignerPropertyEditorInterface* self, const char* signal)
///
void q_designerpropertyeditorinterface_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param signal QMetaMethod*
///
bool q_designerpropertyeditorinterface_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param signal QMetaMethod*
///
bool q_designerpropertyeditorinterface_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback bool func(QDesignerPropertyEditorInterface* self, QMetaMethod* signal)
///
void q_designerpropertyeditorinterface_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_designerpropertyeditorinterface_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_designerpropertyeditorinterface_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback double func(QDesignerPropertyEditorInterface* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_designerpropertyeditorinterface_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerPropertyEditorInterface*
/// @param callback void func(QDesignerPropertyEditorInterface* self, const char* objectName)
///
void q_designerpropertyeditorinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpropertyeditorinterface.html#dtor.QDesignerPropertyEditorInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerPropertyEditorInterface*
///
void q_designerpropertyeditorinterface_delete(void* self);

#endif
