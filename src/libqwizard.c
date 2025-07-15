#include "libqabstractbutton.hpp"
#include "libqevent.hpp"
#include "libqdialog.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqwizard.hpp"
#include "libqwizard.h"

QWizard* q_wizard_new(void* parent) {
    return QWizard_new((QWidget*)parent);
}

QWizard* q_wizard_new2() {
    return QWizard_new2();
}

QWizard* q_wizard_new3(void* parent, int64_t flags) {
    return QWizard_new3((QWidget*)parent, flags);
}

const QMetaObject* q_wizard_meta_object(void* self) {
    return QWizard_MetaObject((QWizard*)self);
}

void* q_wizard_metacast(void* self, const char* param1) {
    return QWizard_Metacast((QWizard*)self, param1);
}

int32_t q_wizard_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWizard_Metacall((QWizard*)self, param1, param2, param3);
}

void q_wizard_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWizard_OnMetacall((QWizard*)self, (intptr_t)slot);
}

int32_t q_wizard_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWizard_QBaseMetacall((QWizard*)self, param1, param2, param3);
}

const char* q_wizard_tr(const char* s) {
    libqt_string _str = QWizard_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_wizard_add_page(void* self, void* page) {
    return QWizard_AddPage((QWizard*)self, (QWizardPage*)page);
}

void q_wizard_set_page(void* self, int id, void* page) {
    QWizard_SetPage((QWizard*)self, id, (QWizardPage*)page);
}

void q_wizard_remove_page(void* self, int id) {
    QWizard_RemovePage((QWizard*)self, id);
}

QWizardPage* q_wizard_page(void* self, int id) {
    return QWizard_Page((QWizard*)self, id);
}

bool q_wizard_has_visited_page(void* self, int id) {
    return QWizard_HasVisitedPage((QWizard*)self, id);
}

libqt_list /* of int */ q_wizard_visited_ids(void* self) {
    libqt_list _arr = QWizard_VisitedIds((QWizard*)self);
    return _arr;
}

libqt_list /* of int */ q_wizard_page_ids(void* self) {
    libqt_list _arr = QWizard_PageIds((QWizard*)self);
    return _arr;
}

void q_wizard_set_start_id(void* self, int id) {
    QWizard_SetStartId((QWizard*)self, id);
}

int32_t q_wizard_start_id(void* self) {
    return QWizard_StartId((QWizard*)self);
}

QWizardPage* q_wizard_current_page(void* self) {
    return QWizard_CurrentPage((QWizard*)self);
}

int32_t q_wizard_current_id(void* self) {
    return QWizard_CurrentId((QWizard*)self);
}

bool q_wizard_validate_current_page(void* self) {
    return QWizard_ValidateCurrentPage((QWizard*)self);
}

void q_wizard_on_validate_current_page(void* self, bool (*slot)()) {
    QWizard_OnValidateCurrentPage((QWizard*)self, (intptr_t)slot);
}

bool q_wizard_qbase_validate_current_page(void* self) {
    return QWizard_QBaseValidateCurrentPage((QWizard*)self);
}

int32_t q_wizard_next_id(void* self) {
    return QWizard_NextId((QWizard*)self);
}

void q_wizard_on_next_id(void* self, int32_t (*slot)()) {
    QWizard_OnNextId((QWizard*)self, (intptr_t)slot);
}

int32_t q_wizard_qbase_next_id(void* self) {
    return QWizard_QBaseNextId((QWizard*)self);
}

void q_wizard_set_field(void* self, const char* name, void* value) {
    QWizard_SetField((QWizard*)self, qstring(name), (QVariant*)value);
}

QVariant* q_wizard_field(void* self, const char* name) {
    return QWizard_Field((QWizard*)self, qstring(name));
}

void q_wizard_set_wizard_style(void* self, int64_t style) {
    QWizard_SetWizardStyle((QWizard*)self, style);
}

int64_t q_wizard_wizard_style(void* self) {
    return QWizard_WizardStyle((QWizard*)self);
}

void q_wizard_set_option(void* self, int64_t option) {
    QWizard_SetOption((QWizard*)self, option);
}

bool q_wizard_test_option(void* self, int64_t option) {
    return QWizard_TestOption((QWizard*)self, option);
}

void q_wizard_set_options(void* self, int64_t options) {
    QWizard_SetOptions((QWizard*)self, options);
}

int64_t q_wizard_options(void* self) {
    return QWizard_Options((QWizard*)self);
}

void q_wizard_set_button_text(void* self, int64_t which, const char* text) {
    QWizard_SetButtonText((QWizard*)self, which, qstring(text));
}

const char* q_wizard_button_text(void* self, int64_t which) {
    libqt_string _str = QWizard_ButtonText((QWizard*)self, which);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizard_set_button_layout(void* self, libqt_list layout) {
    QWizard_SetButtonLayout((QWizard*)self, layout);
}

void q_wizard_set_button(void* self, int64_t which, void* button) {
    QWizard_SetButton((QWizard*)self, which, (QAbstractButton*)button);
}

QAbstractButton* q_wizard_button(void* self, int64_t which) {
    return QWizard_Button((QWizard*)self, which);
}

void q_wizard_set_title_format(void* self, int64_t format) {
    QWizard_SetTitleFormat((QWizard*)self, format);
}

int64_t q_wizard_title_format(void* self) {
    return QWizard_TitleFormat((QWizard*)self);
}

void q_wizard_set_sub_title_format(void* self, int64_t format) {
    QWizard_SetSubTitleFormat((QWizard*)self, format);
}

int64_t q_wizard_sub_title_format(void* self) {
    return QWizard_SubTitleFormat((QWizard*)self);
}

void q_wizard_set_pixmap(void* self, int64_t which, void* pixmap) {
    QWizard_SetPixmap((QWizard*)self, which, (QPixmap*)pixmap);
}

QPixmap* q_wizard_pixmap(void* self, int64_t which) {
    return QWizard_Pixmap((QWizard*)self, which);
}

void q_wizard_set_side_widget(void* self, void* widget) {
    QWizard_SetSideWidget((QWizard*)self, (QWidget*)widget);
}

QWidget* q_wizard_side_widget(void* self) {
    return QWizard_SideWidget((QWizard*)self);
}

void q_wizard_set_default_property(void* self, const char* className, const char* property, const char* changedSignal) {
    QWizard_SetDefaultProperty((QWizard*)self, className, property, changedSignal);
}

void q_wizard_set_visible(void* self, bool visible) {
    QWizard_SetVisible((QWizard*)self, visible);
}

void q_wizard_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QWizard_OnSetVisible((QWizard*)self, (intptr_t)slot);
}

void q_wizard_qbase_set_visible(void* self, bool visible) {
    QWizard_QBaseSetVisible((QWizard*)self, visible);
}

QSize* q_wizard_size_hint(void* self) {
    return QWizard_SizeHint((QWizard*)self);
}

void q_wizard_on_size_hint(void* self, QSize* (*slot)()) {
    QWizard_OnSizeHint((QWizard*)self, (intptr_t)slot);
}

QSize* q_wizard_qbase_size_hint(void* self) {
    return QWizard_QBaseSizeHint((QWizard*)self);
}

void q_wizard_current_id_changed(void* self, int id) {
    QWizard_CurrentIdChanged((QWizard*)self, id);
}

void q_wizard_on_current_id_changed(void* self, void (*slot)(void*, int)) {
    QWizard_Connect_CurrentIdChanged((QWizard*)self, (intptr_t)slot);
}

void q_wizard_help_requested(void* self) {
    QWizard_HelpRequested((QWizard*)self);
}

void q_wizard_on_help_requested(void* self, void (*slot)(void*)) {
    QWizard_Connect_HelpRequested((QWizard*)self, (intptr_t)slot);
}

void q_wizard_custom_button_clicked(void* self, int which) {
    QWizard_CustomButtonClicked((QWizard*)self, which);
}

void q_wizard_on_custom_button_clicked(void* self, void (*slot)(void*, int)) {
    QWizard_Connect_CustomButtonClicked((QWizard*)self, (intptr_t)slot);
}

void q_wizard_page_added(void* self, int id) {
    QWizard_PageAdded((QWizard*)self, id);
}

void q_wizard_on_page_added(void* self, void (*slot)(void*, int)) {
    QWizard_Connect_PageAdded((QWizard*)self, (intptr_t)slot);
}

void q_wizard_page_removed(void* self, int id) {
    QWizard_PageRemoved((QWizard*)self, id);
}

void q_wizard_on_page_removed(void* self, void (*slot)(void*, int)) {
    QWizard_Connect_PageRemoved((QWizard*)self, (intptr_t)slot);
}

void q_wizard_back(void* self) {
    QWizard_Back((QWizard*)self);
}

void q_wizard_next(void* self) {
    QWizard_Next((QWizard*)self);
}

void q_wizard_set_current_id(void* self, int id) {
    QWizard_SetCurrentId((QWizard*)self, id);
}

void q_wizard_restart(void* self) {
    QWizard_Restart((QWizard*)self);
}

bool q_wizard_event(void* self, void* event) {
    return QWizard_Event((QWizard*)self, (QEvent*)event);
}

void q_wizard_on_event(void* self, bool (*slot)(void*, void*)) {
    QWizard_OnEvent((QWizard*)self, (intptr_t)slot);
}

bool q_wizard_qbase_event(void* self, void* event) {
    return QWizard_QBaseEvent((QWizard*)self, (QEvent*)event);
}

void q_wizard_resize_event(void* self, void* event) {
    QWizard_ResizeEvent((QWizard*)self, (QResizeEvent*)event);
}

void q_wizard_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnResizeEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_qbase_resize_event(void* self, void* event) {
    QWizard_QBaseResizeEvent((QWizard*)self, (QResizeEvent*)event);
}

void q_wizard_paint_event(void* self, void* event) {
    QWizard_PaintEvent((QWizard*)self, (QPaintEvent*)event);
}

void q_wizard_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnPaintEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_qbase_paint_event(void* self, void* event) {
    QWizard_QBasePaintEvent((QWizard*)self, (QPaintEvent*)event);
}

void q_wizard_done(void* self, int result) {
    QWizard_Done((QWizard*)self, result);
}

void q_wizard_on_done(void* self, void (*slot)(void*, int)) {
    QWizard_OnDone((QWizard*)self, (intptr_t)slot);
}

void q_wizard_qbase_done(void* self, int result) {
    QWizard_QBaseDone((QWizard*)self, result);
}

void q_wizard_initialize_page(void* self, int id) {
    QWizard_InitializePage((QWizard*)self, id);
}

void q_wizard_on_initialize_page(void* self, void (*slot)(void*, int)) {
    QWizard_OnInitializePage((QWizard*)self, (intptr_t)slot);
}

void q_wizard_qbase_initialize_page(void* self, int id) {
    QWizard_QBaseInitializePage((QWizard*)self, id);
}

void q_wizard_cleanup_page(void* self, int id) {
    QWizard_CleanupPage((QWizard*)self, id);
}

void q_wizard_on_cleanup_page(void* self, void (*slot)(void*, int)) {
    QWizard_OnCleanupPage((QWizard*)self, (intptr_t)slot);
}

void q_wizard_qbase_cleanup_page(void* self, int id) {
    QWizard_QBaseCleanupPage((QWizard*)self, id);
}

const char* q_wizard_tr2(const char* s, const char* c) {
    libqt_string _str = QWizard_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_wizard_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWizard_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizard_set_option2(void* self, int64_t option, bool on) {
    QWizard_SetOption2((QWizard*)self, option, on);
}

int32_t q_wizard_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void q_wizard_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool q_wizard_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void q_wizard_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void q_wizard_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void q_wizard_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void q_wizard_on_finished(void* self, void (*slot)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)slot);
}

void q_wizard_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void q_wizard_on_accepted(void* self, void (*slot)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)slot);
}

void q_wizard_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void q_wizard_on_rejected(void* self, void (*slot)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)slot);
}

uintptr_t q_wizard_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_wizard_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_wizard_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_wizard_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_wizard_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_wizard_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_wizard_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_wizard_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_wizard_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_wizard_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_wizard_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_wizard_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_wizard_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_wizard_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_wizard_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_wizard_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_wizard_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_wizard_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_wizard_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_wizard_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_wizard_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_wizard_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_wizard_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_wizard_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_wizard_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_wizard_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_wizard_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_wizard_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_wizard_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_wizard_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_wizard_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_wizard_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_wizard_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_wizard_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_wizard_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_wizard_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_wizard_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_wizard_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_wizard_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_wizard_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_wizard_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_wizard_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_wizard_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_wizard_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_wizard_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_wizard_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_wizard_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_wizard_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_wizard_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_wizard_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_wizard_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_wizard_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_wizard_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_wizard_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_wizard_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_wizard_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_wizard_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_wizard_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_wizard_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_wizard_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_wizard_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_wizard_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_wizard_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_wizard_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_wizard_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_wizard_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_wizard_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_wizard_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_wizard_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_wizard_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_wizard_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_wizard_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_wizard_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_wizard_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_wizard_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_wizard_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_wizard_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_wizard_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_wizard_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_wizard_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_wizard_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_wizard_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_wizard_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_wizard_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_wizard_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_wizard_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_wizard_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_wizard_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_wizard_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_wizard_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_wizard_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_wizard_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_wizard_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_wizard_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_wizard_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_wizard_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_wizard_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_wizard_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_wizard_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_wizard_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_wizard_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizard_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_wizard_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_wizard_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_wizard_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizard_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_wizard_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizard_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_wizard_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizard_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_wizard_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_wizard_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_wizard_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_wizard_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizard_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_wizard_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_wizard_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_wizard_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizard_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_wizard_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_wizard_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizard_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_wizard_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizard_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_wizard_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_wizard_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_wizard_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_wizard_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_wizard_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_wizard_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_wizard_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_wizard_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_wizard_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_wizard_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_wizard_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_wizard_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_wizard_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_wizard_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_wizard_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_wizard_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_wizard_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_wizard_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_wizard_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_wizard_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_wizard_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_wizard_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_wizard_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_wizard_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_wizard_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_wizard_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_wizard_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_wizard_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_wizard_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_wizard_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_wizard_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_wizard_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_wizard_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_wizard_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_wizard_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_wizard_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_wizard_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_wizard_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_wizard_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_wizard_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_wizard_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_wizard_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_wizard_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_wizard_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_wizard_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_wizard_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_wizard_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_wizard_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_wizard_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_wizard_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_wizard_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_wizard_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_wizard_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_wizard_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_wizard_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_wizard_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_wizard_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_wizard_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_wizard_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_wizard_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_wizard_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_wizard_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_wizard_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_wizard_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_wizard_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_wizard_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_wizard_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_wizard_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_wizard_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_wizard_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_wizard_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_wizard_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_wizard_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_wizard_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_wizard_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_wizard_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_wizard_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_wizard_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_wizard_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_wizard_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_wizard_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_wizard_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_wizard_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_wizard_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_wizard_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_wizard_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_wizard_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_wizard_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_wizard_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_wizard_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_wizard_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_wizard_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_wizard_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_wizard_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_wizard_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_wizard_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_wizard_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_wizard_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_wizard_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_wizard_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_wizard_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_wizard_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_wizard_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_wizard_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_wizard_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_wizard_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_wizard_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_wizard_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_wizard_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_wizard_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_wizard_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_wizard_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_wizard_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_wizard_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_wizard_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_wizard_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_wizard_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_wizard_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_wizard_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_wizard_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_wizard_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_wizard_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_wizard_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_wizard_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_wizard_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_wizard_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_wizard_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_wizard_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_wizard_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_wizard_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_wizard_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_wizard_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_wizard_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_wizard_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_wizard_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_wizard_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_wizard_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_wizard_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_wizard_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_wizard_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_wizard_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_wizard_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_wizard_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_wizard_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_wizard_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_wizard_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_wizard_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_wizard_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_wizard_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizard_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_wizard_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_wizard_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_wizard_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_wizard_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_wizard_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_wizard_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_wizard_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_wizard_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_wizard_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_wizard_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_wizard_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_wizard_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_wizard_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_wizard_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_wizard_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_wizard_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_wizard_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_wizard_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_wizard_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_wizard_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_wizard_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_wizard_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_wizard_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_wizard_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_wizard_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_wizard_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_wizard_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_wizard_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_wizard_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_wizard_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_wizard_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_wizard_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_wizard_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_wizard_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_wizard_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_wizard_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_wizard_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_wizard_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_wizard_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_wizard_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_wizard_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_wizard_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_wizard_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_wizard_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_wizard_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_wizard_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_wizard_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_wizard_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_wizard_minimum_size_hint(void* self) {
    return QWizard_MinimumSizeHint((QWizard*)self);
}

QSize* q_wizard_qbase_minimum_size_hint(void* self) {
    return QWizard_QBaseMinimumSizeHint((QWizard*)self);
}

void q_wizard_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QWizard_OnMinimumSizeHint((QWizard*)self, (intptr_t)slot);
}

void q_wizard_open(void* self) {
    QWizard_Open((QWizard*)self);
}

void q_wizard_qbase_open(void* self) {
    QWizard_QBaseOpen((QWizard*)self);
}

void q_wizard_on_open(void* self, void (*slot)()) {
    QWizard_OnOpen((QWizard*)self, (intptr_t)slot);
}

int32_t q_wizard_exec(void* self) {
    return QWizard_Exec((QWizard*)self);
}

int32_t q_wizard_qbase_exec(void* self) {
    return QWizard_QBaseExec((QWizard*)self);
}

void q_wizard_on_exec(void* self, int32_t (*slot)()) {
    QWizard_OnExec((QWizard*)self, (intptr_t)slot);
}

void q_wizard_accept(void* self) {
    QWizard_Accept((QWizard*)self);
}

void q_wizard_qbase_accept(void* self) {
    QWizard_QBaseAccept((QWizard*)self);
}

void q_wizard_on_accept(void* self, void (*slot)()) {
    QWizard_OnAccept((QWizard*)self, (intptr_t)slot);
}

void q_wizard_reject(void* self) {
    QWizard_Reject((QWizard*)self);
}

void q_wizard_qbase_reject(void* self) {
    QWizard_QBaseReject((QWizard*)self);
}

void q_wizard_on_reject(void* self, void (*slot)()) {
    QWizard_OnReject((QWizard*)self, (intptr_t)slot);
}

void q_wizard_key_press_event(void* self, void* param1) {
    QWizard_KeyPressEvent((QWizard*)self, (QKeyEvent*)param1);
}

void q_wizard_qbase_key_press_event(void* self, void* param1) {
    QWizard_QBaseKeyPressEvent((QWizard*)self, (QKeyEvent*)param1);
}

void q_wizard_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnKeyPressEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_close_event(void* self, void* param1) {
    QWizard_CloseEvent((QWizard*)self, (QCloseEvent*)param1);
}

void q_wizard_qbase_close_event(void* self, void* param1) {
    QWizard_QBaseCloseEvent((QWizard*)self, (QCloseEvent*)param1);
}

void q_wizard_on_close_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnCloseEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_show_event(void* self, void* param1) {
    QWizard_ShowEvent((QWizard*)self, (QShowEvent*)param1);
}

void q_wizard_qbase_show_event(void* self, void* param1) {
    QWizard_QBaseShowEvent((QWizard*)self, (QShowEvent*)param1);
}

void q_wizard_on_show_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnShowEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_context_menu_event(void* self, void* param1) {
    QWizard_ContextMenuEvent((QWizard*)self, (QContextMenuEvent*)param1);
}

void q_wizard_qbase_context_menu_event(void* self, void* param1) {
    QWizard_QBaseContextMenuEvent((QWizard*)self, (QContextMenuEvent*)param1);
}

void q_wizard_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnContextMenuEvent((QWizard*)self, (intptr_t)slot);
}

bool q_wizard_event_filter(void* self, void* param1, void* param2) {
    return QWizard_EventFilter((QWizard*)self, (QObject*)param1, (QEvent*)param2);
}

bool q_wizard_qbase_event_filter(void* self, void* param1, void* param2) {
    return QWizard_QBaseEventFilter((QWizard*)self, (QObject*)param1, (QEvent*)param2);
}

void q_wizard_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWizard_OnEventFilter((QWizard*)self, (intptr_t)slot);
}

int32_t q_wizard_dev_type(void* self) {
    return QWizard_DevType((QWizard*)self);
}

int32_t q_wizard_qbase_dev_type(void* self) {
    return QWizard_QBaseDevType((QWizard*)self);
}

void q_wizard_on_dev_type(void* self, int32_t (*slot)()) {
    QWizard_OnDevType((QWizard*)self, (intptr_t)slot);
}

int32_t q_wizard_height_for_width(void* self, int param1) {
    return QWizard_HeightForWidth((QWizard*)self, param1);
}

int32_t q_wizard_qbase_height_for_width(void* self, int param1) {
    return QWizard_QBaseHeightForWidth((QWizard*)self, param1);
}

void q_wizard_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QWizard_OnHeightForWidth((QWizard*)self, (intptr_t)slot);
}

bool q_wizard_has_height_for_width(void* self) {
    return QWizard_HasHeightForWidth((QWizard*)self);
}

bool q_wizard_qbase_has_height_for_width(void* self) {
    return QWizard_QBaseHasHeightForWidth((QWizard*)self);
}

void q_wizard_on_has_height_for_width(void* self, bool (*slot)()) {
    QWizard_OnHasHeightForWidth((QWizard*)self, (intptr_t)slot);
}

QPaintEngine* q_wizard_paint_engine(void* self) {
    return QWizard_PaintEngine((QWizard*)self);
}

QPaintEngine* q_wizard_qbase_paint_engine(void* self) {
    return QWizard_QBasePaintEngine((QWizard*)self);
}

void q_wizard_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QWizard_OnPaintEngine((QWizard*)self, (intptr_t)slot);
}

void q_wizard_mouse_press_event(void* self, void* event) {
    QWizard_MousePressEvent((QWizard*)self, (QMouseEvent*)event);
}

void q_wizard_qbase_mouse_press_event(void* self, void* event) {
    QWizard_QBaseMousePressEvent((QWizard*)self, (QMouseEvent*)event);
}

void q_wizard_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnMousePressEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_mouse_release_event(void* self, void* event) {
    QWizard_MouseReleaseEvent((QWizard*)self, (QMouseEvent*)event);
}

void q_wizard_qbase_mouse_release_event(void* self, void* event) {
    QWizard_QBaseMouseReleaseEvent((QWizard*)self, (QMouseEvent*)event);
}

void q_wizard_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnMouseReleaseEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_mouse_double_click_event(void* self, void* event) {
    QWizard_MouseDoubleClickEvent((QWizard*)self, (QMouseEvent*)event);
}

void q_wizard_qbase_mouse_double_click_event(void* self, void* event) {
    QWizard_QBaseMouseDoubleClickEvent((QWizard*)self, (QMouseEvent*)event);
}

void q_wizard_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnMouseDoubleClickEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_mouse_move_event(void* self, void* event) {
    QWizard_MouseMoveEvent((QWizard*)self, (QMouseEvent*)event);
}

void q_wizard_qbase_mouse_move_event(void* self, void* event) {
    QWizard_QBaseMouseMoveEvent((QWizard*)self, (QMouseEvent*)event);
}

void q_wizard_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnMouseMoveEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_wheel_event(void* self, void* event) {
    QWizard_WheelEvent((QWizard*)self, (QWheelEvent*)event);
}

void q_wizard_qbase_wheel_event(void* self, void* event) {
    QWizard_QBaseWheelEvent((QWizard*)self, (QWheelEvent*)event);
}

void q_wizard_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnWheelEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_key_release_event(void* self, void* event) {
    QWizard_KeyReleaseEvent((QWizard*)self, (QKeyEvent*)event);
}

void q_wizard_qbase_key_release_event(void* self, void* event) {
    QWizard_QBaseKeyReleaseEvent((QWizard*)self, (QKeyEvent*)event);
}

void q_wizard_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnKeyReleaseEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_focus_in_event(void* self, void* event) {
    QWizard_FocusInEvent((QWizard*)self, (QFocusEvent*)event);
}

void q_wizard_qbase_focus_in_event(void* self, void* event) {
    QWizard_QBaseFocusInEvent((QWizard*)self, (QFocusEvent*)event);
}

void q_wizard_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnFocusInEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_focus_out_event(void* self, void* event) {
    QWizard_FocusOutEvent((QWizard*)self, (QFocusEvent*)event);
}

void q_wizard_qbase_focus_out_event(void* self, void* event) {
    QWizard_QBaseFocusOutEvent((QWizard*)self, (QFocusEvent*)event);
}

void q_wizard_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnFocusOutEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_enter_event(void* self, void* event) {
    QWizard_EnterEvent((QWizard*)self, (QEnterEvent*)event);
}

void q_wizard_qbase_enter_event(void* self, void* event) {
    QWizard_QBaseEnterEvent((QWizard*)self, (QEnterEvent*)event);
}

void q_wizard_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnEnterEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_leave_event(void* self, void* event) {
    QWizard_LeaveEvent((QWizard*)self, (QEvent*)event);
}

void q_wizard_qbase_leave_event(void* self, void* event) {
    QWizard_QBaseLeaveEvent((QWizard*)self, (QEvent*)event);
}

void q_wizard_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnLeaveEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_move_event(void* self, void* event) {
    QWizard_MoveEvent((QWizard*)self, (QMoveEvent*)event);
}

void q_wizard_qbase_move_event(void* self, void* event) {
    QWizard_QBaseMoveEvent((QWizard*)self, (QMoveEvent*)event);
}

void q_wizard_on_move_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnMoveEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_tablet_event(void* self, void* event) {
    QWizard_TabletEvent((QWizard*)self, (QTabletEvent*)event);
}

void q_wizard_qbase_tablet_event(void* self, void* event) {
    QWizard_QBaseTabletEvent((QWizard*)self, (QTabletEvent*)event);
}

void q_wizard_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnTabletEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_action_event(void* self, void* event) {
    QWizard_ActionEvent((QWizard*)self, (QActionEvent*)event);
}

void q_wizard_qbase_action_event(void* self, void* event) {
    QWizard_QBaseActionEvent((QWizard*)self, (QActionEvent*)event);
}

void q_wizard_on_action_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnActionEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_drag_enter_event(void* self, void* event) {
    QWizard_DragEnterEvent((QWizard*)self, (QDragEnterEvent*)event);
}

void q_wizard_qbase_drag_enter_event(void* self, void* event) {
    QWizard_QBaseDragEnterEvent((QWizard*)self, (QDragEnterEvent*)event);
}

void q_wizard_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnDragEnterEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_drag_move_event(void* self, void* event) {
    QWizard_DragMoveEvent((QWizard*)self, (QDragMoveEvent*)event);
}

void q_wizard_qbase_drag_move_event(void* self, void* event) {
    QWizard_QBaseDragMoveEvent((QWizard*)self, (QDragMoveEvent*)event);
}

void q_wizard_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnDragMoveEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_drag_leave_event(void* self, void* event) {
    QWizard_DragLeaveEvent((QWizard*)self, (QDragLeaveEvent*)event);
}

void q_wizard_qbase_drag_leave_event(void* self, void* event) {
    QWizard_QBaseDragLeaveEvent((QWizard*)self, (QDragLeaveEvent*)event);
}

void q_wizard_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnDragLeaveEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_drop_event(void* self, void* event) {
    QWizard_DropEvent((QWizard*)self, (QDropEvent*)event);
}

void q_wizard_qbase_drop_event(void* self, void* event) {
    QWizard_QBaseDropEvent((QWizard*)self, (QDropEvent*)event);
}

void q_wizard_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnDropEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_hide_event(void* self, void* event) {
    QWizard_HideEvent((QWizard*)self, (QHideEvent*)event);
}

void q_wizard_qbase_hide_event(void* self, void* event) {
    QWizard_QBaseHideEvent((QWizard*)self, (QHideEvent*)event);
}

void q_wizard_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnHideEvent((QWizard*)self, (intptr_t)slot);
}

bool q_wizard_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWizard_NativeEvent((QWizard*)self, qstring(eventType), message, result);
}

bool q_wizard_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWizard_QBaseNativeEvent((QWizard*)self, qstring(eventType), message, result);
}

void q_wizard_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QWizard_OnNativeEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_change_event(void* self, void* param1) {
    QWizard_ChangeEvent((QWizard*)self, (QEvent*)param1);
}

void q_wizard_qbase_change_event(void* self, void* param1) {
    QWizard_QBaseChangeEvent((QWizard*)self, (QEvent*)param1);
}

void q_wizard_on_change_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnChangeEvent((QWizard*)self, (intptr_t)slot);
}

int32_t q_wizard_metric(void* self, int64_t param1) {
    return QWizard_Metric((QWizard*)self, param1);
}

int32_t q_wizard_qbase_metric(void* self, int64_t param1) {
    return QWizard_QBaseMetric((QWizard*)self, param1);
}

void q_wizard_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QWizard_OnMetric((QWizard*)self, (intptr_t)slot);
}

void q_wizard_init_painter(void* self, void* painter) {
    QWizard_InitPainter((QWizard*)self, (QPainter*)painter);
}

void q_wizard_qbase_init_painter(void* self, void* painter) {
    QWizard_QBaseInitPainter((QWizard*)self, (QPainter*)painter);
}

void q_wizard_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QWizard_OnInitPainter((QWizard*)self, (intptr_t)slot);
}

QPaintDevice* q_wizard_redirected(void* self, void* offset) {
    return QWizard_Redirected((QWizard*)self, (QPoint*)offset);
}

QPaintDevice* q_wizard_qbase_redirected(void* self, void* offset) {
    return QWizard_QBaseRedirected((QWizard*)self, (QPoint*)offset);
}

void q_wizard_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QWizard_OnRedirected((QWizard*)self, (intptr_t)slot);
}

QPainter* q_wizard_shared_painter(void* self) {
    return QWizard_SharedPainter((QWizard*)self);
}

QPainter* q_wizard_qbase_shared_painter(void* self) {
    return QWizard_QBaseSharedPainter((QWizard*)self);
}

void q_wizard_on_shared_painter(void* self, QPainter* (*slot)()) {
    QWizard_OnSharedPainter((QWizard*)self, (intptr_t)slot);
}

void q_wizard_input_method_event(void* self, void* param1) {
    QWizard_InputMethodEvent((QWizard*)self, (QInputMethodEvent*)param1);
}

void q_wizard_qbase_input_method_event(void* self, void* param1) {
    QWizard_QBaseInputMethodEvent((QWizard*)self, (QInputMethodEvent*)param1);
}

void q_wizard_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnInputMethodEvent((QWizard*)self, (intptr_t)slot);
}

QVariant* q_wizard_input_method_query(void* self, int64_t param1) {
    return QWizard_InputMethodQuery((QWizard*)self, param1);
}

QVariant* q_wizard_qbase_input_method_query(void* self, int64_t param1) {
    return QWizard_QBaseInputMethodQuery((QWizard*)self, param1);
}

void q_wizard_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QWizard_OnInputMethodQuery((QWizard*)self, (intptr_t)slot);
}

bool q_wizard_focus_next_prev_child(void* self, bool next) {
    return QWizard_FocusNextPrevChild((QWizard*)self, next);
}

bool q_wizard_qbase_focus_next_prev_child(void* self, bool next) {
    return QWizard_QBaseFocusNextPrevChild((QWizard*)self, next);
}

void q_wizard_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QWizard_OnFocusNextPrevChild((QWizard*)self, (intptr_t)slot);
}

void q_wizard_timer_event(void* self, void* event) {
    QWizard_TimerEvent((QWizard*)self, (QTimerEvent*)event);
}

void q_wizard_qbase_timer_event(void* self, void* event) {
    QWizard_QBaseTimerEvent((QWizard*)self, (QTimerEvent*)event);
}

void q_wizard_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnTimerEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_child_event(void* self, void* event) {
    QWizard_ChildEvent((QWizard*)self, (QChildEvent*)event);
}

void q_wizard_qbase_child_event(void* self, void* event) {
    QWizard_QBaseChildEvent((QWizard*)self, (QChildEvent*)event);
}

void q_wizard_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnChildEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_custom_event(void* self, void* event) {
    QWizard_CustomEvent((QWizard*)self, (QEvent*)event);
}

void q_wizard_qbase_custom_event(void* self, void* event) {
    QWizard_QBaseCustomEvent((QWizard*)self, (QEvent*)event);
}

void q_wizard_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWizard_OnCustomEvent((QWizard*)self, (intptr_t)slot);
}

void q_wizard_connect_notify(void* self, void* signal) {
    QWizard_ConnectNotify((QWizard*)self, (QMetaMethod*)signal);
}

void q_wizard_qbase_connect_notify(void* self, void* signal) {
    QWizard_QBaseConnectNotify((QWizard*)self, (QMetaMethod*)signal);
}

void q_wizard_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWizard_OnConnectNotify((QWizard*)self, (intptr_t)slot);
}

void q_wizard_disconnect_notify(void* self, void* signal) {
    QWizard_DisconnectNotify((QWizard*)self, (QMetaMethod*)signal);
}

void q_wizard_qbase_disconnect_notify(void* self, void* signal) {
    QWizard_QBaseDisconnectNotify((QWizard*)self, (QMetaMethod*)signal);
}

void q_wizard_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWizard_OnDisconnectNotify((QWizard*)self, (intptr_t)slot);
}

void q_wizard_adjust_position(void* self, void* param1) {
    QWizard_AdjustPosition((QWizard*)self, (QWidget*)param1);
}

void q_wizard_qbase_adjust_position(void* self, void* param1) {
    QWizard_QBaseAdjustPosition((QWizard*)self, (QWidget*)param1);
}

void q_wizard_on_adjust_position(void* self, void (*slot)(void*, void*)) {
    QWizard_OnAdjustPosition((QWizard*)self, (intptr_t)slot);
}

void q_wizard_update_micro_focus(void* self) {
    QWizard_UpdateMicroFocus((QWizard*)self);
}

void q_wizard_qbase_update_micro_focus(void* self) {
    QWizard_QBaseUpdateMicroFocus((QWizard*)self);
}

void q_wizard_on_update_micro_focus(void* self, void (*slot)()) {
    QWizard_OnUpdateMicroFocus((QWizard*)self, (intptr_t)slot);
}

void q_wizard_create(void* self) {
    QWizard_Create((QWizard*)self);
}

void q_wizard_qbase_create(void* self) {
    QWizard_QBaseCreate((QWizard*)self);
}

void q_wizard_on_create(void* self, void (*slot)()) {
    QWizard_OnCreate((QWizard*)self, (intptr_t)slot);
}

void q_wizard_destroy(void* self) {
    QWizard_Destroy((QWizard*)self);
}

void q_wizard_qbase_destroy(void* self) {
    QWizard_QBaseDestroy((QWizard*)self);
}

void q_wizard_on_destroy(void* self, void (*slot)()) {
    QWizard_OnDestroy((QWizard*)self, (intptr_t)slot);
}

bool q_wizard_focus_next_child(void* self) {
    return QWizard_FocusNextChild((QWizard*)self);
}

bool q_wizard_qbase_focus_next_child(void* self) {
    return QWizard_QBaseFocusNextChild((QWizard*)self);
}

void q_wizard_on_focus_next_child(void* self, bool (*slot)()) {
    QWizard_OnFocusNextChild((QWizard*)self, (intptr_t)slot);
}

bool q_wizard_focus_previous_child(void* self) {
    return QWizard_FocusPreviousChild((QWizard*)self);
}

bool q_wizard_qbase_focus_previous_child(void* self) {
    return QWizard_QBaseFocusPreviousChild((QWizard*)self);
}

void q_wizard_on_focus_previous_child(void* self, bool (*slot)()) {
    QWizard_OnFocusPreviousChild((QWizard*)self, (intptr_t)slot);
}

QObject* q_wizard_sender(void* self) {
    return QWizard_Sender((QWizard*)self);
}

QObject* q_wizard_qbase_sender(void* self) {
    return QWizard_QBaseSender((QWizard*)self);
}

void q_wizard_on_sender(void* self, QObject* (*slot)()) {
    QWizard_OnSender((QWizard*)self, (intptr_t)slot);
}

int32_t q_wizard_sender_signal_index(void* self) {
    return QWizard_SenderSignalIndex((QWizard*)self);
}

int32_t q_wizard_qbase_sender_signal_index(void* self) {
    return QWizard_QBaseSenderSignalIndex((QWizard*)self);
}

void q_wizard_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWizard_OnSenderSignalIndex((QWizard*)self, (intptr_t)slot);
}

int32_t q_wizard_receivers(void* self, const char* signal) {
    return QWizard_Receivers((QWizard*)self, signal);
}

int32_t q_wizard_qbase_receivers(void* self, const char* signal) {
    return QWizard_QBaseReceivers((QWizard*)self, signal);
}

void q_wizard_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWizard_OnReceivers((QWizard*)self, (intptr_t)slot);
}

bool q_wizard_is_signal_connected(void* self, void* signal) {
    return QWizard_IsSignalConnected((QWizard*)self, (QMetaMethod*)signal);
}

bool q_wizard_qbase_is_signal_connected(void* self, void* signal) {
    return QWizard_QBaseIsSignalConnected((QWizard*)self, (QMetaMethod*)signal);
}

void q_wizard_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWizard_OnIsSignalConnected((QWizard*)self, (intptr_t)slot);
}

double q_wizard_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QWizard_GetDecodedMetricF((QWizard*)self, metricA, metricB);
}

double q_wizard_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QWizard_QBaseGetDecodedMetricF((QWizard*)self, metricA, metricB);
}

void q_wizard_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QWizard_OnGetDecodedMetricF((QWizard*)self, (intptr_t)slot);
}

void q_wizard_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_wizard_delete(void* self) {
    QWizard_Delete((QWizard*)(self));
}

QWizardPage* q_wizardpage_new(void* parent) {
    return QWizardPage_new((QWidget*)parent);
}

QWizardPage* q_wizardpage_new2() {
    return QWizardPage_new2();
}

const QMetaObject* q_wizardpage_meta_object(void* self) {
    return QWizardPage_MetaObject((QWizardPage*)self);
}

void* q_wizardpage_metacast(void* self, const char* param1) {
    return QWizardPage_Metacast((QWizardPage*)self, param1);
}

int32_t q_wizardpage_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWizardPage_Metacall((QWizardPage*)self, param1, param2, param3);
}

void q_wizardpage_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWizardPage_OnMetacall((QWizardPage*)self, (intptr_t)slot);
}

int32_t q_wizardpage_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWizardPage_QBaseMetacall((QWizardPage*)self, param1, param2, param3);
}

const char* q_wizardpage_tr(const char* s) {
    libqt_string _str = QWizardPage_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_title(void* self, const char* title) {
    QWizardPage_SetTitle((QWizardPage*)self, qstring(title));
}

const char* q_wizardpage_title(void* self) {
    libqt_string _str = QWizardPage_Title((QWizardPage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_sub_title(void* self, const char* subTitle) {
    QWizardPage_SetSubTitle((QWizardPage*)self, qstring(subTitle));
}

const char* q_wizardpage_sub_title(void* self) {
    libqt_string _str = QWizardPage_SubTitle((QWizardPage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_pixmap(void* self, int64_t which, void* pixmap) {
    QWizardPage_SetPixmap((QWizardPage*)self, which, (QPixmap*)pixmap);
}

QPixmap* q_wizardpage_pixmap(void* self, int64_t which) {
    return QWizardPage_Pixmap((QWizardPage*)self, which);
}

void q_wizardpage_set_final_page(void* self, bool finalPage) {
    QWizardPage_SetFinalPage((QWizardPage*)self, finalPage);
}

bool q_wizardpage_is_final_page(void* self) {
    return QWizardPage_IsFinalPage((QWizardPage*)self);
}

void q_wizardpage_set_commit_page(void* self, bool commitPage) {
    QWizardPage_SetCommitPage((QWizardPage*)self, commitPage);
}

bool q_wizardpage_is_commit_page(void* self) {
    return QWizardPage_IsCommitPage((QWizardPage*)self);
}

void q_wizardpage_set_button_text(void* self, int64_t which, const char* text) {
    QWizardPage_SetButtonText((QWizardPage*)self, which, qstring(text));
}

const char* q_wizardpage_button_text(void* self, int64_t which) {
    libqt_string _str = QWizardPage_ButtonText((QWizardPage*)self, which);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_initialize_page(void* self) {
    QWizardPage_InitializePage((QWizardPage*)self);
}

void q_wizardpage_on_initialize_page(void* self, void (*slot)()) {
    QWizardPage_OnInitializePage((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_qbase_initialize_page(void* self) {
    QWizardPage_QBaseInitializePage((QWizardPage*)self);
}

void q_wizardpage_cleanup_page(void* self) {
    QWizardPage_CleanupPage((QWizardPage*)self);
}

void q_wizardpage_on_cleanup_page(void* self, void (*slot)()) {
    QWizardPage_OnCleanupPage((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_qbase_cleanup_page(void* self) {
    QWizardPage_QBaseCleanupPage((QWizardPage*)self);
}

bool q_wizardpage_validate_page(void* self) {
    return QWizardPage_ValidatePage((QWizardPage*)self);
}

void q_wizardpage_on_validate_page(void* self, bool (*slot)()) {
    QWizardPage_OnValidatePage((QWizardPage*)self, (intptr_t)slot);
}

bool q_wizardpage_qbase_validate_page(void* self) {
    return QWizardPage_QBaseValidatePage((QWizardPage*)self);
}

bool q_wizardpage_is_complete(void* self) {
    return QWizardPage_IsComplete((QWizardPage*)self);
}

void q_wizardpage_on_is_complete(void* self, bool (*slot)()) {
    QWizardPage_OnIsComplete((QWizardPage*)self, (intptr_t)slot);
}

bool q_wizardpage_qbase_is_complete(void* self) {
    return QWizardPage_QBaseIsComplete((QWizardPage*)self);
}

int32_t q_wizardpage_next_id(void* self) {
    return QWizardPage_NextId((QWizardPage*)self);
}

void q_wizardpage_on_next_id(void* self, int32_t (*slot)()) {
    QWizardPage_OnNextId((QWizardPage*)self, (intptr_t)slot);
}

int32_t q_wizardpage_qbase_next_id(void* self) {
    return QWizardPage_QBaseNextId((QWizardPage*)self);
}

void q_wizardpage_complete_changed(void* self) {
    QWizardPage_CompleteChanged((QWizardPage*)self);
}

void q_wizardpage_on_complete_changed(void* self, void (*slot)(void*)) {
    QWizardPage_Connect_CompleteChanged((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_set_field(void* self, const char* name, void* value) {
    QWizardPage_SetField((QWizardPage*)self, qstring(name), (QVariant*)value);
}

void q_wizardpage_on_set_field(void* self, void (*slot)(void*, const char*, void*)) {
    QWizardPage_OnSetField((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_qbase_set_field(void* self, const char* name, void* value) {
    QWizardPage_QBaseSetField((QWizardPage*)self, qstring(name), (QVariant*)value);
}

QVariant* q_wizardpage_field(void* self, const char* name) {
    return QWizardPage_Field((QWizardPage*)self, qstring(name));
}

void q_wizardpage_on_field(void* self, QVariant* (*slot)(void*, const char*)) {
    QWizardPage_OnField((QWizardPage*)self, (intptr_t)slot);
}

QVariant* q_wizardpage_qbase_field(void* self, const char* name) {
    return QWizardPage_QBaseField((QWizardPage*)self, qstring(name));
}

void q_wizardpage_register_field(void* self, const char* name, void* widget) {
    QWizardPage_RegisterField((QWizardPage*)self, qstring(name), (QWidget*)widget);
}

void q_wizardpage_on_register_field(void* self, void (*slot)(void*, const char*, void*)) {
    QWizardPage_OnRegisterField((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_qbase_register_field(void* self, const char* name, void* widget) {
    QWizardPage_QBaseRegisterField((QWizardPage*)self, qstring(name), (QWidget*)widget);
}

QWizard* q_wizardpage_wizard(void* self) {
    return QWizardPage_Wizard((QWizardPage*)self);
}

void q_wizardpage_on_wizard(void* self, QWizard* (*slot)()) {
    QWizardPage_OnWizard((QWizardPage*)self, (intptr_t)slot);
}

QWizard* q_wizardpage_qbase_wizard(void* self) {
    return QWizardPage_QBaseWizard((QWizardPage*)self);
}

const char* q_wizardpage_tr2(const char* s, const char* c) {
    libqt_string _str = QWizardPage_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_wizardpage_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWizardPage_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_register_field3(void* self, const char* name, void* widget, const char* property) {
    QWizardPage_RegisterField3((QWizardPage*)self, qstring(name), (QWidget*)widget, property);
}

void q_wizardpage_on_register_field3(void* self, void (*slot)(void*, const char*, void*, const char*)) {
    QWizardPage_OnRegisterField3((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_qbase_register_field3(void* self, const char* name, void* widget, const char* property) {
    QWizardPage_QBaseRegisterField3((QWizardPage*)self, qstring(name), (QWidget*)widget, property);
}

void q_wizardpage_register_field4(void* self, const char* name, void* widget, const char* property, const char* changedSignal) {
    QWizardPage_RegisterField4((QWizardPage*)self, qstring(name), (QWidget*)widget, property, changedSignal);
}

void q_wizardpage_on_register_field4(void* self, void (*slot)(void*, const char*, void*, const char*, const char*)) {
    QWizardPage_OnRegisterField4((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_qbase_register_field4(void* self, const char* name, void* widget, const char* property, const char* changedSignal) {
    QWizardPage_QBaseRegisterField4((QWizardPage*)self, qstring(name), (QWidget*)widget, property, changedSignal);
}

uintptr_t q_wizardpage_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_wizardpage_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_wizardpage_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_wizardpage_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_wizardpage_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_wizardpage_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_wizardpage_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_wizardpage_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_wizardpage_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_wizardpage_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_wizardpage_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_wizardpage_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_wizardpage_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_wizardpage_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_wizardpage_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_wizardpage_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_wizardpage_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_wizardpage_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_wizardpage_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_wizardpage_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_wizardpage_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_wizardpage_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_wizardpage_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_wizardpage_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_wizardpage_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_wizardpage_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_wizardpage_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_wizardpage_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_wizardpage_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_wizardpage_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_wizardpage_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_wizardpage_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_wizardpage_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_wizardpage_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_wizardpage_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_wizardpage_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_wizardpage_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_wizardpage_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_wizardpage_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_wizardpage_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_wizardpage_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_wizardpage_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_wizardpage_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_wizardpage_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_wizardpage_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_wizardpage_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_wizardpage_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_wizardpage_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_wizardpage_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_wizardpage_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_wizardpage_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_wizardpage_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_wizardpage_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_wizardpage_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_wizardpage_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_wizardpage_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_wizardpage_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_wizardpage_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_wizardpage_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_wizardpage_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_wizardpage_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_wizardpage_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_wizardpage_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_wizardpage_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_wizardpage_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_wizardpage_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_wizardpage_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_wizardpage_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_wizardpage_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_wizardpage_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_wizardpage_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_wizardpage_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_wizardpage_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_wizardpage_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_wizardpage_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_wizardpage_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_wizardpage_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_wizardpage_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_wizardpage_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_wizardpage_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_wizardpage_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_wizardpage_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_wizardpage_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_wizardpage_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_wizardpage_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_wizardpage_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_wizardpage_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_wizardpage_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_wizardpage_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_wizardpage_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_wizardpage_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_wizardpage_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_wizardpage_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_wizardpage_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_wizardpage_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_wizardpage_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_wizardpage_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_wizardpage_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_wizardpage_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_wizardpage_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_wizardpage_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_wizardpage_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_wizardpage_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_wizardpage_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_wizardpage_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_wizardpage_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_wizardpage_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_wizardpage_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_wizardpage_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_wizardpage_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_wizardpage_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_wizardpage_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_wizardpage_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_wizardpage_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_wizardpage_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_wizardpage_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_wizardpage_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_wizardpage_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_wizardpage_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_wizardpage_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_wizardpage_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_wizardpage_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_wizardpage_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_wizardpage_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_wizardpage_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_wizardpage_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_wizardpage_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_wizardpage_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_wizardpage_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_wizardpage_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_wizardpage_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_wizardpage_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_wizardpage_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_wizardpage_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_wizardpage_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_wizardpage_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_wizardpage_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_wizardpage_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_wizardpage_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_wizardpage_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_wizardpage_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_wizardpage_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_wizardpage_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_wizardpage_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_wizardpage_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_wizardpage_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_wizardpage_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_wizardpage_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_wizardpage_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_wizardpage_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_wizardpage_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_wizardpage_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_wizardpage_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_wizardpage_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_wizardpage_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_wizardpage_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_wizardpage_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_wizardpage_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_wizardpage_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_wizardpage_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_wizardpage_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_wizardpage_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_wizardpage_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_wizardpage_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_wizardpage_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_wizardpage_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_wizardpage_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_wizardpage_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_wizardpage_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_wizardpage_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_wizardpage_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_wizardpage_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_wizardpage_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_wizardpage_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_wizardpage_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_wizardpage_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_wizardpage_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_wizardpage_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_wizardpage_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_wizardpage_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_wizardpage_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_wizardpage_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_wizardpage_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_wizardpage_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_wizardpage_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_wizardpage_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_wizardpage_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_wizardpage_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_wizardpage_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_wizardpage_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_wizardpage_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_wizardpage_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_wizardpage_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_wizardpage_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_wizardpage_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_wizardpage_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_wizardpage_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_wizardpage_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_wizardpage_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_wizardpage_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_wizardpage_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_wizardpage_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_wizardpage_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_wizardpage_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_wizardpage_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_wizardpage_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_wizardpage_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_wizardpage_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_wizardpage_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_wizardpage_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_wizardpage_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_wizardpage_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_wizardpage_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_wizardpage_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_wizardpage_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_wizardpage_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_wizardpage_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_wizardpage_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_wizardpage_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_wizardpage_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_wizardpage_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_wizardpage_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_wizardpage_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_wizardpage_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_wizardpage_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_wizardpage_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_wizardpage_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_wizardpage_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_wizardpage_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_wizardpage_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_wizardpage_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_wizardpage_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_wizardpage_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_wizardpage_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_wizardpage_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_wizardpage_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_wizardpage_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_wizardpage_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_wizardpage_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_wizardpage_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_wizardpage_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_wizardpage_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_wizardpage_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_wizardpage_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_wizardpage_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_wizardpage_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_wizardpage_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_wizardpage_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_wizardpage_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_wizardpage_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_wizardpage_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_wizardpage_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_wizardpage_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_wizardpage_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_wizardpage_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_wizardpage_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_wizardpage_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_wizardpage_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_wizardpage_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_wizardpage_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_wizardpage_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_wizardpage_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_wizardpage_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_wizardpage_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_wizardpage_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_wizardpage_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_wizardpage_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_wizardpage_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_wizardpage_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_wizardpage_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_wizardpage_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_wizardpage_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_wizardpage_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_wizardpage_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_wizardpage_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_wizardpage_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_wizardpage_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_wizardpage_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_wizardpage_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_wizardpage_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_wizardpage_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_wizardpage_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_wizardpage_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_wizardpage_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_wizardpage_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_wizardpage_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_wizardpage_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_wizardpage_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_wizardpage_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_wizardpage_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_wizardpage_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_wizardpage_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_wizardpage_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_wizardpage_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_wizardpage_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_wizardpage_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_wizardpage_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_wizardpage_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_wizardpage_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_wizardpage_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_wizardpage_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_wizardpage_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_wizardpage_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_wizardpage_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_wizardpage_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_wizardpage_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_wizardpage_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_wizardpage_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_wizardpage_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_wizardpage_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_wizardpage_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_wizardpage_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_wizardpage_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_wizardpage_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_wizardpage_dev_type(void* self) {
    return QWizardPage_DevType((QWizardPage*)self);
}

int32_t q_wizardpage_qbase_dev_type(void* self) {
    return QWizardPage_QBaseDevType((QWizardPage*)self);
}

void q_wizardpage_on_dev_type(void* self, int32_t (*slot)()) {
    QWizardPage_OnDevType((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_set_visible(void* self, bool visible) {
    QWizardPage_SetVisible((QWizardPage*)self, visible);
}

void q_wizardpage_qbase_set_visible(void* self, bool visible) {
    QWizardPage_QBaseSetVisible((QWizardPage*)self, visible);
}

void q_wizardpage_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QWizardPage_OnSetVisible((QWizardPage*)self, (intptr_t)slot);
}

QSize* q_wizardpage_size_hint(void* self) {
    return QWizardPage_SizeHint((QWizardPage*)self);
}

QSize* q_wizardpage_qbase_size_hint(void* self) {
    return QWizardPage_QBaseSizeHint((QWizardPage*)self);
}

void q_wizardpage_on_size_hint(void* self, QSize* (*slot)()) {
    QWizardPage_OnSizeHint((QWizardPage*)self, (intptr_t)slot);
}

QSize* q_wizardpage_minimum_size_hint(void* self) {
    return QWizardPage_MinimumSizeHint((QWizardPage*)self);
}

QSize* q_wizardpage_qbase_minimum_size_hint(void* self) {
    return QWizardPage_QBaseMinimumSizeHint((QWizardPage*)self);
}

void q_wizardpage_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QWizardPage_OnMinimumSizeHint((QWizardPage*)self, (intptr_t)slot);
}

int32_t q_wizardpage_height_for_width(void* self, int param1) {
    return QWizardPage_HeightForWidth((QWizardPage*)self, param1);
}

int32_t q_wizardpage_qbase_height_for_width(void* self, int param1) {
    return QWizardPage_QBaseHeightForWidth((QWizardPage*)self, param1);
}

void q_wizardpage_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QWizardPage_OnHeightForWidth((QWizardPage*)self, (intptr_t)slot);
}

bool q_wizardpage_has_height_for_width(void* self) {
    return QWizardPage_HasHeightForWidth((QWizardPage*)self);
}

bool q_wizardpage_qbase_has_height_for_width(void* self) {
    return QWizardPage_QBaseHasHeightForWidth((QWizardPage*)self);
}

void q_wizardpage_on_has_height_for_width(void* self, bool (*slot)()) {
    QWizardPage_OnHasHeightForWidth((QWizardPage*)self, (intptr_t)slot);
}

QPaintEngine* q_wizardpage_paint_engine(void* self) {
    return QWizardPage_PaintEngine((QWizardPage*)self);
}

QPaintEngine* q_wizardpage_qbase_paint_engine(void* self) {
    return QWizardPage_QBasePaintEngine((QWizardPage*)self);
}

void q_wizardpage_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QWizardPage_OnPaintEngine((QWizardPage*)self, (intptr_t)slot);
}

bool q_wizardpage_event(void* self, void* event) {
    return QWizardPage_Event((QWizardPage*)self, (QEvent*)event);
}

bool q_wizardpage_qbase_event(void* self, void* event) {
    return QWizardPage_QBaseEvent((QWizardPage*)self, (QEvent*)event);
}

void q_wizardpage_on_event(void* self, bool (*slot)(void*, void*)) {
    QWizardPage_OnEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_mouse_press_event(void* self, void* event) {
    QWizardPage_MousePressEvent((QWizardPage*)self, (QMouseEvent*)event);
}

void q_wizardpage_qbase_mouse_press_event(void* self, void* event) {
    QWizardPage_QBaseMousePressEvent((QWizardPage*)self, (QMouseEvent*)event);
}

void q_wizardpage_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnMousePressEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_mouse_release_event(void* self, void* event) {
    QWizardPage_MouseReleaseEvent((QWizardPage*)self, (QMouseEvent*)event);
}

void q_wizardpage_qbase_mouse_release_event(void* self, void* event) {
    QWizardPage_QBaseMouseReleaseEvent((QWizardPage*)self, (QMouseEvent*)event);
}

void q_wizardpage_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnMouseReleaseEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_mouse_double_click_event(void* self, void* event) {
    QWizardPage_MouseDoubleClickEvent((QWizardPage*)self, (QMouseEvent*)event);
}

void q_wizardpage_qbase_mouse_double_click_event(void* self, void* event) {
    QWizardPage_QBaseMouseDoubleClickEvent((QWizardPage*)self, (QMouseEvent*)event);
}

void q_wizardpage_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnMouseDoubleClickEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_mouse_move_event(void* self, void* event) {
    QWizardPage_MouseMoveEvent((QWizardPage*)self, (QMouseEvent*)event);
}

void q_wizardpage_qbase_mouse_move_event(void* self, void* event) {
    QWizardPage_QBaseMouseMoveEvent((QWizardPage*)self, (QMouseEvent*)event);
}

void q_wizardpage_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnMouseMoveEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_wheel_event(void* self, void* event) {
    QWizardPage_WheelEvent((QWizardPage*)self, (QWheelEvent*)event);
}

void q_wizardpage_qbase_wheel_event(void* self, void* event) {
    QWizardPage_QBaseWheelEvent((QWizardPage*)self, (QWheelEvent*)event);
}

void q_wizardpage_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnWheelEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_key_press_event(void* self, void* event) {
    QWizardPage_KeyPressEvent((QWizardPage*)self, (QKeyEvent*)event);
}

void q_wizardpage_qbase_key_press_event(void* self, void* event) {
    QWizardPage_QBaseKeyPressEvent((QWizardPage*)self, (QKeyEvent*)event);
}

void q_wizardpage_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnKeyPressEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_key_release_event(void* self, void* event) {
    QWizardPage_KeyReleaseEvent((QWizardPage*)self, (QKeyEvent*)event);
}

void q_wizardpage_qbase_key_release_event(void* self, void* event) {
    QWizardPage_QBaseKeyReleaseEvent((QWizardPage*)self, (QKeyEvent*)event);
}

void q_wizardpage_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnKeyReleaseEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_focus_in_event(void* self, void* event) {
    QWizardPage_FocusInEvent((QWizardPage*)self, (QFocusEvent*)event);
}

void q_wizardpage_qbase_focus_in_event(void* self, void* event) {
    QWizardPage_QBaseFocusInEvent((QWizardPage*)self, (QFocusEvent*)event);
}

void q_wizardpage_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnFocusInEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_focus_out_event(void* self, void* event) {
    QWizardPage_FocusOutEvent((QWizardPage*)self, (QFocusEvent*)event);
}

void q_wizardpage_qbase_focus_out_event(void* self, void* event) {
    QWizardPage_QBaseFocusOutEvent((QWizardPage*)self, (QFocusEvent*)event);
}

void q_wizardpage_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnFocusOutEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_enter_event(void* self, void* event) {
    QWizardPage_EnterEvent((QWizardPage*)self, (QEnterEvent*)event);
}

void q_wizardpage_qbase_enter_event(void* self, void* event) {
    QWizardPage_QBaseEnterEvent((QWizardPage*)self, (QEnterEvent*)event);
}

void q_wizardpage_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnEnterEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_leave_event(void* self, void* event) {
    QWizardPage_LeaveEvent((QWizardPage*)self, (QEvent*)event);
}

void q_wizardpage_qbase_leave_event(void* self, void* event) {
    QWizardPage_QBaseLeaveEvent((QWizardPage*)self, (QEvent*)event);
}

void q_wizardpage_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnLeaveEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_paint_event(void* self, void* event) {
    QWizardPage_PaintEvent((QWizardPage*)self, (QPaintEvent*)event);
}

void q_wizardpage_qbase_paint_event(void* self, void* event) {
    QWizardPage_QBasePaintEvent((QWizardPage*)self, (QPaintEvent*)event);
}

void q_wizardpage_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnPaintEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_move_event(void* self, void* event) {
    QWizardPage_MoveEvent((QWizardPage*)self, (QMoveEvent*)event);
}

void q_wizardpage_qbase_move_event(void* self, void* event) {
    QWizardPage_QBaseMoveEvent((QWizardPage*)self, (QMoveEvent*)event);
}

void q_wizardpage_on_move_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnMoveEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_resize_event(void* self, void* event) {
    QWizardPage_ResizeEvent((QWizardPage*)self, (QResizeEvent*)event);
}

void q_wizardpage_qbase_resize_event(void* self, void* event) {
    QWizardPage_QBaseResizeEvent((QWizardPage*)self, (QResizeEvent*)event);
}

void q_wizardpage_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnResizeEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_close_event(void* self, void* event) {
    QWizardPage_CloseEvent((QWizardPage*)self, (QCloseEvent*)event);
}

void q_wizardpage_qbase_close_event(void* self, void* event) {
    QWizardPage_QBaseCloseEvent((QWizardPage*)self, (QCloseEvent*)event);
}

void q_wizardpage_on_close_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnCloseEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_context_menu_event(void* self, void* event) {
    QWizardPage_ContextMenuEvent((QWizardPage*)self, (QContextMenuEvent*)event);
}

void q_wizardpage_qbase_context_menu_event(void* self, void* event) {
    QWizardPage_QBaseContextMenuEvent((QWizardPage*)self, (QContextMenuEvent*)event);
}

void q_wizardpage_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnContextMenuEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_tablet_event(void* self, void* event) {
    QWizardPage_TabletEvent((QWizardPage*)self, (QTabletEvent*)event);
}

void q_wizardpage_qbase_tablet_event(void* self, void* event) {
    QWizardPage_QBaseTabletEvent((QWizardPage*)self, (QTabletEvent*)event);
}

void q_wizardpage_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnTabletEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_action_event(void* self, void* event) {
    QWizardPage_ActionEvent((QWizardPage*)self, (QActionEvent*)event);
}

void q_wizardpage_qbase_action_event(void* self, void* event) {
    QWizardPage_QBaseActionEvent((QWizardPage*)self, (QActionEvent*)event);
}

void q_wizardpage_on_action_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnActionEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_drag_enter_event(void* self, void* event) {
    QWizardPage_DragEnterEvent((QWizardPage*)self, (QDragEnterEvent*)event);
}

void q_wizardpage_qbase_drag_enter_event(void* self, void* event) {
    QWizardPage_QBaseDragEnterEvent((QWizardPage*)self, (QDragEnterEvent*)event);
}

void q_wizardpage_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnDragEnterEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_drag_move_event(void* self, void* event) {
    QWizardPage_DragMoveEvent((QWizardPage*)self, (QDragMoveEvent*)event);
}

void q_wizardpage_qbase_drag_move_event(void* self, void* event) {
    QWizardPage_QBaseDragMoveEvent((QWizardPage*)self, (QDragMoveEvent*)event);
}

void q_wizardpage_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnDragMoveEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_drag_leave_event(void* self, void* event) {
    QWizardPage_DragLeaveEvent((QWizardPage*)self, (QDragLeaveEvent*)event);
}

void q_wizardpage_qbase_drag_leave_event(void* self, void* event) {
    QWizardPage_QBaseDragLeaveEvent((QWizardPage*)self, (QDragLeaveEvent*)event);
}

void q_wizardpage_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnDragLeaveEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_drop_event(void* self, void* event) {
    QWizardPage_DropEvent((QWizardPage*)self, (QDropEvent*)event);
}

void q_wizardpage_qbase_drop_event(void* self, void* event) {
    QWizardPage_QBaseDropEvent((QWizardPage*)self, (QDropEvent*)event);
}

void q_wizardpage_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnDropEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_show_event(void* self, void* event) {
    QWizardPage_ShowEvent((QWizardPage*)self, (QShowEvent*)event);
}

void q_wizardpage_qbase_show_event(void* self, void* event) {
    QWizardPage_QBaseShowEvent((QWizardPage*)self, (QShowEvent*)event);
}

void q_wizardpage_on_show_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnShowEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_hide_event(void* self, void* event) {
    QWizardPage_HideEvent((QWizardPage*)self, (QHideEvent*)event);
}

void q_wizardpage_qbase_hide_event(void* self, void* event) {
    QWizardPage_QBaseHideEvent((QWizardPage*)self, (QHideEvent*)event);
}

void q_wizardpage_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnHideEvent((QWizardPage*)self, (intptr_t)slot);
}

bool q_wizardpage_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWizardPage_NativeEvent((QWizardPage*)self, qstring(eventType), message, result);
}

bool q_wizardpage_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QWizardPage_QBaseNativeEvent((QWizardPage*)self, qstring(eventType), message, result);
}

void q_wizardpage_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QWizardPage_OnNativeEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_change_event(void* self, void* param1) {
    QWizardPage_ChangeEvent((QWizardPage*)self, (QEvent*)param1);
}

void q_wizardpage_qbase_change_event(void* self, void* param1) {
    QWizardPage_QBaseChangeEvent((QWizardPage*)self, (QEvent*)param1);
}

void q_wizardpage_on_change_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnChangeEvent((QWizardPage*)self, (intptr_t)slot);
}

int32_t q_wizardpage_metric(void* self, int64_t param1) {
    return QWizardPage_Metric((QWizardPage*)self, param1);
}

int32_t q_wizardpage_qbase_metric(void* self, int64_t param1) {
    return QWizardPage_QBaseMetric((QWizardPage*)self, param1);
}

void q_wizardpage_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QWizardPage_OnMetric((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_init_painter(void* self, void* painter) {
    QWizardPage_InitPainter((QWizardPage*)self, (QPainter*)painter);
}

void q_wizardpage_qbase_init_painter(void* self, void* painter) {
    QWizardPage_QBaseInitPainter((QWizardPage*)self, (QPainter*)painter);
}

void q_wizardpage_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnInitPainter((QWizardPage*)self, (intptr_t)slot);
}

QPaintDevice* q_wizardpage_redirected(void* self, void* offset) {
    return QWizardPage_Redirected((QWizardPage*)self, (QPoint*)offset);
}

QPaintDevice* q_wizardpage_qbase_redirected(void* self, void* offset) {
    return QWizardPage_QBaseRedirected((QWizardPage*)self, (QPoint*)offset);
}

void q_wizardpage_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QWizardPage_OnRedirected((QWizardPage*)self, (intptr_t)slot);
}

QPainter* q_wizardpage_shared_painter(void* self) {
    return QWizardPage_SharedPainter((QWizardPage*)self);
}

QPainter* q_wizardpage_qbase_shared_painter(void* self) {
    return QWizardPage_QBaseSharedPainter((QWizardPage*)self);
}

void q_wizardpage_on_shared_painter(void* self, QPainter* (*slot)()) {
    QWizardPage_OnSharedPainter((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_input_method_event(void* self, void* param1) {
    QWizardPage_InputMethodEvent((QWizardPage*)self, (QInputMethodEvent*)param1);
}

void q_wizardpage_qbase_input_method_event(void* self, void* param1) {
    QWizardPage_QBaseInputMethodEvent((QWizardPage*)self, (QInputMethodEvent*)param1);
}

void q_wizardpage_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnInputMethodEvent((QWizardPage*)self, (intptr_t)slot);
}

QVariant* q_wizardpage_input_method_query(void* self, int64_t param1) {
    return QWizardPage_InputMethodQuery((QWizardPage*)self, param1);
}

QVariant* q_wizardpage_qbase_input_method_query(void* self, int64_t param1) {
    return QWizardPage_QBaseInputMethodQuery((QWizardPage*)self, param1);
}

void q_wizardpage_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QWizardPage_OnInputMethodQuery((QWizardPage*)self, (intptr_t)slot);
}

bool q_wizardpage_focus_next_prev_child(void* self, bool next) {
    return QWizardPage_FocusNextPrevChild((QWizardPage*)self, next);
}

bool q_wizardpage_qbase_focus_next_prev_child(void* self, bool next) {
    return QWizardPage_QBaseFocusNextPrevChild((QWizardPage*)self, next);
}

void q_wizardpage_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QWizardPage_OnFocusNextPrevChild((QWizardPage*)self, (intptr_t)slot);
}

bool q_wizardpage_event_filter(void* self, void* watched, void* event) {
    return QWizardPage_EventFilter((QWizardPage*)self, (QObject*)watched, (QEvent*)event);
}

bool q_wizardpage_qbase_event_filter(void* self, void* watched, void* event) {
    return QWizardPage_QBaseEventFilter((QWizardPage*)self, (QObject*)watched, (QEvent*)event);
}

void q_wizardpage_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWizardPage_OnEventFilter((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_timer_event(void* self, void* event) {
    QWizardPage_TimerEvent((QWizardPage*)self, (QTimerEvent*)event);
}

void q_wizardpage_qbase_timer_event(void* self, void* event) {
    QWizardPage_QBaseTimerEvent((QWizardPage*)self, (QTimerEvent*)event);
}

void q_wizardpage_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnTimerEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_child_event(void* self, void* event) {
    QWizardPage_ChildEvent((QWizardPage*)self, (QChildEvent*)event);
}

void q_wizardpage_qbase_child_event(void* self, void* event) {
    QWizardPage_QBaseChildEvent((QWizardPage*)self, (QChildEvent*)event);
}

void q_wizardpage_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnChildEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_custom_event(void* self, void* event) {
    QWizardPage_CustomEvent((QWizardPage*)self, (QEvent*)event);
}

void q_wizardpage_qbase_custom_event(void* self, void* event) {
    QWizardPage_QBaseCustomEvent((QWizardPage*)self, (QEvent*)event);
}

void q_wizardpage_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnCustomEvent((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_connect_notify(void* self, void* signal) {
    QWizardPage_ConnectNotify((QWizardPage*)self, (QMetaMethod*)signal);
}

void q_wizardpage_qbase_connect_notify(void* self, void* signal) {
    QWizardPage_QBaseConnectNotify((QWizardPage*)self, (QMetaMethod*)signal);
}

void q_wizardpage_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnConnectNotify((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_disconnect_notify(void* self, void* signal) {
    QWizardPage_DisconnectNotify((QWizardPage*)self, (QMetaMethod*)signal);
}

void q_wizardpage_qbase_disconnect_notify(void* self, void* signal) {
    QWizardPage_QBaseDisconnectNotify((QWizardPage*)self, (QMetaMethod*)signal);
}

void q_wizardpage_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWizardPage_OnDisconnectNotify((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_update_micro_focus(void* self) {
    QWizardPage_UpdateMicroFocus((QWizardPage*)self);
}

void q_wizardpage_qbase_update_micro_focus(void* self) {
    QWizardPage_QBaseUpdateMicroFocus((QWizardPage*)self);
}

void q_wizardpage_on_update_micro_focus(void* self, void (*slot)()) {
    QWizardPage_OnUpdateMicroFocus((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_create(void* self) {
    QWizardPage_Create((QWizardPage*)self);
}

void q_wizardpage_qbase_create(void* self) {
    QWizardPage_QBaseCreate((QWizardPage*)self);
}

void q_wizardpage_on_create(void* self, void (*slot)()) {
    QWizardPage_OnCreate((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_destroy(void* self) {
    QWizardPage_Destroy((QWizardPage*)self);
}

void q_wizardpage_qbase_destroy(void* self) {
    QWizardPage_QBaseDestroy((QWizardPage*)self);
}

void q_wizardpage_on_destroy(void* self, void (*slot)()) {
    QWizardPage_OnDestroy((QWizardPage*)self, (intptr_t)slot);
}

bool q_wizardpage_focus_next_child(void* self) {
    return QWizardPage_FocusNextChild((QWizardPage*)self);
}

bool q_wizardpage_qbase_focus_next_child(void* self) {
    return QWizardPage_QBaseFocusNextChild((QWizardPage*)self);
}

void q_wizardpage_on_focus_next_child(void* self, bool (*slot)()) {
    QWizardPage_OnFocusNextChild((QWizardPage*)self, (intptr_t)slot);
}

bool q_wizardpage_focus_previous_child(void* self) {
    return QWizardPage_FocusPreviousChild((QWizardPage*)self);
}

bool q_wizardpage_qbase_focus_previous_child(void* self) {
    return QWizardPage_QBaseFocusPreviousChild((QWizardPage*)self);
}

void q_wizardpage_on_focus_previous_child(void* self, bool (*slot)()) {
    QWizardPage_OnFocusPreviousChild((QWizardPage*)self, (intptr_t)slot);
}

QObject* q_wizardpage_sender(void* self) {
    return QWizardPage_Sender((QWizardPage*)self);
}

QObject* q_wizardpage_qbase_sender(void* self) {
    return QWizardPage_QBaseSender((QWizardPage*)self);
}

void q_wizardpage_on_sender(void* self, QObject* (*slot)()) {
    QWizardPage_OnSender((QWizardPage*)self, (intptr_t)slot);
}

int32_t q_wizardpage_sender_signal_index(void* self) {
    return QWizardPage_SenderSignalIndex((QWizardPage*)self);
}

int32_t q_wizardpage_qbase_sender_signal_index(void* self) {
    return QWizardPage_QBaseSenderSignalIndex((QWizardPage*)self);
}

void q_wizardpage_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWizardPage_OnSenderSignalIndex((QWizardPage*)self, (intptr_t)slot);
}

int32_t q_wizardpage_receivers(void* self, const char* signal) {
    return QWizardPage_Receivers((QWizardPage*)self, signal);
}

int32_t q_wizardpage_qbase_receivers(void* self, const char* signal) {
    return QWizardPage_QBaseReceivers((QWizardPage*)self, signal);
}

void q_wizardpage_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWizardPage_OnReceivers((QWizardPage*)self, (intptr_t)slot);
}

bool q_wizardpage_is_signal_connected(void* self, void* signal) {
    return QWizardPage_IsSignalConnected((QWizardPage*)self, (QMetaMethod*)signal);
}

bool q_wizardpage_qbase_is_signal_connected(void* self, void* signal) {
    return QWizardPage_QBaseIsSignalConnected((QWizardPage*)self, (QMetaMethod*)signal);
}

void q_wizardpage_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWizardPage_OnIsSignalConnected((QWizardPage*)self, (intptr_t)slot);
}

double q_wizardpage_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QWizardPage_GetDecodedMetricF((QWizardPage*)self, metricA, metricB);
}

double q_wizardpage_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QWizardPage_QBaseGetDecodedMetricF((QWizardPage*)self, metricA, metricB);
}

void q_wizardpage_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QWizardPage_OnGetDecodedMetricF((QWizardPage*)self, (intptr_t)slot);
}

void q_wizardpage_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_wizardpage_delete(void* self) {
    QWizardPage_Delete((QWizardPage*)(self));
}
