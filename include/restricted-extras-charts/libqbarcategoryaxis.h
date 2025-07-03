#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARCATEGORYAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARCATEGORYAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html

/// q_barcategoryaxis_new constructs a new QBarCategoryAxis object.
///
///
QBarCategoryAxis* q_barcategoryaxis_new();

/// q_barcategoryaxis_new2 constructs a new QBarCategoryAxis object.
///
/// ``` QObject* parent ```
QBarCategoryAxis* q_barcategoryaxis_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBarCategoryAxis* self ```
const QMetaObject* q_barcategoryaxis_meta_object(void* self);

/// ``` QBarCategoryAxis* self, const char* param1 ```
void* q_barcategoryaxis_metacast(void* self, const char* param1);

/// ``` QBarCategoryAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barcategoryaxis_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QBarCategoryAxis* self, int32_t (*slot)(QBarCategoryAxis*, enum QMetaObject__Call, int, void*) ```
void q_barcategoryaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QBarCategoryAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barcategoryaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_barcategoryaxis_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#type)
///
/// ``` QBarCategoryAxis* self ```
int64_t q_barcategoryaxis_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QBarCategoryAxis* self, int64_t (*slot)() ```
void q_barcategoryaxis_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QBarCategoryAxis* self ```
int64_t q_barcategoryaxis_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#append)
///
/// ``` QBarCategoryAxis* self, const char* categories[] ```
void q_barcategoryaxis_append(void* self, const char* categories[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#append)
///
/// ``` QBarCategoryAxis* self, const char* category ```
void q_barcategoryaxis_append_with_category(void* self, const char* category);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#remove)
///
/// ``` QBarCategoryAxis* self, const char* category ```
void q_barcategoryaxis_remove(void* self, const char* category);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#insert)
///
/// ``` QBarCategoryAxis* self, int index, const char* category ```
void q_barcategoryaxis_insert(void* self, int index, const char* category);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#replace)
///
/// ``` QBarCategoryAxis* self, const char* oldCategory, const char* newCategory ```
void q_barcategoryaxis_replace(void* self, const char* oldCategory, const char* newCategory);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#clear)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setCategories)
///
/// ``` QBarCategoryAxis* self, const char* categories[] ```
void q_barcategoryaxis_set_categories(void* self, const char* categories[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#categories)
///
/// ``` QBarCategoryAxis* self ```
const char** q_barcategoryaxis_categories(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#count)
///
/// ``` QBarCategoryAxis* self ```
int32_t q_barcategoryaxis_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#at)
///
/// ``` QBarCategoryAxis* self, int index ```
const char* q_barcategoryaxis_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setMin)
///
/// ``` QBarCategoryAxis* self, const char* minCategory ```
void q_barcategoryaxis_set_min(void* self, const char* minCategory);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#min)
///
/// ``` QBarCategoryAxis* self ```
const char* q_barcategoryaxis_min(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setMax)
///
/// ``` QBarCategoryAxis* self, const char* maxCategory ```
void q_barcategoryaxis_set_max(void* self, const char* maxCategory);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#max)
///
/// ``` QBarCategoryAxis* self ```
const char* q_barcategoryaxis_max(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#setRange)
///
/// ``` QBarCategoryAxis* self, const char* minCategory, const char* maxCategory ```
void q_barcategoryaxis_set_range(void* self, const char* minCategory, const char* maxCategory);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#categoriesChanged)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_categories_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#categoriesChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*) ```
void q_barcategoryaxis_on_categories_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#minChanged)
///
/// ``` QBarCategoryAxis* self, const char* min ```
void q_barcategoryaxis_min_changed(void* self, const char* min);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#minChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, const char*) ```
void q_barcategoryaxis_on_min_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#maxChanged)
///
/// ``` QBarCategoryAxis* self, const char* max ```
void q_barcategoryaxis_max_changed(void* self, const char* max);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#maxChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, const char*) ```
void q_barcategoryaxis_on_max_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#rangeChanged)
///
/// ``` QBarCategoryAxis* self, const char* min, const char* max ```
void q_barcategoryaxis_range_changed(void* self, const char* min, const char* max);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#rangeChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, const char*, const char*) ```
void q_barcategoryaxis_on_range_changed(void* self, void (*slot)(void*, const char*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#countChanged)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#countChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*) ```
void q_barcategoryaxis_on_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_barcategoryaxis_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_barcategoryaxis_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_show(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_hide(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_set_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QBarCategoryAxis* self ```
QPen* q_barcategoryaxis_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_line_pen_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_line_pen_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_set_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QBarCategoryAxis* self ```
QPen* q_barcategoryaxis_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_minor_grid_line_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_set_minor_grid_line_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QBarCategoryAxis* self ```
QPen* q_barcategoryaxis_minor_grid_line_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_minor_grid_line_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_minor_grid_line_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_labels_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_set_labels_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QBarCategoryAxis* self ```
QBrush* q_barcategoryaxis_labels_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QBarCategoryAxis* self, QFont* font ```
void q_barcategoryaxis_set_labels_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QBarCategoryAxis* self ```
QFont* q_barcategoryaxis_labels_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QBarCategoryAxis* self, int angle ```
void q_barcategoryaxis_set_labels_angle(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QBarCategoryAxis* self ```
int32_t q_barcategoryaxis_labels_angle(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_labels_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_labels_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_title_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_set_title_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QBarCategoryAxis* self ```
QBrush* q_barcategoryaxis_title_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QBarCategoryAxis* self, QFont* font ```
void q_barcategoryaxis_set_title_font(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QBarCategoryAxis* self ```
QFont* q_barcategoryaxis_title_font(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QBarCategoryAxis* self, const char* title ```
void q_barcategoryaxis_set_title_text(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QBarCategoryAxis* self ```
const char* q_barcategoryaxis_title_text(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_shades_visible(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_set_shades_pen(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QBarCategoryAxis* self ```
QPen* q_barcategoryaxis_shades_pen(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_set_shades_brush(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QBarCategoryAxis* self ```
QBrush* q_barcategoryaxis_shades_brush(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_shades_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_shades_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_shades_border_color(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_shades_border_color(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QBarCategoryAxis* self ```
int64_t q_barcategoryaxis_orientation(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QBarCategoryAxis* self ```
int64_t q_barcategoryaxis_alignment(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_reverse(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_labels_editable(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_labels_truncated(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_truncate_labels(void* self);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_barcategoryaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_line_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_labels_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_labels_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_barcategoryaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QBarCategoryAxis* self, QFont* pen ```
void q_barcategoryaxis_labels_font_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_barcategoryaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QBarCategoryAxis* self, int angle ```
void q_barcategoryaxis_labels_angle_changed(void* self, int angle);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, int) ```
void q_barcategoryaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_barcategoryaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_minor_grid_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_minor_grid_line_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_barcategoryaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_minor_grid_line_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_labels_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QBarCategoryAxis* self, const char* title ```
void q_barcategoryaxis_title_text_changed(void* self, const char* title);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, const char*) ```
void q_barcategoryaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_title_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_barcategoryaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_title_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QBarCategoryAxis* self, QFont* font ```
void q_barcategoryaxis_title_font_changed(void* self, void* font);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_barcategoryaxis_on_title_font_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_shades_visible_changed(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_shades_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_shades_border_color_changed(void* self, void* color);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_shades_pen_changed(void* self, void* pen);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_barcategoryaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_shades_brush_changed(void* self, void* brush);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_barcategoryaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QBarCategoryAxis* self, bool reverse ```
void q_barcategoryaxis_reverse_changed(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_reverse_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QBarCategoryAxis* self, bool editable ```
void q_barcategoryaxis_labels_editable_changed(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QBarCategoryAxis* self, bool labelsTruncated ```
void q_barcategoryaxis_labels_truncated_changed(void* self, bool labelsTruncated);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QBarCategoryAxis* self, bool truncateLabels ```
void q_barcategoryaxis_truncate_labels_changed(void* self, bool truncateLabels);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_minor_grid_line_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_title_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_shades_visible1(void* self, bool visible);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QBarCategoryAxis* self, bool reverse ```
void q_barcategoryaxis_set_reverse1(void* self, bool reverse);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QBarCategoryAxis* self, bool editable ```
void q_barcategoryaxis_set_labels_editable1(void* self, bool editable);

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QBarCategoryAxis* self, bool truncateLabels ```
void q_barcategoryaxis_set_truncate_labels1(void* self, bool truncateLabels);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBarCategoryAxis* self ```
const char* q_barcategoryaxis_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBarCategoryAxis* self, char* name ```
void q_barcategoryaxis_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBarCategoryAxis* self, bool b ```
bool q_barcategoryaxis_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBarCategoryAxis* self ```
QThread* q_barcategoryaxis_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBarCategoryAxis* self, QThread* thread ```
void q_barcategoryaxis_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarCategoryAxis* self, int interval ```
int32_t q_barcategoryaxis_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBarCategoryAxis* self, int id ```
void q_barcategoryaxis_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBarCategoryAxis* self ```
libqt_list /* of QObject* */ q_barcategoryaxis_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBarCategoryAxis* self, QObject* parent ```
void q_barcategoryaxis_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBarCategoryAxis* self, QObject* filterObj ```
void q_barcategoryaxis_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBarCategoryAxis* self, QObject* obj ```
void q_barcategoryaxis_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_barcategoryaxis_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarCategoryAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_barcategoryaxis_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_barcategoryaxis_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_barcategoryaxis_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBarCategoryAxis* self, const char* name, QVariant* value ```
bool q_barcategoryaxis_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBarCategoryAxis* self, const char* name ```
QVariant* q_barcategoryaxis_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBarCategoryAxis* self ```
const char** q_barcategoryaxis_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBarCategoryAxis* self ```
QBindingStorage* q_barcategoryaxis_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBarCategoryAxis* self ```
const QBindingStorage* q_barcategoryaxis_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QObject*) ```
void q_barcategoryaxis_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBarCategoryAxis* self ```
QObject* q_barcategoryaxis_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBarCategoryAxis* self, const char* classname ```
bool q_barcategoryaxis_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarCategoryAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_barcategoryaxis_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barcategoryaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarCategoryAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barcategoryaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarCategoryAxis* self, QObject* param1 ```
void q_barcategoryaxis_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarCategoryAxis* self, void (*slot)(QObject*, QObject*) ```
void q_barcategoryaxis_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QEvent* event ```
bool q_barcategoryaxis_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QEvent* event ```
bool q_barcategoryaxis_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, bool (*slot)(QBarCategoryAxis*, QEvent*) ```
void q_barcategoryaxis_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QObject* watched, QEvent* event ```
bool q_barcategoryaxis_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QObject* watched, QEvent* event ```
bool q_barcategoryaxis_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, bool (*slot)(QBarCategoryAxis*, QObject*, QEvent*) ```
void q_barcategoryaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QTimerEvent* event ```
void q_barcategoryaxis_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QTimerEvent* event ```
void q_barcategoryaxis_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, QTimerEvent*) ```
void q_barcategoryaxis_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QChildEvent* event ```
void q_barcategoryaxis_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QChildEvent* event ```
void q_barcategoryaxis_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, QChildEvent*) ```
void q_barcategoryaxis_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QEvent* event ```
void q_barcategoryaxis_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QEvent* event ```
void q_barcategoryaxis_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, QEvent*) ```
void q_barcategoryaxis_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
void q_barcategoryaxis_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
void q_barcategoryaxis_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, QMetaMethod*) ```
void q_barcategoryaxis_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
void q_barcategoryaxis_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
void q_barcategoryaxis_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, QMetaMethod*) ```
void q_barcategoryaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self ```
QObject* q_barcategoryaxis_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self ```
QObject* q_barcategoryaxis_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QObject* (*slot)() ```
void q_barcategoryaxis_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self ```
int32_t q_barcategoryaxis_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self ```
int32_t q_barcategoryaxis_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, int32_t (*slot)() ```
void q_barcategoryaxis_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, const char* signal ```
int32_t q_barcategoryaxis_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, const char* signal ```
int32_t q_barcategoryaxis_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, int32_t (*slot)(QBarCategoryAxis*, const char*) ```
void q_barcategoryaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
bool q_barcategoryaxis_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
bool q_barcategoryaxis_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, bool (*slot)(QBarCategoryAxis*, QMetaMethod*) ```
void q_barcategoryaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QBarCategoryAxis* self, void (*slot)(QObject*, const char*) ```
void q_barcategoryaxis_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis-qtcharts.html#dtor.QBarCategoryAxis)
///
/// Delete this object from C++ memory.
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_delete(void* self);

#endif
