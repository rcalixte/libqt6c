#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTFORMWINDOWCURSOR_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTFORMWINDOWCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html)

/// q_designerformwindowcursorinterface_new constructs a new QDesignerFormWindowCursorInterface object.
///
QDesignerFormWindowCursorInterface* q_designerformwindowcursorinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
///
/// @param self QDesignerFormWindowCursorInterface*
///
QDesignerFormWindowInterface* q_designerformwindowcursorinterface_form_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback QDesignerFormWindowInterface* func()
///
void q_designerformwindowcursorinterface_on_form_window(void* self, QDesignerFormWindowInterface* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
///
QDesignerFormWindowInterface* q_designerformwindowcursorinterface_qbase_form_window(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#movePosition)
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param op enum QDesignerFormWindowCursorInterface__MoveOperation
/// @param mode enum QDesignerFormWindowCursorInterface__MoveMode
///
bool q_designerformwindowcursorinterface_move_position(void* self, int32_t op, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#movePosition)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback bool func(QDesignerFormWindowCursorInterface* self, enum QDesignerFormWindowCursorInterface__MoveOperation op, enum QDesignerFormWindowCursorInterface__MoveMode mode)
///
void q_designerformwindowcursorinterface_on_move_position(void* self, bool (*callback)(void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#movePosition)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param op enum QDesignerFormWindowCursorInterface__MoveOperation
/// @param mode enum QDesignerFormWindowCursorInterface__MoveMode
///
bool q_designerformwindowcursorinterface_qbase_move_position(void* self, int32_t op, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
///
/// @param self QDesignerFormWindowCursorInterface*
///
int32_t q_designerformwindowcursorinterface_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback int32_t func()
///
void q_designerformwindowcursorinterface_on_position(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
///
int32_t q_designerformwindowcursorinterface_qbase_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setPosition)
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param pos int
/// @param mode enum QDesignerFormWindowCursorInterface__MoveMode
///
void q_designerformwindowcursorinterface_set_position(void* self, int pos, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setPosition)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback void func(QDesignerFormWindowCursorInterface* self, int pos, enum QDesignerFormWindowCursorInterface__MoveMode mode)
///
void q_designerformwindowcursorinterface_on_set_position(void* self, void (*callback)(void*, int, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setPosition)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param pos int
/// @param mode enum QDesignerFormWindowCursorInterface__MoveMode
///
void q_designerformwindowcursorinterface_qbase_set_position(void* self, int pos, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
///
/// @param self QDesignerFormWindowCursorInterface*
///
QWidget* q_designerformwindowcursorinterface_current(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback QWidget* func()
///
void q_designerformwindowcursorinterface_on_current(void* self, QWidget* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
///
QWidget* q_designerformwindowcursorinterface_qbase_current(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
///
/// @param self QDesignerFormWindowCursorInterface*
///
int32_t q_designerformwindowcursorinterface_widget_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback int32_t func()
///
void q_designerformwindowcursorinterface_on_widget_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
///
int32_t q_designerformwindowcursorinterface_qbase_widget_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param index int
///
QWidget* q_designerformwindowcursorinterface_widget(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback QWidget* func(QDesignerFormWindowCursorInterface* self, int index)
///
void q_designerformwindowcursorinterface_on_widget(void* self, QWidget* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param index int
///
QWidget* q_designerformwindowcursorinterface_qbase_widget(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
///
/// @param self QDesignerFormWindowCursorInterface*
///
bool q_designerformwindowcursorinterface_has_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback bool func()
///
void q_designerformwindowcursorinterface_on_has_selection(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
///
bool q_designerformwindowcursorinterface_qbase_has_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
///
/// @param self QDesignerFormWindowCursorInterface*
///
int32_t q_designerformwindowcursorinterface_selected_widget_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback int32_t func()
///
void q_designerformwindowcursorinterface_on_selected_widget_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
///
int32_t q_designerformwindowcursorinterface_qbase_selected_widget_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param index int
///
QWidget* q_designerformwindowcursorinterface_selected_widget(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback QWidget* func(QDesignerFormWindowCursorInterface* self, int index)
///
void q_designerformwindowcursorinterface_on_selected_widget(void* self, QWidget* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param index int
///
QWidget* q_designerformwindowcursorinterface_qbase_selected_widget(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param name const char*
/// @param value QVariant*
///
void q_designerformwindowcursorinterface_set_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback void func(QDesignerFormWindowCursorInterface* self, const char* name, QVariant* value)
///
void q_designerformwindowcursorinterface_on_set_property(void* self, void (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param name const char*
/// @param value QVariant*
///
void q_designerformwindowcursorinterface_qbase_set_property(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param widget QWidget*
/// @param name const char*
/// @param value QVariant*
///
void q_designerformwindowcursorinterface_set_widget_property(void* self, void* widget, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback void func(QDesignerFormWindowCursorInterface* self, QWidget* widget, const char* name, QVariant* value)
///
void q_designerformwindowcursorinterface_on_set_widget_property(void* self, void (*callback)(void*, void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param widget QWidget*
/// @param name const char*
/// @param value QVariant*
///
void q_designerformwindowcursorinterface_qbase_set_widget_property(void* self, void* widget, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#resetWidgetProperty)
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param widget QWidget*
/// @param name const char*
///
void q_designerformwindowcursorinterface_reset_widget_property(void* self, void* widget, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#resetWidgetProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback void func(QDesignerFormWindowCursorInterface* self, QWidget* widget, const char* name)
///
void q_designerformwindowcursorinterface_on_reset_widget_property(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#resetWidgetProperty)
///
/// Base class method implementation
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param widget QWidget*
/// @param name const char*
///
void q_designerformwindowcursorinterface_qbase_reset_widget_property(void* self, void* widget, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#isWidgetSelected)
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param widget QWidget*
///
bool q_designerformwindowcursorinterface_is_widget_selected(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#dtor.QDesignerFormWindowCursorInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerFormWindowCursorInterface*
///
void q_designerformwindowcursorinterface_delete(void* self);

/// [Upstream resources](https://api.kde.org/abstractformwindowcursor.html#public-types)

typedef enum {
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEOPERATION_NOMOVE = 0,
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEOPERATION_START = 1,
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEOPERATION_END = 2,
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEOPERATION_NEXT = 3,
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEOPERATION_PREV = 4,
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEOPERATION_LEFT = 5,
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEOPERATION_RIGHT = 6,
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEOPERATION_UP = 7,
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEOPERATION_DOWN = 8
} QDesignerFormWindowCursorInterface__MoveOperation;

/// [Upstream resources](https://api.kde.org/abstractformwindowcursor.html#public-types)

typedef enum {
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEMODE_MOVEANCHOR = 0,
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEMODE_KEEPANCHOR = 1
} QDesignerFormWindowCursorInterface__MoveMode;

#endif
