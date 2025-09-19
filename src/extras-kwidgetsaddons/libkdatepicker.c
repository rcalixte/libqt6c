#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatetime.hpp"
#include "../libqframe.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkdatepicker.hpp"
#include "libkdatepicker.h"

KDatePicker* k_datepicker_new(void* parent) {
    return KDatePicker_new((QWidget*)parent);
}

KDatePicker* k_datepicker_new2() {
    return KDatePicker_new2();
}

KDatePicker* k_datepicker_new3(void* dt) {
    return KDatePicker_new3((QDate*)dt);
}

KDatePicker* k_datepicker_new4(void* dt, void* parent) {
    return KDatePicker_new4((QDate*)dt, (QWidget*)parent);
}

const QMetaObject* k_datepicker_meta_object(void* self) {
    return KDatePicker_MetaObject((KDatePicker*)self);
}

void* k_datepicker_metacast(void* self, const char* param1) {
    return KDatePicker_Metacast((KDatePicker*)self, param1);
}

int32_t k_datepicker_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDatePicker_Metacall((KDatePicker*)self, param1, param2, param3);
}

void k_datepicker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KDatePicker_OnMetacall((KDatePicker*)self, (intptr_t)callback);
}

int32_t k_datepicker_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KDatePicker_QBaseMetacall((KDatePicker*)self, param1, param2, param3);
}

const char* k_datepicker_tr(const char* s) {
    libqt_string _str = KDatePicker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* k_datepicker_size_hint(void* self) {
    return KDatePicker_SizeHint((KDatePicker*)self);
}

void k_datepicker_on_size_hint(void* self, QSize* (*callback)()) {
    KDatePicker_OnSizeHint((KDatePicker*)self, (intptr_t)callback);
}

QSize* k_datepicker_qbase_size_hint(void* self) {
    return KDatePicker_QBaseSizeHint((KDatePicker*)self);
}

bool k_datepicker_set_date(void* self, void* date) {
    return KDatePicker_SetDate((KDatePicker*)self, (QDate*)date);
}

const QDate* k_datepicker_date(void* self) {
    return KDatePicker_Date((KDatePicker*)self);
}

void k_datepicker_set_font_size(void* self, int fontSize) {
    KDatePicker_SetFontSize((KDatePicker*)self, fontSize);
}

int32_t k_datepicker_font_size(void* self) {
    return KDatePicker_FontSize((KDatePicker*)self);
}

void k_datepicker_set_close_button(void* self, bool enable) {
    KDatePicker_SetCloseButton((KDatePicker*)self, enable);
}

bool k_datepicker_has_close_button(void* self) {
    return KDatePicker_HasCloseButton((KDatePicker*)self);
}

void k_datepicker_set_date_range(void* self, void* minDate) {
    KDatePicker_SetDateRange((KDatePicker*)self, (QDate*)minDate);
}

bool k_datepicker_event_filter(void* self, void* o, void* e) {
    return KDatePicker_EventFilter((KDatePicker*)self, (QObject*)o, (QEvent*)e);
}

void k_datepicker_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KDatePicker_OnEventFilter((KDatePicker*)self, (intptr_t)callback);
}

bool k_datepicker_qbase_event_filter(void* self, void* o, void* e) {
    return KDatePicker_QBaseEventFilter((KDatePicker*)self, (QObject*)o, (QEvent*)e);
}

void k_datepicker_resize_event(void* self, void* param1) {
    KDatePicker_ResizeEvent((KDatePicker*)self, (QResizeEvent*)param1);
}

void k_datepicker_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnResizeEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_resize_event(void* self, void* param1) {
    KDatePicker_QBaseResizeEvent((KDatePicker*)self, (QResizeEvent*)param1);
}

void k_datepicker_change_event(void* self, void* event) {
    KDatePicker_ChangeEvent((KDatePicker*)self, (QEvent*)event);
}

void k_datepicker_on_change_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnChangeEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_change_event(void* self, void* event) {
    KDatePicker_QBaseChangeEvent((KDatePicker*)self, (QEvent*)event);
}

void k_datepicker_date_changed_slot(void* self, void* date) {
    KDatePicker_DateChangedSlot((KDatePicker*)self, (QDate*)date);
}

void k_datepicker_on_date_changed_slot(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnDateChangedSlot((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_date_changed_slot(void* self, void* date) {
    KDatePicker_QBaseDateChangedSlot((KDatePicker*)self, (QDate*)date);
}

void k_datepicker_table_clicked_slot(void* self) {
    KDatePicker_TableClickedSlot((KDatePicker*)self);
}

void k_datepicker_on_table_clicked_slot(void* self, void (*callback)()) {
    KDatePicker_OnTableClickedSlot((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_table_clicked_slot(void* self) {
    KDatePicker_QBaseTableClickedSlot((KDatePicker*)self);
}

void k_datepicker_month_forward_clicked(void* self) {
    KDatePicker_MonthForwardClicked((KDatePicker*)self);
}

void k_datepicker_on_month_forward_clicked(void* self, void (*callback)()) {
    KDatePicker_OnMonthForwardClicked((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_month_forward_clicked(void* self) {
    KDatePicker_QBaseMonthForwardClicked((KDatePicker*)self);
}

void k_datepicker_month_backward_clicked(void* self) {
    KDatePicker_MonthBackwardClicked((KDatePicker*)self);
}

void k_datepicker_on_month_backward_clicked(void* self, void (*callback)()) {
    KDatePicker_OnMonthBackwardClicked((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_month_backward_clicked(void* self) {
    KDatePicker_QBaseMonthBackwardClicked((KDatePicker*)self);
}

void k_datepicker_year_forward_clicked(void* self) {
    KDatePicker_YearForwardClicked((KDatePicker*)self);
}

void k_datepicker_on_year_forward_clicked(void* self, void (*callback)()) {
    KDatePicker_OnYearForwardClicked((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_year_forward_clicked(void* self) {
    KDatePicker_QBaseYearForwardClicked((KDatePicker*)self);
}

void k_datepicker_year_backward_clicked(void* self) {
    KDatePicker_YearBackwardClicked((KDatePicker*)self);
}

void k_datepicker_on_year_backward_clicked(void* self, void (*callback)()) {
    KDatePicker_OnYearBackwardClicked((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_year_backward_clicked(void* self) {
    KDatePicker_QBaseYearBackwardClicked((KDatePicker*)self);
}

void k_datepicker_select_month_clicked(void* self) {
    KDatePicker_SelectMonthClicked((KDatePicker*)self);
}

void k_datepicker_on_select_month_clicked(void* self, void (*callback)()) {
    KDatePicker_OnSelectMonthClicked((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_select_month_clicked(void* self) {
    KDatePicker_QBaseSelectMonthClicked((KDatePicker*)self);
}

void k_datepicker_select_year_clicked(void* self) {
    KDatePicker_SelectYearClicked((KDatePicker*)self);
}

void k_datepicker_on_select_year_clicked(void* self, void (*callback)()) {
    KDatePicker_OnSelectYearClicked((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_select_year_clicked(void* self) {
    KDatePicker_QBaseSelectYearClicked((KDatePicker*)self);
}

void k_datepicker_uncheck_year_selector(void* self) {
    KDatePicker_UncheckYearSelector((KDatePicker*)self);
}

void k_datepicker_on_uncheck_year_selector(void* self, void (*callback)()) {
    KDatePicker_OnUncheckYearSelector((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_uncheck_year_selector(void* self) {
    KDatePicker_QBaseUncheckYearSelector((KDatePicker*)self);
}

void k_datepicker_line_enter_pressed(void* self) {
    KDatePicker_LineEnterPressed((KDatePicker*)self);
}

void k_datepicker_on_line_enter_pressed(void* self, void (*callback)()) {
    KDatePicker_OnLineEnterPressed((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_line_enter_pressed(void* self) {
    KDatePicker_QBaseLineEnterPressed((KDatePicker*)self);
}

void k_datepicker_today_button_clicked(void* self) {
    KDatePicker_TodayButtonClicked((KDatePicker*)self);
}

void k_datepicker_on_today_button_clicked(void* self, void (*callback)()) {
    KDatePicker_OnTodayButtonClicked((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_today_button_clicked(void* self) {
    KDatePicker_QBaseTodayButtonClicked((KDatePicker*)self);
}

void k_datepicker_week_selected(void* self, int param1) {
    KDatePicker_WeekSelected((KDatePicker*)self, param1);
}

void k_datepicker_on_week_selected(void* self, void (*callback)(void*, int)) {
    KDatePicker_OnWeekSelected((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_qbase_week_selected(void* self, int param1) {
    KDatePicker_QBaseWeekSelected((KDatePicker*)self, param1);
}

void k_datepicker_date_changed(void* self, void* date) {
    KDatePicker_DateChanged((KDatePicker*)self, (QDate*)date);
}

void k_datepicker_on_date_changed(void* self, void (*callback)(void*, void*)) {
    KDatePicker_Connect_DateChanged((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_date_selected(void* self, void* date) {
    KDatePicker_DateSelected((KDatePicker*)self, (QDate*)date);
}

void k_datepicker_on_date_selected(void* self, void (*callback)(void*, void*)) {
    KDatePicker_Connect_DateSelected((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_date_entered(void* self, void* date) {
    KDatePicker_DateEntered((KDatePicker*)self, (QDate*)date);
}

void k_datepicker_on_date_entered(void* self, void (*callback)(void*, void*)) {
    KDatePicker_Connect_DateEntered((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_table_clicked(void* self) {
    KDatePicker_TableClicked((KDatePicker*)self);
}

void k_datepicker_on_table_clicked(void* self, void (*callback)(void*)) {
    KDatePicker_Connect_TableClicked((KDatePicker*)self, (intptr_t)callback);
}

const char* k_datepicker_tr2(const char* s, const char* c) {
    libqt_string _str = KDatePicker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datepicker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KDatePicker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepicker_set_date_range2(void* self, void* minDate, void* maxDate) {
    KDatePicker_SetDateRange2((KDatePicker*)self, (QDate*)minDate, (QDate*)maxDate);
}

int32_t k_datepicker_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_datepicker_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_datepicker_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_datepicker_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_datepicker_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_datepicker_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_datepicker_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_datepicker_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_datepicker_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_datepicker_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_datepicker_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_datepicker_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_datepicker_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_datepicker_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_datepicker_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_datepicker_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_datepicker_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_datepicker_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_datepicker_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_datepicker_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_datepicker_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_datepicker_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_datepicker_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_datepicker_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_datepicker_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_datepicker_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_datepicker_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_datepicker_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_datepicker_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_datepicker_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_datepicker_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_datepicker_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_datepicker_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_datepicker_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_datepicker_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_datepicker_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_datepicker_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_datepicker_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_datepicker_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_datepicker_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_datepicker_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_datepicker_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_datepicker_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_datepicker_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_datepicker_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_datepicker_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_datepicker_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_datepicker_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_datepicker_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_datepicker_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_datepicker_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_datepicker_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_datepicker_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_datepicker_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_datepicker_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_datepicker_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_datepicker_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_datepicker_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_datepicker_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_datepicker_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_datepicker_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_datepicker_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_datepicker_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_datepicker_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_datepicker_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_datepicker_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_datepicker_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datepicker_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datepicker_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datepicker_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datepicker_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datepicker_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datepicker_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_datepicker_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_datepicker_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_datepicker_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_datepicker_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_datepicker_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_datepicker_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_datepicker_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_datepicker_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_datepicker_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_datepicker_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_datepicker_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_datepicker_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_datepicker_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_datepicker_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_datepicker_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_datepicker_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_datepicker_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_datepicker_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_datepicker_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_datepicker_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_datepicker_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_datepicker_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_datepicker_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_datepicker_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_datepicker_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_datepicker_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_datepicker_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_datepicker_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_datepicker_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_datepicker_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_datepicker_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_datepicker_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_datepicker_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_datepicker_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_datepicker_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_datepicker_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_datepicker_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_datepicker_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_datepicker_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_datepicker_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datepicker_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepicker_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_datepicker_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_datepicker_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_datepicker_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepicker_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_datepicker_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepicker_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_datepicker_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepicker_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_datepicker_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_datepicker_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_datepicker_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_datepicker_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepicker_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_datepicker_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_datepicker_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_datepicker_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepicker_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_datepicker_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_datepicker_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepicker_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_datepicker_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepicker_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_datepicker_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_datepicker_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_datepicker_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_datepicker_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_datepicker_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_datepicker_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_datepicker_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_datepicker_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_datepicker_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_datepicker_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_datepicker_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_datepicker_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_datepicker_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_datepicker_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_datepicker_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_datepicker_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_datepicker_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_datepicker_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_datepicker_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_datepicker_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_datepicker_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_datepicker_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_datepicker_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_datepicker_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_datepicker_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_datepicker_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_datepicker_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_datepicker_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_datepicker_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_datepicker_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_datepicker_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_datepicker_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_datepicker_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_datepicker_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_datepicker_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_datepicker_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_datepicker_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_datepicker_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_datepicker_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_datepicker_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_datepicker_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_datepicker_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_datepicker_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_datepicker_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_datepicker_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_datepicker_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_datepicker_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_datepicker_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_datepicker_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_datepicker_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_datepicker_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_datepicker_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_datepicker_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_datepicker_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_datepicker_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_datepicker_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_datepicker_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_datepicker_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_datepicker_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_datepicker_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_datepicker_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_datepicker_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_datepicker_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_datepicker_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_datepicker_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_datepicker_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_datepicker_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_datepicker_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_datepicker_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_datepicker_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_datepicker_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_datepicker_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_datepicker_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_datepicker_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_datepicker_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_datepicker_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_datepicker_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_datepicker_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_datepicker_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_datepicker_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_datepicker_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_datepicker_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_datepicker_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_datepicker_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_datepicker_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_datepicker_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_datepicker_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_datepicker_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_datepicker_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_datepicker_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_datepicker_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_datepicker_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_datepicker_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_datepicker_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_datepicker_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_datepicker_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_datepicker_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_datepicker_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_datepicker_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_datepicker_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_datepicker_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_datepicker_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_datepicker_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_datepicker_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_datepicker_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_datepicker_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_datepicker_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_datepicker_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_datepicker_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_datepicker_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_datepicker_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_datepicker_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_datepicker_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_datepicker_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_datepicker_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_datepicker_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_datepicker_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_datepicker_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_datepicker_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_datepicker_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_datepicker_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_datepicker_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_datepicker_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_datepicker_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_datepicker_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_datepicker_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_datepicker_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_datepicker_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_datepicker_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_datepicker_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_datepicker_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_datepicker_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_datepicker_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_datepicker_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_datepicker_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_datepicker_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_datepicker_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_datepicker_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_datepicker_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_datepicker_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_datepicker_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_datepicker_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_datepicker_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_datepicker_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_datepicker_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_datepicker_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_datepicker_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_datepicker_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_datepicker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_datepicker_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_datepicker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_datepicker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_datepicker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_datepicker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_datepicker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_datepicker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_datepicker_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_datepicker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_datepicker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_datepicker_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_datepicker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_datepicker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_datepicker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_datepicker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_datepicker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_datepicker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_datepicker_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_datepicker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_datepicker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_datepicker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_datepicker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_datepicker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_datepicker_dynamic_property_names");
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

QBindingStorage* k_datepicker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_datepicker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_datepicker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_datepicker_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_datepicker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_datepicker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_datepicker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_datepicker_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_datepicker_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_datepicker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_datepicker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_datepicker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_datepicker_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_datepicker_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_datepicker_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_datepicker_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_datepicker_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_datepicker_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_datepicker_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_datepicker_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_datepicker_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_datepicker_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_datepicker_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_datepicker_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_datepicker_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_datepicker_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

bool k_datepicker_event(void* self, void* e) {
    return KDatePicker_Event((KDatePicker*)self, (QEvent*)e);
}

bool k_datepicker_qbase_event(void* self, void* e) {
    return KDatePicker_QBaseEvent((KDatePicker*)self, (QEvent*)e);
}

void k_datepicker_on_event(void* self, bool (*callback)(void*, void*)) {
    KDatePicker_OnEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_paint_event(void* self, void* param1) {
    KDatePicker_PaintEvent((KDatePicker*)self, (QPaintEvent*)param1);
}

void k_datepicker_qbase_paint_event(void* self, void* param1) {
    KDatePicker_QBasePaintEvent((KDatePicker*)self, (QPaintEvent*)param1);
}

void k_datepicker_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnPaintEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_init_style_option(void* self, void* option) {
    KDatePicker_InitStyleOption((KDatePicker*)self, (QStyleOptionFrame*)option);
}

void k_datepicker_qbase_init_style_option(void* self, void* option) {
    KDatePicker_QBaseInitStyleOption((KDatePicker*)self, (QStyleOptionFrame*)option);
}

void k_datepicker_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnInitStyleOption((KDatePicker*)self, (intptr_t)callback);
}

int32_t k_datepicker_dev_type(void* self) {
    return KDatePicker_DevType((KDatePicker*)self);
}

int32_t k_datepicker_qbase_dev_type(void* self) {
    return KDatePicker_QBaseDevType((KDatePicker*)self);
}

void k_datepicker_on_dev_type(void* self, int32_t (*callback)()) {
    KDatePicker_OnDevType((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_set_visible(void* self, bool visible) {
    KDatePicker_SetVisible((KDatePicker*)self, visible);
}

void k_datepicker_qbase_set_visible(void* self, bool visible) {
    KDatePicker_QBaseSetVisible((KDatePicker*)self, visible);
}

void k_datepicker_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KDatePicker_OnSetVisible((KDatePicker*)self, (intptr_t)callback);
}

QSize* k_datepicker_minimum_size_hint(void* self) {
    return KDatePicker_MinimumSizeHint((KDatePicker*)self);
}

QSize* k_datepicker_qbase_minimum_size_hint(void* self) {
    return KDatePicker_QBaseMinimumSizeHint((KDatePicker*)self);
}

void k_datepicker_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KDatePicker_OnMinimumSizeHint((KDatePicker*)self, (intptr_t)callback);
}

int32_t k_datepicker_height_for_width(void* self, int param1) {
    return KDatePicker_HeightForWidth((KDatePicker*)self, param1);
}

int32_t k_datepicker_qbase_height_for_width(void* self, int param1) {
    return KDatePicker_QBaseHeightForWidth((KDatePicker*)self, param1);
}

void k_datepicker_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KDatePicker_OnHeightForWidth((KDatePicker*)self, (intptr_t)callback);
}

bool k_datepicker_has_height_for_width(void* self) {
    return KDatePicker_HasHeightForWidth((KDatePicker*)self);
}

bool k_datepicker_qbase_has_height_for_width(void* self) {
    return KDatePicker_QBaseHasHeightForWidth((KDatePicker*)self);
}

void k_datepicker_on_has_height_for_width(void* self, bool (*callback)()) {
    KDatePicker_OnHasHeightForWidth((KDatePicker*)self, (intptr_t)callback);
}

QPaintEngine* k_datepicker_paint_engine(void* self) {
    return KDatePicker_PaintEngine((KDatePicker*)self);
}

QPaintEngine* k_datepicker_qbase_paint_engine(void* self) {
    return KDatePicker_QBasePaintEngine((KDatePicker*)self);
}

void k_datepicker_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KDatePicker_OnPaintEngine((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_mouse_press_event(void* self, void* event) {
    KDatePicker_MousePressEvent((KDatePicker*)self, (QMouseEvent*)event);
}

void k_datepicker_qbase_mouse_press_event(void* self, void* event) {
    KDatePicker_QBaseMousePressEvent((KDatePicker*)self, (QMouseEvent*)event);
}

void k_datepicker_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnMousePressEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_mouse_release_event(void* self, void* event) {
    KDatePicker_MouseReleaseEvent((KDatePicker*)self, (QMouseEvent*)event);
}

void k_datepicker_qbase_mouse_release_event(void* self, void* event) {
    KDatePicker_QBaseMouseReleaseEvent((KDatePicker*)self, (QMouseEvent*)event);
}

void k_datepicker_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnMouseReleaseEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_mouse_double_click_event(void* self, void* event) {
    KDatePicker_MouseDoubleClickEvent((KDatePicker*)self, (QMouseEvent*)event);
}

void k_datepicker_qbase_mouse_double_click_event(void* self, void* event) {
    KDatePicker_QBaseMouseDoubleClickEvent((KDatePicker*)self, (QMouseEvent*)event);
}

void k_datepicker_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnMouseDoubleClickEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_mouse_move_event(void* self, void* event) {
    KDatePicker_MouseMoveEvent((KDatePicker*)self, (QMouseEvent*)event);
}

void k_datepicker_qbase_mouse_move_event(void* self, void* event) {
    KDatePicker_QBaseMouseMoveEvent((KDatePicker*)self, (QMouseEvent*)event);
}

void k_datepicker_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnMouseMoveEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_wheel_event(void* self, void* event) {
    KDatePicker_WheelEvent((KDatePicker*)self, (QWheelEvent*)event);
}

void k_datepicker_qbase_wheel_event(void* self, void* event) {
    KDatePicker_QBaseWheelEvent((KDatePicker*)self, (QWheelEvent*)event);
}

void k_datepicker_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnWheelEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_key_press_event(void* self, void* event) {
    KDatePicker_KeyPressEvent((KDatePicker*)self, (QKeyEvent*)event);
}

void k_datepicker_qbase_key_press_event(void* self, void* event) {
    KDatePicker_QBaseKeyPressEvent((KDatePicker*)self, (QKeyEvent*)event);
}

void k_datepicker_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnKeyPressEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_key_release_event(void* self, void* event) {
    KDatePicker_KeyReleaseEvent((KDatePicker*)self, (QKeyEvent*)event);
}

void k_datepicker_qbase_key_release_event(void* self, void* event) {
    KDatePicker_QBaseKeyReleaseEvent((KDatePicker*)self, (QKeyEvent*)event);
}

void k_datepicker_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnKeyReleaseEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_focus_in_event(void* self, void* event) {
    KDatePicker_FocusInEvent((KDatePicker*)self, (QFocusEvent*)event);
}

void k_datepicker_qbase_focus_in_event(void* self, void* event) {
    KDatePicker_QBaseFocusInEvent((KDatePicker*)self, (QFocusEvent*)event);
}

void k_datepicker_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnFocusInEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_focus_out_event(void* self, void* event) {
    KDatePicker_FocusOutEvent((KDatePicker*)self, (QFocusEvent*)event);
}

void k_datepicker_qbase_focus_out_event(void* self, void* event) {
    KDatePicker_QBaseFocusOutEvent((KDatePicker*)self, (QFocusEvent*)event);
}

void k_datepicker_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnFocusOutEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_enter_event(void* self, void* event) {
    KDatePicker_EnterEvent((KDatePicker*)self, (QEnterEvent*)event);
}

void k_datepicker_qbase_enter_event(void* self, void* event) {
    KDatePicker_QBaseEnterEvent((KDatePicker*)self, (QEnterEvent*)event);
}

void k_datepicker_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnEnterEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_leave_event(void* self, void* event) {
    KDatePicker_LeaveEvent((KDatePicker*)self, (QEvent*)event);
}

void k_datepicker_qbase_leave_event(void* self, void* event) {
    KDatePicker_QBaseLeaveEvent((KDatePicker*)self, (QEvent*)event);
}

void k_datepicker_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnLeaveEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_move_event(void* self, void* event) {
    KDatePicker_MoveEvent((KDatePicker*)self, (QMoveEvent*)event);
}

void k_datepicker_qbase_move_event(void* self, void* event) {
    KDatePicker_QBaseMoveEvent((KDatePicker*)self, (QMoveEvent*)event);
}

void k_datepicker_on_move_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnMoveEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_close_event(void* self, void* event) {
    KDatePicker_CloseEvent((KDatePicker*)self, (QCloseEvent*)event);
}

void k_datepicker_qbase_close_event(void* self, void* event) {
    KDatePicker_QBaseCloseEvent((KDatePicker*)self, (QCloseEvent*)event);
}

void k_datepicker_on_close_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnCloseEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_context_menu_event(void* self, void* event) {
    KDatePicker_ContextMenuEvent((KDatePicker*)self, (QContextMenuEvent*)event);
}

void k_datepicker_qbase_context_menu_event(void* self, void* event) {
    KDatePicker_QBaseContextMenuEvent((KDatePicker*)self, (QContextMenuEvent*)event);
}

void k_datepicker_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnContextMenuEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_tablet_event(void* self, void* event) {
    KDatePicker_TabletEvent((KDatePicker*)self, (QTabletEvent*)event);
}

void k_datepicker_qbase_tablet_event(void* self, void* event) {
    KDatePicker_QBaseTabletEvent((KDatePicker*)self, (QTabletEvent*)event);
}

void k_datepicker_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnTabletEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_action_event(void* self, void* event) {
    KDatePicker_ActionEvent((KDatePicker*)self, (QActionEvent*)event);
}

void k_datepicker_qbase_action_event(void* self, void* event) {
    KDatePicker_QBaseActionEvent((KDatePicker*)self, (QActionEvent*)event);
}

void k_datepicker_on_action_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnActionEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_drag_enter_event(void* self, void* event) {
    KDatePicker_DragEnterEvent((KDatePicker*)self, (QDragEnterEvent*)event);
}

void k_datepicker_qbase_drag_enter_event(void* self, void* event) {
    KDatePicker_QBaseDragEnterEvent((KDatePicker*)self, (QDragEnterEvent*)event);
}

void k_datepicker_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnDragEnterEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_drag_move_event(void* self, void* event) {
    KDatePicker_DragMoveEvent((KDatePicker*)self, (QDragMoveEvent*)event);
}

void k_datepicker_qbase_drag_move_event(void* self, void* event) {
    KDatePicker_QBaseDragMoveEvent((KDatePicker*)self, (QDragMoveEvent*)event);
}

void k_datepicker_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnDragMoveEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_drag_leave_event(void* self, void* event) {
    KDatePicker_DragLeaveEvent((KDatePicker*)self, (QDragLeaveEvent*)event);
}

void k_datepicker_qbase_drag_leave_event(void* self, void* event) {
    KDatePicker_QBaseDragLeaveEvent((KDatePicker*)self, (QDragLeaveEvent*)event);
}

void k_datepicker_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnDragLeaveEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_drop_event(void* self, void* event) {
    KDatePicker_DropEvent((KDatePicker*)self, (QDropEvent*)event);
}

void k_datepicker_qbase_drop_event(void* self, void* event) {
    KDatePicker_QBaseDropEvent((KDatePicker*)self, (QDropEvent*)event);
}

void k_datepicker_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnDropEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_show_event(void* self, void* event) {
    KDatePicker_ShowEvent((KDatePicker*)self, (QShowEvent*)event);
}

void k_datepicker_qbase_show_event(void* self, void* event) {
    KDatePicker_QBaseShowEvent((KDatePicker*)self, (QShowEvent*)event);
}

void k_datepicker_on_show_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnShowEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_hide_event(void* self, void* event) {
    KDatePicker_HideEvent((KDatePicker*)self, (QHideEvent*)event);
}

void k_datepicker_qbase_hide_event(void* self, void* event) {
    KDatePicker_QBaseHideEvent((KDatePicker*)self, (QHideEvent*)event);
}

void k_datepicker_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnHideEvent((KDatePicker*)self, (intptr_t)callback);
}

bool k_datepicker_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KDatePicker_NativeEvent((KDatePicker*)self, qstring(eventType), message, result);
}

bool k_datepicker_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KDatePicker_QBaseNativeEvent((KDatePicker*)self, qstring(eventType), message, result);
}

void k_datepicker_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KDatePicker_OnNativeEvent((KDatePicker*)self, (intptr_t)callback);
}

int32_t k_datepicker_metric(void* self, int32_t param1) {
    return KDatePicker_Metric((KDatePicker*)self, param1);
}

int32_t k_datepicker_qbase_metric(void* self, int32_t param1) {
    return KDatePicker_QBaseMetric((KDatePicker*)self, param1);
}

void k_datepicker_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KDatePicker_OnMetric((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_init_painter(void* self, void* painter) {
    KDatePicker_InitPainter((KDatePicker*)self, (QPainter*)painter);
}

void k_datepicker_qbase_init_painter(void* self, void* painter) {
    KDatePicker_QBaseInitPainter((KDatePicker*)self, (QPainter*)painter);
}

void k_datepicker_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnInitPainter((KDatePicker*)self, (intptr_t)callback);
}

QPaintDevice* k_datepicker_redirected(void* self, void* offset) {
    return KDatePicker_Redirected((KDatePicker*)self, (QPoint*)offset);
}

QPaintDevice* k_datepicker_qbase_redirected(void* self, void* offset) {
    return KDatePicker_QBaseRedirected((KDatePicker*)self, (QPoint*)offset);
}

void k_datepicker_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KDatePicker_OnRedirected((KDatePicker*)self, (intptr_t)callback);
}

QPainter* k_datepicker_shared_painter(void* self) {
    return KDatePicker_SharedPainter((KDatePicker*)self);
}

QPainter* k_datepicker_qbase_shared_painter(void* self) {
    return KDatePicker_QBaseSharedPainter((KDatePicker*)self);
}

void k_datepicker_on_shared_painter(void* self, QPainter* (*callback)()) {
    KDatePicker_OnSharedPainter((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_input_method_event(void* self, void* param1) {
    KDatePicker_InputMethodEvent((KDatePicker*)self, (QInputMethodEvent*)param1);
}

void k_datepicker_qbase_input_method_event(void* self, void* param1) {
    KDatePicker_QBaseInputMethodEvent((KDatePicker*)self, (QInputMethodEvent*)param1);
}

void k_datepicker_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnInputMethodEvent((KDatePicker*)self, (intptr_t)callback);
}

QVariant* k_datepicker_input_method_query(void* self, int64_t param1) {
    return KDatePicker_InputMethodQuery((KDatePicker*)self, param1);
}

QVariant* k_datepicker_qbase_input_method_query(void* self, int64_t param1) {
    return KDatePicker_QBaseInputMethodQuery((KDatePicker*)self, param1);
}

void k_datepicker_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KDatePicker_OnInputMethodQuery((KDatePicker*)self, (intptr_t)callback);
}

bool k_datepicker_focus_next_prev_child(void* self, bool next) {
    return KDatePicker_FocusNextPrevChild((KDatePicker*)self, next);
}

bool k_datepicker_qbase_focus_next_prev_child(void* self, bool next) {
    return KDatePicker_QBaseFocusNextPrevChild((KDatePicker*)self, next);
}

void k_datepicker_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KDatePicker_OnFocusNextPrevChild((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_timer_event(void* self, void* event) {
    KDatePicker_TimerEvent((KDatePicker*)self, (QTimerEvent*)event);
}

void k_datepicker_qbase_timer_event(void* self, void* event) {
    KDatePicker_QBaseTimerEvent((KDatePicker*)self, (QTimerEvent*)event);
}

void k_datepicker_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnTimerEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_child_event(void* self, void* event) {
    KDatePicker_ChildEvent((KDatePicker*)self, (QChildEvent*)event);
}

void k_datepicker_qbase_child_event(void* self, void* event) {
    KDatePicker_QBaseChildEvent((KDatePicker*)self, (QChildEvent*)event);
}

void k_datepicker_on_child_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnChildEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_custom_event(void* self, void* event) {
    KDatePicker_CustomEvent((KDatePicker*)self, (QEvent*)event);
}

void k_datepicker_qbase_custom_event(void* self, void* event) {
    KDatePicker_QBaseCustomEvent((KDatePicker*)self, (QEvent*)event);
}

void k_datepicker_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnCustomEvent((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_connect_notify(void* self, void* signal) {
    KDatePicker_ConnectNotify((KDatePicker*)self, (QMetaMethod*)signal);
}

void k_datepicker_qbase_connect_notify(void* self, void* signal) {
    KDatePicker_QBaseConnectNotify((KDatePicker*)self, (QMetaMethod*)signal);
}

void k_datepicker_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnConnectNotify((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_disconnect_notify(void* self, void* signal) {
    KDatePicker_DisconnectNotify((KDatePicker*)self, (QMetaMethod*)signal);
}

void k_datepicker_qbase_disconnect_notify(void* self, void* signal) {
    KDatePicker_QBaseDisconnectNotify((KDatePicker*)self, (QMetaMethod*)signal);
}

void k_datepicker_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnDisconnectNotify((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_draw_frame(void* self, void* param1) {
    KDatePicker_DrawFrame((KDatePicker*)self, (QPainter*)param1);
}

void k_datepicker_qbase_draw_frame(void* self, void* param1) {
    KDatePicker_QBaseDrawFrame((KDatePicker*)self, (QPainter*)param1);
}

void k_datepicker_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KDatePicker_OnDrawFrame((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_update_micro_focus(void* self) {
    KDatePicker_UpdateMicroFocus((KDatePicker*)self);
}

void k_datepicker_qbase_update_micro_focus(void* self) {
    KDatePicker_QBaseUpdateMicroFocus((KDatePicker*)self);
}

void k_datepicker_on_update_micro_focus(void* self, void (*callback)()) {
    KDatePicker_OnUpdateMicroFocus((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_create(void* self) {
    KDatePicker_Create((KDatePicker*)self);
}

void k_datepicker_qbase_create(void* self) {
    KDatePicker_QBaseCreate((KDatePicker*)self);
}

void k_datepicker_on_create(void* self, void (*callback)()) {
    KDatePicker_OnCreate((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_destroy(void* self) {
    KDatePicker_Destroy((KDatePicker*)self);
}

void k_datepicker_qbase_destroy(void* self) {
    KDatePicker_QBaseDestroy((KDatePicker*)self);
}

void k_datepicker_on_destroy(void* self, void (*callback)()) {
    KDatePicker_OnDestroy((KDatePicker*)self, (intptr_t)callback);
}

bool k_datepicker_focus_next_child(void* self) {
    return KDatePicker_FocusNextChild((KDatePicker*)self);
}

bool k_datepicker_qbase_focus_next_child(void* self) {
    return KDatePicker_QBaseFocusNextChild((KDatePicker*)self);
}

void k_datepicker_on_focus_next_child(void* self, bool (*callback)()) {
    KDatePicker_OnFocusNextChild((KDatePicker*)self, (intptr_t)callback);
}

bool k_datepicker_focus_previous_child(void* self) {
    return KDatePicker_FocusPreviousChild((KDatePicker*)self);
}

bool k_datepicker_qbase_focus_previous_child(void* self) {
    return KDatePicker_QBaseFocusPreviousChild((KDatePicker*)self);
}

void k_datepicker_on_focus_previous_child(void* self, bool (*callback)()) {
    KDatePicker_OnFocusPreviousChild((KDatePicker*)self, (intptr_t)callback);
}

QObject* k_datepicker_sender(void* self) {
    return KDatePicker_Sender((KDatePicker*)self);
}

QObject* k_datepicker_qbase_sender(void* self) {
    return KDatePicker_QBaseSender((KDatePicker*)self);
}

void k_datepicker_on_sender(void* self, QObject* (*callback)()) {
    KDatePicker_OnSender((KDatePicker*)self, (intptr_t)callback);
}

int32_t k_datepicker_sender_signal_index(void* self) {
    return KDatePicker_SenderSignalIndex((KDatePicker*)self);
}

int32_t k_datepicker_qbase_sender_signal_index(void* self) {
    return KDatePicker_QBaseSenderSignalIndex((KDatePicker*)self);
}

void k_datepicker_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KDatePicker_OnSenderSignalIndex((KDatePicker*)self, (intptr_t)callback);
}

int32_t k_datepicker_receivers(void* self, const char* signal) {
    return KDatePicker_Receivers((KDatePicker*)self, signal);
}

int32_t k_datepicker_qbase_receivers(void* self, const char* signal) {
    return KDatePicker_QBaseReceivers((KDatePicker*)self, signal);
}

void k_datepicker_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KDatePicker_OnReceivers((KDatePicker*)self, (intptr_t)callback);
}

bool k_datepicker_is_signal_connected(void* self, void* signal) {
    return KDatePicker_IsSignalConnected((KDatePicker*)self, (QMetaMethod*)signal);
}

bool k_datepicker_qbase_is_signal_connected(void* self, void* signal) {
    return KDatePicker_QBaseIsSignalConnected((KDatePicker*)self, (QMetaMethod*)signal);
}

void k_datepicker_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KDatePicker_OnIsSignalConnected((KDatePicker*)self, (intptr_t)callback);
}

double k_datepicker_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KDatePicker_GetDecodedMetricF((KDatePicker*)self, metricA, metricB);
}

double k_datepicker_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KDatePicker_QBaseGetDecodedMetricF((KDatePicker*)self, metricA, metricB);
}

void k_datepicker_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KDatePicker_OnGetDecodedMetricF((KDatePicker*)self, (intptr_t)callback);
}

void k_datepicker_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_datepicker_delete(void* self) {
    KDatePicker_Delete((KDatePicker*)(self));
}
