#include "libkpagewidget.hpp"
#include "libkpagewidgetmodel.hpp"
#include "../libqabstractbutton.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
#include "../libqdialogbuttonbox.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqpushbutton.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkpagedialog.hpp"
#include "libkpagedialog.h"

KPageDialog* k_pagedialog_new(void* parent) {
    return KPageDialog_new((QWidget*)parent);
}

KPageDialog* k_pagedialog_new2() {
    return KPageDialog_new2();
}

KPageDialog* k_pagedialog_new3(void* parent, int64_t flags) {
    return KPageDialog_new3((QWidget*)parent, flags);
}

const QMetaObject* k_pagedialog_meta_object(void* self) {
    return KPageDialog_MetaObject((KPageDialog*)self);
}

void* k_pagedialog_metacast(void* self, const char* param1) {
    return KPageDialog_Metacast((KPageDialog*)self, param1);
}

int32_t k_pagedialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageDialog_Metacall((KPageDialog*)self, param1, param2, param3);
}

void k_pagedialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPageDialog_OnMetacall((KPageDialog*)self, (intptr_t)callback);
}

int32_t k_pagedialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageDialog_QBaseMetacall((KPageDialog*)self, param1, param2, param3);
}

const char* k_pagedialog_tr(const char* s) {
    libqt_string _str = KPageDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagedialog_set_face_type(void* self, int32_t faceType) {
    KPageDialog_SetFaceType((KPageDialog*)self, faceType);
}

KPageWidgetItem* k_pagedialog_add_page(void* self, void* widget, const char* name) {
    return KPageDialog_AddPage((KPageDialog*)self, (QWidget*)widget, qstring(name));
}

void k_pagedialog_add_page2(void* self, void* item) {
    KPageDialog_AddPage2((KPageDialog*)self, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_pagedialog_insert_page(void* self, void* before, void* widget, const char* name) {
    return KPageDialog_InsertPage((KPageDialog*)self, (KPageWidgetItem*)before, (QWidget*)widget, qstring(name));
}

void k_pagedialog_insert_page2(void* self, void* before, void* item) {
    KPageDialog_InsertPage2((KPageDialog*)self, (KPageWidgetItem*)before, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_pagedialog_add_sub_page(void* self, void* parent, void* widget, const char* name) {
    return KPageDialog_AddSubPage((KPageDialog*)self, (KPageWidgetItem*)parent, (QWidget*)widget, qstring(name));
}

void k_pagedialog_add_sub_page2(void* self, void* parent, void* item) {
    KPageDialog_AddSubPage2((KPageDialog*)self, (KPageWidgetItem*)parent, (KPageWidgetItem*)item);
}

void k_pagedialog_remove_page(void* self, void* item) {
    KPageDialog_RemovePage((KPageDialog*)self, (KPageWidgetItem*)item);
}

void k_pagedialog_set_current_page(void* self, void* item) {
    KPageDialog_SetCurrentPage((KPageDialog*)self, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_pagedialog_current_page(void* self) {
    return KPageDialog_CurrentPage((KPageDialog*)self);
}

void k_pagedialog_set_standard_buttons(void* self, int32_t buttons) {
    KPageDialog_SetStandardButtons((KPageDialog*)self, buttons);
}

QPushButton* k_pagedialog_button(void* self, int32_t which) {
    return KPageDialog_Button((KPageDialog*)self, which);
}

void k_pagedialog_add_action_button(void* self, void* button) {
    KPageDialog_AddActionButton((KPageDialog*)self, (QAbstractButton*)button);
}

void k_pagedialog_current_page_changed(void* self, void* current, void* before) {
    KPageDialog_CurrentPageChanged((KPageDialog*)self, (KPageWidgetItem*)current, (KPageWidgetItem*)before);
}

void k_pagedialog_on_current_page_changed(void* self, void (*callback)(void*, void*, void*)) {
    KPageDialog_Connect_CurrentPageChanged((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_page_removed(void* self, void* page) {
    KPageDialog_PageRemoved((KPageDialog*)self, (KPageWidgetItem*)page);
}

void k_pagedialog_on_page_removed(void* self, void (*callback)(void*, void*)) {
    KPageDialog_Connect_PageRemoved((KPageDialog*)self, (intptr_t)callback);
}

KPageWidget* k_pagedialog_page_widget(void* self) {
    return KPageDialog_PageWidget((KPageDialog*)self);
}

void k_pagedialog_on_page_widget(void* self, KPageWidget* (*callback)()) {
    KPageDialog_OnPageWidget((KPageDialog*)self, (intptr_t)callback);
}

KPageWidget* k_pagedialog_qbase_page_widget(void* self) {
    return KPageDialog_QBasePageWidget((KPageDialog*)self);
}

const KPageWidget* k_pagedialog_page_widget2(void* self) {
    return KPageDialog_PageWidget2((KPageDialog*)self);
}

void k_pagedialog_on_page_widget2(void* self, const KPageWidget* (*callback)()) {
    KPageDialog_OnPageWidget2((KPageDialog*)self, (intptr_t)callback);
}

const KPageWidget* k_pagedialog_qbase_page_widget2(void* self) {
    return KPageDialog_QBasePageWidget2((KPageDialog*)self);
}

void k_pagedialog_set_page_widget(void* self, void* widget) {
    KPageDialog_SetPageWidget((KPageDialog*)self, (KPageWidget*)widget);
}

void k_pagedialog_on_set_page_widget(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnSetPageWidget((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_qbase_set_page_widget(void* self, void* widget) {
    KPageDialog_QBaseSetPageWidget((KPageDialog*)self, (KPageWidget*)widget);
}

QDialogButtonBox* k_pagedialog_button_box(void* self) {
    return KPageDialog_ButtonBox((KPageDialog*)self);
}

void k_pagedialog_on_button_box(void* self, QDialogButtonBox* (*callback)()) {
    KPageDialog_OnButtonBox((KPageDialog*)self, (intptr_t)callback);
}

QDialogButtonBox* k_pagedialog_qbase_button_box(void* self) {
    return KPageDialog_QBaseButtonBox((KPageDialog*)self);
}

const QDialogButtonBox* k_pagedialog_button_box2(void* self) {
    return KPageDialog_ButtonBox2((KPageDialog*)self);
}

void k_pagedialog_on_button_box2(void* self, const QDialogButtonBox* (*callback)()) {
    KPageDialog_OnButtonBox2((KPageDialog*)self, (intptr_t)callback);
}

const QDialogButtonBox* k_pagedialog_qbase_button_box2(void* self) {
    return KPageDialog_QBaseButtonBox2((KPageDialog*)self);
}

void k_pagedialog_set_button_box(void* self, void* box) {
    KPageDialog_SetButtonBox((KPageDialog*)self, (QDialogButtonBox*)box);
}

void k_pagedialog_on_set_button_box(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnSetButtonBox((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_qbase_set_button_box(void* self, void* box) {
    KPageDialog_QBaseSetButtonBox((KPageDialog*)self, (QDialogButtonBox*)box);
}

const char* k_pagedialog_tr2(const char* s, const char* c) {
    libqt_string _str = KPageDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pagedialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KPageDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_pagedialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_pagedialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_pagedialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_pagedialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_pagedialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_pagedialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_pagedialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_pagedialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_pagedialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_pagedialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_pagedialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_pagedialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_pagedialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_pagedialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_pagedialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_pagedialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_pagedialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_pagedialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_pagedialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_pagedialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_pagedialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_pagedialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_pagedialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_pagedialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_pagedialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_pagedialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_pagedialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_pagedialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_pagedialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_pagedialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_pagedialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_pagedialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_pagedialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_pagedialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_pagedialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_pagedialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_pagedialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_pagedialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_pagedialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_pagedialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_pagedialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_pagedialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_pagedialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_pagedialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_pagedialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_pagedialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_pagedialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_pagedialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_pagedialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_pagedialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_pagedialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_pagedialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_pagedialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_pagedialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_pagedialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_pagedialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_pagedialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_pagedialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_pagedialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_pagedialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_pagedialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_pagedialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_pagedialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_pagedialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_pagedialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pagedialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pagedialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pagedialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pagedialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pagedialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pagedialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pagedialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pagedialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pagedialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_pagedialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pagedialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_pagedialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_pagedialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_pagedialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_pagedialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_pagedialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_pagedialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_pagedialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_pagedialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_pagedialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_pagedialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_pagedialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_pagedialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_pagedialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_pagedialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_pagedialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_pagedialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_pagedialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_pagedialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_pagedialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_pagedialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_pagedialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_pagedialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_pagedialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_pagedialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_pagedialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_pagedialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_pagedialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_pagedialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_pagedialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_pagedialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_pagedialog_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_pagedialog_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_pagedialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_pagedialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_pagedialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pagedialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagedialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_pagedialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_pagedialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_pagedialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagedialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_pagedialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagedialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_pagedialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagedialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_pagedialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_pagedialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_pagedialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_pagedialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagedialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_pagedialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_pagedialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_pagedialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagedialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_pagedialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pagedialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagedialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_pagedialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagedialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_pagedialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_pagedialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_pagedialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_pagedialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_pagedialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_pagedialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_pagedialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_pagedialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_pagedialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_pagedialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_pagedialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_pagedialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_pagedialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_pagedialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_pagedialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_pagedialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_pagedialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_pagedialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_pagedialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_pagedialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_pagedialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_pagedialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_pagedialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_pagedialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_pagedialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_pagedialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_pagedialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_pagedialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_pagedialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_pagedialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_pagedialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_pagedialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_pagedialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_pagedialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_pagedialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_pagedialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_pagedialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_pagedialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_pagedialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_pagedialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_pagedialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_pagedialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_pagedialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_pagedialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_pagedialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_pagedialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_pagedialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_pagedialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_pagedialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_pagedialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_pagedialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_pagedialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_pagedialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_pagedialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_pagedialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_pagedialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_pagedialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_pagedialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_pagedialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_pagedialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_pagedialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_pagedialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_pagedialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_pagedialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_pagedialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_pagedialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_pagedialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_pagedialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_pagedialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_pagedialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_pagedialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_pagedialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_pagedialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_pagedialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_pagedialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_pagedialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_pagedialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_pagedialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_pagedialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_pagedialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_pagedialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_pagedialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_pagedialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_pagedialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_pagedialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_pagedialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_pagedialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_pagedialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_pagedialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_pagedialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_pagedialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_pagedialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_pagedialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_pagedialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_pagedialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_pagedialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_pagedialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_pagedialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_pagedialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_pagedialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_pagedialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_pagedialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_pagedialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_pagedialog_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_pagedialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_pagedialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_pagedialog_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_pagedialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_pagedialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_pagedialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_pagedialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_pagedialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_pagedialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_pagedialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_pagedialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_pagedialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_pagedialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_pagedialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_pagedialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_pagedialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_pagedialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_pagedialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_pagedialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_pagedialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_pagedialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_pagedialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_pagedialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_pagedialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_pagedialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_pagedialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_pagedialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_pagedialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_pagedialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_pagedialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_pagedialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pagedialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_pagedialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_pagedialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pagedialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_pagedialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_pagedialog_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_pagedialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_pagedialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_pagedialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_pagedialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_pagedialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_pagedialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_pagedialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_pagedialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagedialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_pagedialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_pagedialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_pagedialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_pagedialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_pagedialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_pagedialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_pagedialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_pagedialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_pagedialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_pagedialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_pagedialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_pagedialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_pagedialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_pagedialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_pagedialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_pagedialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_pagedialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_pagedialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_pagedialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_pagedialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_pagedialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_pagedialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_pagedialog_dynamic_property_names");
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

QBindingStorage* k_pagedialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_pagedialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_pagedialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_pagedialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_pagedialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_pagedialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_pagedialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_pagedialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_pagedialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_pagedialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_pagedialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_pagedialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_pagedialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_pagedialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_pagedialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_pagedialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_pagedialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_pagedialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_pagedialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_pagedialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_pagedialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_pagedialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_pagedialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_pagedialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_pagedialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_pagedialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_pagedialog_set_visible(void* self, bool visible) {
    KPageDialog_SetVisible((KPageDialog*)self, visible);
}

void k_pagedialog_qbase_set_visible(void* self, bool visible) {
    KPageDialog_QBaseSetVisible((KPageDialog*)self, visible);
}

void k_pagedialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KPageDialog_OnSetVisible((KPageDialog*)self, (intptr_t)callback);
}

QSize* k_pagedialog_size_hint(void* self) {
    return KPageDialog_SizeHint((KPageDialog*)self);
}

QSize* k_pagedialog_qbase_size_hint(void* self) {
    return KPageDialog_QBaseSizeHint((KPageDialog*)self);
}

void k_pagedialog_on_size_hint(void* self, QSize* (*callback)()) {
    KPageDialog_OnSizeHint((KPageDialog*)self, (intptr_t)callback);
}

QSize* k_pagedialog_minimum_size_hint(void* self) {
    return KPageDialog_MinimumSizeHint((KPageDialog*)self);
}

QSize* k_pagedialog_qbase_minimum_size_hint(void* self) {
    return KPageDialog_QBaseMinimumSizeHint((KPageDialog*)self);
}

void k_pagedialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KPageDialog_OnMinimumSizeHint((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_open(void* self) {
    KPageDialog_Open((KPageDialog*)self);
}

void k_pagedialog_qbase_open(void* self) {
    KPageDialog_QBaseOpen((KPageDialog*)self);
}

void k_pagedialog_on_open(void* self, void (*callback)()) {
    KPageDialog_OnOpen((KPageDialog*)self, (intptr_t)callback);
}

int32_t k_pagedialog_exec(void* self) {
    return KPageDialog_Exec((KPageDialog*)self);
}

int32_t k_pagedialog_qbase_exec(void* self) {
    return KPageDialog_QBaseExec((KPageDialog*)self);
}

void k_pagedialog_on_exec(void* self, int32_t (*callback)()) {
    KPageDialog_OnExec((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_done(void* self, int param1) {
    KPageDialog_Done((KPageDialog*)self, param1);
}

void k_pagedialog_qbase_done(void* self, int param1) {
    KPageDialog_QBaseDone((KPageDialog*)self, param1);
}

void k_pagedialog_on_done(void* self, void (*callback)(void*, int)) {
    KPageDialog_OnDone((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_accept(void* self) {
    KPageDialog_Accept((KPageDialog*)self);
}

void k_pagedialog_qbase_accept(void* self) {
    KPageDialog_QBaseAccept((KPageDialog*)self);
}

void k_pagedialog_on_accept(void* self, void (*callback)()) {
    KPageDialog_OnAccept((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_reject(void* self) {
    KPageDialog_Reject((KPageDialog*)self);
}

void k_pagedialog_qbase_reject(void* self) {
    KPageDialog_QBaseReject((KPageDialog*)self);
}

void k_pagedialog_on_reject(void* self, void (*callback)()) {
    KPageDialog_OnReject((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_key_press_event(void* self, void* param1) {
    KPageDialog_KeyPressEvent((KPageDialog*)self, (QKeyEvent*)param1);
}

void k_pagedialog_qbase_key_press_event(void* self, void* param1) {
    KPageDialog_QBaseKeyPressEvent((KPageDialog*)self, (QKeyEvent*)param1);
}

void k_pagedialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnKeyPressEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_close_event(void* self, void* param1) {
    KPageDialog_CloseEvent((KPageDialog*)self, (QCloseEvent*)param1);
}

void k_pagedialog_qbase_close_event(void* self, void* param1) {
    KPageDialog_QBaseCloseEvent((KPageDialog*)self, (QCloseEvent*)param1);
}

void k_pagedialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnCloseEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_show_event(void* self, void* param1) {
    KPageDialog_ShowEvent((KPageDialog*)self, (QShowEvent*)param1);
}

void k_pagedialog_qbase_show_event(void* self, void* param1) {
    KPageDialog_QBaseShowEvent((KPageDialog*)self, (QShowEvent*)param1);
}

void k_pagedialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnShowEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_resize_event(void* self, void* param1) {
    KPageDialog_ResizeEvent((KPageDialog*)self, (QResizeEvent*)param1);
}

void k_pagedialog_qbase_resize_event(void* self, void* param1) {
    KPageDialog_QBaseResizeEvent((KPageDialog*)self, (QResizeEvent*)param1);
}

void k_pagedialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnResizeEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_context_menu_event(void* self, void* param1) {
    KPageDialog_ContextMenuEvent((KPageDialog*)self, (QContextMenuEvent*)param1);
}

void k_pagedialog_qbase_context_menu_event(void* self, void* param1) {
    KPageDialog_QBaseContextMenuEvent((KPageDialog*)self, (QContextMenuEvent*)param1);
}

void k_pagedialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnContextMenuEvent((KPageDialog*)self, (intptr_t)callback);
}

bool k_pagedialog_event_filter(void* self, void* param1, void* param2) {
    return KPageDialog_EventFilter((KPageDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_pagedialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KPageDialog_QBaseEventFilter((KPageDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_pagedialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPageDialog_OnEventFilter((KPageDialog*)self, (intptr_t)callback);
}

int32_t k_pagedialog_dev_type(void* self) {
    return KPageDialog_DevType((KPageDialog*)self);
}

int32_t k_pagedialog_qbase_dev_type(void* self) {
    return KPageDialog_QBaseDevType((KPageDialog*)self);
}

void k_pagedialog_on_dev_type(void* self, int32_t (*callback)()) {
    KPageDialog_OnDevType((KPageDialog*)self, (intptr_t)callback);
}

int32_t k_pagedialog_height_for_width(void* self, int param1) {
    return KPageDialog_HeightForWidth((KPageDialog*)self, param1);
}

int32_t k_pagedialog_qbase_height_for_width(void* self, int param1) {
    return KPageDialog_QBaseHeightForWidth((KPageDialog*)self, param1);
}

void k_pagedialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KPageDialog_OnHeightForWidth((KPageDialog*)self, (intptr_t)callback);
}

bool k_pagedialog_has_height_for_width(void* self) {
    return KPageDialog_HasHeightForWidth((KPageDialog*)self);
}

bool k_pagedialog_qbase_has_height_for_width(void* self) {
    return KPageDialog_QBaseHasHeightForWidth((KPageDialog*)self);
}

void k_pagedialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KPageDialog_OnHasHeightForWidth((KPageDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_pagedialog_paint_engine(void* self) {
    return KPageDialog_PaintEngine((KPageDialog*)self);
}

QPaintEngine* k_pagedialog_qbase_paint_engine(void* self) {
    return KPageDialog_QBasePaintEngine((KPageDialog*)self);
}

void k_pagedialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KPageDialog_OnPaintEngine((KPageDialog*)self, (intptr_t)callback);
}

bool k_pagedialog_event(void* self, void* event) {
    return KPageDialog_Event((KPageDialog*)self, (QEvent*)event);
}

bool k_pagedialog_qbase_event(void* self, void* event) {
    return KPageDialog_QBaseEvent((KPageDialog*)self, (QEvent*)event);
}

void k_pagedialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KPageDialog_OnEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_mouse_press_event(void* self, void* event) {
    KPageDialog_MousePressEvent((KPageDialog*)self, (QMouseEvent*)event);
}

void k_pagedialog_qbase_mouse_press_event(void* self, void* event) {
    KPageDialog_QBaseMousePressEvent((KPageDialog*)self, (QMouseEvent*)event);
}

void k_pagedialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnMousePressEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_mouse_release_event(void* self, void* event) {
    KPageDialog_MouseReleaseEvent((KPageDialog*)self, (QMouseEvent*)event);
}

void k_pagedialog_qbase_mouse_release_event(void* self, void* event) {
    KPageDialog_QBaseMouseReleaseEvent((KPageDialog*)self, (QMouseEvent*)event);
}

void k_pagedialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnMouseReleaseEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_mouse_double_click_event(void* self, void* event) {
    KPageDialog_MouseDoubleClickEvent((KPageDialog*)self, (QMouseEvent*)event);
}

void k_pagedialog_qbase_mouse_double_click_event(void* self, void* event) {
    KPageDialog_QBaseMouseDoubleClickEvent((KPageDialog*)self, (QMouseEvent*)event);
}

void k_pagedialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnMouseDoubleClickEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_mouse_move_event(void* self, void* event) {
    KPageDialog_MouseMoveEvent((KPageDialog*)self, (QMouseEvent*)event);
}

void k_pagedialog_qbase_mouse_move_event(void* self, void* event) {
    KPageDialog_QBaseMouseMoveEvent((KPageDialog*)self, (QMouseEvent*)event);
}

void k_pagedialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnMouseMoveEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_wheel_event(void* self, void* event) {
    KPageDialog_WheelEvent((KPageDialog*)self, (QWheelEvent*)event);
}

void k_pagedialog_qbase_wheel_event(void* self, void* event) {
    KPageDialog_QBaseWheelEvent((KPageDialog*)self, (QWheelEvent*)event);
}

void k_pagedialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnWheelEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_key_release_event(void* self, void* event) {
    KPageDialog_KeyReleaseEvent((KPageDialog*)self, (QKeyEvent*)event);
}

void k_pagedialog_qbase_key_release_event(void* self, void* event) {
    KPageDialog_QBaseKeyReleaseEvent((KPageDialog*)self, (QKeyEvent*)event);
}

void k_pagedialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnKeyReleaseEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_focus_in_event(void* self, void* event) {
    KPageDialog_FocusInEvent((KPageDialog*)self, (QFocusEvent*)event);
}

void k_pagedialog_qbase_focus_in_event(void* self, void* event) {
    KPageDialog_QBaseFocusInEvent((KPageDialog*)self, (QFocusEvent*)event);
}

void k_pagedialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnFocusInEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_focus_out_event(void* self, void* event) {
    KPageDialog_FocusOutEvent((KPageDialog*)self, (QFocusEvent*)event);
}

void k_pagedialog_qbase_focus_out_event(void* self, void* event) {
    KPageDialog_QBaseFocusOutEvent((KPageDialog*)self, (QFocusEvent*)event);
}

void k_pagedialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnFocusOutEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_enter_event(void* self, void* event) {
    KPageDialog_EnterEvent((KPageDialog*)self, (QEnterEvent*)event);
}

void k_pagedialog_qbase_enter_event(void* self, void* event) {
    KPageDialog_QBaseEnterEvent((KPageDialog*)self, (QEnterEvent*)event);
}

void k_pagedialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnEnterEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_leave_event(void* self, void* event) {
    KPageDialog_LeaveEvent((KPageDialog*)self, (QEvent*)event);
}

void k_pagedialog_qbase_leave_event(void* self, void* event) {
    KPageDialog_QBaseLeaveEvent((KPageDialog*)self, (QEvent*)event);
}

void k_pagedialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnLeaveEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_paint_event(void* self, void* event) {
    KPageDialog_PaintEvent((KPageDialog*)self, (QPaintEvent*)event);
}

void k_pagedialog_qbase_paint_event(void* self, void* event) {
    KPageDialog_QBasePaintEvent((KPageDialog*)self, (QPaintEvent*)event);
}

void k_pagedialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnPaintEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_move_event(void* self, void* event) {
    KPageDialog_MoveEvent((KPageDialog*)self, (QMoveEvent*)event);
}

void k_pagedialog_qbase_move_event(void* self, void* event) {
    KPageDialog_QBaseMoveEvent((KPageDialog*)self, (QMoveEvent*)event);
}

void k_pagedialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnMoveEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_tablet_event(void* self, void* event) {
    KPageDialog_TabletEvent((KPageDialog*)self, (QTabletEvent*)event);
}

void k_pagedialog_qbase_tablet_event(void* self, void* event) {
    KPageDialog_QBaseTabletEvent((KPageDialog*)self, (QTabletEvent*)event);
}

void k_pagedialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnTabletEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_action_event(void* self, void* event) {
    KPageDialog_ActionEvent((KPageDialog*)self, (QActionEvent*)event);
}

void k_pagedialog_qbase_action_event(void* self, void* event) {
    KPageDialog_QBaseActionEvent((KPageDialog*)self, (QActionEvent*)event);
}

void k_pagedialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnActionEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_drag_enter_event(void* self, void* event) {
    KPageDialog_DragEnterEvent((KPageDialog*)self, (QDragEnterEvent*)event);
}

void k_pagedialog_qbase_drag_enter_event(void* self, void* event) {
    KPageDialog_QBaseDragEnterEvent((KPageDialog*)self, (QDragEnterEvent*)event);
}

void k_pagedialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnDragEnterEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_drag_move_event(void* self, void* event) {
    KPageDialog_DragMoveEvent((KPageDialog*)self, (QDragMoveEvent*)event);
}

void k_pagedialog_qbase_drag_move_event(void* self, void* event) {
    KPageDialog_QBaseDragMoveEvent((KPageDialog*)self, (QDragMoveEvent*)event);
}

void k_pagedialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnDragMoveEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_drag_leave_event(void* self, void* event) {
    KPageDialog_DragLeaveEvent((KPageDialog*)self, (QDragLeaveEvent*)event);
}

void k_pagedialog_qbase_drag_leave_event(void* self, void* event) {
    KPageDialog_QBaseDragLeaveEvent((KPageDialog*)self, (QDragLeaveEvent*)event);
}

void k_pagedialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnDragLeaveEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_drop_event(void* self, void* event) {
    KPageDialog_DropEvent((KPageDialog*)self, (QDropEvent*)event);
}

void k_pagedialog_qbase_drop_event(void* self, void* event) {
    KPageDialog_QBaseDropEvent((KPageDialog*)self, (QDropEvent*)event);
}

void k_pagedialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnDropEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_hide_event(void* self, void* event) {
    KPageDialog_HideEvent((KPageDialog*)self, (QHideEvent*)event);
}

void k_pagedialog_qbase_hide_event(void* self, void* event) {
    KPageDialog_QBaseHideEvent((KPageDialog*)self, (QHideEvent*)event);
}

void k_pagedialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnHideEvent((KPageDialog*)self, (intptr_t)callback);
}

bool k_pagedialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPageDialog_NativeEvent((KPageDialog*)self, qstring(eventType), message, result);
}

bool k_pagedialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPageDialog_QBaseNativeEvent((KPageDialog*)self, qstring(eventType), message, result);
}

void k_pagedialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KPageDialog_OnNativeEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_change_event(void* self, void* param1) {
    KPageDialog_ChangeEvent((KPageDialog*)self, (QEvent*)param1);
}

void k_pagedialog_qbase_change_event(void* self, void* param1) {
    KPageDialog_QBaseChangeEvent((KPageDialog*)self, (QEvent*)param1);
}

void k_pagedialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnChangeEvent((KPageDialog*)self, (intptr_t)callback);
}

int32_t k_pagedialog_metric(void* self, int32_t param1) {
    return KPageDialog_Metric((KPageDialog*)self, param1);
}

int32_t k_pagedialog_qbase_metric(void* self, int32_t param1) {
    return KPageDialog_QBaseMetric((KPageDialog*)self, param1);
}

void k_pagedialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KPageDialog_OnMetric((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_init_painter(void* self, void* painter) {
    KPageDialog_InitPainter((KPageDialog*)self, (QPainter*)painter);
}

void k_pagedialog_qbase_init_painter(void* self, void* painter) {
    KPageDialog_QBaseInitPainter((KPageDialog*)self, (QPainter*)painter);
}

void k_pagedialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnInitPainter((KPageDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_pagedialog_redirected(void* self, void* offset) {
    return KPageDialog_Redirected((KPageDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_pagedialog_qbase_redirected(void* self, void* offset) {
    return KPageDialog_QBaseRedirected((KPageDialog*)self, (QPoint*)offset);
}

void k_pagedialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KPageDialog_OnRedirected((KPageDialog*)self, (intptr_t)callback);
}

QPainter* k_pagedialog_shared_painter(void* self) {
    return KPageDialog_SharedPainter((KPageDialog*)self);
}

QPainter* k_pagedialog_qbase_shared_painter(void* self) {
    return KPageDialog_QBaseSharedPainter((KPageDialog*)self);
}

void k_pagedialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KPageDialog_OnSharedPainter((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_input_method_event(void* self, void* param1) {
    KPageDialog_InputMethodEvent((KPageDialog*)self, (QInputMethodEvent*)param1);
}

void k_pagedialog_qbase_input_method_event(void* self, void* param1) {
    KPageDialog_QBaseInputMethodEvent((KPageDialog*)self, (QInputMethodEvent*)param1);
}

void k_pagedialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnInputMethodEvent((KPageDialog*)self, (intptr_t)callback);
}

QVariant* k_pagedialog_input_method_query(void* self, int64_t param1) {
    return KPageDialog_InputMethodQuery((KPageDialog*)self, param1);
}

QVariant* k_pagedialog_qbase_input_method_query(void* self, int64_t param1) {
    return KPageDialog_QBaseInputMethodQuery((KPageDialog*)self, param1);
}

void k_pagedialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KPageDialog_OnInputMethodQuery((KPageDialog*)self, (intptr_t)callback);
}

bool k_pagedialog_focus_next_prev_child(void* self, bool next) {
    return KPageDialog_FocusNextPrevChild((KPageDialog*)self, next);
}

bool k_pagedialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KPageDialog_QBaseFocusNextPrevChild((KPageDialog*)self, next);
}

void k_pagedialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KPageDialog_OnFocusNextPrevChild((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_timer_event(void* self, void* event) {
    KPageDialog_TimerEvent((KPageDialog*)self, (QTimerEvent*)event);
}

void k_pagedialog_qbase_timer_event(void* self, void* event) {
    KPageDialog_QBaseTimerEvent((KPageDialog*)self, (QTimerEvent*)event);
}

void k_pagedialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnTimerEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_child_event(void* self, void* event) {
    KPageDialog_ChildEvent((KPageDialog*)self, (QChildEvent*)event);
}

void k_pagedialog_qbase_child_event(void* self, void* event) {
    KPageDialog_QBaseChildEvent((KPageDialog*)self, (QChildEvent*)event);
}

void k_pagedialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnChildEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_custom_event(void* self, void* event) {
    KPageDialog_CustomEvent((KPageDialog*)self, (QEvent*)event);
}

void k_pagedialog_qbase_custom_event(void* self, void* event) {
    KPageDialog_QBaseCustomEvent((KPageDialog*)self, (QEvent*)event);
}

void k_pagedialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnCustomEvent((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_connect_notify(void* self, void* signal) {
    KPageDialog_ConnectNotify((KPageDialog*)self, (QMetaMethod*)signal);
}

void k_pagedialog_qbase_connect_notify(void* self, void* signal) {
    KPageDialog_QBaseConnectNotify((KPageDialog*)self, (QMetaMethod*)signal);
}

void k_pagedialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnConnectNotify((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_disconnect_notify(void* self, void* signal) {
    KPageDialog_DisconnectNotify((KPageDialog*)self, (QMetaMethod*)signal);
}

void k_pagedialog_qbase_disconnect_notify(void* self, void* signal) {
    KPageDialog_QBaseDisconnectNotify((KPageDialog*)self, (QMetaMethod*)signal);
}

void k_pagedialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnDisconnectNotify((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_adjust_position(void* self, void* param1) {
    KPageDialog_AdjustPosition((KPageDialog*)self, (QWidget*)param1);
}

void k_pagedialog_qbase_adjust_position(void* self, void* param1) {
    KPageDialog_QBaseAdjustPosition((KPageDialog*)self, (QWidget*)param1);
}

void k_pagedialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KPageDialog_OnAdjustPosition((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_update_micro_focus(void* self) {
    KPageDialog_UpdateMicroFocus((KPageDialog*)self);
}

void k_pagedialog_qbase_update_micro_focus(void* self) {
    KPageDialog_QBaseUpdateMicroFocus((KPageDialog*)self);
}

void k_pagedialog_on_update_micro_focus(void* self, void (*callback)()) {
    KPageDialog_OnUpdateMicroFocus((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_create(void* self) {
    KPageDialog_Create((KPageDialog*)self);
}

void k_pagedialog_qbase_create(void* self) {
    KPageDialog_QBaseCreate((KPageDialog*)self);
}

void k_pagedialog_on_create(void* self, void (*callback)()) {
    KPageDialog_OnCreate((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_destroy(void* self) {
    KPageDialog_Destroy((KPageDialog*)self);
}

void k_pagedialog_qbase_destroy(void* self) {
    KPageDialog_QBaseDestroy((KPageDialog*)self);
}

void k_pagedialog_on_destroy(void* self, void (*callback)()) {
    KPageDialog_OnDestroy((KPageDialog*)self, (intptr_t)callback);
}

bool k_pagedialog_focus_next_child(void* self) {
    return KPageDialog_FocusNextChild((KPageDialog*)self);
}

bool k_pagedialog_qbase_focus_next_child(void* self) {
    return KPageDialog_QBaseFocusNextChild((KPageDialog*)self);
}

void k_pagedialog_on_focus_next_child(void* self, bool (*callback)()) {
    KPageDialog_OnFocusNextChild((KPageDialog*)self, (intptr_t)callback);
}

bool k_pagedialog_focus_previous_child(void* self) {
    return KPageDialog_FocusPreviousChild((KPageDialog*)self);
}

bool k_pagedialog_qbase_focus_previous_child(void* self) {
    return KPageDialog_QBaseFocusPreviousChild((KPageDialog*)self);
}

void k_pagedialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KPageDialog_OnFocusPreviousChild((KPageDialog*)self, (intptr_t)callback);
}

QObject* k_pagedialog_sender(void* self) {
    return KPageDialog_Sender((KPageDialog*)self);
}

QObject* k_pagedialog_qbase_sender(void* self) {
    return KPageDialog_QBaseSender((KPageDialog*)self);
}

void k_pagedialog_on_sender(void* self, QObject* (*callback)()) {
    KPageDialog_OnSender((KPageDialog*)self, (intptr_t)callback);
}

int32_t k_pagedialog_sender_signal_index(void* self) {
    return KPageDialog_SenderSignalIndex((KPageDialog*)self);
}

int32_t k_pagedialog_qbase_sender_signal_index(void* self) {
    return KPageDialog_QBaseSenderSignalIndex((KPageDialog*)self);
}

void k_pagedialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPageDialog_OnSenderSignalIndex((KPageDialog*)self, (intptr_t)callback);
}

int32_t k_pagedialog_receivers(void* self, const char* signal) {
    return KPageDialog_Receivers((KPageDialog*)self, signal);
}

int32_t k_pagedialog_qbase_receivers(void* self, const char* signal) {
    return KPageDialog_QBaseReceivers((KPageDialog*)self, signal);
}

void k_pagedialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPageDialog_OnReceivers((KPageDialog*)self, (intptr_t)callback);
}

bool k_pagedialog_is_signal_connected(void* self, void* signal) {
    return KPageDialog_IsSignalConnected((KPageDialog*)self, (QMetaMethod*)signal);
}

bool k_pagedialog_qbase_is_signal_connected(void* self, void* signal) {
    return KPageDialog_QBaseIsSignalConnected((KPageDialog*)self, (QMetaMethod*)signal);
}

void k_pagedialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPageDialog_OnIsSignalConnected((KPageDialog*)self, (intptr_t)callback);
}

double k_pagedialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPageDialog_GetDecodedMetricF((KPageDialog*)self, metricA, metricB);
}

double k_pagedialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPageDialog_QBaseGetDecodedMetricF((KPageDialog*)self, metricA, metricB);
}

void k_pagedialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KPageDialog_OnGetDecodedMetricF((KPageDialog*)self, (intptr_t)callback);
}

void k_pagedialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_pagedialog_delete(void* self) {
    KPageDialog_Delete((KPageDialog*)(self));
}
