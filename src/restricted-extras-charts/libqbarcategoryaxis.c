#include "libqabstractaxis.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqbarcategoryaxis.hpp"
#include "libqbarcategoryaxis.h"

QBarCategoryAxis* q_barcategoryaxis_new() {
    return QBarCategoryAxis_new();
}

QBarCategoryAxis* q_barcategoryaxis_new2(void* parent) {
    return QBarCategoryAxis_new2((QObject*)parent);
}

const QMetaObject* q_barcategoryaxis_meta_object(void* self) {
    return QBarCategoryAxis_MetaObject((QBarCategoryAxis*)self);
}

void* q_barcategoryaxis_metacast(void* self, const char* param1) {
    return QBarCategoryAxis_Metacast((QBarCategoryAxis*)self, param1);
}

int32_t q_barcategoryaxis_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBarCategoryAxis_Metacall((QBarCategoryAxis*)self, param1, param2, param3);
}

void q_barcategoryaxis_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QBarCategoryAxis_OnMetacall((QBarCategoryAxis*)self, (intptr_t)callback);
}

int32_t q_barcategoryaxis_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBarCategoryAxis_QBaseMetacall((QBarCategoryAxis*)self, param1, param2, param3);
}

const char* q_barcategoryaxis_tr(const char* s) {
    libqt_string _str = QBarCategoryAxis_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_barcategoryaxis_type(void* self) {
    return QBarCategoryAxis_Type((QBarCategoryAxis*)self);
}

void q_barcategoryaxis_on_type(void* self, int32_t (*callback)()) {
    QBarCategoryAxis_OnType((QBarCategoryAxis*)self, (intptr_t)callback);
}

int32_t q_barcategoryaxis_qbase_type(void* self) {
    return QBarCategoryAxis_QBaseType((QBarCategoryAxis*)self);
}

void q_barcategoryaxis_append(void* self, const char* categories[]) {
    size_t categories_len = libqt_strv_length(categories);
    libqt_string* categories_qstr = (libqt_string*)malloc(categories_len * sizeof(libqt_string));
    if (categories_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_barcategoryaxis_append");
        abort();
    }
    for (size_t i = 0; i < categories_len; ++i) {
        categories_qstr[i] = qstring(categories[i]);
    }
    libqt_list categories_list = qlist(categories_qstr, categories_len);
    QBarCategoryAxis_Append((QBarCategoryAxis*)self, categories_list);
    free(categories_qstr);
}

void q_barcategoryaxis_append2(void* self, const char* category) {
    QBarCategoryAxis_Append2((QBarCategoryAxis*)self, qstring(category));
}

void q_barcategoryaxis_remove(void* self, const char* category) {
    QBarCategoryAxis_Remove((QBarCategoryAxis*)self, qstring(category));
}

void q_barcategoryaxis_insert(void* self, int index, const char* category) {
    QBarCategoryAxis_Insert((QBarCategoryAxis*)self, index, qstring(category));
}

void q_barcategoryaxis_replace(void* self, const char* oldCategory, const char* newCategory) {
    QBarCategoryAxis_Replace((QBarCategoryAxis*)self, qstring(oldCategory), qstring(newCategory));
}

void q_barcategoryaxis_clear(void* self) {
    QBarCategoryAxis_Clear((QBarCategoryAxis*)self);
}

void q_barcategoryaxis_set_categories(void* self, const char* categories[]) {
    size_t categories_len = libqt_strv_length(categories);
    libqt_string* categories_qstr = (libqt_string*)malloc(categories_len * sizeof(libqt_string));
    if (categories_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_barcategoryaxis_set_categories");
        abort();
    }
    for (size_t i = 0; i < categories_len; ++i) {
        categories_qstr[i] = qstring(categories[i]);
    }
    libqt_list categories_list = qlist(categories_qstr, categories_len);
    QBarCategoryAxis_SetCategories((QBarCategoryAxis*)self, categories_list);
    free(categories_qstr);
}

const char** q_barcategoryaxis_categories(void* self) {
    libqt_list _arr = QBarCategoryAxis_Categories((QBarCategoryAxis*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_barcategoryaxis_categories");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

int32_t q_barcategoryaxis_count(void* self) {
    return QBarCategoryAxis_Count((QBarCategoryAxis*)self);
}

const char* q_barcategoryaxis_at(void* self, int index) {
    libqt_string _str = QBarCategoryAxis_At((QBarCategoryAxis*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_barcategoryaxis_set_min(void* self, const char* minCategory) {
    QBarCategoryAxis_SetMin((QBarCategoryAxis*)self, qstring(minCategory));
}

const char* q_barcategoryaxis_min(void* self) {
    libqt_string _str = QBarCategoryAxis_Min((QBarCategoryAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_barcategoryaxis_set_max(void* self, const char* maxCategory) {
    QBarCategoryAxis_SetMax((QBarCategoryAxis*)self, qstring(maxCategory));
}

const char* q_barcategoryaxis_max(void* self) {
    libqt_string _str = QBarCategoryAxis_Max((QBarCategoryAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_barcategoryaxis_set_range(void* self, const char* minCategory, const char* maxCategory) {
    QBarCategoryAxis_SetRange((QBarCategoryAxis*)self, qstring(minCategory), qstring(maxCategory));
}

void q_barcategoryaxis_categories_changed(void* self) {
    QBarCategoryAxis_CategoriesChanged((QBarCategoryAxis*)self);
}

void q_barcategoryaxis_on_categories_changed(void* self, void (*callback)(void*)) {
    QBarCategoryAxis_Connect_CategoriesChanged((QBarCategoryAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_min_changed(void* self, const char* min) {
    QBarCategoryAxis_MinChanged((QBarCategoryAxis*)self, qstring(min));
}

void q_barcategoryaxis_on_min_changed(void* self, void (*callback)(void*, const char*)) {
    QBarCategoryAxis_Connect_MinChanged((QBarCategoryAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_max_changed(void* self, const char* max) {
    QBarCategoryAxis_MaxChanged((QBarCategoryAxis*)self, qstring(max));
}

void q_barcategoryaxis_on_max_changed(void* self, void (*callback)(void*, const char*)) {
    QBarCategoryAxis_Connect_MaxChanged((QBarCategoryAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_range_changed(void* self, const char* min, const char* max) {
    QBarCategoryAxis_RangeChanged((QBarCategoryAxis*)self, qstring(min), qstring(max));
}

void q_barcategoryaxis_on_range_changed(void* self, void (*callback)(void*, const char*, const char*)) {
    QBarCategoryAxis_Connect_RangeChanged((QBarCategoryAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_count_changed(void* self) {
    QBarCategoryAxis_CountChanged((QBarCategoryAxis*)self);
}

void q_barcategoryaxis_on_count_changed(void* self, void (*callback)(void*)) {
    QBarCategoryAxis_Connect_CountChanged((QBarCategoryAxis*)self, (intptr_t)callback);
}

const char* q_barcategoryaxis_tr2(const char* s, const char* c) {
    libqt_string _str = QBarCategoryAxis_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_barcategoryaxis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QBarCategoryAxis_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_barcategoryaxis_is_visible(void* self) {
    return QAbstractAxis_IsVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_visible(void* self) {
    QAbstractAxis_SetVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_show(void* self) {
    QAbstractAxis_Show((QAbstractAxis*)self);
}

void q_barcategoryaxis_hide(void* self) {
    QAbstractAxis_Hide((QAbstractAxis*)self);
}

bool q_barcategoryaxis_is_line_visible(void* self) {
    return QAbstractAxis_IsLineVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_line_visible(void* self) {
    QAbstractAxis_SetLineVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_line_pen(void* self, void* pen) {
    QAbstractAxis_SetLinePen((QAbstractAxis*)self, (QPen*)pen);
}

QPen* q_barcategoryaxis_line_pen(void* self) {
    return QAbstractAxis_LinePen((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_line_pen_color(void* self, void* color) {
    QAbstractAxis_SetLinePenColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_barcategoryaxis_line_pen_color(void* self) {
    return QAbstractAxis_LinePenColor((QAbstractAxis*)self);
}

bool q_barcategoryaxis_is_grid_line_visible(void* self) {
    return QAbstractAxis_IsGridLineVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_grid_line_visible(void* self) {
    QAbstractAxis_SetGridLineVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

QPen* q_barcategoryaxis_grid_line_pen(void* self) {
    return QAbstractAxis_GridLinePen((QAbstractAxis*)self);
}

bool q_barcategoryaxis_is_minor_grid_line_visible(void* self) {
    return QAbstractAxis_IsMinorGridLineVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_minor_grid_line_visible(void* self) {
    QAbstractAxis_SetMinorGridLineVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_minor_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetMinorGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

QPen* q_barcategoryaxis_minor_grid_line_pen(void* self) {
    return QAbstractAxis_MinorGridLinePen((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_barcategoryaxis_grid_line_color(void* self) {
    return QAbstractAxis_GridLineColor((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_minor_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetMinorGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_barcategoryaxis_minor_grid_line_color(void* self) {
    return QAbstractAxis_MinorGridLineColor((QAbstractAxis*)self);
}

bool q_barcategoryaxis_labels_visible(void* self) {
    return QAbstractAxis_LabelsVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_labels_visible(void* self) {
    QAbstractAxis_SetLabelsVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_labels_brush(void* self, void* brush) {
    QAbstractAxis_SetLabelsBrush((QAbstractAxis*)self, (QBrush*)brush);
}

QBrush* q_barcategoryaxis_labels_brush(void* self) {
    return QAbstractAxis_LabelsBrush((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_labels_font(void* self, void* font) {
    QAbstractAxis_SetLabelsFont((QAbstractAxis*)self, (QFont*)font);
}

QFont* q_barcategoryaxis_labels_font(void* self) {
    return QAbstractAxis_LabelsFont((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_labels_angle(void* self, int angle) {
    QAbstractAxis_SetLabelsAngle((QAbstractAxis*)self, angle);
}

int32_t q_barcategoryaxis_labels_angle(void* self) {
    return QAbstractAxis_LabelsAngle((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_labels_color(void* self, void* color) {
    QAbstractAxis_SetLabelsColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_barcategoryaxis_labels_color(void* self) {
    return QAbstractAxis_LabelsColor((QAbstractAxis*)self);
}

bool q_barcategoryaxis_is_title_visible(void* self) {
    return QAbstractAxis_IsTitleVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_title_visible(void* self) {
    QAbstractAxis_SetTitleVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_title_brush(void* self, void* brush) {
    QAbstractAxis_SetTitleBrush((QAbstractAxis*)self, (QBrush*)brush);
}

QBrush* q_barcategoryaxis_title_brush(void* self) {
    return QAbstractAxis_TitleBrush((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_title_font(void* self, void* font) {
    QAbstractAxis_SetTitleFont((QAbstractAxis*)self, (QFont*)font);
}

QFont* q_barcategoryaxis_title_font(void* self) {
    return QAbstractAxis_TitleFont((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_title_text(void* self, const char* title) {
    QAbstractAxis_SetTitleText((QAbstractAxis*)self, qstring(title));
}

const char* q_barcategoryaxis_title_text(void* self) {
    libqt_string _str = QAbstractAxis_TitleText((QAbstractAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_barcategoryaxis_shades_visible(void* self) {
    return QAbstractAxis_ShadesVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_shades_visible(void* self) {
    QAbstractAxis_SetShadesVisible((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_shades_pen(void* self, void* pen) {
    QAbstractAxis_SetShadesPen((QAbstractAxis*)self, (QPen*)pen);
}

QPen* q_barcategoryaxis_shades_pen(void* self) {
    return QAbstractAxis_ShadesPen((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_shades_brush(void* self, void* brush) {
    QAbstractAxis_SetShadesBrush((QAbstractAxis*)self, (QBrush*)brush);
}

QBrush* q_barcategoryaxis_shades_brush(void* self) {
    return QAbstractAxis_ShadesBrush((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_shades_color(void* self, void* color) {
    QAbstractAxis_SetShadesColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_barcategoryaxis_shades_color(void* self) {
    return QAbstractAxis_ShadesColor((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_shades_border_color(void* self, void* color) {
    QAbstractAxis_SetShadesBorderColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_barcategoryaxis_shades_border_color(void* self) {
    return QAbstractAxis_ShadesBorderColor((QAbstractAxis*)self);
}

int32_t q_barcategoryaxis_orientation(void* self) {
    return QAbstractAxis_Orientation((QAbstractAxis*)self);
}

int32_t q_barcategoryaxis_alignment(void* self) {
    return QAbstractAxis_Alignment((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_reverse(void* self) {
    QAbstractAxis_SetReverse((QAbstractAxis*)self);
}

bool q_barcategoryaxis_is_reverse(void* self) {
    return QAbstractAxis_IsReverse((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_labels_editable(void* self) {
    QAbstractAxis_SetLabelsEditable((QAbstractAxis*)self);
}

bool q_barcategoryaxis_labels_editable(void* self) {
    return QAbstractAxis_LabelsEditable((QAbstractAxis*)self);
}

bool q_barcategoryaxis_labels_truncated(void* self) {
    return QAbstractAxis_LabelsTruncated((QAbstractAxis*)self);
}

void q_barcategoryaxis_set_truncate_labels(void* self) {
    QAbstractAxis_SetTruncateLabels((QAbstractAxis*)self);
}

bool q_barcategoryaxis_truncate_labels(void* self) {
    return QAbstractAxis_TruncateLabels((QAbstractAxis*)self);
}

void q_barcategoryaxis_visible_changed(void* self, bool visible) {
    QAbstractAxis_VisibleChanged((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_on_visible_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractAxis_Connect_VisibleChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_LinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

void q_barcategoryaxis_on_line_pen_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_LinePenChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_line_visible_changed(void* self, bool visible) {
    QAbstractAxis_LineVisibleChanged((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_on_line_visible_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractAxis_Connect_LineVisibleChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_labels_visible_changed(void* self, bool visible) {
    QAbstractAxis_LabelsVisibleChanged((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_on_labels_visible_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractAxis_Connect_LabelsVisibleChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_labels_brush_changed(void* self, void* brush) {
    QAbstractAxis_LabelsBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

void q_barcategoryaxis_on_labels_brush_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_LabelsBrushChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_labels_font_changed(void* self, void* pen) {
    QAbstractAxis_LabelsFontChanged((QAbstractAxis*)self, (QFont*)pen);
}

void q_barcategoryaxis_on_labels_font_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_LabelsFontChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_labels_angle_changed(void* self, int angle) {
    QAbstractAxis_LabelsAngleChanged((QAbstractAxis*)self, angle);
}

void q_barcategoryaxis_on_labels_angle_changed(void* self, void (*callback)(void*, int)) {
    QAbstractAxis_Connect_LabelsAngleChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_GridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

void q_barcategoryaxis_on_grid_line_pen_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_GridLinePenChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_GridVisibleChanged((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_on_grid_visible_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractAxis_Connect_GridVisibleChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_minor_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_MinorGridVisibleChanged((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_on_minor_grid_visible_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractAxis_Connect_MinorGridVisibleChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_minor_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_MinorGridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

void q_barcategoryaxis_on_minor_grid_line_pen_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLinePenChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_GridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_barcategoryaxis_on_grid_line_color_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_GridLineColorChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_minor_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_MinorGridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_barcategoryaxis_on_minor_grid_line_color_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLineColorChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_color_changed(void* self, void* color) {
    QAbstractAxis_ColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_barcategoryaxis_on_color_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_ColorChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_labels_color_changed(void* self, void* color) {
    QAbstractAxis_LabelsColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_barcategoryaxis_on_labels_color_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_LabelsColorChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_title_text_changed(void* self, const char* title) {
    QAbstractAxis_TitleTextChanged((QAbstractAxis*)self, qstring(title));
}

void q_barcategoryaxis_on_title_text_changed(void* self, void (*callback)(void*, const char*)) {
    QAbstractAxis_Connect_TitleTextChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_title_brush_changed(void* self, void* brush) {
    QAbstractAxis_TitleBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

void q_barcategoryaxis_on_title_brush_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_TitleBrushChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_title_visible_changed(void* self, bool visible) {
    QAbstractAxis_TitleVisibleChanged((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_on_title_visible_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractAxis_Connect_TitleVisibleChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_title_font_changed(void* self, void* font) {
    QAbstractAxis_TitleFontChanged((QAbstractAxis*)self, (QFont*)font);
}

void q_barcategoryaxis_on_title_font_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_TitleFontChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_shades_visible_changed(void* self, bool visible) {
    QAbstractAxis_ShadesVisibleChanged((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_on_shades_visible_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractAxis_Connect_ShadesVisibleChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_shades_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_barcategoryaxis_on_shades_color_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_ShadesColorChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_shades_border_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesBorderColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_barcategoryaxis_on_shades_border_color_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBorderColorChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_shades_pen_changed(void* self, void* pen) {
    QAbstractAxis_ShadesPenChanged((QAbstractAxis*)self, (QPen*)pen);
}

void q_barcategoryaxis_on_shades_pen_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_ShadesPenChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_shades_brush_changed(void* self, void* brush) {
    QAbstractAxis_ShadesBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

void q_barcategoryaxis_on_shades_brush_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBrushChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_reverse_changed(void* self, bool reverse) {
    QAbstractAxis_ReverseChanged((QAbstractAxis*)self, reverse);
}

void q_barcategoryaxis_on_reverse_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractAxis_Connect_ReverseChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_labels_editable_changed(void* self, bool editable) {
    QAbstractAxis_LabelsEditableChanged((QAbstractAxis*)self, editable);
}

void q_barcategoryaxis_on_labels_editable_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractAxis_Connect_LabelsEditableChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_labels_truncated_changed(void* self, bool labelsTruncated) {
    QAbstractAxis_LabelsTruncatedChanged((QAbstractAxis*)self, labelsTruncated);
}

void q_barcategoryaxis_on_labels_truncated_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractAxis_Connect_LabelsTruncatedChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_truncate_labels_changed(void* self, bool truncateLabels) {
    QAbstractAxis_TruncateLabelsChanged((QAbstractAxis*)self, truncateLabels);
}

void q_barcategoryaxis_on_truncate_labels_changed(void* self, void (*callback)(void*, bool)) {
    QAbstractAxis_Connect_TruncateLabelsChanged((QAbstractAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_set_visible1(void* self, bool visible) {
    QAbstractAxis_SetVisible1((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_set_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetLineVisible1((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_set_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetGridLineVisible1((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_set_minor_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetMinorGridLineVisible1((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_set_labels_visible1(void* self, bool visible) {
    QAbstractAxis_SetLabelsVisible1((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_set_title_visible1(void* self, bool visible) {
    QAbstractAxis_SetTitleVisible1((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_set_shades_visible1(void* self, bool visible) {
    QAbstractAxis_SetShadesVisible1((QAbstractAxis*)self, visible);
}

void q_barcategoryaxis_set_reverse1(void* self, bool reverse) {
    QAbstractAxis_SetReverse1((QAbstractAxis*)self, reverse);
}

void q_barcategoryaxis_set_labels_editable1(void* self, bool editable) {
    QAbstractAxis_SetLabelsEditable1((QAbstractAxis*)self, editable);
}

void q_barcategoryaxis_set_truncate_labels1(void* self, bool truncateLabels) {
    QAbstractAxis_SetTruncateLabels1((QAbstractAxis*)self, truncateLabels);
}

const char* q_barcategoryaxis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_barcategoryaxis_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_barcategoryaxis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_barcategoryaxis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_barcategoryaxis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_barcategoryaxis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_barcategoryaxis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_barcategoryaxis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_barcategoryaxis_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_barcategoryaxis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_barcategoryaxis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_barcategoryaxis_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_barcategoryaxis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_barcategoryaxis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_barcategoryaxis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_barcategoryaxis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_barcategoryaxis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_barcategoryaxis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_barcategoryaxis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_barcategoryaxis_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_barcategoryaxis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_barcategoryaxis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_barcategoryaxis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_barcategoryaxis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_barcategoryaxis_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_barcategoryaxis_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_barcategoryaxis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_barcategoryaxis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_barcategoryaxis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_barcategoryaxis_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_barcategoryaxis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_barcategoryaxis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_barcategoryaxis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_barcategoryaxis_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_barcategoryaxis_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_barcategoryaxis_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_barcategoryaxis_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_barcategoryaxis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_barcategoryaxis_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_barcategoryaxis_event(void* self, void* event) {
    return QBarCategoryAxis_Event((QBarCategoryAxis*)self, (QEvent*)event);
}

bool q_barcategoryaxis_qbase_event(void* self, void* event) {
    return QBarCategoryAxis_QBaseEvent((QBarCategoryAxis*)self, (QEvent*)event);
}

void q_barcategoryaxis_on_event(void* self, bool (*callback)(void*, void*)) {
    QBarCategoryAxis_OnEvent((QBarCategoryAxis*)self, (intptr_t)callback);
}

bool q_barcategoryaxis_event_filter(void* self, void* watched, void* event) {
    return QBarCategoryAxis_EventFilter((QBarCategoryAxis*)self, (QObject*)watched, (QEvent*)event);
}

bool q_barcategoryaxis_qbase_event_filter(void* self, void* watched, void* event) {
    return QBarCategoryAxis_QBaseEventFilter((QBarCategoryAxis*)self, (QObject*)watched, (QEvent*)event);
}

void q_barcategoryaxis_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QBarCategoryAxis_OnEventFilter((QBarCategoryAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_timer_event(void* self, void* event) {
    QBarCategoryAxis_TimerEvent((QBarCategoryAxis*)self, (QTimerEvent*)event);
}

void q_barcategoryaxis_qbase_timer_event(void* self, void* event) {
    QBarCategoryAxis_QBaseTimerEvent((QBarCategoryAxis*)self, (QTimerEvent*)event);
}

void q_barcategoryaxis_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QBarCategoryAxis_OnTimerEvent((QBarCategoryAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_child_event(void* self, void* event) {
    QBarCategoryAxis_ChildEvent((QBarCategoryAxis*)self, (QChildEvent*)event);
}

void q_barcategoryaxis_qbase_child_event(void* self, void* event) {
    QBarCategoryAxis_QBaseChildEvent((QBarCategoryAxis*)self, (QChildEvent*)event);
}

void q_barcategoryaxis_on_child_event(void* self, void (*callback)(void*, void*)) {
    QBarCategoryAxis_OnChildEvent((QBarCategoryAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_custom_event(void* self, void* event) {
    QBarCategoryAxis_CustomEvent((QBarCategoryAxis*)self, (QEvent*)event);
}

void q_barcategoryaxis_qbase_custom_event(void* self, void* event) {
    QBarCategoryAxis_QBaseCustomEvent((QBarCategoryAxis*)self, (QEvent*)event);
}

void q_barcategoryaxis_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QBarCategoryAxis_OnCustomEvent((QBarCategoryAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_connect_notify(void* self, void* signal) {
    QBarCategoryAxis_ConnectNotify((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

void q_barcategoryaxis_qbase_connect_notify(void* self, void* signal) {
    QBarCategoryAxis_QBaseConnectNotify((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

void q_barcategoryaxis_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QBarCategoryAxis_OnConnectNotify((QBarCategoryAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_disconnect_notify(void* self, void* signal) {
    QBarCategoryAxis_DisconnectNotify((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

void q_barcategoryaxis_qbase_disconnect_notify(void* self, void* signal) {
    QBarCategoryAxis_QBaseDisconnectNotify((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

void q_barcategoryaxis_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QBarCategoryAxis_OnDisconnectNotify((QBarCategoryAxis*)self, (intptr_t)callback);
}

QObject* q_barcategoryaxis_sender(void* self) {
    return QBarCategoryAxis_Sender((QBarCategoryAxis*)self);
}

QObject* q_barcategoryaxis_qbase_sender(void* self) {
    return QBarCategoryAxis_QBaseSender((QBarCategoryAxis*)self);
}

void q_barcategoryaxis_on_sender(void* self, QObject* (*callback)()) {
    QBarCategoryAxis_OnSender((QBarCategoryAxis*)self, (intptr_t)callback);
}

int32_t q_barcategoryaxis_sender_signal_index(void* self) {
    return QBarCategoryAxis_SenderSignalIndex((QBarCategoryAxis*)self);
}

int32_t q_barcategoryaxis_qbase_sender_signal_index(void* self) {
    return QBarCategoryAxis_QBaseSenderSignalIndex((QBarCategoryAxis*)self);
}

void q_barcategoryaxis_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QBarCategoryAxis_OnSenderSignalIndex((QBarCategoryAxis*)self, (intptr_t)callback);
}

int32_t q_barcategoryaxis_receivers(void* self, const char* signal) {
    return QBarCategoryAxis_Receivers((QBarCategoryAxis*)self, signal);
}

int32_t q_barcategoryaxis_qbase_receivers(void* self, const char* signal) {
    return QBarCategoryAxis_QBaseReceivers((QBarCategoryAxis*)self, signal);
}

void q_barcategoryaxis_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QBarCategoryAxis_OnReceivers((QBarCategoryAxis*)self, (intptr_t)callback);
}

bool q_barcategoryaxis_is_signal_connected(void* self, void* signal) {
    return QBarCategoryAxis_IsSignalConnected((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

bool q_barcategoryaxis_qbase_is_signal_connected(void* self, void* signal) {
    return QBarCategoryAxis_QBaseIsSignalConnected((QBarCategoryAxis*)self, (QMetaMethod*)signal);
}

void q_barcategoryaxis_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QBarCategoryAxis_OnIsSignalConnected((QBarCategoryAxis*)self, (intptr_t)callback);
}

void q_barcategoryaxis_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_barcategoryaxis_delete(void* self) {
    QBarCategoryAxis_Delete((QBarCategoryAxis*)(self));
}
