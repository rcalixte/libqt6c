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
#include "libqbarset.hpp"
#include "libqbarset.h"

/// https://doc.qt.io/qt-6/qbarset.html

/// q_barset_new constructs a new QBarSet object.
///
/// ``` const char* label ```
QBarSet* q_barset_new(const char* label) {
    return QBarSet_new(qstring(label));
}

/// q_barset_new2 constructs a new QBarSet object.
///
/// ``` const char* label, QObject* parent ```
QBarSet* q_barset_new2(const char* label, void* parent) {
    return QBarSet_new2(qstring(label), (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBarSet* self ```
QMetaObject* q_barset_meta_object(void* self) {
    return QBarSet_MetaObject((QBarSet*)self);
}

/// ``` QBarSet* self, const char* param1 ```
void* q_barset_metacast(void* self, const char* param1) {
    return QBarSet_Metacast((QBarSet*)self, param1);
}

/// ``` QBarSet* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barset_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBarSet_Metacall((QBarSet*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QBarSet* self, int32_t (*slot)(QBarSet*, enum QMetaObject__Call, int, void*) ```
void q_barset_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QBarSet_OnMetacall((QBarSet*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBarSet* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barset_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBarSet_QBaseMetacall((QBarSet*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_barset_tr(const char* s) {
    libqt_string _str = QBarSet_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#setLabel)
///
/// ``` QBarSet* self, const char* label ```
void q_barset_set_label(void* self, const char* label) {
    QBarSet_SetLabel((QBarSet*)self, qstring(label));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#label)
///
/// ``` QBarSet* self ```
const char* q_barset_label(void* self) {
    libqt_string _str = QBarSet_Label((QBarSet*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#append)
///
/// ``` QBarSet* self, double value ```
void q_barset_append(void* self, double value) {
    QBarSet_Append((QBarSet*)self, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#append)
///
/// ``` QBarSet* self, double* values[] ```
void q_barset_append_with_values(void* self, double* values[]) {
    size_t values_len = 0;
    while (values[values_len] != NULL) {
        values_len++;
    }
    libqt_list values_list = {
        .len = values_len,
        .data = {(double*)values},
    };
    QBarSet_AppendWithValues((QBarSet*)self, values_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#operator<<)
///
/// ``` QBarSet* self, double* value ```
QBarSet* q_barset_operator_shift_left(void* self, double* value) {
    return QBarSet_OperatorShiftLeft((QBarSet*)self, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#insert)
///
/// ``` QBarSet* self, int index, double value ```
void q_barset_insert(void* self, int index, double value) {
    QBarSet_Insert((QBarSet*)self, index, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#remove)
///
/// ``` QBarSet* self, int index ```
void q_barset_remove(void* self, int index) {
    QBarSet_Remove((QBarSet*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#replace)
///
/// ``` QBarSet* self, int index, double value ```
void q_barset_replace(void* self, int index, double value) {
    QBarSet_Replace((QBarSet*)self, index, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#at)
///
/// ``` QBarSet* self, int index ```
double q_barset_at(void* self, int index) {
    return QBarSet_At((QBarSet*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#operator[])
///
/// ``` QBarSet* self, int index ```
double q_barset_operator_subscript(void* self, int index) {
    return QBarSet_OperatorSubscript((QBarSet*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#count)
///
/// ``` QBarSet* self ```
int32_t q_barset_count(void* self) {
    return QBarSet_Count((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#sum)
///
/// ``` QBarSet* self ```
double q_barset_sum(void* self) {
    return QBarSet_Sum((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#setPen)
///
/// ``` QBarSet* self, QPen* pen ```
void q_barset_set_pen(void* self, void* pen) {
    QBarSet_SetPen((QBarSet*)self, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#pen)
///
/// ``` QBarSet* self ```
QPen* q_barset_pen(void* self) {
    return QBarSet_Pen((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#setBrush)
///
/// ``` QBarSet* self, QBrush* brush ```
void q_barset_set_brush(void* self, void* brush) {
    QBarSet_SetBrush((QBarSet*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#brush)
///
/// ``` QBarSet* self ```
QBrush* q_barset_brush(void* self) {
    return QBarSet_Brush((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#setLabelBrush)
///
/// ``` QBarSet* self, QBrush* brush ```
void q_barset_set_label_brush(void* self, void* brush) {
    QBarSet_SetLabelBrush((QBarSet*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#labelBrush)
///
/// ``` QBarSet* self ```
QBrush* q_barset_label_brush(void* self) {
    return QBarSet_LabelBrush((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#setLabelFont)
///
/// ``` QBarSet* self, QFont* font ```
void q_barset_set_label_font(void* self, void* font) {
    QBarSet_SetLabelFont((QBarSet*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#labelFont)
///
/// ``` QBarSet* self ```
QFont* q_barset_label_font(void* self) {
    return QBarSet_LabelFont((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#color)
///
/// ``` QBarSet* self ```
QColor* q_barset_color(void* self) {
    return QBarSet_Color((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#setColor)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_set_color(void* self, void* color) {
    QBarSet_SetColor((QBarSet*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#borderColor)
///
/// ``` QBarSet* self ```
QColor* q_barset_border_color(void* self) {
    return QBarSet_BorderColor((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#setBorderColor)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_set_border_color(void* self, void* color) {
    QBarSet_SetBorderColor((QBarSet*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#labelColor)
///
/// ``` QBarSet* self ```
QColor* q_barset_label_color(void* self) {
    return QBarSet_LabelColor((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#setLabelColor)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_set_label_color(void* self, void* color) {
    QBarSet_SetLabelColor((QBarSet*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#selectedColor)
///
/// ``` QBarSet* self ```
QColor* q_barset_selected_color(void* self) {
    return QBarSet_SelectedColor((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#setSelectedColor)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_set_selected_color(void* self, void* color) {
    QBarSet_SetSelectedColor((QBarSet*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#isBarSelected)
///
/// ``` QBarSet* self, int index ```
bool q_barset_is_bar_selected(void* self, int index) {
    return QBarSet_IsBarSelected((QBarSet*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#selectBar)
///
/// ``` QBarSet* self, int index ```
void q_barset_select_bar(void* self, int index) {
    QBarSet_SelectBar((QBarSet*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#deselectBar)
///
/// ``` QBarSet* self, int index ```
void q_barset_deselect_bar(void* self, int index) {
    QBarSet_DeselectBar((QBarSet*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#setBarSelected)
///
/// ``` QBarSet* self, int index, bool selected ```
void q_barset_set_bar_selected(void* self, int index, bool selected) {
    QBarSet_SetBarSelected((QBarSet*)self, index, selected);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#selectAllBars)
///
/// ``` QBarSet* self ```
void q_barset_select_all_bars(void* self) {
    QBarSet_SelectAllBars((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#deselectAllBars)
///
/// ``` QBarSet* self ```
void q_barset_deselect_all_bars(void* self) {
    QBarSet_DeselectAllBars((QBarSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#selectBars)
///
/// ``` QBarSet* self, int* indexes[] ```
void q_barset_select_bars(void* self, int* indexes[]) {
    size_t indexes_len = 0;
    while (indexes[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(int*)indexes},
    };
    QBarSet_SelectBars((QBarSet*)self, indexes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#deselectBars)
///
/// ``` QBarSet* self, int* indexes[] ```
void q_barset_deselect_bars(void* self, int* indexes[]) {
    size_t indexes_len = 0;
    while (indexes[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(int*)indexes},
    };
    QBarSet_DeselectBars((QBarSet*)self, indexes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#toggleSelection)
///
/// ``` QBarSet* self, int* indexes[] ```
void q_barset_toggle_selection(void* self, int* indexes[]) {
    size_t indexes_len = 0;
    while (indexes[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(int*)indexes},
    };
    QBarSet_ToggleSelection((QBarSet*)self, indexes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#selectedBars)
///
/// ``` QBarSet* self ```
libqt_list /* of int */ q_barset_selected_bars(void* self) {
    libqt_list _arr = QBarSet_SelectedBars((QBarSet*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#clicked)
///
/// ``` QBarSet* self, int index ```
void q_barset_clicked(void* self, int index) {
    QBarSet_Clicked((QBarSet*)self, index);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, int) ```
void q_barset_on_clicked(void* self, void (*slot)(void*, int)) {
    QBarSet_Connect_Clicked((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#hovered)
///
/// ``` QBarSet* self, bool status, int index ```
void q_barset_hovered(void* self, bool status, int index) {
    QBarSet_Hovered((QBarSet*)self, status, index);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, bool, int) ```
void q_barset_on_hovered(void* self, void (*slot)(void*, bool, int)) {
    QBarSet_Connect_Hovered((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#pressed)
///
/// ``` QBarSet* self, int index ```
void q_barset_pressed(void* self, int index) {
    QBarSet_Pressed((QBarSet*)self, index);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, int) ```
void q_barset_on_pressed(void* self, void (*slot)(void*, int)) {
    QBarSet_Connect_Pressed((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#released)
///
/// ``` QBarSet* self, int index ```
void q_barset_released(void* self, int index) {
    QBarSet_Released((QBarSet*)self, index);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, int) ```
void q_barset_on_released(void* self, void (*slot)(void*, int)) {
    QBarSet_Connect_Released((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#doubleClicked)
///
/// ``` QBarSet* self, int index ```
void q_barset_double_clicked(void* self, int index) {
    QBarSet_DoubleClicked((QBarSet*)self, index);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, int) ```
void q_barset_on_double_clicked(void* self, void (*slot)(void*, int)) {
    QBarSet_Connect_DoubleClicked((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#penChanged)
///
/// ``` QBarSet* self ```
void q_barset_pen_changed(void* self) {
    QBarSet_PenChanged((QBarSet*)self);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*) ```
void q_barset_on_pen_changed(void* self, void (*slot)(void*)) {
    QBarSet_Connect_PenChanged((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#brushChanged)
///
/// ``` QBarSet* self ```
void q_barset_brush_changed(void* self) {
    QBarSet_BrushChanged((QBarSet*)self);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*) ```
void q_barset_on_brush_changed(void* self, void (*slot)(void*)) {
    QBarSet_Connect_BrushChanged((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#labelChanged)
///
/// ``` QBarSet* self ```
void q_barset_label_changed(void* self) {
    QBarSet_LabelChanged((QBarSet*)self);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*) ```
void q_barset_on_label_changed(void* self, void (*slot)(void*)) {
    QBarSet_Connect_LabelChanged((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#labelBrushChanged)
///
/// ``` QBarSet* self ```
void q_barset_label_brush_changed(void* self) {
    QBarSet_LabelBrushChanged((QBarSet*)self);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*) ```
void q_barset_on_label_brush_changed(void* self, void (*slot)(void*)) {
    QBarSet_Connect_LabelBrushChanged((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#labelFontChanged)
///
/// ``` QBarSet* self ```
void q_barset_label_font_changed(void* self) {
    QBarSet_LabelFontChanged((QBarSet*)self);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*) ```
void q_barset_on_label_font_changed(void* self, void (*slot)(void*)) {
    QBarSet_Connect_LabelFontChanged((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#colorChanged)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_color_changed(void* self, void* color) {
    QBarSet_ColorChanged((QBarSet*)self, (QColor*)color);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, QColor*) ```
void q_barset_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QBarSet_Connect_ColorChanged((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#borderColorChanged)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_border_color_changed(void* self, void* color) {
    QBarSet_BorderColorChanged((QBarSet*)self, (QColor*)color);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, QColor*) ```
void q_barset_on_border_color_changed(void* self, void (*slot)(void*, void*)) {
    QBarSet_Connect_BorderColorChanged((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#labelColorChanged)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_label_color_changed(void* self, void* color) {
    QBarSet_LabelColorChanged((QBarSet*)self, (QColor*)color);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, QColor*) ```
void q_barset_on_label_color_changed(void* self, void (*slot)(void*, void*)) {
    QBarSet_Connect_LabelColorChanged((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#selectedColorChanged)
///
/// ``` QBarSet* self, QColor* color ```
void q_barset_selected_color_changed(void* self, void* color) {
    QBarSet_SelectedColorChanged((QBarSet*)self, (QColor*)color);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, QColor*) ```
void q_barset_on_selected_color_changed(void* self, void (*slot)(void*, void*)) {
    QBarSet_Connect_SelectedColorChanged((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#valuesAdded)
///
/// ``` QBarSet* self, int index, int count ```
void q_barset_values_added(void* self, int index, int count) {
    QBarSet_ValuesAdded((QBarSet*)self, index, count);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, int, int) ```
void q_barset_on_values_added(void* self, void (*slot)(void*, int, int)) {
    QBarSet_Connect_ValuesAdded((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#valuesRemoved)
///
/// ``` QBarSet* self, int index, int count ```
void q_barset_values_removed(void* self, int index, int count) {
    QBarSet_ValuesRemoved((QBarSet*)self, index, count);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, int, int) ```
void q_barset_on_values_removed(void* self, void (*slot)(void*, int, int)) {
    QBarSet_Connect_ValuesRemoved((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#valueChanged)
///
/// ``` QBarSet* self, int index ```
void q_barset_value_changed(void* self, int index) {
    QBarSet_ValueChanged((QBarSet*)self, index);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, int) ```
void q_barset_on_value_changed(void* self, void (*slot)(void*, int)) {
    QBarSet_Connect_ValueChanged((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#selectedBarsChanged)
///
/// ``` QBarSet* self, int* indexes[] ```
void q_barset_selected_bars_changed(void* self, int* indexes[]) {
    size_t indexes_len = 0;
    while (indexes[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(int*)indexes},
    };
    QBarSet_SelectedBarsChanged((QBarSet*)self, indexes_list);
}

/// ``` QBarSet* self, void (*slot)(QBarSet*, int*[]) ```
void q_barset_on_selected_bars_changed(void* self, void (*slot)(void*, int*)) {
    QBarSet_Connect_SelectedBarsChanged((QBarSet*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_barset_tr2(const char* s, const char* c) {
    libqt_string _str = QBarSet_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_barset_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QBarSet_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarset.html#remove)
///
/// ``` QBarSet* self, int index, int count ```
void q_barset_remove2(void* self, int index, int count) {
    QBarSet_Remove2((QBarSet*)self, index, count);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBarSet* self ```
const char* q_barset_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBarSet* self, const char* name ```
void q_barset_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBarSet* self ```
bool q_barset_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBarSet* self ```
bool q_barset_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBarSet* self ```
bool q_barset_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBarSet* self ```
bool q_barset_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBarSet* self, bool b ```
bool q_barset_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBarSet* self ```
QThread* q_barset_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBarSet* self, QThread* thread ```
void q_barset_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarSet* self, int interval ```
int32_t q_barset_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBarSet* self, int id ```
void q_barset_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBarSet* self ```
libqt_list /* of QObject* */ q_barset_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBarSet* self, QObject* parent ```
void q_barset_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBarSet* self, QObject* filterObj ```
void q_barset_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBarSet* self, QObject* obj ```
void q_barset_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_barset_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarSet* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_barset_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_barset_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_barset_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBarSet* self ```
void q_barset_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBarSet* self ```
void q_barset_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBarSet* self, const char* name, QVariant* value ```
bool q_barset_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBarSet* self, const char* name ```
QVariant* q_barset_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBarSet* self ```
const char** q_barset_dynamic_property_names(void* self) {
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
/// ``` QBarSet* self ```
QBindingStorage* q_barset_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBarSet* self ```
QBindingStorage* q_barset_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarSet* self ```
void q_barset_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QBarSet* self, void (*slot)(QObject*) ```
void q_barset_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBarSet* self ```
QObject* q_barset_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBarSet* self, const char* classname ```
bool q_barset_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBarSet* self ```
void q_barset_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarSet* self, int interval, enum Qt__TimerType timerType ```
int32_t q_barset_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barset_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarSet* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barset_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarSet* self, QObject* param1 ```
void q_barset_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QBarSet* self, void (*slot)(QObject*, QObject*) ```
void q_barset_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QEvent* event ```
bool q_barset_event(void* self, void* event) {
    return QBarSet_Event((QBarSet*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QEvent* event ```
bool q_barset_qbase_event(void* self, void* event) {
    return QBarSet_QBaseEvent((QBarSet*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, bool (*slot)(QBarSet*, QEvent*) ```
void q_barset_on_event(void* self, bool (*slot)(void*, void*)) {
    QBarSet_OnEvent((QBarSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QObject* watched, QEvent* event ```
bool q_barset_event_filter(void* self, void* watched, void* event) {
    return QBarSet_EventFilter((QBarSet*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QObject* watched, QEvent* event ```
bool q_barset_qbase_event_filter(void* self, void* watched, void* event) {
    return QBarSet_QBaseEventFilter((QBarSet*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, bool (*slot)(QBarSet*, QObject*, QEvent*) ```
void q_barset_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QBarSet_OnEventFilter((QBarSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QTimerEvent* event ```
void q_barset_timer_event(void* self, void* event) {
    QBarSet_TimerEvent((QBarSet*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QTimerEvent* event ```
void q_barset_qbase_timer_event(void* self, void* event) {
    QBarSet_QBaseTimerEvent((QBarSet*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QTimerEvent*) ```
void q_barset_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QBarSet_OnTimerEvent((QBarSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QChildEvent* event ```
void q_barset_child_event(void* self, void* event) {
    QBarSet_ChildEvent((QBarSet*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QChildEvent* event ```
void q_barset_qbase_child_event(void* self, void* event) {
    QBarSet_QBaseChildEvent((QBarSet*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QChildEvent*) ```
void q_barset_on_child_event(void* self, void (*slot)(void*, void*)) {
    QBarSet_OnChildEvent((QBarSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QEvent* event ```
void q_barset_custom_event(void* self, void* event) {
    QBarSet_CustomEvent((QBarSet*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QEvent* event ```
void q_barset_qbase_custom_event(void* self, void* event) {
    QBarSet_QBaseCustomEvent((QBarSet*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QEvent*) ```
void q_barset_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QBarSet_OnCustomEvent((QBarSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
void q_barset_connect_notify(void* self, void* signal) {
    QBarSet_ConnectNotify((QBarSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
void q_barset_qbase_connect_notify(void* self, void* signal) {
    QBarSet_QBaseConnectNotify((QBarSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QMetaMethod*) ```
void q_barset_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QBarSet_OnConnectNotify((QBarSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
void q_barset_disconnect_notify(void* self, void* signal) {
    QBarSet_DisconnectNotify((QBarSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
void q_barset_qbase_disconnect_notify(void* self, void* signal) {
    QBarSet_QBaseDisconnectNotify((QBarSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, void (*slot)(QBarSet*, QMetaMethod*) ```
void q_barset_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QBarSet_OnDisconnectNotify((QBarSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self ```
QObject* q_barset_sender(void* self) {
    return QBarSet_Sender((QBarSet*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self ```
QObject* q_barset_qbase_sender(void* self) {
    return QBarSet_QBaseSender((QBarSet*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, QObject* (*slot)() ```
void q_barset_on_sender(void* self, QObject* (*slot)()) {
    QBarSet_OnSender((QBarSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self ```
int32_t q_barset_sender_signal_index(void* self) {
    return QBarSet_SenderSignalIndex((QBarSet*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self ```
int32_t q_barset_qbase_sender_signal_index(void* self) {
    return QBarSet_QBaseSenderSignalIndex((QBarSet*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, int32_t (*slot)() ```
void q_barset_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QBarSet_OnSenderSignalIndex((QBarSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, const char* signal ```
int32_t q_barset_receivers(void* self, const char* signal) {
    return QBarSet_Receivers((QBarSet*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, const char* signal ```
int32_t q_barset_qbase_receivers(void* self, const char* signal) {
    return QBarSet_QBaseReceivers((QBarSet*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, int32_t (*slot)(QBarSet*, const char*) ```
void q_barset_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QBarSet_OnReceivers((QBarSet*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
bool q_barset_is_signal_connected(void* self, void* signal) {
    return QBarSet_IsSignalConnected((QBarSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarSet* self, QMetaMethod* signal ```
bool q_barset_qbase_is_signal_connected(void* self, void* signal) {
    return QBarSet_QBaseIsSignalConnected((QBarSet*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarSet* self, bool (*slot)(QBarSet*, QMetaMethod*) ```
void q_barset_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QBarSet_OnIsSignalConnected((QBarSet*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QBarSet* self ```
void q_barset_delete(void* self) {
    QBarSet_Delete((QBarSet*)(self));
}