#include "libqbrush.hpp"
#include "libqcolor.hpp"
#include "libqfont.hpp"
#include "libqfontmetrics.hpp"
#include "libqicon.hpp"
#include "libqlocale.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqobject.hpp"
#include "libqpalette.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqstyleoption.hpp"
#include "libqstyleoption.h"

QStyleOption* q_styleoption_new() {
    return QStyleOption_new();
}

QStyleOption* q_styleoption_new2(void* other) {
    return QStyleOption_new2((QStyleOption*)other);
}

QStyleOption* q_styleoption_new3(int version) {
    return QStyleOption_new3(version);
}

QStyleOption* q_styleoption_new4(int version, int typeVal) {
    return QStyleOption_new4(version, typeVal);
}

int32_t q_styleoption_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoption_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoption_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoption_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoption_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoption_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoption_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoption_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoption_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoption_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoption_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoption_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoption_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoption_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoption_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoption_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoption_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoption_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoption_delete(void* self) {
    QStyleOption_Delete((QStyleOption*)(self));
}

QStyleOptionFocusRect* q_styleoptionfocusrect_new() {
    return QStyleOptionFocusRect_new();
}

QStyleOptionFocusRect* q_styleoptionfocusrect_new2(void* other) {
    return QStyleOptionFocusRect_new2((QStyleOptionFocusRect*)other);
}

QColor* q_styleoptionfocusrect_background_color(void* self) {
    return QStyleOptionFocusRect_BackgroundColor((QStyleOptionFocusRect*)self);
}

void q_styleoptionfocusrect_set_background_color(void* self, void* backgroundColor) {
    QStyleOptionFocusRect_SetBackgroundColor((QStyleOptionFocusRect*)self, (QColor*)backgroundColor);
}

int32_t q_styleoptionfocusrect_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionfocusrect_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionfocusrect_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionfocusrect_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionfocusrect_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionfocusrect_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionfocusrect_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionfocusrect_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionfocusrect_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionfocusrect_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionfocusrect_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionfocusrect_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionfocusrect_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionfocusrect_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionfocusrect_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionfocusrect_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionfocusrect_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionfocusrect_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionfocusrect_delete(void* self) {
    QStyleOptionFocusRect_Delete((QStyleOptionFocusRect*)(self));
}

QStyleOptionFrame* q_styleoptionframe_new() {
    return QStyleOptionFrame_new();
}

QStyleOptionFrame* q_styleoptionframe_new2(void* other) {
    return QStyleOptionFrame_new2((QStyleOptionFrame*)other);
}

int32_t q_styleoptionframe_line_width(void* self) {
    return QStyleOptionFrame_LineWidth((QStyleOptionFrame*)self);
}

void q_styleoptionframe_set_line_width(void* self, int lineWidth) {
    QStyleOptionFrame_SetLineWidth((QStyleOptionFrame*)self, lineWidth);
}

int32_t q_styleoptionframe_mid_line_width(void* self) {
    return QStyleOptionFrame_MidLineWidth((QStyleOptionFrame*)self);
}

void q_styleoptionframe_set_mid_line_width(void* self, int midLineWidth) {
    QStyleOptionFrame_SetMidLineWidth((QStyleOptionFrame*)self, midLineWidth);
}

int64_t q_styleoptionframe_features(void* self) {
    return QStyleOptionFrame_Features((QStyleOptionFrame*)self);
}

void q_styleoptionframe_set_features(void* self, int64_t features) {
    QStyleOptionFrame_SetFeatures((QStyleOptionFrame*)self, features);
}

int32_t q_styleoptionframe_frame_shape(void* self) {
    return QStyleOptionFrame_FrameShape((QStyleOptionFrame*)self);
}

void q_styleoptionframe_set_frame_shape(void* self, int32_t frameShape) {
    QStyleOptionFrame_SetFrameShape((QStyleOptionFrame*)self, frameShape);
}

int32_t q_styleoptionframe_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionframe_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionframe_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionframe_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionframe_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionframe_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionframe_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionframe_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionframe_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionframe_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionframe_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionframe_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionframe_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionframe_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionframe_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionframe_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionframe_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionframe_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionframe_delete(void* self) {
    QStyleOptionFrame_Delete((QStyleOptionFrame*)(self));
}

QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new() {
    return QStyleOptionTabWidgetFrame_new();
}

QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new2(void* other) {
    return QStyleOptionTabWidgetFrame_new2((QStyleOptionTabWidgetFrame*)other);
}

int32_t q_styleoptiontabwidgetframe_line_width(void* self) {
    return QStyleOptionTabWidgetFrame_LineWidth((QStyleOptionTabWidgetFrame*)self);
}

void q_styleoptiontabwidgetframe_set_line_width(void* self, int lineWidth) {
    QStyleOptionTabWidgetFrame_SetLineWidth((QStyleOptionTabWidgetFrame*)self, lineWidth);
}

int32_t q_styleoptiontabwidgetframe_mid_line_width(void* self) {
    return QStyleOptionTabWidgetFrame_MidLineWidth((QStyleOptionTabWidgetFrame*)self);
}

void q_styleoptiontabwidgetframe_set_mid_line_width(void* self, int midLineWidth) {
    QStyleOptionTabWidgetFrame_SetMidLineWidth((QStyleOptionTabWidgetFrame*)self, midLineWidth);
}

int32_t q_styleoptiontabwidgetframe_shape(void* self) {
    return QStyleOptionTabWidgetFrame_Shape((QStyleOptionTabWidgetFrame*)self);
}

void q_styleoptiontabwidgetframe_set_shape(void* self, int32_t shape) {
    QStyleOptionTabWidgetFrame_SetShape((QStyleOptionTabWidgetFrame*)self, shape);
}

QSize* q_styleoptiontabwidgetframe_tab_bar_size(void* self) {
    return QStyleOptionTabWidgetFrame_TabBarSize((QStyleOptionTabWidgetFrame*)self);
}

void q_styleoptiontabwidgetframe_set_tab_bar_size(void* self, void* tabBarSize) {
    QStyleOptionTabWidgetFrame_SetTabBarSize((QStyleOptionTabWidgetFrame*)self, (QSize*)tabBarSize);
}

QSize* q_styleoptiontabwidgetframe_right_corner_widget_size(void* self) {
    return QStyleOptionTabWidgetFrame_RightCornerWidgetSize((QStyleOptionTabWidgetFrame*)self);
}

void q_styleoptiontabwidgetframe_set_right_corner_widget_size(void* self, void* rightCornerWidgetSize) {
    QStyleOptionTabWidgetFrame_SetRightCornerWidgetSize((QStyleOptionTabWidgetFrame*)self, (QSize*)rightCornerWidgetSize);
}

QSize* q_styleoptiontabwidgetframe_left_corner_widget_size(void* self) {
    return QStyleOptionTabWidgetFrame_LeftCornerWidgetSize((QStyleOptionTabWidgetFrame*)self);
}

void q_styleoptiontabwidgetframe_set_left_corner_widget_size(void* self, void* leftCornerWidgetSize) {
    QStyleOptionTabWidgetFrame_SetLeftCornerWidgetSize((QStyleOptionTabWidgetFrame*)self, (QSize*)leftCornerWidgetSize);
}

QRect* q_styleoptiontabwidgetframe_tab_bar_rect(void* self) {
    return QStyleOptionTabWidgetFrame_TabBarRect((QStyleOptionTabWidgetFrame*)self);
}

void q_styleoptiontabwidgetframe_set_tab_bar_rect(void* self, void* tabBarRect) {
    QStyleOptionTabWidgetFrame_SetTabBarRect((QStyleOptionTabWidgetFrame*)self, (QRect*)tabBarRect);
}

QRect* q_styleoptiontabwidgetframe_selected_tab_rect(void* self) {
    return QStyleOptionTabWidgetFrame_SelectedTabRect((QStyleOptionTabWidgetFrame*)self);
}

void q_styleoptiontabwidgetframe_set_selected_tab_rect(void* self, void* selectedTabRect) {
    QStyleOptionTabWidgetFrame_SetSelectedTabRect((QStyleOptionTabWidgetFrame*)self, (QRect*)selectedTabRect);
}

int32_t q_styleoptiontabwidgetframe_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptiontabwidgetframe_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptiontabwidgetframe_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptiontabwidgetframe_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptiontabwidgetframe_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptiontabwidgetframe_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptiontabwidgetframe_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptiontabwidgetframe_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptiontabwidgetframe_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptiontabwidgetframe_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptiontabwidgetframe_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptiontabwidgetframe_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptiontabwidgetframe_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptiontabwidgetframe_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptiontabwidgetframe_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptiontabwidgetframe_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptiontabwidgetframe_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontabwidgetframe_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontabwidgetframe_delete(void* self) {
    QStyleOptionTabWidgetFrame_Delete((QStyleOptionTabWidgetFrame*)(self));
}

QStyleOptionTabBarBase* q_styleoptiontabbarbase_new() {
    return QStyleOptionTabBarBase_new();
}

QStyleOptionTabBarBase* q_styleoptiontabbarbase_new2(void* other) {
    return QStyleOptionTabBarBase_new2((QStyleOptionTabBarBase*)other);
}

int32_t q_styleoptiontabbarbase_shape(void* self) {
    return QStyleOptionTabBarBase_Shape((QStyleOptionTabBarBase*)self);
}

void q_styleoptiontabbarbase_set_shape(void* self, int32_t shape) {
    QStyleOptionTabBarBase_SetShape((QStyleOptionTabBarBase*)self, shape);
}

QRect* q_styleoptiontabbarbase_tab_bar_rect(void* self) {
    return QStyleOptionTabBarBase_TabBarRect((QStyleOptionTabBarBase*)self);
}

void q_styleoptiontabbarbase_set_tab_bar_rect(void* self, void* tabBarRect) {
    QStyleOptionTabBarBase_SetTabBarRect((QStyleOptionTabBarBase*)self, (QRect*)tabBarRect);
}

QRect* q_styleoptiontabbarbase_selected_tab_rect(void* self) {
    return QStyleOptionTabBarBase_SelectedTabRect((QStyleOptionTabBarBase*)self);
}

void q_styleoptiontabbarbase_set_selected_tab_rect(void* self, void* selectedTabRect) {
    QStyleOptionTabBarBase_SetSelectedTabRect((QStyleOptionTabBarBase*)self, (QRect*)selectedTabRect);
}

bool q_styleoptiontabbarbase_document_mode(void* self) {
    return QStyleOptionTabBarBase_DocumentMode((QStyleOptionTabBarBase*)self);
}

void q_styleoptiontabbarbase_set_document_mode(void* self, bool documentMode) {
    QStyleOptionTabBarBase_SetDocumentMode((QStyleOptionTabBarBase*)self, documentMode);
}

int32_t q_styleoptiontabbarbase_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptiontabbarbase_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptiontabbarbase_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptiontabbarbase_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptiontabbarbase_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptiontabbarbase_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptiontabbarbase_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptiontabbarbase_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptiontabbarbase_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptiontabbarbase_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptiontabbarbase_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptiontabbarbase_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptiontabbarbase_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptiontabbarbase_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptiontabbarbase_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptiontabbarbase_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptiontabbarbase_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontabbarbase_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontabbarbase_delete(void* self) {
    QStyleOptionTabBarBase_Delete((QStyleOptionTabBarBase*)(self));
}

QStyleOptionHeader* q_styleoptionheader_new() {
    return QStyleOptionHeader_new();
}

QStyleOptionHeader* q_styleoptionheader_new2(void* other) {
    return QStyleOptionHeader_new2((QStyleOptionHeader*)other);
}

int32_t q_styleoptionheader_section(void* self) {
    return QStyleOptionHeader_Section((QStyleOptionHeader*)self);
}

void q_styleoptionheader_set_section(void* self, int section) {
    QStyleOptionHeader_SetSection((QStyleOptionHeader*)self, section);
}

const char* q_styleoptionheader_text(void* self) {
    libqt_string text_str = QStyleOptionHeader_Text((QStyleOptionHeader*)self);
    char* text_ret = qstring_to_char(text_str);
    libqt_string_free(&text_str);
    return text_ret;
}

void q_styleoptionheader_set_text(void* self, const char* text) {
    QStyleOptionHeader_SetText((QStyleOptionHeader*)self, qstring(text));
}

int64_t q_styleoptionheader_text_alignment(void* self) {
    return QStyleOptionHeader_TextAlignment((QStyleOptionHeader*)self);
}

void q_styleoptionheader_set_text_alignment(void* self, int64_t textAlignment) {
    QStyleOptionHeader_SetTextAlignment((QStyleOptionHeader*)self, textAlignment);
}

QIcon* q_styleoptionheader_icon(void* self) {
    return QStyleOptionHeader_Icon((QStyleOptionHeader*)self);
}

void q_styleoptionheader_set_icon(void* self, void* icon) {
    QStyleOptionHeader_SetIcon((QStyleOptionHeader*)self, (QIcon*)icon);
}

int64_t q_styleoptionheader_icon_alignment(void* self) {
    return QStyleOptionHeader_IconAlignment((QStyleOptionHeader*)self);
}

void q_styleoptionheader_set_icon_alignment(void* self, int64_t iconAlignment) {
    QStyleOptionHeader_SetIconAlignment((QStyleOptionHeader*)self, iconAlignment);
}

int32_t q_styleoptionheader_position(void* self) {
    return QStyleOptionHeader_Position((QStyleOptionHeader*)self);
}

void q_styleoptionheader_set_position(void* self, int32_t position) {
    QStyleOptionHeader_SetPosition((QStyleOptionHeader*)self, position);
}

int32_t q_styleoptionheader_selected_position(void* self) {
    return QStyleOptionHeader_SelectedPosition((QStyleOptionHeader*)self);
}

void q_styleoptionheader_set_selected_position(void* self, int32_t selectedPosition) {
    QStyleOptionHeader_SetSelectedPosition((QStyleOptionHeader*)self, selectedPosition);
}

int32_t q_styleoptionheader_sort_indicator(void* self) {
    return QStyleOptionHeader_SortIndicator((QStyleOptionHeader*)self);
}

void q_styleoptionheader_set_sort_indicator(void* self, int32_t sortIndicator) {
    QStyleOptionHeader_SetSortIndicator((QStyleOptionHeader*)self, sortIndicator);
}

int32_t q_styleoptionheader_orientation(void* self) {
    return QStyleOptionHeader_Orientation((QStyleOptionHeader*)self);
}

void q_styleoptionheader_set_orientation(void* self, int32_t orientation) {
    QStyleOptionHeader_SetOrientation((QStyleOptionHeader*)self, orientation);
}

int32_t q_styleoptionheader_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionheader_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionheader_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionheader_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionheader_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionheader_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionheader_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionheader_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionheader_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionheader_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionheader_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionheader_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionheader_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionheader_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionheader_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionheader_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionheader_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionheader_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionheader_delete(void* self) {
    QStyleOptionHeader_Delete((QStyleOptionHeader*)(self));
}

QStyleOptionHeaderV2* q_styleoptionheaderv2_new() {
    return QStyleOptionHeaderV2_new();
}

QStyleOptionHeaderV2* q_styleoptionheaderv2_new2(void* other) {
    return QStyleOptionHeaderV2_new2((QStyleOptionHeaderV2*)other);
}

int32_t q_styleoptionheaderv2_text_elide_mode(void* self) {
    return QStyleOptionHeaderV2_TextElideMode((QStyleOptionHeaderV2*)self);
}

void q_styleoptionheaderv2_set_text_elide_mode(void* self, int32_t textElideMode) {
    QStyleOptionHeaderV2_SetTextElideMode((QStyleOptionHeaderV2*)self, textElideMode);
}

bool q_styleoptionheaderv2_is_section_drag_target(void* self) {
    return QStyleOptionHeaderV2_IsSectionDragTarget((QStyleOptionHeaderV2*)self);
}

void q_styleoptionheaderv2_set_is_section_drag_target(void* self, bool isSectionDragTarget) {
    QStyleOptionHeaderV2_SetIsSectionDragTarget((QStyleOptionHeaderV2*)self, isSectionDragTarget);
}

int32_t q_styleoptionheaderv2_unused(void* self) {
    return QStyleOptionHeaderV2_Unused((QStyleOptionHeaderV2*)self);
}

void q_styleoptionheaderv2_set_unused(void* self, int unused) {
    QStyleOptionHeaderV2_SetUnused((QStyleOptionHeaderV2*)self, unused);
}

int32_t q_styleoptionheaderv2_section(void* self) {
    return QStyleOptionHeader_Section((QStyleOptionHeader*)self);
}

void q_styleoptionheaderv2_set_section(void* self, int section) {
    QStyleOptionHeader_SetSection((QStyleOptionHeader*)self, section);
}

const char* q_styleoptionheaderv2_text(void* self) {
    libqt_string text_str = QStyleOptionHeader_Text((QStyleOptionHeader*)self);
    char* text_ret = qstring_to_char(text_str);
    libqt_string_free(&text_str);
    return text_ret;
}

void q_styleoptionheaderv2_set_text(void* self, const char* text) {
    QStyleOptionHeader_SetText((QStyleOptionHeader*)self, qstring(text));
}

int64_t q_styleoptionheaderv2_text_alignment(void* self) {
    return QStyleOptionHeader_TextAlignment((QStyleOptionHeader*)self);
}

void q_styleoptionheaderv2_set_text_alignment(void* self, int64_t textAlignment) {
    QStyleOptionHeader_SetTextAlignment((QStyleOptionHeader*)self, textAlignment);
}

QIcon* q_styleoptionheaderv2_icon(void* self) {
    return QStyleOptionHeader_Icon((QStyleOptionHeader*)self);
}

void q_styleoptionheaderv2_set_icon(void* self, void* icon) {
    QStyleOptionHeader_SetIcon((QStyleOptionHeader*)self, (QIcon*)icon);
}

int64_t q_styleoptionheaderv2_icon_alignment(void* self) {
    return QStyleOptionHeader_IconAlignment((QStyleOptionHeader*)self);
}

void q_styleoptionheaderv2_set_icon_alignment(void* self, int64_t iconAlignment) {
    QStyleOptionHeader_SetIconAlignment((QStyleOptionHeader*)self, iconAlignment);
}

int32_t q_styleoptionheaderv2_position(void* self) {
    return QStyleOptionHeader_Position((QStyleOptionHeader*)self);
}

void q_styleoptionheaderv2_set_position(void* self, int32_t position) {
    QStyleOptionHeader_SetPosition((QStyleOptionHeader*)self, position);
}

int32_t q_styleoptionheaderv2_selected_position(void* self) {
    return QStyleOptionHeader_SelectedPosition((QStyleOptionHeader*)self);
}

void q_styleoptionheaderv2_set_selected_position(void* self, int32_t selectedPosition) {
    QStyleOptionHeader_SetSelectedPosition((QStyleOptionHeader*)self, selectedPosition);
}

int32_t q_styleoptionheaderv2_sort_indicator(void* self) {
    return QStyleOptionHeader_SortIndicator((QStyleOptionHeader*)self);
}

void q_styleoptionheaderv2_set_sort_indicator(void* self, int32_t sortIndicator) {
    QStyleOptionHeader_SetSortIndicator((QStyleOptionHeader*)self, sortIndicator);
}

int32_t q_styleoptionheaderv2_orientation(void* self) {
    return QStyleOptionHeader_Orientation((QStyleOptionHeader*)self);
}

void q_styleoptionheaderv2_set_orientation(void* self, int32_t orientation) {
    QStyleOptionHeader_SetOrientation((QStyleOptionHeader*)self, orientation);
}

int32_t q_styleoptionheaderv2_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionheaderv2_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionheaderv2_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionheaderv2_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionheaderv2_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionheaderv2_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionheaderv2_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionheaderv2_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionheaderv2_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionheaderv2_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionheaderv2_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionheaderv2_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionheaderv2_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionheaderv2_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionheaderv2_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionheaderv2_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionheaderv2_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionheaderv2_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionheaderv2_delete(void* self) {
    QStyleOptionHeaderV2_Delete((QStyleOptionHeaderV2*)(self));
}

QStyleOptionButton* q_styleoptionbutton_new() {
    return QStyleOptionButton_new();
}

QStyleOptionButton* q_styleoptionbutton_new2(void* other) {
    return QStyleOptionButton_new2((QStyleOptionButton*)other);
}

int64_t q_styleoptionbutton_features(void* self) {
    return QStyleOptionButton_Features((QStyleOptionButton*)self);
}

void q_styleoptionbutton_set_features(void* self, int64_t features) {
    QStyleOptionButton_SetFeatures((QStyleOptionButton*)self, features);
}

const char* q_styleoptionbutton_text(void* self) {
    libqt_string text_str = QStyleOptionButton_Text((QStyleOptionButton*)self);
    char* text_ret = qstring_to_char(text_str);
    libqt_string_free(&text_str);
    return text_ret;
}

void q_styleoptionbutton_set_text(void* self, const char* text) {
    QStyleOptionButton_SetText((QStyleOptionButton*)self, qstring(text));
}

QIcon* q_styleoptionbutton_icon(void* self) {
    return QStyleOptionButton_Icon((QStyleOptionButton*)self);
}

void q_styleoptionbutton_set_icon(void* self, void* icon) {
    QStyleOptionButton_SetIcon((QStyleOptionButton*)self, (QIcon*)icon);
}

QSize* q_styleoptionbutton_icon_size(void* self) {
    return QStyleOptionButton_IconSize((QStyleOptionButton*)self);
}

void q_styleoptionbutton_set_icon_size(void* self, void* iconSize) {
    QStyleOptionButton_SetIconSize((QStyleOptionButton*)self, (QSize*)iconSize);
}

int32_t q_styleoptionbutton_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionbutton_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionbutton_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionbutton_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionbutton_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionbutton_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionbutton_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionbutton_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionbutton_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionbutton_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionbutton_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionbutton_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionbutton_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionbutton_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionbutton_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionbutton_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionbutton_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionbutton_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionbutton_delete(void* self) {
    QStyleOptionButton_Delete((QStyleOptionButton*)(self));
}

QStyleOptionTab* q_styleoptiontab_new() {
    return QStyleOptionTab_new();
}

QStyleOptionTab* q_styleoptiontab_new2(void* other) {
    return QStyleOptionTab_new2((QStyleOptionTab*)other);
}

int32_t q_styleoptiontab_shape(void* self) {
    return QStyleOptionTab_Shape((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_shape(void* self, int32_t shape) {
    QStyleOptionTab_SetShape((QStyleOptionTab*)self, shape);
}

const char* q_styleoptiontab_text(void* self) {
    libqt_string text_str = QStyleOptionTab_Text((QStyleOptionTab*)self);
    char* text_ret = qstring_to_char(text_str);
    libqt_string_free(&text_str);
    return text_ret;
}

void q_styleoptiontab_set_text(void* self, const char* text) {
    QStyleOptionTab_SetText((QStyleOptionTab*)self, qstring(text));
}

QIcon* q_styleoptiontab_icon(void* self) {
    return QStyleOptionTab_Icon((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_icon(void* self, void* icon) {
    QStyleOptionTab_SetIcon((QStyleOptionTab*)self, (QIcon*)icon);
}

int32_t q_styleoptiontab_row(void* self) {
    return QStyleOptionTab_Row((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_row(void* self, int row) {
    QStyleOptionTab_SetRow((QStyleOptionTab*)self, row);
}

int32_t q_styleoptiontab_position(void* self) {
    return QStyleOptionTab_Position((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_position(void* self, int32_t position) {
    QStyleOptionTab_SetPosition((QStyleOptionTab*)self, position);
}

int32_t q_styleoptiontab_selected_position(void* self) {
    return QStyleOptionTab_SelectedPosition((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_selected_position(void* self, int32_t selectedPosition) {
    QStyleOptionTab_SetSelectedPosition((QStyleOptionTab*)self, selectedPosition);
}

int64_t q_styleoptiontab_corner_widgets(void* self) {
    return QStyleOptionTab_CornerWidgets((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_corner_widgets(void* self, int64_t cornerWidgets) {
    QStyleOptionTab_SetCornerWidgets((QStyleOptionTab*)self, cornerWidgets);
}

QSize* q_styleoptiontab_icon_size(void* self) {
    return QStyleOptionTab_IconSize((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_icon_size(void* self, void* iconSize) {
    QStyleOptionTab_SetIconSize((QStyleOptionTab*)self, (QSize*)iconSize);
}

bool q_styleoptiontab_document_mode(void* self) {
    return QStyleOptionTab_DocumentMode((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_document_mode(void* self, bool documentMode) {
    QStyleOptionTab_SetDocumentMode((QStyleOptionTab*)self, documentMode);
}

QSize* q_styleoptiontab_left_button_size(void* self) {
    return QStyleOptionTab_LeftButtonSize((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_left_button_size(void* self, void* leftButtonSize) {
    QStyleOptionTab_SetLeftButtonSize((QStyleOptionTab*)self, (QSize*)leftButtonSize);
}

QSize* q_styleoptiontab_right_button_size(void* self) {
    return QStyleOptionTab_RightButtonSize((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_right_button_size(void* self, void* rightButtonSize) {
    QStyleOptionTab_SetRightButtonSize((QStyleOptionTab*)self, (QSize*)rightButtonSize);
}

int64_t q_styleoptiontab_features(void* self) {
    return QStyleOptionTab_Features((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_features(void* self, int64_t features) {
    QStyleOptionTab_SetFeatures((QStyleOptionTab*)self, features);
}

int32_t q_styleoptiontab_tab_index(void* self) {
    return QStyleOptionTab_TabIndex((QStyleOptionTab*)self);
}

void q_styleoptiontab_set_tab_index(void* self, int tabIndex) {
    QStyleOptionTab_SetTabIndex((QStyleOptionTab*)self, tabIndex);
}

int32_t q_styleoptiontab_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptiontab_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptiontab_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptiontab_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptiontab_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptiontab_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptiontab_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptiontab_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptiontab_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptiontab_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptiontab_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptiontab_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptiontab_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptiontab_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptiontab_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptiontab_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptiontab_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontab_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontab_delete(void* self) {
    QStyleOptionTab_Delete((QStyleOptionTab*)(self));
}

QStyleOptionToolBar* q_styleoptiontoolbar_new() {
    return QStyleOptionToolBar_new();
}

QStyleOptionToolBar* q_styleoptiontoolbar_new2(void* other) {
    return QStyleOptionToolBar_new2((QStyleOptionToolBar*)other);
}

int32_t q_styleoptiontoolbar_position_of_line(void* self) {
    return QStyleOptionToolBar_PositionOfLine((QStyleOptionToolBar*)self);
}

void q_styleoptiontoolbar_set_position_of_line(void* self, int32_t positionOfLine) {
    QStyleOptionToolBar_SetPositionOfLine((QStyleOptionToolBar*)self, positionOfLine);
}

int32_t q_styleoptiontoolbar_position_within_line(void* self) {
    return QStyleOptionToolBar_PositionWithinLine((QStyleOptionToolBar*)self);
}

void q_styleoptiontoolbar_set_position_within_line(void* self, int32_t positionWithinLine) {
    QStyleOptionToolBar_SetPositionWithinLine((QStyleOptionToolBar*)self, positionWithinLine);
}

int32_t q_styleoptiontoolbar_tool_bar_area(void* self) {
    return QStyleOptionToolBar_ToolBarArea((QStyleOptionToolBar*)self);
}

void q_styleoptiontoolbar_set_tool_bar_area(void* self, int32_t toolBarArea) {
    QStyleOptionToolBar_SetToolBarArea((QStyleOptionToolBar*)self, toolBarArea);
}

int64_t q_styleoptiontoolbar_features(void* self) {
    return QStyleOptionToolBar_Features((QStyleOptionToolBar*)self);
}

void q_styleoptiontoolbar_set_features(void* self, int64_t features) {
    QStyleOptionToolBar_SetFeatures((QStyleOptionToolBar*)self, features);
}

int32_t q_styleoptiontoolbar_line_width(void* self) {
    return QStyleOptionToolBar_LineWidth((QStyleOptionToolBar*)self);
}

void q_styleoptiontoolbar_set_line_width(void* self, int lineWidth) {
    QStyleOptionToolBar_SetLineWidth((QStyleOptionToolBar*)self, lineWidth);
}

int32_t q_styleoptiontoolbar_mid_line_width(void* self) {
    return QStyleOptionToolBar_MidLineWidth((QStyleOptionToolBar*)self);
}

void q_styleoptiontoolbar_set_mid_line_width(void* self, int midLineWidth) {
    QStyleOptionToolBar_SetMidLineWidth((QStyleOptionToolBar*)self, midLineWidth);
}

int32_t q_styleoptiontoolbar_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptiontoolbar_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptiontoolbar_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptiontoolbar_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptiontoolbar_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptiontoolbar_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptiontoolbar_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptiontoolbar_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptiontoolbar_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptiontoolbar_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptiontoolbar_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptiontoolbar_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptiontoolbar_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptiontoolbar_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptiontoolbar_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptiontoolbar_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptiontoolbar_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontoolbar_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontoolbar_delete(void* self) {
    QStyleOptionToolBar_Delete((QStyleOptionToolBar*)(self));
}

QStyleOptionProgressBar* q_styleoptionprogressbar_new() {
    return QStyleOptionProgressBar_new();
}

QStyleOptionProgressBar* q_styleoptionprogressbar_new2(void* other) {
    return QStyleOptionProgressBar_new2((QStyleOptionProgressBar*)other);
}

int32_t q_styleoptionprogressbar_minimum(void* self) {
    return QStyleOptionProgressBar_Minimum((QStyleOptionProgressBar*)self);
}

void q_styleoptionprogressbar_set_minimum(void* self, int minimum) {
    QStyleOptionProgressBar_SetMinimum((QStyleOptionProgressBar*)self, minimum);
}

int32_t q_styleoptionprogressbar_maximum(void* self) {
    return QStyleOptionProgressBar_Maximum((QStyleOptionProgressBar*)self);
}

void q_styleoptionprogressbar_set_maximum(void* self, int maximum) {
    QStyleOptionProgressBar_SetMaximum((QStyleOptionProgressBar*)self, maximum);
}

int32_t q_styleoptionprogressbar_progress(void* self) {
    return QStyleOptionProgressBar_Progress((QStyleOptionProgressBar*)self);
}

void q_styleoptionprogressbar_set_progress(void* self, int progress) {
    QStyleOptionProgressBar_SetProgress((QStyleOptionProgressBar*)self, progress);
}

const char* q_styleoptionprogressbar_text(void* self) {
    libqt_string text_str = QStyleOptionProgressBar_Text((QStyleOptionProgressBar*)self);
    char* text_ret = qstring_to_char(text_str);
    libqt_string_free(&text_str);
    return text_ret;
}

void q_styleoptionprogressbar_set_text(void* self, const char* text) {
    QStyleOptionProgressBar_SetText((QStyleOptionProgressBar*)self, qstring(text));
}

int64_t q_styleoptionprogressbar_text_alignment(void* self) {
    return QStyleOptionProgressBar_TextAlignment((QStyleOptionProgressBar*)self);
}

void q_styleoptionprogressbar_set_text_alignment(void* self, int64_t textAlignment) {
    QStyleOptionProgressBar_SetTextAlignment((QStyleOptionProgressBar*)self, textAlignment);
}

bool q_styleoptionprogressbar_text_visible(void* self) {
    return QStyleOptionProgressBar_TextVisible((QStyleOptionProgressBar*)self);
}

void q_styleoptionprogressbar_set_text_visible(void* self, bool textVisible) {
    QStyleOptionProgressBar_SetTextVisible((QStyleOptionProgressBar*)self, textVisible);
}

bool q_styleoptionprogressbar_inverted_appearance(void* self) {
    return QStyleOptionProgressBar_InvertedAppearance((QStyleOptionProgressBar*)self);
}

void q_styleoptionprogressbar_set_inverted_appearance(void* self, bool invertedAppearance) {
    QStyleOptionProgressBar_SetInvertedAppearance((QStyleOptionProgressBar*)self, invertedAppearance);
}

bool q_styleoptionprogressbar_bottom_to_top(void* self) {
    return QStyleOptionProgressBar_BottomToTop((QStyleOptionProgressBar*)self);
}

void q_styleoptionprogressbar_set_bottom_to_top(void* self, bool bottomToTop) {
    QStyleOptionProgressBar_SetBottomToTop((QStyleOptionProgressBar*)self, bottomToTop);
}

int32_t q_styleoptionprogressbar_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionprogressbar_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionprogressbar_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionprogressbar_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionprogressbar_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionprogressbar_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionprogressbar_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionprogressbar_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionprogressbar_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionprogressbar_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionprogressbar_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionprogressbar_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionprogressbar_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionprogressbar_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionprogressbar_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionprogressbar_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionprogressbar_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionprogressbar_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionprogressbar_delete(void* self) {
    QStyleOptionProgressBar_Delete((QStyleOptionProgressBar*)(self));
}

QStyleOptionMenuItem* q_styleoptionmenuitem_new() {
    return QStyleOptionMenuItem_new();
}

QStyleOptionMenuItem* q_styleoptionmenuitem_new2(void* other) {
    return QStyleOptionMenuItem_new2((QStyleOptionMenuItem*)other);
}

int32_t q_styleoptionmenuitem_menu_item_type(void* self) {
    return QStyleOptionMenuItem_MenuItemType((QStyleOptionMenuItem*)self);
}

void q_styleoptionmenuitem_set_menu_item_type(void* self, int32_t menuItemType) {
    QStyleOptionMenuItem_SetMenuItemType((QStyleOptionMenuItem*)self, menuItemType);
}

int32_t q_styleoptionmenuitem_check_type(void* self) {
    return QStyleOptionMenuItem_CheckType((QStyleOptionMenuItem*)self);
}

void q_styleoptionmenuitem_set_check_type(void* self, int32_t checkType) {
    QStyleOptionMenuItem_SetCheckType((QStyleOptionMenuItem*)self, checkType);
}

bool q_styleoptionmenuitem_checked(void* self) {
    return QStyleOptionMenuItem_Checked((QStyleOptionMenuItem*)self);
}

void q_styleoptionmenuitem_set_checked(void* self, bool checked) {
    QStyleOptionMenuItem_SetChecked((QStyleOptionMenuItem*)self, checked);
}

bool q_styleoptionmenuitem_menu_has_checkable_items(void* self) {
    return QStyleOptionMenuItem_MenuHasCheckableItems((QStyleOptionMenuItem*)self);
}

void q_styleoptionmenuitem_set_menu_has_checkable_items(void* self, bool menuHasCheckableItems) {
    QStyleOptionMenuItem_SetMenuHasCheckableItems((QStyleOptionMenuItem*)self, menuHasCheckableItems);
}

QRect* q_styleoptionmenuitem_menu_rect(void* self) {
    return QStyleOptionMenuItem_MenuRect((QStyleOptionMenuItem*)self);
}

void q_styleoptionmenuitem_set_menu_rect(void* self, void* menuRect) {
    QStyleOptionMenuItem_SetMenuRect((QStyleOptionMenuItem*)self, (QRect*)menuRect);
}

const char* q_styleoptionmenuitem_text(void* self) {
    libqt_string text_str = QStyleOptionMenuItem_Text((QStyleOptionMenuItem*)self);
    char* text_ret = qstring_to_char(text_str);
    libqt_string_free(&text_str);
    return text_ret;
}

void q_styleoptionmenuitem_set_text(void* self, const char* text) {
    QStyleOptionMenuItem_SetText((QStyleOptionMenuItem*)self, qstring(text));
}

QIcon* q_styleoptionmenuitem_icon(void* self) {
    return QStyleOptionMenuItem_Icon((QStyleOptionMenuItem*)self);
}

void q_styleoptionmenuitem_set_icon(void* self, void* icon) {
    QStyleOptionMenuItem_SetIcon((QStyleOptionMenuItem*)self, (QIcon*)icon);
}

int32_t q_styleoptionmenuitem_max_icon_width(void* self) {
    return QStyleOptionMenuItem_MaxIconWidth((QStyleOptionMenuItem*)self);
}

void q_styleoptionmenuitem_set_max_icon_width(void* self, int maxIconWidth) {
    QStyleOptionMenuItem_SetMaxIconWidth((QStyleOptionMenuItem*)self, maxIconWidth);
}

int32_t q_styleoptionmenuitem_reserved_shortcut_width(void* self) {
    return QStyleOptionMenuItem_ReservedShortcutWidth((QStyleOptionMenuItem*)self);
}

void q_styleoptionmenuitem_set_reserved_shortcut_width(void* self, int reservedShortcutWidth) {
    QStyleOptionMenuItem_SetReservedShortcutWidth((QStyleOptionMenuItem*)self, reservedShortcutWidth);
}

QFont* q_styleoptionmenuitem_font(void* self) {
    return QStyleOptionMenuItem_Font((QStyleOptionMenuItem*)self);
}

void q_styleoptionmenuitem_set_font(void* self, void* font) {
    QStyleOptionMenuItem_SetFont((QStyleOptionMenuItem*)self, (QFont*)font);
}

int32_t q_styleoptionmenuitem_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionmenuitem_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionmenuitem_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionmenuitem_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionmenuitem_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionmenuitem_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionmenuitem_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionmenuitem_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionmenuitem_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionmenuitem_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionmenuitem_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionmenuitem_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionmenuitem_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionmenuitem_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionmenuitem_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionmenuitem_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionmenuitem_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionmenuitem_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionmenuitem_delete(void* self) {
    QStyleOptionMenuItem_Delete((QStyleOptionMenuItem*)(self));
}

QStyleOptionDockWidget* q_styleoptiondockwidget_new() {
    return QStyleOptionDockWidget_new();
}

QStyleOptionDockWidget* q_styleoptiondockwidget_new2(void* other) {
    return QStyleOptionDockWidget_new2((QStyleOptionDockWidget*)other);
}

const char* q_styleoptiondockwidget_title(void* self) {
    libqt_string title_str = QStyleOptionDockWidget_Title((QStyleOptionDockWidget*)self);
    char* title_ret = qstring_to_char(title_str);
    libqt_string_free(&title_str);
    return title_ret;
}

void q_styleoptiondockwidget_set_title(void* self, const char* title) {
    QStyleOptionDockWidget_SetTitle((QStyleOptionDockWidget*)self, qstring(title));
}

bool q_styleoptiondockwidget_closable(void* self) {
    return QStyleOptionDockWidget_Closable((QStyleOptionDockWidget*)self);
}

void q_styleoptiondockwidget_set_closable(void* self, bool closable) {
    QStyleOptionDockWidget_SetClosable((QStyleOptionDockWidget*)self, closable);
}

bool q_styleoptiondockwidget_movable(void* self) {
    return QStyleOptionDockWidget_Movable((QStyleOptionDockWidget*)self);
}

void q_styleoptiondockwidget_set_movable(void* self, bool movable) {
    QStyleOptionDockWidget_SetMovable((QStyleOptionDockWidget*)self, movable);
}

bool q_styleoptiondockwidget_floatable(void* self) {
    return QStyleOptionDockWidget_Floatable((QStyleOptionDockWidget*)self);
}

void q_styleoptiondockwidget_set_floatable(void* self, bool floatable) {
    QStyleOptionDockWidget_SetFloatable((QStyleOptionDockWidget*)self, floatable);
}

bool q_styleoptiondockwidget_vertical_title_bar(void* self) {
    return QStyleOptionDockWidget_VerticalTitleBar((QStyleOptionDockWidget*)self);
}

void q_styleoptiondockwidget_set_vertical_title_bar(void* self, bool verticalTitleBar) {
    QStyleOptionDockWidget_SetVerticalTitleBar((QStyleOptionDockWidget*)self, verticalTitleBar);
}

int32_t q_styleoptiondockwidget_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptiondockwidget_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptiondockwidget_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptiondockwidget_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptiondockwidget_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptiondockwidget_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptiondockwidget_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptiondockwidget_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptiondockwidget_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptiondockwidget_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptiondockwidget_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptiondockwidget_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptiondockwidget_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptiondockwidget_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptiondockwidget_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptiondockwidget_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptiondockwidget_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiondockwidget_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiondockwidget_delete(void* self) {
    QStyleOptionDockWidget_Delete((QStyleOptionDockWidget*)(self));
}

QStyleOptionViewItem* q_styleoptionviewitem_new() {
    return QStyleOptionViewItem_new();
}

QStyleOptionViewItem* q_styleoptionviewitem_new2(void* other) {
    return QStyleOptionViewItem_new2((QStyleOptionViewItem*)other);
}

int64_t q_styleoptionviewitem_display_alignment(void* self) {
    return QStyleOptionViewItem_DisplayAlignment((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_display_alignment(void* self, int64_t displayAlignment) {
    QStyleOptionViewItem_SetDisplayAlignment((QStyleOptionViewItem*)self, displayAlignment);
}

int64_t q_styleoptionviewitem_decoration_alignment(void* self) {
    return QStyleOptionViewItem_DecorationAlignment((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_decoration_alignment(void* self, int64_t decorationAlignment) {
    QStyleOptionViewItem_SetDecorationAlignment((QStyleOptionViewItem*)self, decorationAlignment);
}

int32_t q_styleoptionviewitem_text_elide_mode(void* self) {
    return QStyleOptionViewItem_TextElideMode((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_text_elide_mode(void* self, int32_t textElideMode) {
    QStyleOptionViewItem_SetTextElideMode((QStyleOptionViewItem*)self, textElideMode);
}

int32_t q_styleoptionviewitem_decoration_position(void* self) {
    return QStyleOptionViewItem_DecorationPosition((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_decoration_position(void* self, int32_t decorationPosition) {
    QStyleOptionViewItem_SetDecorationPosition((QStyleOptionViewItem*)self, decorationPosition);
}

QSize* q_styleoptionviewitem_decoration_size(void* self) {
    return QStyleOptionViewItem_DecorationSize((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_decoration_size(void* self, void* decorationSize) {
    QStyleOptionViewItem_SetDecorationSize((QStyleOptionViewItem*)self, (QSize*)decorationSize);
}

QFont* q_styleoptionviewitem_font(void* self) {
    return QStyleOptionViewItem_Font((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_font(void* self, void* font) {
    QStyleOptionViewItem_SetFont((QStyleOptionViewItem*)self, (QFont*)font);
}

bool q_styleoptionviewitem_show_decoration_selected(void* self) {
    return QStyleOptionViewItem_ShowDecorationSelected((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_show_decoration_selected(void* self, bool showDecorationSelected) {
    QStyleOptionViewItem_SetShowDecorationSelected((QStyleOptionViewItem*)self, showDecorationSelected);
}

int64_t q_styleoptionviewitem_features(void* self) {
    return QStyleOptionViewItem_Features((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_features(void* self, int64_t features) {
    QStyleOptionViewItem_SetFeatures((QStyleOptionViewItem*)self, features);
}

QLocale* q_styleoptionviewitem_locale(void* self) {
    return QStyleOptionViewItem_Locale((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_locale(void* self, void* locale) {
    QStyleOptionViewItem_SetLocale((QStyleOptionViewItem*)self, (QLocale*)locale);
}

const QWidget* q_styleoptionviewitem_widget(void* self) {
    return QStyleOptionViewItem_Widget((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_widget(void* self, void* widget) {
    QStyleOptionViewItem_SetWidget((QStyleOptionViewItem*)self, (QWidget*)widget);
}

QModelIndex* q_styleoptionviewitem_index(void* self) {
    return QStyleOptionViewItem_Index((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_index(void* self, void* index) {
    QStyleOptionViewItem_SetIndex((QStyleOptionViewItem*)self, (QModelIndex*)index);
}

int32_t q_styleoptionviewitem_check_state(void* self) {
    return QStyleOptionViewItem_CheckState((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_check_state(void* self, int32_t checkState) {
    QStyleOptionViewItem_SetCheckState((QStyleOptionViewItem*)self, checkState);
}

QIcon* q_styleoptionviewitem_icon(void* self) {
    return QStyleOptionViewItem_Icon((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_icon(void* self, void* icon) {
    QStyleOptionViewItem_SetIcon((QStyleOptionViewItem*)self, (QIcon*)icon);
}

const char* q_styleoptionviewitem_text(void* self) {
    libqt_string text_str = QStyleOptionViewItem_Text((QStyleOptionViewItem*)self);
    char* text_ret = qstring_to_char(text_str);
    libqt_string_free(&text_str);
    return text_ret;
}

void q_styleoptionviewitem_set_text(void* self, const char* text) {
    QStyleOptionViewItem_SetText((QStyleOptionViewItem*)self, qstring(text));
}

int32_t q_styleoptionviewitem_view_item_position(void* self) {
    return QStyleOptionViewItem_ViewItemPosition((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_view_item_position(void* self, int32_t viewItemPosition) {
    QStyleOptionViewItem_SetViewItemPosition((QStyleOptionViewItem*)self, viewItemPosition);
}

QBrush* q_styleoptionviewitem_background_brush(void* self) {
    return QStyleOptionViewItem_BackgroundBrush((QStyleOptionViewItem*)self);
}

void q_styleoptionviewitem_set_background_brush(void* self, void* backgroundBrush) {
    QStyleOptionViewItem_SetBackgroundBrush((QStyleOptionViewItem*)self, (QBrush*)backgroundBrush);
}

int32_t q_styleoptionviewitem_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionviewitem_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionviewitem_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionviewitem_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionviewitem_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionviewitem_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionviewitem_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionviewitem_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionviewitem_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionviewitem_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionviewitem_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionviewitem_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionviewitem_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionviewitem_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionviewitem_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionviewitem_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionviewitem_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionviewitem_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionviewitem_delete(void* self) {
    QStyleOptionViewItem_Delete((QStyleOptionViewItem*)(self));
}

QStyleOptionToolBox* q_styleoptiontoolbox_new() {
    return QStyleOptionToolBox_new();
}

QStyleOptionToolBox* q_styleoptiontoolbox_new2(void* other) {
    return QStyleOptionToolBox_new2((QStyleOptionToolBox*)other);
}

const char* q_styleoptiontoolbox_text(void* self) {
    libqt_string text_str = QStyleOptionToolBox_Text((QStyleOptionToolBox*)self);
    char* text_ret = qstring_to_char(text_str);
    libqt_string_free(&text_str);
    return text_ret;
}

void q_styleoptiontoolbox_set_text(void* self, const char* text) {
    QStyleOptionToolBox_SetText((QStyleOptionToolBox*)self, qstring(text));
}

QIcon* q_styleoptiontoolbox_icon(void* self) {
    return QStyleOptionToolBox_Icon((QStyleOptionToolBox*)self);
}

void q_styleoptiontoolbox_set_icon(void* self, void* icon) {
    QStyleOptionToolBox_SetIcon((QStyleOptionToolBox*)self, (QIcon*)icon);
}

int32_t q_styleoptiontoolbox_position(void* self) {
    return QStyleOptionToolBox_Position((QStyleOptionToolBox*)self);
}

void q_styleoptiontoolbox_set_position(void* self, int32_t position) {
    QStyleOptionToolBox_SetPosition((QStyleOptionToolBox*)self, position);
}

int32_t q_styleoptiontoolbox_selected_position(void* self) {
    return QStyleOptionToolBox_SelectedPosition((QStyleOptionToolBox*)self);
}

void q_styleoptiontoolbox_set_selected_position(void* self, int32_t selectedPosition) {
    QStyleOptionToolBox_SetSelectedPosition((QStyleOptionToolBox*)self, selectedPosition);
}

int32_t q_styleoptiontoolbox_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptiontoolbox_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptiontoolbox_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptiontoolbox_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptiontoolbox_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptiontoolbox_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptiontoolbox_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptiontoolbox_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptiontoolbox_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptiontoolbox_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptiontoolbox_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptiontoolbox_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptiontoolbox_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptiontoolbox_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptiontoolbox_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptiontoolbox_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptiontoolbox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontoolbox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontoolbox_delete(void* self) {
    QStyleOptionToolBox_Delete((QStyleOptionToolBox*)(self));
}

QStyleOptionRubberBand* q_styleoptionrubberband_new() {
    return QStyleOptionRubberBand_new();
}

QStyleOptionRubberBand* q_styleoptionrubberband_new2(void* other) {
    return QStyleOptionRubberBand_new2((QStyleOptionRubberBand*)other);
}

int32_t q_styleoptionrubberband_shape(void* self) {
    return QStyleOptionRubberBand_Shape((QStyleOptionRubberBand*)self);
}

void q_styleoptionrubberband_set_shape(void* self, int32_t shape) {
    QStyleOptionRubberBand_SetShape((QStyleOptionRubberBand*)self, shape);
}

bool q_styleoptionrubberband_opaque(void* self) {
    return QStyleOptionRubberBand_Opaque((QStyleOptionRubberBand*)self);
}

void q_styleoptionrubberband_set_opaque(void* self, bool opaque) {
    QStyleOptionRubberBand_SetOpaque((QStyleOptionRubberBand*)self, opaque);
}

int32_t q_styleoptionrubberband_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionrubberband_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionrubberband_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionrubberband_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionrubberband_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionrubberband_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionrubberband_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionrubberband_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionrubberband_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionrubberband_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionrubberband_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionrubberband_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionrubberband_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionrubberband_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionrubberband_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionrubberband_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionrubberband_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionrubberband_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionrubberband_delete(void* self) {
    QStyleOptionRubberBand_Delete((QStyleOptionRubberBand*)(self));
}

QStyleOptionComplex* q_styleoptioncomplex_new() {
    return QStyleOptionComplex_new();
}

QStyleOptionComplex* q_styleoptioncomplex_new2(void* other) {
    return QStyleOptionComplex_new2((QStyleOptionComplex*)other);
}

QStyleOptionComplex* q_styleoptioncomplex_new3(int version) {
    return QStyleOptionComplex_new3(version);
}

QStyleOptionComplex* q_styleoptioncomplex_new4(int version, int typeVal) {
    return QStyleOptionComplex_new4(version, typeVal);
}

int64_t q_styleoptioncomplex_sub_controls(void* self) {
    return QStyleOptionComplex_SubControls((QStyleOptionComplex*)self);
}

void q_styleoptioncomplex_set_sub_controls(void* self, int64_t subControls) {
    QStyleOptionComplex_SetSubControls((QStyleOptionComplex*)self, subControls);
}

int64_t q_styleoptioncomplex_active_sub_controls(void* self) {
    return QStyleOptionComplex_ActiveSubControls((QStyleOptionComplex*)self);
}

void q_styleoptioncomplex_set_active_sub_controls(void* self, int64_t activeSubControls) {
    QStyleOptionComplex_SetActiveSubControls((QStyleOptionComplex*)self, activeSubControls);
}

int32_t q_styleoptioncomplex_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptioncomplex_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptioncomplex_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptioncomplex_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptioncomplex_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptioncomplex_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptioncomplex_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptioncomplex_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptioncomplex_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptioncomplex_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptioncomplex_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptioncomplex_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptioncomplex_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptioncomplex_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptioncomplex_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptioncomplex_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptioncomplex_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptioncomplex_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptioncomplex_delete(void* self) {
    QStyleOptionComplex_Delete((QStyleOptionComplex*)(self));
}

QStyleOptionSlider* q_styleoptionslider_new() {
    return QStyleOptionSlider_new();
}

QStyleOptionSlider* q_styleoptionslider_new2(void* other) {
    return QStyleOptionSlider_new2((QStyleOptionSlider*)other);
}

int32_t q_styleoptionslider_orientation(void* self) {
    return QStyleOptionSlider_Orientation((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_orientation(void* self, int32_t orientation) {
    QStyleOptionSlider_SetOrientation((QStyleOptionSlider*)self, orientation);
}

int32_t q_styleoptionslider_minimum(void* self) {
    return QStyleOptionSlider_Minimum((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_minimum(void* self, int minimum) {
    QStyleOptionSlider_SetMinimum((QStyleOptionSlider*)self, minimum);
}

int32_t q_styleoptionslider_maximum(void* self) {
    return QStyleOptionSlider_Maximum((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_maximum(void* self, int maximum) {
    QStyleOptionSlider_SetMaximum((QStyleOptionSlider*)self, maximum);
}

int32_t q_styleoptionslider_tick_position(void* self) {
    return QStyleOptionSlider_TickPosition((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_tick_position(void* self, int32_t tickPosition) {
    QStyleOptionSlider_SetTickPosition((QStyleOptionSlider*)self, tickPosition);
}

int32_t q_styleoptionslider_tick_interval(void* self) {
    return QStyleOptionSlider_TickInterval((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_tick_interval(void* self, int tickInterval) {
    QStyleOptionSlider_SetTickInterval((QStyleOptionSlider*)self, tickInterval);
}

bool q_styleoptionslider_upside_down(void* self) {
    return QStyleOptionSlider_UpsideDown((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_upside_down(void* self, bool upsideDown) {
    QStyleOptionSlider_SetUpsideDown((QStyleOptionSlider*)self, upsideDown);
}

int32_t q_styleoptionslider_slider_position(void* self) {
    return QStyleOptionSlider_SliderPosition((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_slider_position(void* self, int sliderPosition) {
    QStyleOptionSlider_SetSliderPosition((QStyleOptionSlider*)self, sliderPosition);
}

int32_t q_styleoptionslider_slider_value(void* self) {
    return QStyleOptionSlider_SliderValue((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_slider_value(void* self, int sliderValue) {
    QStyleOptionSlider_SetSliderValue((QStyleOptionSlider*)self, sliderValue);
}

int32_t q_styleoptionslider_single_step(void* self) {
    return QStyleOptionSlider_SingleStep((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_single_step(void* self, int singleStep) {
    QStyleOptionSlider_SetSingleStep((QStyleOptionSlider*)self, singleStep);
}

int32_t q_styleoptionslider_page_step(void* self) {
    return QStyleOptionSlider_PageStep((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_page_step(void* self, int pageStep) {
    QStyleOptionSlider_SetPageStep((QStyleOptionSlider*)self, pageStep);
}

double q_styleoptionslider_notch_target(void* self) {
    return QStyleOptionSlider_NotchTarget((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_notch_target(void* self, double notchTarget) {
    QStyleOptionSlider_SetNotchTarget((QStyleOptionSlider*)self, notchTarget);
}

bool q_styleoptionslider_dial_wrapping(void* self) {
    return QStyleOptionSlider_DialWrapping((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_dial_wrapping(void* self, bool dialWrapping) {
    QStyleOptionSlider_SetDialWrapping((QStyleOptionSlider*)self, dialWrapping);
}

int64_t q_styleoptionslider_keyboard_modifiers(void* self) {
    return QStyleOptionSlider_KeyboardModifiers((QStyleOptionSlider*)self);
}

void q_styleoptionslider_set_keyboard_modifiers(void* self, int64_t keyboardModifiers) {
    QStyleOptionSlider_SetKeyboardModifiers((QStyleOptionSlider*)self, keyboardModifiers);
}

int64_t q_styleoptionslider_sub_controls(void* self) {
    return QStyleOptionComplex_SubControls((QStyleOptionComplex*)self);
}

void q_styleoptionslider_set_sub_controls(void* self, int64_t subControls) {
    QStyleOptionComplex_SetSubControls((QStyleOptionComplex*)self, subControls);
}

int64_t q_styleoptionslider_active_sub_controls(void* self) {
    return QStyleOptionComplex_ActiveSubControls((QStyleOptionComplex*)self);
}

void q_styleoptionslider_set_active_sub_controls(void* self, int64_t activeSubControls) {
    QStyleOptionComplex_SetActiveSubControls((QStyleOptionComplex*)self, activeSubControls);
}

int32_t q_styleoptionslider_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionslider_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionslider_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionslider_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionslider_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionslider_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionslider_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionslider_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionslider_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionslider_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionslider_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionslider_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionslider_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionslider_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionslider_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionslider_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionslider_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionslider_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionslider_delete(void* self) {
    QStyleOptionSlider_Delete((QStyleOptionSlider*)(self));
}

QStyleOptionSpinBox* q_styleoptionspinbox_new() {
    return QStyleOptionSpinBox_new();
}

QStyleOptionSpinBox* q_styleoptionspinbox_new2(void* other) {
    return QStyleOptionSpinBox_new2((QStyleOptionSpinBox*)other);
}

int32_t q_styleoptionspinbox_button_symbols(void* self) {
    return QStyleOptionSpinBox_ButtonSymbols((QStyleOptionSpinBox*)self);
}

void q_styleoptionspinbox_set_button_symbols(void* self, int32_t buttonSymbols) {
    QStyleOptionSpinBox_SetButtonSymbols((QStyleOptionSpinBox*)self, buttonSymbols);
}

int64_t q_styleoptionspinbox_step_enabled(void* self) {
    return QStyleOptionSpinBox_StepEnabled((QStyleOptionSpinBox*)self);
}

void q_styleoptionspinbox_set_step_enabled(void* self, int64_t stepEnabled) {
    QStyleOptionSpinBox_SetStepEnabled((QStyleOptionSpinBox*)self, stepEnabled);
}

bool q_styleoptionspinbox_frame(void* self) {
    return QStyleOptionSpinBox_Frame((QStyleOptionSpinBox*)self);
}

void q_styleoptionspinbox_set_frame(void* self, bool frame) {
    QStyleOptionSpinBox_SetFrame((QStyleOptionSpinBox*)self, frame);
}

int64_t q_styleoptionspinbox_sub_controls(void* self) {
    return QStyleOptionComplex_SubControls((QStyleOptionComplex*)self);
}

void q_styleoptionspinbox_set_sub_controls(void* self, int64_t subControls) {
    QStyleOptionComplex_SetSubControls((QStyleOptionComplex*)self, subControls);
}

int64_t q_styleoptionspinbox_active_sub_controls(void* self) {
    return QStyleOptionComplex_ActiveSubControls((QStyleOptionComplex*)self);
}

void q_styleoptionspinbox_set_active_sub_controls(void* self, int64_t activeSubControls) {
    QStyleOptionComplex_SetActiveSubControls((QStyleOptionComplex*)self, activeSubControls);
}

int32_t q_styleoptionspinbox_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionspinbox_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionspinbox_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionspinbox_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionspinbox_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionspinbox_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionspinbox_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionspinbox_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionspinbox_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionspinbox_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionspinbox_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionspinbox_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionspinbox_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionspinbox_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionspinbox_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionspinbox_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionspinbox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionspinbox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionspinbox_delete(void* self) {
    QStyleOptionSpinBox_Delete((QStyleOptionSpinBox*)(self));
}

QStyleOptionToolButton* q_styleoptiontoolbutton_new() {
    return QStyleOptionToolButton_new();
}

QStyleOptionToolButton* q_styleoptiontoolbutton_new2(void* other) {
    return QStyleOptionToolButton_new2((QStyleOptionToolButton*)other);
}

int64_t q_styleoptiontoolbutton_features(void* self) {
    return QStyleOptionToolButton_Features((QStyleOptionToolButton*)self);
}

void q_styleoptiontoolbutton_set_features(void* self, int64_t features) {
    QStyleOptionToolButton_SetFeatures((QStyleOptionToolButton*)self, features);
}

QIcon* q_styleoptiontoolbutton_icon(void* self) {
    return QStyleOptionToolButton_Icon((QStyleOptionToolButton*)self);
}

void q_styleoptiontoolbutton_set_icon(void* self, void* icon) {
    QStyleOptionToolButton_SetIcon((QStyleOptionToolButton*)self, (QIcon*)icon);
}

QSize* q_styleoptiontoolbutton_icon_size(void* self) {
    return QStyleOptionToolButton_IconSize((QStyleOptionToolButton*)self);
}

void q_styleoptiontoolbutton_set_icon_size(void* self, void* iconSize) {
    QStyleOptionToolButton_SetIconSize((QStyleOptionToolButton*)self, (QSize*)iconSize);
}

const char* q_styleoptiontoolbutton_text(void* self) {
    libqt_string text_str = QStyleOptionToolButton_Text((QStyleOptionToolButton*)self);
    char* text_ret = qstring_to_char(text_str);
    libqt_string_free(&text_str);
    return text_ret;
}

void q_styleoptiontoolbutton_set_text(void* self, const char* text) {
    QStyleOptionToolButton_SetText((QStyleOptionToolButton*)self, qstring(text));
}

int32_t q_styleoptiontoolbutton_arrow_type(void* self) {
    return QStyleOptionToolButton_ArrowType((QStyleOptionToolButton*)self);
}

void q_styleoptiontoolbutton_set_arrow_type(void* self, int32_t arrowType) {
    QStyleOptionToolButton_SetArrowType((QStyleOptionToolButton*)self, arrowType);
}

int32_t q_styleoptiontoolbutton_tool_button_style(void* self) {
    return QStyleOptionToolButton_ToolButtonStyle((QStyleOptionToolButton*)self);
}

void q_styleoptiontoolbutton_set_tool_button_style(void* self, int32_t toolButtonStyle) {
    QStyleOptionToolButton_SetToolButtonStyle((QStyleOptionToolButton*)self, toolButtonStyle);
}

QPoint* q_styleoptiontoolbutton_pos(void* self) {
    return QStyleOptionToolButton_Pos((QStyleOptionToolButton*)self);
}

void q_styleoptiontoolbutton_set_pos(void* self, void* pos) {
    QStyleOptionToolButton_SetPos((QStyleOptionToolButton*)self, (QPoint*)pos);
}

QFont* q_styleoptiontoolbutton_font(void* self) {
    return QStyleOptionToolButton_Font((QStyleOptionToolButton*)self);
}

void q_styleoptiontoolbutton_set_font(void* self, void* font) {
    QStyleOptionToolButton_SetFont((QStyleOptionToolButton*)self, (QFont*)font);
}

int64_t q_styleoptiontoolbutton_sub_controls(void* self) {
    return QStyleOptionComplex_SubControls((QStyleOptionComplex*)self);
}

void q_styleoptiontoolbutton_set_sub_controls(void* self, int64_t subControls) {
    QStyleOptionComplex_SetSubControls((QStyleOptionComplex*)self, subControls);
}

int64_t q_styleoptiontoolbutton_active_sub_controls(void* self) {
    return QStyleOptionComplex_ActiveSubControls((QStyleOptionComplex*)self);
}

void q_styleoptiontoolbutton_set_active_sub_controls(void* self, int64_t activeSubControls) {
    QStyleOptionComplex_SetActiveSubControls((QStyleOptionComplex*)self, activeSubControls);
}

int32_t q_styleoptiontoolbutton_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptiontoolbutton_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptiontoolbutton_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptiontoolbutton_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptiontoolbutton_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptiontoolbutton_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptiontoolbutton_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptiontoolbutton_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptiontoolbutton_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptiontoolbutton_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptiontoolbutton_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptiontoolbutton_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptiontoolbutton_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptiontoolbutton_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptiontoolbutton_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptiontoolbutton_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptiontoolbutton_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontoolbutton_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontoolbutton_delete(void* self) {
    QStyleOptionToolButton_Delete((QStyleOptionToolButton*)(self));
}

QStyleOptionComboBox* q_styleoptioncombobox_new() {
    return QStyleOptionComboBox_new();
}

QStyleOptionComboBox* q_styleoptioncombobox_new2(void* other) {
    return QStyleOptionComboBox_new2((QStyleOptionComboBox*)other);
}

bool q_styleoptioncombobox_editable(void* self) {
    return QStyleOptionComboBox_Editable((QStyleOptionComboBox*)self);
}

void q_styleoptioncombobox_set_editable(void* self, bool editable) {
    QStyleOptionComboBox_SetEditable((QStyleOptionComboBox*)self, editable);
}

QRect* q_styleoptioncombobox_popup_rect(void* self) {
    return QStyleOptionComboBox_PopupRect((QStyleOptionComboBox*)self);
}

void q_styleoptioncombobox_set_popup_rect(void* self, void* popupRect) {
    QStyleOptionComboBox_SetPopupRect((QStyleOptionComboBox*)self, (QRect*)popupRect);
}

bool q_styleoptioncombobox_frame(void* self) {
    return QStyleOptionComboBox_Frame((QStyleOptionComboBox*)self);
}

void q_styleoptioncombobox_set_frame(void* self, bool frame) {
    QStyleOptionComboBox_SetFrame((QStyleOptionComboBox*)self, frame);
}

const char* q_styleoptioncombobox_current_text(void* self) {
    libqt_string currentText_str = QStyleOptionComboBox_CurrentText((QStyleOptionComboBox*)self);
    char* currentText_ret = qstring_to_char(currentText_str);
    libqt_string_free(&currentText_str);
    return currentText_ret;
}

void q_styleoptioncombobox_set_current_text(void* self, const char* currentText) {
    QStyleOptionComboBox_SetCurrentText((QStyleOptionComboBox*)self, qstring(currentText));
}

QIcon* q_styleoptioncombobox_current_icon(void* self) {
    return QStyleOptionComboBox_CurrentIcon((QStyleOptionComboBox*)self);
}

void q_styleoptioncombobox_set_current_icon(void* self, void* currentIcon) {
    QStyleOptionComboBox_SetCurrentIcon((QStyleOptionComboBox*)self, (QIcon*)currentIcon);
}

QSize* q_styleoptioncombobox_icon_size(void* self) {
    return QStyleOptionComboBox_IconSize((QStyleOptionComboBox*)self);
}

void q_styleoptioncombobox_set_icon_size(void* self, void* iconSize) {
    QStyleOptionComboBox_SetIconSize((QStyleOptionComboBox*)self, (QSize*)iconSize);
}

int64_t q_styleoptioncombobox_text_alignment(void* self) {
    return QStyleOptionComboBox_TextAlignment((QStyleOptionComboBox*)self);
}

void q_styleoptioncombobox_set_text_alignment(void* self, int64_t textAlignment) {
    QStyleOptionComboBox_SetTextAlignment((QStyleOptionComboBox*)self, textAlignment);
}

int64_t q_styleoptioncombobox_sub_controls(void* self) {
    return QStyleOptionComplex_SubControls((QStyleOptionComplex*)self);
}

void q_styleoptioncombobox_set_sub_controls(void* self, int64_t subControls) {
    QStyleOptionComplex_SetSubControls((QStyleOptionComplex*)self, subControls);
}

int64_t q_styleoptioncombobox_active_sub_controls(void* self) {
    return QStyleOptionComplex_ActiveSubControls((QStyleOptionComplex*)self);
}

void q_styleoptioncombobox_set_active_sub_controls(void* self, int64_t activeSubControls) {
    QStyleOptionComplex_SetActiveSubControls((QStyleOptionComplex*)self, activeSubControls);
}

int32_t q_styleoptioncombobox_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptioncombobox_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptioncombobox_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptioncombobox_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptioncombobox_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptioncombobox_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptioncombobox_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptioncombobox_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptioncombobox_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptioncombobox_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptioncombobox_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptioncombobox_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptioncombobox_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptioncombobox_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptioncombobox_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptioncombobox_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptioncombobox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptioncombobox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptioncombobox_delete(void* self) {
    QStyleOptionComboBox_Delete((QStyleOptionComboBox*)(self));
}

QStyleOptionTitleBar* q_styleoptiontitlebar_new() {
    return QStyleOptionTitleBar_new();
}

QStyleOptionTitleBar* q_styleoptiontitlebar_new2(void* other) {
    return QStyleOptionTitleBar_new2((QStyleOptionTitleBar*)other);
}

const char* q_styleoptiontitlebar_text(void* self) {
    libqt_string text_str = QStyleOptionTitleBar_Text((QStyleOptionTitleBar*)self);
    char* text_ret = qstring_to_char(text_str);
    libqt_string_free(&text_str);
    return text_ret;
}

void q_styleoptiontitlebar_set_text(void* self, const char* text) {
    QStyleOptionTitleBar_SetText((QStyleOptionTitleBar*)self, qstring(text));
}

QIcon* q_styleoptiontitlebar_icon(void* self) {
    return QStyleOptionTitleBar_Icon((QStyleOptionTitleBar*)self);
}

void q_styleoptiontitlebar_set_icon(void* self, void* icon) {
    QStyleOptionTitleBar_SetIcon((QStyleOptionTitleBar*)self, (QIcon*)icon);
}

int32_t q_styleoptiontitlebar_title_bar_state(void* self) {
    return QStyleOptionTitleBar_TitleBarState((QStyleOptionTitleBar*)self);
}

void q_styleoptiontitlebar_set_title_bar_state(void* self, int titleBarState) {
    QStyleOptionTitleBar_SetTitleBarState((QStyleOptionTitleBar*)self, titleBarState);
}

int64_t q_styleoptiontitlebar_title_bar_flags(void* self) {
    return QStyleOptionTitleBar_TitleBarFlags((QStyleOptionTitleBar*)self);
}

void q_styleoptiontitlebar_set_title_bar_flags(void* self, int64_t titleBarFlags) {
    QStyleOptionTitleBar_SetTitleBarFlags((QStyleOptionTitleBar*)self, titleBarFlags);
}

int64_t q_styleoptiontitlebar_sub_controls(void* self) {
    return QStyleOptionComplex_SubControls((QStyleOptionComplex*)self);
}

void q_styleoptiontitlebar_set_sub_controls(void* self, int64_t subControls) {
    QStyleOptionComplex_SetSubControls((QStyleOptionComplex*)self, subControls);
}

int64_t q_styleoptiontitlebar_active_sub_controls(void* self) {
    return QStyleOptionComplex_ActiveSubControls((QStyleOptionComplex*)self);
}

void q_styleoptiontitlebar_set_active_sub_controls(void* self, int64_t activeSubControls) {
    QStyleOptionComplex_SetActiveSubControls((QStyleOptionComplex*)self, activeSubControls);
}

int32_t q_styleoptiontitlebar_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptiontitlebar_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptiontitlebar_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptiontitlebar_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptiontitlebar_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptiontitlebar_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptiontitlebar_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptiontitlebar_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptiontitlebar_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptiontitlebar_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptiontitlebar_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptiontitlebar_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptiontitlebar_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptiontitlebar_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptiontitlebar_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptiontitlebar_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptiontitlebar_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontitlebar_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontitlebar_delete(void* self) {
    QStyleOptionTitleBar_Delete((QStyleOptionTitleBar*)(self));
}

QStyleOptionGroupBox* q_styleoptiongroupbox_new() {
    return QStyleOptionGroupBox_new();
}

QStyleOptionGroupBox* q_styleoptiongroupbox_new2(void* other) {
    return QStyleOptionGroupBox_new2((QStyleOptionGroupBox*)other);
}

int64_t q_styleoptiongroupbox_features(void* self) {
    return QStyleOptionGroupBox_Features((QStyleOptionGroupBox*)self);
}

void q_styleoptiongroupbox_set_features(void* self, int64_t features) {
    QStyleOptionGroupBox_SetFeatures((QStyleOptionGroupBox*)self, features);
}

const char* q_styleoptiongroupbox_text(void* self) {
    libqt_string text_str = QStyleOptionGroupBox_Text((QStyleOptionGroupBox*)self);
    char* text_ret = qstring_to_char(text_str);
    libqt_string_free(&text_str);
    return text_ret;
}

void q_styleoptiongroupbox_set_text(void* self, const char* text) {
    QStyleOptionGroupBox_SetText((QStyleOptionGroupBox*)self, qstring(text));
}

int64_t q_styleoptiongroupbox_text_alignment(void* self) {
    return QStyleOptionGroupBox_TextAlignment((QStyleOptionGroupBox*)self);
}

void q_styleoptiongroupbox_set_text_alignment(void* self, int64_t textAlignment) {
    QStyleOptionGroupBox_SetTextAlignment((QStyleOptionGroupBox*)self, textAlignment);
}

QColor* q_styleoptiongroupbox_text_color(void* self) {
    return QStyleOptionGroupBox_TextColor((QStyleOptionGroupBox*)self);
}

void q_styleoptiongroupbox_set_text_color(void* self, void* textColor) {
    QStyleOptionGroupBox_SetTextColor((QStyleOptionGroupBox*)self, (QColor*)textColor);
}

int32_t q_styleoptiongroupbox_line_width(void* self) {
    return QStyleOptionGroupBox_LineWidth((QStyleOptionGroupBox*)self);
}

void q_styleoptiongroupbox_set_line_width(void* self, int lineWidth) {
    QStyleOptionGroupBox_SetLineWidth((QStyleOptionGroupBox*)self, lineWidth);
}

int32_t q_styleoptiongroupbox_mid_line_width(void* self) {
    return QStyleOptionGroupBox_MidLineWidth((QStyleOptionGroupBox*)self);
}

void q_styleoptiongroupbox_set_mid_line_width(void* self, int midLineWidth) {
    QStyleOptionGroupBox_SetMidLineWidth((QStyleOptionGroupBox*)self, midLineWidth);
}

int64_t q_styleoptiongroupbox_sub_controls(void* self) {
    return QStyleOptionComplex_SubControls((QStyleOptionComplex*)self);
}

void q_styleoptiongroupbox_set_sub_controls(void* self, int64_t subControls) {
    QStyleOptionComplex_SetSubControls((QStyleOptionComplex*)self, subControls);
}

int64_t q_styleoptiongroupbox_active_sub_controls(void* self) {
    return QStyleOptionComplex_ActiveSubControls((QStyleOptionComplex*)self);
}

void q_styleoptiongroupbox_set_active_sub_controls(void* self, int64_t activeSubControls) {
    QStyleOptionComplex_SetActiveSubControls((QStyleOptionComplex*)self, activeSubControls);
}

int32_t q_styleoptiongroupbox_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptiongroupbox_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptiongroupbox_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptiongroupbox_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptiongroupbox_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptiongroupbox_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptiongroupbox_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptiongroupbox_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptiongroupbox_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptiongroupbox_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptiongroupbox_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptiongroupbox_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptiongroupbox_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptiongroupbox_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptiongroupbox_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptiongroupbox_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptiongroupbox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiongroupbox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiongroupbox_delete(void* self) {
    QStyleOptionGroupBox_Delete((QStyleOptionGroupBox*)(self));
}

QStyleOptionSizeGrip* q_styleoptionsizegrip_new() {
    return QStyleOptionSizeGrip_new();
}

QStyleOptionSizeGrip* q_styleoptionsizegrip_new2(void* other) {
    return QStyleOptionSizeGrip_new2((QStyleOptionSizeGrip*)other);
}

int32_t q_styleoptionsizegrip_corner(void* self) {
    return QStyleOptionSizeGrip_Corner((QStyleOptionSizeGrip*)self);
}

void q_styleoptionsizegrip_set_corner(void* self, int32_t corner) {
    QStyleOptionSizeGrip_SetCorner((QStyleOptionSizeGrip*)self, corner);
}

int64_t q_styleoptionsizegrip_sub_controls(void* self) {
    return QStyleOptionComplex_SubControls((QStyleOptionComplex*)self);
}

void q_styleoptionsizegrip_set_sub_controls(void* self, int64_t subControls) {
    QStyleOptionComplex_SetSubControls((QStyleOptionComplex*)self, subControls);
}

int64_t q_styleoptionsizegrip_active_sub_controls(void* self) {
    return QStyleOptionComplex_ActiveSubControls((QStyleOptionComplex*)self);
}

void q_styleoptionsizegrip_set_active_sub_controls(void* self, int64_t activeSubControls) {
    QStyleOptionComplex_SetActiveSubControls((QStyleOptionComplex*)self, activeSubControls);
}

int32_t q_styleoptionsizegrip_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptionsizegrip_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptionsizegrip_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptionsizegrip_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptionsizegrip_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptionsizegrip_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptionsizegrip_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptionsizegrip_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptionsizegrip_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptionsizegrip_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptionsizegrip_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptionsizegrip_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptionsizegrip_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptionsizegrip_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptionsizegrip_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptionsizegrip_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptionsizegrip_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionsizegrip_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionsizegrip_delete(void* self) {
    QStyleOptionSizeGrip_Delete((QStyleOptionSizeGrip*)(self));
}

QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new() {
    return QStyleOptionGraphicsItem_new();
}

QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new2(void* other) {
    return QStyleOptionGraphicsItem_new2((QStyleOptionGraphicsItem*)other);
}

QRectF* q_styleoptiongraphicsitem_exposed_rect(void* self) {
    return QStyleOptionGraphicsItem_ExposedRect((QStyleOptionGraphicsItem*)self);
}

void q_styleoptiongraphicsitem_set_exposed_rect(void* self, void* exposedRect) {
    QStyleOptionGraphicsItem_SetExposedRect((QStyleOptionGraphicsItem*)self, (QRectF*)exposedRect);
}

double q_styleoptiongraphicsitem_level_of_detail_from_transform(void* worldTransform) {
    return QStyleOptionGraphicsItem_LevelOfDetailFromTransform((QTransform*)worldTransform);
}

int32_t q_styleoptiongraphicsitem_version(void* self) {
    return QStyleOption_Version((QStyleOption*)self);
}

void q_styleoptiongraphicsitem_set_version(void* self, int version) {
    QStyleOption_SetVersion((QStyleOption*)self, version);
}

int32_t q_styleoptiongraphicsitem_type(void* self) {
    return QStyleOption_Type((QStyleOption*)self);
}

void q_styleoptiongraphicsitem_set_type(void* self, int _type) {
    QStyleOption_SetType((QStyleOption*)self, _type);
}

int64_t q_styleoptiongraphicsitem_state(void* self) {
    return QStyleOption_State((QStyleOption*)self);
}

void q_styleoptiongraphicsitem_set_state(void* self, int64_t state) {
    QStyleOption_SetState((QStyleOption*)self, state);
}

int32_t q_styleoptiongraphicsitem_direction(void* self) {
    return QStyleOption_Direction((QStyleOption*)self);
}

void q_styleoptiongraphicsitem_set_direction(void* self, int32_t direction) {
    QStyleOption_SetDirection((QStyleOption*)self, direction);
}

QRect* q_styleoptiongraphicsitem_rect(void* self) {
    return QStyleOption_Rect((QStyleOption*)self);
}

void q_styleoptiongraphicsitem_set_rect(void* self, void* rect) {
    QStyleOption_SetRect((QStyleOption*)self, (QRect*)rect);
}

QFontMetrics* q_styleoptiongraphicsitem_font_metrics(void* self) {
    return QStyleOption_FontMetrics((QStyleOption*)self);
}

void q_styleoptiongraphicsitem_set_font_metrics(void* self, void* fontMetrics) {
    QStyleOption_SetFontMetrics((QStyleOption*)self, (QFontMetrics*)fontMetrics);
}

QPalette* q_styleoptiongraphicsitem_palette(void* self) {
    return QStyleOption_Palette((QStyleOption*)self);
}

void q_styleoptiongraphicsitem_set_palette(void* self, void* palette) {
    QStyleOption_SetPalette((QStyleOption*)self, (QPalette*)palette);
}

QObject* q_styleoptiongraphicsitem_style_object(void* self) {
    return QStyleOption_StyleObject((QStyleOption*)self);
}

void q_styleoptiongraphicsitem_set_style_object(void* self, void* styleObject) {
    QStyleOption_SetStyleObject((QStyleOption*)self, (QObject*)styleObject);
}

void q_styleoptiongraphicsitem_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiongraphicsitem_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiongraphicsitem_delete(void* self) {
    QStyleOptionGraphicsItem_Delete((QStyleOptionGraphicsItem*)(self));
}

QStyleHintReturn* q_stylehintreturn_new() {
    return QStyleHintReturn_new();
}

QStyleHintReturn* q_stylehintreturn_new2(void* param1) {
    return QStyleHintReturn_new2((QStyleHintReturn*)param1);
}

QStyleHintReturn* q_stylehintreturn_new3(int version) {
    return QStyleHintReturn_new3(version);
}

QStyleHintReturn* q_stylehintreturn_new4(int version, int typeVal) {
    return QStyleHintReturn_new4(version, typeVal);
}

int32_t q_stylehintreturn_version(void* self) {
    return QStyleHintReturn_Version((QStyleHintReturn*)self);
}

void q_stylehintreturn_set_version(void* self, int version) {
    QStyleHintReturn_SetVersion((QStyleHintReturn*)self, version);
}

int32_t q_stylehintreturn_type(void* self) {
    return QStyleHintReturn_Type((QStyleHintReturn*)self);
}

void q_stylehintreturn_set_type(void* self, int _type) {
    QStyleHintReturn_SetType((QStyleHintReturn*)self, _type);
}

void q_stylehintreturn_operator_assign(void* self, void* param1) {
    QStyleHintReturn_OperatorAssign((QStyleHintReturn*)self, (QStyleHintReturn*)param1);
}

void q_stylehintreturn_delete(void* self) {
    QStyleHintReturn_Delete((QStyleHintReturn*)(self));
}

QStyleHintReturnMask* q_stylehintreturnmask_new() {
    return QStyleHintReturnMask_new();
}

QStyleHintReturnMask* q_stylehintreturnmask_new2(void* param1) {
    return QStyleHintReturnMask_new2((QStyleHintReturnMask*)param1);
}

QRegion* q_stylehintreturnmask_region(void* self) {
    return QStyleHintReturnMask_Region((QStyleHintReturnMask*)self);
}

void q_stylehintreturnmask_set_region(void* self, void* region) {
    QStyleHintReturnMask_SetRegion((QStyleHintReturnMask*)self, (QRegion*)region);
}

void q_stylehintreturnmask_operator_assign(void* self, void* param1) {
    QStyleHintReturnMask_OperatorAssign((QStyleHintReturnMask*)self, (QStyleHintReturnMask*)param1);
}

int32_t q_stylehintreturnmask_version(void* self) {
    return QStyleHintReturn_Version((QStyleHintReturn*)self);
}

void q_stylehintreturnmask_set_version(void* self, int version) {
    QStyleHintReturn_SetVersion((QStyleHintReturn*)self, version);
}

int32_t q_stylehintreturnmask_type(void* self) {
    return QStyleHintReturn_Type((QStyleHintReturn*)self);
}

void q_stylehintreturnmask_set_type(void* self, int _type) {
    QStyleHintReturn_SetType((QStyleHintReturn*)self, _type);
}

void q_stylehintreturnmask_delete(void* self) {
    QStyleHintReturnMask_Delete((QStyleHintReturnMask*)(self));
}

QStyleHintReturnVariant* q_stylehintreturnvariant_new() {
    return QStyleHintReturnVariant_new();
}

QStyleHintReturnVariant* q_stylehintreturnvariant_new2(void* param1) {
    return QStyleHintReturnVariant_new2((QStyleHintReturnVariant*)param1);
}

QVariant* q_stylehintreturnvariant_variant(void* self) {
    return QStyleHintReturnVariant_Variant((QStyleHintReturnVariant*)self);
}

void q_stylehintreturnvariant_set_variant(void* self, void* variant) {
    QStyleHintReturnVariant_SetVariant((QStyleHintReturnVariant*)self, (QVariant*)variant);
}

void q_stylehintreturnvariant_operator_assign(void* self, void* param1) {
    QStyleHintReturnVariant_OperatorAssign((QStyleHintReturnVariant*)self, (QStyleHintReturnVariant*)param1);
}

int32_t q_stylehintreturnvariant_version(void* self) {
    return QStyleHintReturn_Version((QStyleHintReturn*)self);
}

void q_stylehintreturnvariant_set_version(void* self, int version) {
    QStyleHintReturn_SetVersion((QStyleHintReturn*)self, version);
}

int32_t q_stylehintreturnvariant_type(void* self) {
    return QStyleHintReturn_Type((QStyleHintReturn*)self);
}

void q_stylehintreturnvariant_set_type(void* self, int _type) {
    QStyleHintReturn_SetType((QStyleHintReturn*)self, _type);
}

void q_stylehintreturnvariant_delete(void* self) {
    QStyleHintReturnVariant_Delete((QStyleHintReturnVariant*)(self));
}
