#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQBARCATEGORYAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQBARCATEGORYAXIS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html)

/// q_barcategoryaxis_new constructs a new QBarCategoryAxis object.
///
QBarCategoryAxis* q_barcategoryaxis_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html)

/// q_barcategoryaxis_new2 constructs a new QBarCategoryAxis object.
///
/// @param parent QObject*
///
QBarCategoryAxis* q_barcategoryaxis_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QBarCategoryAxis*
///
const QMetaObject* q_barcategoryaxis_meta_object(void* self);

/// @param self QBarCategoryAxis*
/// @param param1 const char*
///
void* q_barcategoryaxis_metacast(void* self, const char* param1);

/// @param self QBarCategoryAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_barcategoryaxis_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBarCategoryAxis*
/// @param callback int32_t func(QBarCategoryAxis* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_barcategoryaxis_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QBarCategoryAxis*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_barcategoryaxis_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_barcategoryaxis_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#type)
///
/// @param self QBarCategoryAxis*
///
/// @return enum QAbstractAxis__AxisType
///
int32_t q_barcategoryaxis_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QBarCategoryAxis*
/// @param callback int32_t func()
///
void q_barcategoryaxis_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QBarCategoryAxis*
///
/// @return enum QAbstractAxis__AxisType
///
int32_t q_barcategoryaxis_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#append)
///
/// @param self QBarCategoryAxis*
/// @param categories const char**
///
void q_barcategoryaxis_append(void* self, const char* categories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#append)
///
/// @param self QBarCategoryAxis*
/// @param category const char*
///
void q_barcategoryaxis_append2(void* self, const char* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#remove)
///
/// @param self QBarCategoryAxis*
/// @param category const char*
///
void q_barcategoryaxis_remove(void* self, const char* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#insert)
///
/// @param self QBarCategoryAxis*
/// @param index int
/// @param category const char*
///
void q_barcategoryaxis_insert(void* self, int index, const char* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#replace)
///
/// @param self QBarCategoryAxis*
/// @param oldCategory const char*
/// @param newCategory const char*
///
void q_barcategoryaxis_replace(void* self, const char* oldCategory, const char* newCategory);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#clear)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setCategories)
///
/// @param self QBarCategoryAxis*
/// @param categories const char**
///
void q_barcategoryaxis_set_categories(void* self, const char* categories[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#categories)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBarCategoryAxis*
///
const char** q_barcategoryaxis_categories(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#count)
///
/// @param self QBarCategoryAxis*
///
int32_t q_barcategoryaxis_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#at)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBarCategoryAxis*
/// @param index int
///
const char* q_barcategoryaxis_at(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setMin)
///
/// @param self QBarCategoryAxis*
/// @param minCategory const char*
///
void q_barcategoryaxis_set_min(void* self, const char* minCategory);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#min)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBarCategoryAxis*
///
const char* q_barcategoryaxis_min(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setMax)
///
/// @param self QBarCategoryAxis*
/// @param maxCategory const char*
///
void q_barcategoryaxis_set_max(void* self, const char* maxCategory);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#max)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBarCategoryAxis*
///
const char* q_barcategoryaxis_max(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setRange)
///
/// @param self QBarCategoryAxis*
/// @param minCategory const char*
/// @param maxCategory const char*
///
void q_barcategoryaxis_set_range(void* self, const char* minCategory, const char* maxCategory);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#categoriesChanged)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_categories_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#categoriesChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self)
///
void q_barcategoryaxis_on_categories_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#minChanged)
///
/// @param self QBarCategoryAxis*
/// @param min const char*
///
void q_barcategoryaxis_min_changed(void* self, const char* min);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#minChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, const char* min)
///
void q_barcategoryaxis_on_min_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#maxChanged)
///
/// @param self QBarCategoryAxis*
/// @param max const char*
///
void q_barcategoryaxis_max_changed(void* self, const char* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#maxChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, const char* max)
///
void q_barcategoryaxis_on_max_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#rangeChanged)
///
/// @param self QBarCategoryAxis*
/// @param min const char*
/// @param max const char*
///
void q_barcategoryaxis_range_changed(void* self, const char* min, const char* max);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#rangeChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, const char* min, const char* max)
///
void q_barcategoryaxis_on_range_changed(void* self, void (*callback)(void*, const char*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#countChanged)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#countChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self)
///
void q_barcategoryaxis_on_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_barcategoryaxis_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_barcategoryaxis_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_is_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_set_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_show(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_hide(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_is_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_set_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// @param self QBarCategoryAxis*
/// @param pen QPen*
///
void q_barcategoryaxis_set_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// @param self QBarCategoryAxis*
///
QPen* q_barcategoryaxis_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_set_line_pen_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// @param self QBarCategoryAxis*
///
QColor* q_barcategoryaxis_line_pen_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_is_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_set_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// @param self QBarCategoryAxis*
/// @param pen QPen*
///
void q_barcategoryaxis_set_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// @param self QBarCategoryAxis*
///
QPen* q_barcategoryaxis_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_is_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_set_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// @param self QBarCategoryAxis*
/// @param pen QPen*
///
void q_barcategoryaxis_set_minor_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// @param self QBarCategoryAxis*
///
QPen* q_barcategoryaxis_minor_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_set_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// @param self QBarCategoryAxis*
///
QColor* q_barcategoryaxis_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_set_minor_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// @param self QBarCategoryAxis*
///
QColor* q_barcategoryaxis_minor_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_set_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// @param self QBarCategoryAxis*
/// @param brush QBrush*
///
void q_barcategoryaxis_set_labels_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// @param self QBarCategoryAxis*
///
QBrush* q_barcategoryaxis_labels_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// @param self QBarCategoryAxis*
/// @param font QFont*
///
void q_barcategoryaxis_set_labels_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// @param self QBarCategoryAxis*
///
QFont* q_barcategoryaxis_labels_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// @param self QBarCategoryAxis*
/// @param angle int
///
void q_barcategoryaxis_set_labels_angle(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// @param self QBarCategoryAxis*
///
int32_t q_barcategoryaxis_labels_angle(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_set_labels_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// @param self QBarCategoryAxis*
///
QColor* q_barcategoryaxis_labels_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_is_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_set_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// @param self QBarCategoryAxis*
/// @param brush QBrush*
///
void q_barcategoryaxis_set_title_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// @param self QBarCategoryAxis*
///
QBrush* q_barcategoryaxis_title_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// @param self QBarCategoryAxis*
/// @param font QFont*
///
void q_barcategoryaxis_set_title_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// @param self QBarCategoryAxis*
///
QFont* q_barcategoryaxis_title_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// @param self QBarCategoryAxis*
/// @param title const char*
///
void q_barcategoryaxis_set_title_text(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBarCategoryAxis*
///
const char* q_barcategoryaxis_title_text(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_set_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// @param self QBarCategoryAxis*
/// @param pen QPen*
///
void q_barcategoryaxis_set_shades_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// @param self QBarCategoryAxis*
///
QPen* q_barcategoryaxis_shades_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// @param self QBarCategoryAxis*
/// @param brush QBrush*
///
void q_barcategoryaxis_set_shades_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// @param self QBarCategoryAxis*
///
QBrush* q_barcategoryaxis_shades_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_set_shades_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// @param self QBarCategoryAxis*
///
QColor* q_barcategoryaxis_shades_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_set_shades_border_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// @param self QBarCategoryAxis*
///
QColor* q_barcategoryaxis_shades_border_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// @param self QBarCategoryAxis*
///
/// @return enum Qt__Orientation
///
int32_t q_barcategoryaxis_orientation(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// @param self QBarCategoryAxis*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_barcategoryaxis_alignment(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_set_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_is_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_set_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_labels_truncated(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_set_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, bool visible)
///
void q_barcategoryaxis_on_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QBarCategoryAxis*
/// @param pen QPen*
///
void q_barcategoryaxis_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QPen* pen)
///
void q_barcategoryaxis_on_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_line_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, bool visible)
///
void q_barcategoryaxis_on_line_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_labels_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, bool visible)
///
void q_barcategoryaxis_on_labels_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QBarCategoryAxis*
/// @param brush QBrush*
///
void q_barcategoryaxis_labels_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QBrush* brush)
///
void q_barcategoryaxis_on_labels_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QBarCategoryAxis*
/// @param pen QFont*
///
void q_barcategoryaxis_labels_font_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QFont* pen)
///
void q_barcategoryaxis_on_labels_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QBarCategoryAxis*
/// @param angle int
///
void q_barcategoryaxis_labels_angle_changed(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, int angle)
///
void q_barcategoryaxis_on_labels_angle_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QBarCategoryAxis*
/// @param pen QPen*
///
void q_barcategoryaxis_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QPen* pen)
///
void q_barcategoryaxis_on_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, bool visible)
///
void q_barcategoryaxis_on_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_minor_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, bool visible)
///
void q_barcategoryaxis_on_minor_grid_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QBarCategoryAxis*
/// @param pen QPen*
///
void q_barcategoryaxis_minor_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QPen* pen)
///
void q_barcategoryaxis_on_minor_grid_line_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QColor* color)
///
void q_barcategoryaxis_on_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_minor_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QColor* color)
///
void q_barcategoryaxis_on_minor_grid_line_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QColor* color)
///
void q_barcategoryaxis_on_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_labels_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QColor* color)
///
void q_barcategoryaxis_on_labels_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QBarCategoryAxis*
/// @param title const char*
///
void q_barcategoryaxis_title_text_changed(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, const char* title)
///
void q_barcategoryaxis_on_title_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QBarCategoryAxis*
/// @param brush QBrush*
///
void q_barcategoryaxis_title_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QBrush* brush)
///
void q_barcategoryaxis_on_title_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_title_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, bool visible)
///
void q_barcategoryaxis_on_title_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QBarCategoryAxis*
/// @param font QFont*
///
void q_barcategoryaxis_title_font_changed(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QFont* font)
///
void q_barcategoryaxis_on_title_font_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_shades_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, bool visible)
///
void q_barcategoryaxis_on_shades_visible_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_shades_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QColor* color)
///
void q_barcategoryaxis_on_shades_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QBarCategoryAxis*
/// @param color QColor*
///
void q_barcategoryaxis_shades_border_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QColor* color)
///
void q_barcategoryaxis_on_shades_border_color_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QBarCategoryAxis*
/// @param pen QPen*
///
void q_barcategoryaxis_shades_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QPen* pen)
///
void q_barcategoryaxis_on_shades_pen_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QBarCategoryAxis*
/// @param brush QBrush*
///
void q_barcategoryaxis_shades_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QBrush* brush)
///
void q_barcategoryaxis_on_shades_brush_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QBarCategoryAxis*
/// @param reverse bool
///
void q_barcategoryaxis_reverse_changed(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, bool reverse)
///
void q_barcategoryaxis_on_reverse_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QBarCategoryAxis*
/// @param editable bool
///
void q_barcategoryaxis_labels_editable_changed(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, bool editable)
///
void q_barcategoryaxis_on_labels_editable_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QBarCategoryAxis*
/// @param labelsTruncated bool
///
void q_barcategoryaxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, bool labelsTruncated)
///
void q_barcategoryaxis_on_labels_truncated_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QBarCategoryAxis*
/// @param truncateLabels bool
///
void q_barcategoryaxis_truncate_labels_changed(void* self, bool truncateLabels);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, bool truncateLabels)
///
void q_barcategoryaxis_on_truncate_labels_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_set_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_set_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_set_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_set_minor_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_set_title_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// @param self QBarCategoryAxis*
/// @param visible bool
///
void q_barcategoryaxis_set_shades_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// @param self QBarCategoryAxis*
/// @param reverse bool
///
void q_barcategoryaxis_set_reverse1(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// @param self QBarCategoryAxis*
/// @param editable bool
///
void q_barcategoryaxis_set_labels_editable1(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// @param self QBarCategoryAxis*
/// @param truncateLabels bool
///
void q_barcategoryaxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBarCategoryAxis*
///
const char* q_barcategoryaxis_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBarCategoryAxis*
/// @param name char*
///
void q_barcategoryaxis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QBarCategoryAxis*
///
bool q_barcategoryaxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBarCategoryAxis*
/// @param b bool
///
bool q_barcategoryaxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QBarCategoryAxis*
///
QThread* q_barcategoryaxis_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBarCategoryAxis*
/// @param thread QThread*
///
bool q_barcategoryaxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarCategoryAxis*
/// @param interval int
///
int32_t q_barcategoryaxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarCategoryAxis*
/// @param id int
///
void q_barcategoryaxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarCategoryAxis*
/// @param id enum Qt__TimerId
///
void q_barcategoryaxis_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QBarCategoryAxis*
///
/// @return libqt_list of QObject*
///
libqt_list q_barcategoryaxis_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBarCategoryAxis*
/// @param parent QObject*
///
void q_barcategoryaxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBarCategoryAxis*
/// @param filterObj QObject*
///
void q_barcategoryaxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBarCategoryAxis*
/// @param obj QObject*
///
void q_barcategoryaxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_barcategoryaxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBarCategoryAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_barcategoryaxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_barcategoryaxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_barcategoryaxis_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBarCategoryAxis*
/// @param name const char*
/// @param value QVariant*
///
bool q_barcategoryaxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QBarCategoryAxis*
/// @param name const char*
///
QVariant* q_barcategoryaxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBarCategoryAxis*
///
const char** q_barcategoryaxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBarCategoryAxis*
///
QBindingStorage* q_barcategoryaxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBarCategoryAxis*
///
const QBindingStorage* q_barcategoryaxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self)
///
void q_barcategoryaxis_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QBarCategoryAxis*
///
QObject* q_barcategoryaxis_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QBarCategoryAxis*
/// @param classname const char*
///
bool q_barcategoryaxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBarCategoryAxis*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_barcategoryaxis_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarCategoryAxis*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_barcategoryaxis_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_barcategoryaxis_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBarCategoryAxis*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_barcategoryaxis_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarCategoryAxis*
/// @param param1 QObject*
///
void q_barcategoryaxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QObject* param1)
///
void q_barcategoryaxis_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param event QEvent*
///
bool q_barcategoryaxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param event QEvent*
///
bool q_barcategoryaxis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param callback bool func(QBarCategoryAxis* self, QEvent* event)
///
void q_barcategoryaxis_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_barcategoryaxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_barcategoryaxis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param callback bool func(QBarCategoryAxis* self, QObject* watched, QEvent* event)
///
void q_barcategoryaxis_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param event QTimerEvent*
///
void q_barcategoryaxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param event QTimerEvent*
///
void q_barcategoryaxis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QTimerEvent* event)
///
void q_barcategoryaxis_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param event QChildEvent*
///
void q_barcategoryaxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param event QChildEvent*
///
void q_barcategoryaxis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QChildEvent* event)
///
void q_barcategoryaxis_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param event QEvent*
///
void q_barcategoryaxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param event QEvent*
///
void q_barcategoryaxis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QEvent* event)
///
void q_barcategoryaxis_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param signal QMetaMethod*
///
void q_barcategoryaxis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param signal QMetaMethod*
///
void q_barcategoryaxis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QMetaMethod* signal)
///
void q_barcategoryaxis_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param signal QMetaMethod*
///
void q_barcategoryaxis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param signal QMetaMethod*
///
void q_barcategoryaxis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, QMetaMethod* signal)
///
void q_barcategoryaxis_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarCategoryAxis*
///
QObject* q_barcategoryaxis_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarCategoryAxis*
///
QObject* q_barcategoryaxis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param callback QObject* func()
///
void q_barcategoryaxis_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarCategoryAxis*
///
int32_t q_barcategoryaxis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarCategoryAxis*
///
int32_t q_barcategoryaxis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param callback int32_t func()
///
void q_barcategoryaxis_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param signal const char*
///
int32_t q_barcategoryaxis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param signal const char*
///
int32_t q_barcategoryaxis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param callback int32_t func(QBarCategoryAxis* self, const char* signal)
///
void q_barcategoryaxis_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param signal QMetaMethod*
///
bool q_barcategoryaxis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param signal QMetaMethod*
///
bool q_barcategoryaxis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarCategoryAxis*
/// @param callback bool func(QBarCategoryAxis* self, QMetaMethod* signal)
///
void q_barcategoryaxis_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBarCategoryAxis*
/// @param callback void func(QBarCategoryAxis* self, const char* objectName)
///
void q_barcategoryaxis_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#dtor.QBarCategoryAxis)
///
/// Delete this object from C++ memory.
///
/// @param self QBarCategoryAxis*
///
void q_barcategoryaxis_delete(void* self);

#endif
