#pragma once
#ifndef DESIGNER_LIBLAYOUTDECORATION_H
#define DESIGNER_LIBLAYOUTDECORATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

struct pair_int_int;

typedef struct pair_int_int pair_int_int;

#ifndef PAIR_INT_INT
#define PAIR_INT_INT
struct pair_int_int {
    int first;
    int second;
};
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html)

/// q_designerlayoutdecorationextension_new constructs a new QDesignerLayoutDecorationExtension object.
///
QDesignerLayoutDecorationExtension* q_designerlayoutdecorationextension_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#widgets)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_widgets` before it can be called.
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param layout QLayout*
///
/// @return libqt_list of QWidget*
///
libqt_list q_designerlayoutdecorationextension_widgets(const void* self, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#widgets)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param callback libqt_list of QWidget* func(const QDesignerLayoutDecorationExtension* self, QLayout* layout)
///
void q_designerlayoutdecorationextension_on_widgets(const void* self, libqt_list (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#itemInfo)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_item_info` before it can be called.
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param index int
///
QRect* q_designerlayoutdecorationextension_item_info(const void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#itemInfo)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param callback QRect* func(const QDesignerLayoutDecorationExtension* self, int index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_designerlayoutdecorationextension_on_item_info(const void* self, QRect* (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_index_of` before it can be called.
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param widget QWidget*
///
int32_t q_designerlayoutdecorationextension_index_of(const void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param callback int32_t func(const QDesignerLayoutDecorationExtension* self, QWidget* widget)
///
void q_designerlayoutdecorationextension_on_index_of(const void* self, int32_t (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_index_of2` before it can be called.
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param item QLayoutItem*
///
int32_t q_designerlayoutdecorationextension_index_of2(const void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param callback int32_t func(const QDesignerLayoutDecorationExtension* self, QLayoutItem* item)
///
void q_designerlayoutdecorationextension_on_index_of2(const void* self, int32_t (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_current_insert_mode` before it can be called.
///
/// @param self const QDesignerLayoutDecorationExtension*
///
/// @return enum QDesignerLayoutDecorationExtension__InsertMode
///
int32_t q_designerlayoutdecorationextension_current_insert_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param callback int32_t func(const QDesignerLayoutDecorationExtension* self)
///
void q_designerlayoutdecorationextension_on_current_insert_mode(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_current_index` before it can be called.
///
/// @param self const QDesignerLayoutDecorationExtension*
///
int32_t q_designerlayoutdecorationextension_current_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param callback int32_t func(const QDesignerLayoutDecorationExtension* self)
///
void q_designerlayoutdecorationextension_on_current_index(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_current_cell` before it can be called.
///
/// @param self const QDesignerLayoutDecorationExtension*
///
/// @return pair_int_int tuple of int and int
///
pair_int_int q_designerlayoutdecorationextension_current_cell(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param callback pair_int_int tuple of int and int func(const QDesignerLayoutDecorationExtension* self)
///
void q_designerlayoutdecorationextension_on_current_cell(const void* self, pair_int_int (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertWidget)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_insert_widget` before it can be called.
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param widget QWidget*
/// @param cell pair_int_int tuple of int and int
///
void q_designerlayoutdecorationextension_insert_widget(void* self, void* widget, pair_int_int cell);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback void func(QDesignerLayoutDecorationExtension* self, QWidget* widget, pair_int_int tuple of int and int)
///
void q_designerlayoutdecorationextension_on_insert_widget(void* self, void (*callback)(void*, void*, pair_int_int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#removeWidget)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_remove_widget` before it can be called.
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param widget QWidget*
///
void q_designerlayoutdecorationextension_remove_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#removeWidget)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback void func(QDesignerLayoutDecorationExtension* self, QWidget* widget)
///
void q_designerlayoutdecorationextension_on_remove_widget(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertRow)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_insert_row` before it can be called.
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param row int
///
void q_designerlayoutdecorationextension_insert_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertRow)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback void func(QDesignerLayoutDecorationExtension* self, int row)
///
void q_designerlayoutdecorationextension_on_insert_row(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertColumn)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_insert_column` before it can be called.
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param column int
///
void q_designerlayoutdecorationextension_insert_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertColumn)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback void func(QDesignerLayoutDecorationExtension* self, int column)
///
void q_designerlayoutdecorationextension_on_insert_column(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_simplify` before it can be called.
///
/// @param self QDesignerLayoutDecorationExtension*
///
void q_designerlayoutdecorationextension_simplify(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback void func(QDesignerLayoutDecorationExtension* self)
///
void q_designerlayoutdecorationextension_on_simplify(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_find_item_at` before it can be called.
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param pos QPoint*
///
int32_t q_designerlayoutdecorationextension_find_item_at(const void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param callback int32_t func(const QDesignerLayoutDecorationExtension* self, QPoint* pos)
///
void q_designerlayoutdecorationextension_on_find_item_at(const void* self, int32_t (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_find_item_at2` before it can be called.
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param row int
/// @param column int
///
int32_t q_designerlayoutdecorationextension_find_item_at2(const void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
///
/// Allows for overriding the related default method
///
/// @param self const QDesignerLayoutDecorationExtension*
/// @param callback int32_t func(const QDesignerLayoutDecorationExtension* self, int row, int column)
///
void q_designerlayoutdecorationextension_on_find_item_at2(const void* self, int32_t (*callback)(const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#adjustIndicator)
///
/// @warning This method must be implemented with `q_designerlayoutdecorationextension_on_adjust_indicator` before it can be called.
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param pos QPoint*
/// @param index int
///
void q_designerlayoutdecorationextension_adjust_indicator(void* self, const void* pos, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#adjustIndicator)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback void func(QDesignerLayoutDecorationExtension* self, QPoint* pos, int index)
///
void q_designerlayoutdecorationextension_on_adjust_indicator(void* self, void (*callback)(void*, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#dtor.QDesignerLayoutDecorationExtension)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerLayoutDecorationExtension*
///
void q_designerlayoutdecorationextension_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/layoutdecoration.html#public-types)

typedef enum {
    QDESIGNERLAYOUTDECORATIONEXTENSION_INSERTMODE_INSERTWIDGETMODE = 0,
    QDESIGNERLAYOUTDECORATIONEXTENSION_INSERTMODE_INSERTROWMODE = 1,
    QDESIGNERLAYOUTDECORATIONEXTENSION_INSERTMODE_INSERTCOLUMNMODE = 2
} QDesignerLayoutDecorationExtension__InsertMode;

#endif
