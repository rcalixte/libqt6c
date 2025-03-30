#include "libqabstractaxis.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqbarcategoryaxis.hpp"
#include "libqbarcategoryaxis.h"

/// https://doc.qt.io/qt-6/qbarcategoryaxis.html

/// q_barcategoryaxis_new constructs a new QBarCategoryAxis object.
///
///
QBarCategoryAxis* q_barcategoryaxis_new() {
    return QBarCategoryAxis_new();
}

/// q_barcategoryaxis_new2 constructs a new QBarCategoryAxis object.
///
/// ``` QObject* parent ```
QBarCategoryAxis* q_barcategoryaxis_new2(void* parent) {
    return QBarCategoryAxis_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBarCategoryAxis* self ```
QMetaObject* q_barcategoryaxis_meta_object(void* self) {
    return QBarCategoryAxis_MetaObject((QBarCategoryAxis*)self);
}

/// ``` QBarCategoryAxis* self, const char* param1 ```
void* q_barcategoryaxis_metacast(void* self, const char* param1) {
    return QBarCategoryAxis_Metacast((QBarCategoryAxis*)self, param1);
}

/// ``` QBarCategoryAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barcategoryaxis_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBarCategoryAxis_Metacall((QBarCategoryAxis*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QBarCategoryAxis* self, int32_t (*slot)(QBarCategoryAxis*, enum QMetaObject__Call, int, void*) ```
void q_barcategoryaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QBarCategoryAxis_OnMetacall((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBarCategoryAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barcategoryaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBarCategoryAxis_QBaseMetacall((QBarCategoryAxis*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_barcategoryaxis_tr(const char* s) {
    libqt_string _str = QBarCategoryAxis_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#type)
///
/// ``` QBarCategoryAxis* self ```
int64_t q_barcategoryaxis_type(void* self) {
    return QBarCategoryAxis_Type((QBarCategoryAxis*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBarCategoryAxis* self, int64_t (*slot)() ```
void q_barcategoryaxis_on_type(void* self, int64_t (*slot)()) {
    QBarCategoryAxis_OnType((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBarCategoryAxis* self ```
int64_t q_barcategoryaxis_qbase_type(void* self) {
    return QBarCategoryAxis_QBaseType((QBarCategoryAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#append)
///
/// ``` QBarCategoryAxis* self, const char* categories[] ```
void q_barcategoryaxis_append(void* self, const char* categories[]) {
    size_t categories_len = libqt_strv_length(categories);
    libqt_string* categories_qstr = malloc(categories_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < categories_len; ++_i) {
        categories_qstr[_i] = qstring(categories[_i]);
    }
    libqt_list categories_list = qstrlist(categories_qstr, categories_len);
    QBarCategoryAxis_Append((QBarCategoryAxis*)self, categories_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#append)
///
/// ``` QBarCategoryAxis* self, const char* category ```
void q_barcategoryaxis_append_with_category(void* self, const char* category) {
    QBarCategoryAxis_AppendWithCategory((QBarCategoryAxis*)self, qstring(category));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#remove)
///
/// ``` QBarCategoryAxis* self, const char* category ```
void q_barcategoryaxis_remove(void* self, const char* category) {
    QBarCategoryAxis_Remove((QBarCategoryAxis*)self, qstring(category));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#insert)
///
/// ``` QBarCategoryAxis* self, int index, const char* category ```
void q_barcategoryaxis_insert(void* self, int index, const char* category) {
    QBarCategoryAxis_Insert((QBarCategoryAxis*)self, index, qstring(category));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#replace)
///
/// ``` QBarCategoryAxis* self, const char* oldCategory, const char* newCategory ```
void q_barcategoryaxis_replace(void* self, const char* oldCategory, const char* newCategory) {
    QBarCategoryAxis_Replace((QBarCategoryAxis*)self, qstring(oldCategory), qstring(newCategory));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#clear)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_clear(void* self) {
    QBarCategoryAxis_Clear((QBarCategoryAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#setCategories)
///
/// ``` QBarCategoryAxis* self, const char* categories[] ```
void q_barcategoryaxis_set_categories(void* self, const char* categories[]) {
    size_t categories_len = libqt_strv_length(categories);
    libqt_string* categories_qstr = malloc(categories_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < categories_len; ++_i) {
        categories_qstr[_i] = qstring(categories[_i]);
    }
    libqt_list categories_list = qstrlist(categories_qstr, categories_len);
    QBarCategoryAxis_SetCategories((QBarCategoryAxis*)self, categories_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#categories)
///
/// ``` QBarCategoryAxis* self ```
const char** q_barcategoryaxis_categories(void* self) {
    libqt_list _arr = QBarCategoryAxis_Categories((QBarCategoryAxis*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#count)
///
/// ``` QBarCategoryAxis* self ```
int32_t q_barcategoryaxis_count(void* self) {
    return QBarCategoryAxis_Count((QBarCategoryAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#at)
///
/// ``` QBarCategoryAxis* self, int index ```
const char* q_barcategoryaxis_at(void* self, int index) {
    libqt_string _str = QBarCategoryAxis_At((QBarCategoryAxis*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#setMin)
///
/// ``` QBarCategoryAxis* self, const char* minCategory ```
void q_barcategoryaxis_set_min(void* self, const char* minCategory) {
    QBarCategoryAxis_SetMin((QBarCategoryAxis*)self, qstring(minCategory));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#min)
///
/// ``` QBarCategoryAxis* self ```
const char* q_barcategoryaxis_min(void* self) {
    libqt_string _str = QBarCategoryAxis_Min((QBarCategoryAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#setMax)
///
/// ``` QBarCategoryAxis* self, const char* maxCategory ```
void q_barcategoryaxis_set_max(void* self, const char* maxCategory) {
    QBarCategoryAxis_SetMax((QBarCategoryAxis*)self, qstring(maxCategory));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#max)
///
/// ``` QBarCategoryAxis* self ```
const char* q_barcategoryaxis_max(void* self) {
    libqt_string _str = QBarCategoryAxis_Max((QBarCategoryAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#setRange)
///
/// ``` QBarCategoryAxis* self, const char* minCategory, const char* maxCategory ```
void q_barcategoryaxis_set_range(void* self, const char* minCategory, const char* maxCategory) {
    QBarCategoryAxis_SetRange((QBarCategoryAxis*)self, qstring(minCategory), qstring(maxCategory));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#categoriesChanged)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_categories_changed(void* self) {
    QBarCategoryAxis_CategoriesChanged((QBarCategoryAxis*)self);
}

/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*) ```
void q_barcategoryaxis_on_categories_changed(void* self, void (*slot)(void*)) {
    QBarCategoryAxis_Connect_CategoriesChanged((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#minChanged)
///
/// ``` QBarCategoryAxis* self, const char* min ```
void q_barcategoryaxis_min_changed(void* self, const char* min) {
    QBarCategoryAxis_MinChanged((QBarCategoryAxis*)self, qstring(min));
}

/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, const char*) ```
void q_barcategoryaxis_on_min_changed(void* self, void (*slot)(void*, const char*)) {
    QBarCategoryAxis_Connect_MinChanged((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#maxChanged)
///
/// ``` QBarCategoryAxis* self, const char* max ```
void q_barcategoryaxis_max_changed(void* self, const char* max) {
    QBarCategoryAxis_MaxChanged((QBarCategoryAxis*)self, qstring(max));
}

/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, const char*) ```
void q_barcategoryaxis_on_max_changed(void* self, void (*slot)(void*, const char*)) {
    QBarCategoryAxis_Connect_MaxChanged((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#rangeChanged)
///
/// ``` QBarCategoryAxis* self, const char* min, const char* max ```
void q_barcategoryaxis_range_changed(void* self, const char* min, const char* max) {
    QBarCategoryAxis_RangeChanged((QBarCategoryAxis*)self, qstring(min), qstring(max));
}

/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, const char*, const char*) ```
void q_barcategoryaxis_on_range_changed(void* self, void (*slot)(void*, const char*, const char*)) {
    QBarCategoryAxis_Connect_RangeChanged((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarcategoryaxis.html#countChanged)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_count_changed(void* self) {
    QBarCategoryAxis_CountChanged((QBarCategoryAxis*)self);
}

/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*) ```
void q_barcategoryaxis_on_count_changed(void* self, void (*slot)(void*)) {
    QBarCategoryAxis_Connect_CountChanged((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_barcategoryaxis_tr2(const char* s, const char* c) {
    libqt_string _str = QBarCategoryAxis_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_barcategoryaxis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QBarCategoryAxis_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_visible(void* self) {
    return QAbstractAxis_IsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_visible(void* self) {
    QAbstractAxis_SetVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_show(void* self) {
    QAbstractAxis_Show((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_hide(void* self) {
    QAbstractAxis_Hide((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_line_visible(void* self) {
    return QAbstractAxis_IsLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_line_visible(void* self) {
    QAbstractAxis_SetLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_set_line_pen(void* self, void* pen) {
    QAbstractAxis_SetLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QBarCategoryAxis* self ```
QPen* q_barcategoryaxis_line_pen(void* self) {
    return QAbstractAxis_LinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_line_pen_color(void* self, void* color) {
    QAbstractAxis_SetLinePenColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_line_pen_color(void* self) {
    return QAbstractAxis_LinePenColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_grid_line_visible(void* self) {
    return QAbstractAxis_IsGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_grid_line_visible(void* self) {
    QAbstractAxis_SetGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_set_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QBarCategoryAxis* self ```
QPen* q_barcategoryaxis_grid_line_pen(void* self) {
    return QAbstractAxis_GridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_minor_grid_line_visible(void* self) {
    return QAbstractAxis_IsMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_minor_grid_line_visible(void* self) {
    QAbstractAxis_SetMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_set_minor_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetMinorGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QBarCategoryAxis* self ```
QPen* q_barcategoryaxis_minor_grid_line_pen(void* self) {
    return QAbstractAxis_MinorGridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_grid_line_color(void* self) {
    return QAbstractAxis_GridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_minor_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetMinorGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_minor_grid_line_color(void* self) {
    return QAbstractAxis_MinorGridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_labels_visible(void* self) {
    return QAbstractAxis_LabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_labels_visible(void* self) {
    QAbstractAxis_SetLabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_set_labels_brush(void* self, void* brush) {
    QAbstractAxis_SetLabelsBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QBarCategoryAxis* self ```
QBrush* q_barcategoryaxis_labels_brush(void* self) {
    return QAbstractAxis_LabelsBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QBarCategoryAxis* self, QFont* font ```
void q_barcategoryaxis_set_labels_font(void* self, void* font) {
    QAbstractAxis_SetLabelsFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QBarCategoryAxis* self ```
QFont* q_barcategoryaxis_labels_font(void* self) {
    return QAbstractAxis_LabelsFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QBarCategoryAxis* self, int angle ```
void q_barcategoryaxis_set_labels_angle(void* self, int angle) {
    QAbstractAxis_SetLabelsAngle((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QBarCategoryAxis* self ```
int32_t q_barcategoryaxis_labels_angle(void* self) {
    return QAbstractAxis_LabelsAngle((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_labels_color(void* self, void* color) {
    QAbstractAxis_SetLabelsColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_labels_color(void* self) {
    return QAbstractAxis_LabelsColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_title_visible(void* self) {
    return QAbstractAxis_IsTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_title_visible(void* self) {
    QAbstractAxis_SetTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_set_title_brush(void* self, void* brush) {
    QAbstractAxis_SetTitleBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QBarCategoryAxis* self ```
QBrush* q_barcategoryaxis_title_brush(void* self) {
    return QAbstractAxis_TitleBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QBarCategoryAxis* self, QFont* font ```
void q_barcategoryaxis_set_title_font(void* self, void* font) {
    QAbstractAxis_SetTitleFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QBarCategoryAxis* self ```
QFont* q_barcategoryaxis_title_font(void* self) {
    return QAbstractAxis_TitleFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QBarCategoryAxis* self, const char* title ```
void q_barcategoryaxis_set_title_text(void* self, const char* title) {
    QAbstractAxis_SetTitleText((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QBarCategoryAxis* self ```
const char* q_barcategoryaxis_title_text(void* self) {
    libqt_string _str = QAbstractAxis_TitleText((QAbstractAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_shades_visible(void* self) {
    return QAbstractAxis_ShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_shades_visible(void* self) {
    QAbstractAxis_SetShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_set_shades_pen(void* self, void* pen) {
    QAbstractAxis_SetShadesPen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QBarCategoryAxis* self ```
QPen* q_barcategoryaxis_shades_pen(void* self) {
    return QAbstractAxis_ShadesPen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_set_shades_brush(void* self, void* brush) {
    QAbstractAxis_SetShadesBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QBarCategoryAxis* self ```
QBrush* q_barcategoryaxis_shades_brush(void* self) {
    return QAbstractAxis_ShadesBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_shades_color(void* self, void* color) {
    QAbstractAxis_SetShadesColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_shades_color(void* self) {
    return QAbstractAxis_ShadesColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_set_shades_border_color(void* self, void* color) {
    QAbstractAxis_SetShadesBorderColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QBarCategoryAxis* self ```
QColor* q_barcategoryaxis_shades_border_color(void* self) {
    return QAbstractAxis_ShadesBorderColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QBarCategoryAxis* self ```
int64_t q_barcategoryaxis_orientation(void* self) {
    return QAbstractAxis_Orientation((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QBarCategoryAxis* self ```
int64_t q_barcategoryaxis_alignment(void* self) {
    return QAbstractAxis_Alignment((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_reverse(void* self) {
    QAbstractAxis_SetReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_reverse(void* self) {
    return QAbstractAxis_IsReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_labels_editable(void* self) {
    QAbstractAxis_SetLabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_labels_editable(void* self) {
    return QAbstractAxis_LabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_labels_truncated(void* self) {
    return QAbstractAxis_LabelsTruncated((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_set_truncate_labels(void* self) {
    QAbstractAxis_SetTruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_truncate_labels(void* self) {
    return QAbstractAxis_TruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_visible_changed(void* self, bool visible) {
    QAbstractAxis_VisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_VisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_LinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_barcategoryaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_line_visible_changed(void* self, bool visible) {
    QAbstractAxis_LineVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LineVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_labels_visible_changed(void* self, bool visible) {
    QAbstractAxis_LabelsVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_labels_brush_changed(void* self, void* brush) {
    QAbstractAxis_LabelsBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_barcategoryaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QBarCategoryAxis* self, QFont* pen ```
void q_barcategoryaxis_labels_font_changed(void* self, void* pen) {
    QAbstractAxis_LabelsFontChanged((QAbstractAxis*)self, (QFont*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_barcategoryaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QBarCategoryAxis* self, int angle ```
void q_barcategoryaxis_labels_angle_changed(void* self, int angle) {
    QAbstractAxis_LabelsAngleChanged((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, int) ```
void q_barcategoryaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAxis_Connect_LabelsAngleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_GridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_barcategoryaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_GridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_GridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_minor_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_MinorGridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_MinorGridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_minor_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_MinorGridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_barcategoryaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_GridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_minor_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_MinorGridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_color_changed(void* self, void* color) {
    QAbstractAxis_ColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_labels_color_changed(void* self, void* color) {
    QAbstractAxis_LabelsColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QBarCategoryAxis* self, const char* title ```
void q_barcategoryaxis_title_text_changed(void* self, const char* title) {
    QAbstractAxis_TitleTextChanged((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, const char*) ```
void q_barcategoryaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractAxis_Connect_TitleTextChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_title_brush_changed(void* self, void* brush) {
    QAbstractAxis_TitleBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_barcategoryaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_title_visible_changed(void* self, bool visible) {
    QAbstractAxis_TitleVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TitleVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QBarCategoryAxis* self, QFont* font ```
void q_barcategoryaxis_title_font_changed(void* self, void* font) {
    QAbstractAxis_TitleFontChanged((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_barcategoryaxis_on_title_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_shades_visible_changed(void* self, bool visible) {
    QAbstractAxis_ShadesVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ShadesVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_shades_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QBarCategoryAxis* self, QColor* color ```
void q_barcategoryaxis_shades_border_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesBorderColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_barcategoryaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBorderColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QBarCategoryAxis* self, QPen* pen ```
void q_barcategoryaxis_shades_pen_changed(void* self, void* pen) {
    QAbstractAxis_ShadesPenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_barcategoryaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesPenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QBarCategoryAxis* self, QBrush* brush ```
void q_barcategoryaxis_shades_brush_changed(void* self, void* brush) {
    QAbstractAxis_ShadesBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_barcategoryaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QBarCategoryAxis* self, bool reverse ```
void q_barcategoryaxis_reverse_changed(void* self, bool reverse) {
    QAbstractAxis_ReverseChanged((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_reverse_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ReverseChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QBarCategoryAxis* self, bool editable ```
void q_barcategoryaxis_labels_editable_changed(void* self, bool editable) {
    QAbstractAxis_LabelsEditableChanged((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsEditableChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QBarCategoryAxis* self, bool labelsTruncated ```
void q_barcategoryaxis_labels_truncated_changed(void* self, bool labelsTruncated) {
    QAbstractAxis_LabelsTruncatedChanged((QAbstractAxis*)self, labelsTruncated);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsTruncatedChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QBarCategoryAxis* self, bool truncateLabels ```
void q_barcategoryaxis_truncate_labels_changed(void* self, bool truncateLabels) {
    QAbstractAxis_TruncateLabelsChanged((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QAbstractAxis
///
/// ``` QBarCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_barcategoryaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TruncateLabelsChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_visible1(void* self, bool visible) {
    QAbstractAxis_SetVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_minor_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetMinorGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_labels_visible1(void* self, bool visible) {
    QAbstractAxis_SetLabelsVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_title_visible1(void* self, bool visible) {
    QAbstractAxis_SetTitleVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QBarCategoryAxis* self, bool visible ```
void q_barcategoryaxis_set_shades_visible1(void* self, bool visible) {
    QAbstractAxis_SetShadesVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QBarCategoryAxis* self, bool reverse ```
void q_barcategoryaxis_set_reverse1(void* self, bool reverse) {
    QAbstractAxis_SetReverse1((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QBarCategoryAxis* self, bool editable ```
void q_barcategoryaxis_set_labels_editable1(void* self, bool editable) {
    QAbstractAxis_SetLabelsEditable1((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QBarCategoryAxis* self, bool truncateLabels ```
void q_barcategoryaxis_set_truncate_labels1(void* self, bool truncateLabels) {
    QAbstractAxis_SetTruncateLabels1((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBarCategoryAxis* self ```
const char* q_barcategoryaxis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBarCategoryAxis* self, const char* name ```
void q_barcategoryaxis_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBarCategoryAxis* self ```
bool q_barcategoryaxis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBarCategoryAxis* self, bool b ```
bool q_barcategoryaxis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBarCategoryAxis* self ```
QThread* q_barcategoryaxis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBarCategoryAxis* self, QThread* thread ```
void q_barcategoryaxis_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarCategoryAxis* self, int interval ```
int32_t q_barcategoryaxis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBarCategoryAxis* self, int id ```
void q_barcategoryaxis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBarCategoryAxis* self ```
libqt_list /* of QObject* */ q_barcategoryaxis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBarCategoryAxis* self, QObject* parent ```
void q_barcategoryaxis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBarCategoryAxis* self, QObject* filterObj ```
void q_barcategoryaxis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBarCategoryAxis* self, QObject* obj ```
void q_barcategoryaxis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_barcategoryaxis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarCategoryAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_barcategoryaxis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_barcategoryaxis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_barcategoryaxis_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBarCategoryAxis* self, const char* name, QVariant* value ```
bool q_barcategoryaxis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBarCategoryAxis* self, const char* name ```
QVariant* q_barcategoryaxis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBarCategoryAxis* self ```
const char** q_barcategoryaxis_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBarCategoryAxis* self ```
QBindingStorage* q_barcategoryaxis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBarCategoryAxis* self ```
QBindingStorage* q_barcategoryaxis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QBarCategoryAxis* self, void (*slot)(QObject*) ```
void q_barcategoryaxis_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBarCategoryAxis* self ```
QObject* q_barcategoryaxis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBarCategoryAxis* self, const char* classname ```
bool q_barcategoryaxis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarCategoryAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_barcategoryaxis_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barcategoryaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarCategoryAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barcategoryaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarCategoryAxis* self, QObject* param1 ```
void q_barcategoryaxis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QBarCategoryAxis* self, void (*slot)(QObject*, QObject*) ```
void q_barcategoryaxis_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QEvent* event ```
bool q_barcategoryaxis_event(void* self, void* event) {
    return QBarCategoryAxis_Event((QBarCategoryAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QEvent* event ```
bool q_barcategoryaxis_qbase_event(void* self, void* event) {
    return QBarCategoryAxis_QBaseEvent((QBarCategoryAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, bool (*slot)(QBarCategoryAxis*, QEvent*) ```
void q_barcategoryaxis_on_event(void* self, bool (*slot)(void*, void*)) {
    QBarCategoryAxis_OnEvent((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QObject* watched, QEvent* event ```
bool q_barcategoryaxis_event_filter(void* self, void* watched, void* event) {
    return QBarCategoryAxis_EventFilter((QBarCategoryAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QObject* watched, QEvent* event ```
bool q_barcategoryaxis_qbase_event_filter(void* self, void* watched, void* event) {
    return QBarCategoryAxis_QBaseEventFilter((QBarCategoryAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, bool (*slot)(QBarCategoryAxis*, QObject*, QEvent*) ```
void q_barcategoryaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QBarCategoryAxis_OnEventFilter((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QTimerEvent* event ```
void q_barcategoryaxis_timer_event(void* self, void* event) {
    QBarCategoryAxis_TimerEvent((QBarCategoryAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QTimerEvent* event ```
void q_barcategoryaxis_qbase_timer_event(void* self, void* event) {
    QBarCategoryAxis_QBaseTimerEvent((QBarCategoryAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, QTimerEvent*) ```
void q_barcategoryaxis_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QBarCategoryAxis_OnTimerEvent((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QChildEvent* event ```
void q_barcategoryaxis_child_event(void* self, void* event) {
    QBarCategoryAxis_ChildEvent((QBarCategoryAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QChildEvent* event ```
void q_barcategoryaxis_qbase_child_event(void* self, void* event) {
    QBarCategoryAxis_QBaseChildEvent((QBarCategoryAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, QChildEvent*) ```
void q_barcategoryaxis_on_child_event(void* self, void (*slot)(void*, void*)) {
    QBarCategoryAxis_OnChildEvent((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QEvent* event ```
void q_barcategoryaxis_custom_event(void* self, void* event) {
    QBarCategoryAxis_CustomEvent((QBarCategoryAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QEvent* event ```
void q_barcategoryaxis_qbase_custom_event(void* self, void* event) {
    QBarCategoryAxis_QBaseCustomEvent((QBarCategoryAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, QEvent*) ```
void q_barcategoryaxis_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QBarCategoryAxis_OnCustomEvent((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
void q_barcategoryaxis_connect_notify(void* self, void* signal) {
    QBarCategoryAxis_ConnectNotify((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
void q_barcategoryaxis_qbase_connect_notify(void* self, void* signal) {
    QBarCategoryAxis_QBaseConnectNotify((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, QMetaMethod*) ```
void q_barcategoryaxis_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QBarCategoryAxis_OnConnectNotify((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
void q_barcategoryaxis_disconnect_notify(void* self, void* signal) {
    QBarCategoryAxis_DisconnectNotify((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
void q_barcategoryaxis_qbase_disconnect_notify(void* self, void* signal) {
    QBarCategoryAxis_QBaseDisconnectNotify((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, void (*slot)(QBarCategoryAxis*, QMetaMethod*) ```
void q_barcategoryaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QBarCategoryAxis_OnDisconnectNotify((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self ```
QObject* q_barcategoryaxis_sender(void* self) {
    return QBarCategoryAxis_Sender((QBarCategoryAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self ```
QObject* q_barcategoryaxis_qbase_sender(void* self) {
    return QBarCategoryAxis_QBaseSender((QBarCategoryAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QObject* (*slot)() ```
void q_barcategoryaxis_on_sender(void* self, QObject* (*slot)()) {
    QBarCategoryAxis_OnSender((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self ```
int32_t q_barcategoryaxis_sender_signal_index(void* self) {
    return QBarCategoryAxis_SenderSignalIndex((QBarCategoryAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self ```
int32_t q_barcategoryaxis_qbase_sender_signal_index(void* self) {
    return QBarCategoryAxis_QBaseSenderSignalIndex((QBarCategoryAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, int32_t (*slot)() ```
void q_barcategoryaxis_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QBarCategoryAxis_OnSenderSignalIndex((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, const char* signal ```
int32_t q_barcategoryaxis_receivers(void* self, const char* signal) {
    return QBarCategoryAxis_Receivers((QBarCategoryAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, const char* signal ```
int32_t q_barcategoryaxis_qbase_receivers(void* self, const char* signal) {
    return QBarCategoryAxis_QBaseReceivers((QBarCategoryAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, int32_t (*slot)(QBarCategoryAxis*, const char*) ```
void q_barcategoryaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QBarCategoryAxis_OnReceivers((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
bool q_barcategoryaxis_is_signal_connected(void* self, void* signal) {
    return QBarCategoryAxis_IsSignalConnected((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, QMetaMethod* signal ```
bool q_barcategoryaxis_qbase_is_signal_connected(void* self, void* signal) {
    return QBarCategoryAxis_QBaseIsSignalConnected((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarCategoryAxis* self, bool (*slot)(QBarCategoryAxis*, QMetaMethod*) ```
void q_barcategoryaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QBarCategoryAxis_OnIsSignalConnected((QBarCategoryAxis*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QBarCategoryAxis* self ```
void q_barcategoryaxis_delete(void* self) {
    QBarCategoryAxis_Delete((QBarCategoryAxis*)(self));
}