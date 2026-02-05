#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBLAYOUTDECORATION_H
#define SRC_DESIGNER_QT6C_LIBLAYOUTDECORATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self QDesignerLayoutDecorationExtension*
/// @param layout QLayout*
///
/// @return libqt_list of QWidget*
///
libqt_list q_designerlayoutdecorationextension_widgets(void* self, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#widgets)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback libqt_list of QWidget* func(QDesignerLayoutDecorationExtension* self, QLayout* layout)
///
void q_designerlayoutdecorationextension_on_widgets(void* self, libqt_list (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#widgets)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param layout QLayout*
///
/// @return libqt_list of QWidget*
///
libqt_list q_designerlayoutdecorationextension_qbase_widgets(void* self, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#itemInfo)
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param index int
///
QRect* q_designerlayoutdecorationextension_item_info(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#itemInfo)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback QRect* func(QDesignerLayoutDecorationExtension* self, int index)
///
void q_designerlayoutdecorationextension_on_item_info(void* self, QRect* (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#itemInfo)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param index int
///
QRect* q_designerlayoutdecorationextension_qbase_item_info(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param widget QWidget*
///
int32_t q_designerlayoutdecorationextension_index_of(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback int32_t func(QDesignerLayoutDecorationExtension* self, QWidget* widget)
///
void q_designerlayoutdecorationextension_on_index_of(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param widget QWidget*
///
int32_t q_designerlayoutdecorationextension_qbase_index_of(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param item QLayoutItem*
///
int32_t q_designerlayoutdecorationextension_index_of2(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback int32_t func(QDesignerLayoutDecorationExtension* self, QLayoutItem* item)
///
void q_designerlayoutdecorationextension_on_index_of2(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#indexOf)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param item QLayoutItem*
///
int32_t q_designerlayoutdecorationextension_qbase_index_of2(void* self, void* item);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
///
/// @param self QDesignerLayoutDecorationExtension*
///
/// @return enum QDesignerLayoutDecorationExtension__InsertMode
///
int32_t q_designerlayoutdecorationextension_current_insert_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback int32_t func()
///
void q_designerlayoutdecorationextension_on_current_insert_mode(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentInsertMode)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
///
/// @return enum QDesignerLayoutDecorationExtension__InsertMode
///
int32_t q_designerlayoutdecorationextension_qbase_current_insert_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
///
/// @param self QDesignerLayoutDecorationExtension*
///
int32_t q_designerlayoutdecorationextension_current_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback int32_t func()
///
void q_designerlayoutdecorationextension_on_current_index(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentIndex)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
///
int32_t q_designerlayoutdecorationextension_qbase_current_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
///
/// @param self QDesignerLayoutDecorationExtension*
///
/// @return pair_int_int tuple of int and int
///
pair_int_int q_designerlayoutdecorationextension_current_cell(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback pair_int_int tuple of int and int func()
///
void q_designerlayoutdecorationextension_on_current_cell(void* self, pair_int_int (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#currentCell)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
///
/// @return pair_int_int tuple of int and int
///
pair_int_int q_designerlayoutdecorationextension_qbase_current_cell(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertWidget)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertWidget)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param widget QWidget*
/// @param cell pair_int_int tuple of int and int
///
void q_designerlayoutdecorationextension_qbase_insert_widget(void* self, void* widget, pair_int_int cell);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#removeWidget)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#removeWidget)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param widget QWidget*
///
void q_designerlayoutdecorationextension_qbase_remove_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertRow)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertRow)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param row int
///
void q_designerlayoutdecorationextension_qbase_insert_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertColumn)
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

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#insertColumn)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param column int
///
void q_designerlayoutdecorationextension_qbase_insert_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
///
/// @param self QDesignerLayoutDecorationExtension*
///
void q_designerlayoutdecorationextension_simplify(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback void func()
///
void q_designerlayoutdecorationextension_on_simplify(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#simplify)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
///
void q_designerlayoutdecorationextension_qbase_simplify(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param pos QPoint*
///
int32_t q_designerlayoutdecorationextension_find_item_at(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback int32_t func(QDesignerLayoutDecorationExtension* self, QPoint* pos)
///
void q_designerlayoutdecorationextension_on_find_item_at(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param pos QPoint*
///
int32_t q_designerlayoutdecorationextension_qbase_find_item_at(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param row int
/// @param column int
///
int32_t q_designerlayoutdecorationextension_find_item_at2(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback int32_t func(QDesignerLayoutDecorationExtension* self, int row, int column)
///
void q_designerlayoutdecorationextension_on_find_item_at2(void* self, int32_t (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#findItemAt)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param row int
/// @param column int
///
int32_t q_designerlayoutdecorationextension_qbase_find_item_at2(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#adjustIndicator)
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param pos QPoint*
/// @param index int
///
void q_designerlayoutdecorationextension_adjust_indicator(void* self, void* pos, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#adjustIndicator)
///
/// Allows for overriding the related default method
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param callback void func(QDesignerLayoutDecorationExtension* self, QPoint* pos, int index)
///
void q_designerlayoutdecorationextension_on_adjust_indicator(void* self, void (*callback)(void*, void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerlayoutdecorationextension.html#adjustIndicator)
///
/// Base class method implementation
///
/// @param self QDesignerLayoutDecorationExtension*
/// @param pos QPoint*
/// @param index int
///
void q_designerlayoutdecorationextension_qbase_adjust_indicator(void* self, void* pos, int index);

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
