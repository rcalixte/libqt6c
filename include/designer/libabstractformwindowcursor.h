#pragma once
#ifndef DESIGNER_LIBABSTRACTFORMWINDOWCURSOR_H
#define DESIGNER_LIBABSTRACTFORMWINDOWCURSOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html)

/// q_designerformwindowcursorinterface_new constructs a new QDesignerFormWindowCursorInterface object.
///
QDesignerFormWindowCursorInterface* q_designerformwindowcursorinterface_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_form_window` before it can be called.
///
/// @param self const QDesignerFormWindowCursorInterface*
///
QDesignerFormWindowInterface* q_designerformwindowcursorinterface_form_window(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#formWindow)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowCursorInterface*
/// @param callback QDesignerFormWindowInterface* func(const QDesignerFormWindowCursorInterface* self)
///
void q_designerformwindowcursorinterface_on_form_window(const void* self, QDesignerFormWindowInterface* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#movePosition)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_move_position` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_position` before it can be called.
///
/// @param self const QDesignerFormWindowCursorInterface*
///
int32_t q_designerformwindowcursorinterface_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#position)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowCursorInterface*
/// @param callback int32_t func(const QDesignerFormWindowCursorInterface* self)
///
void q_designerformwindowcursorinterface_on_position(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setPosition)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_set_position` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_current` before it can be called.
///
/// @param self const QDesignerFormWindowCursorInterface*
///
QWidget* q_designerformwindowcursorinterface_current(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#current)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowCursorInterface*
/// @param callback QWidget* func(const QDesignerFormWindowCursorInterface* self)
///
void q_designerformwindowcursorinterface_on_current(const void* self, QWidget* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_widget_count` before it can be called.
///
/// @param self const QDesignerFormWindowCursorInterface*
///
int32_t q_designerformwindowcursorinterface_widget_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widgetCount)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowCursorInterface*
/// @param callback int32_t func(const QDesignerFormWindowCursorInterface* self)
///
void q_designerformwindowcursorinterface_on_widget_count(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_widget` before it can be called.
///
/// @param self const QDesignerFormWindowCursorInterface*
/// @param index int
///
QWidget* q_designerformwindowcursorinterface_widget(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#widget)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowCursorInterface*
/// @param callback QWidget* func(const QDesignerFormWindowCursorInterface* self, int index)
///
void q_designerformwindowcursorinterface_on_widget(const void* self, QWidget* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_has_selection` before it can be called.
///
/// @param self const QDesignerFormWindowCursorInterface*
///
bool q_designerformwindowcursorinterface_has_selection(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#hasSelection)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowCursorInterface*
/// @param callback bool func(const QDesignerFormWindowCursorInterface* self)
///
void q_designerformwindowcursorinterface_on_has_selection(const void* self, bool (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_selected_widget_count` before it can be called.
///
/// @param self const QDesignerFormWindowCursorInterface*
///
int32_t q_designerformwindowcursorinterface_selected_widget_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidgetCount)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowCursorInterface*
/// @param callback int32_t func(const QDesignerFormWindowCursorInterface* self)
///
void q_designerformwindowcursorinterface_on_selected_widget_count(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_selected_widget` before it can be called.
///
/// @param self const QDesignerFormWindowCursorInterface*
/// @param index int
///
QWidget* q_designerformwindowcursorinterface_selected_widget(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#selectedWidget)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerFormWindowCursorInterface*
/// @param callback QWidget* func(const QDesignerFormWindowCursorInterface* self, int index)
///
void q_designerformwindowcursorinterface_on_selected_widget(const void* self, QWidget* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_set_property` before it can be called.
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param name const char*
/// @param value QVariant*
///
void q_designerformwindowcursorinterface_set_property(void* self, const char* name, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback void func(QDesignerFormWindowCursorInterface* self, const char* name, QVariant* value)
///
void q_designerformwindowcursorinterface_on_set_property(void* self, void (*callback)(void*, const char*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_set_widget_property` before it can be called.
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param widget QWidget*
/// @param name const char*
/// @param value QVariant*
///
void q_designerformwindowcursorinterface_set_widget_property(void* self, void* widget, const char* name, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#setWidgetProperty)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerFormWindowCursorInterface*
/// @param callback void func(QDesignerFormWindowCursorInterface* self, QWidget* widget, const char* name, QVariant* value)
///
void q_designerformwindowcursorinterface_on_set_widget_property(void* self, void (*callback)(void*, void*, const char*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#resetWidgetProperty)
///
/// @warning This method must be implemented with `q_designerformwindowcursorinterface_on_reset_widget_property` before it can be called.
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#isWidgetSelected)
///
/// @param self const QDesignerFormWindowCursorInterface*
/// @param widget QWidget*
///
bool q_designerformwindowcursorinterface_is_widget_selected(const void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowcursorinterface.html#dtor.QDesignerFormWindowCursorInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerFormWindowCursorInterface*
///
void q_designerformwindowcursorinterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/abstractformwindowcursor.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/abstractformwindowcursor.html#public-types)

typedef enum {
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEMODE_MOVEANCHOR = 0,
    QDESIGNERFORMWINDOWCURSORINTERFACE_MOVEMODE_KEEPANCHOR = 1
} QDesignerFormWindowCursorInterface__MoveMode;

#endif
