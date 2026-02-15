#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkicondialog.hpp"
#include "libkicondialog.h"

KIconDialog* k_icondialog_new(void* parent) {
    return KIconDialog_new((QWidget*)parent);
}

KIconDialog* k_icondialog_new2() {
    return KIconDialog_new2();
}

const QMetaObject* k_icondialog_meta_object(void* self) {
    return KIconDialog_MetaObject((KIconDialog*)self);
}

void k_icondialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KIconDialog_OnMetaObject((KIconDialog*)self, (intptr_t)callback);
}

const QMetaObject* k_icondialog_qbase_meta_object(void* self) {
    return KIconDialog_QBaseMetaObject((KIconDialog*)self);
}

void* k_icondialog_metacast(void* self, const char* param1) {
    return KIconDialog_Metacast((KIconDialog*)self, param1);
}

void k_icondialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KIconDialog_OnMetacast((KIconDialog*)self, (intptr_t)callback);
}

void* k_icondialog_qbase_metacast(void* self, const char* param1) {
    return KIconDialog_QBaseMetacast((KIconDialog*)self, param1);
}

int32_t k_icondialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIconDialog_Metacall((KIconDialog*)self, param1, param2, param3);
}

void k_icondialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIconDialog_OnMetacall((KIconDialog*)self, (intptr_t)callback);
}

int32_t k_icondialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIconDialog_QBaseMetacall((KIconDialog*)self, param1, param2, param3);
}

const char* k_icondialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_set_strict_icon_size(void* self, bool policy) {
    KIconDialog_SetStrictIconSize((KIconDialog*)self, policy);
}

bool k_icondialog_strict_icon_size(void* self) {
    return KIconDialog_StrictIconSize((KIconDialog*)self);
}

void k_icondialog_set_custom_location(void* self, const char* location) {
    KIconDialog_SetCustomLocation((KIconDialog*)self, qstring(location));
}

void k_icondialog_set_icon_size(void* self, int size) {
    KIconDialog_SetIconSize((KIconDialog*)self, size);
}

int32_t k_icondialog_icon_size(void* self) {
    return KIconDialog_IconSize((KIconDialog*)self);
}

void k_icondialog_set_selected_icon(void* self, const char* iconName) {
    KIconDialog_SetSelectedIcon((KIconDialog*)self, qstring(iconName));
}

void k_icondialog_setup(void* self, int32_t group) {
    KIconDialog_Setup((KIconDialog*)self, group);
}

const char* k_icondialog_open_dialog(void* self) {
    libqt_string _str = KIconDialog_OpenDialog((KIconDialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_show_dialog(void* self) {
    KIconDialog_ShowDialog((KIconDialog*)self);
}

const char* k_icondialog_get_icon() {
    libqt_string _str = KIconDialog_GetIcon();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_new_icon_name(void* self, const char* iconName) {
    KIconDialog_NewIconName((KIconDialog*)self, qstring(iconName));
}

void k_icondialog_on_new_icon_name(void* self, void (*callback)(void*, const char*)) {
    KIconDialog_Connect_NewIconName((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_show_event(void* self, void* event) {
    KIconDialog_ShowEvent((KIconDialog*)self, (QShowEvent*)event);
}

void k_icondialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnShowEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_qbase_show_event(void* self, void* event) {
    KIconDialog_QBaseShowEvent((KIconDialog*)self, (QShowEvent*)event);
}

void k_icondialog_slot_ok(void* self) {
    KIconDialog_SlotOk((KIconDialog*)self);
}

void k_icondialog_on_slot_ok(void* self, void (*callback)()) {
    KIconDialog_OnSlotOk((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_qbase_slot_ok(void* self) {
    KIconDialog_QBaseSlotOk((KIconDialog*)self);
}

const char* k_icondialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icondialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_setup2(void* self, int32_t group, int32_t context) {
    KIconDialog_Setup2((KIconDialog*)self, group, context);
}

void k_icondialog_setup3(void* self, int32_t group, int32_t context, bool strictIconSize) {
    KIconDialog_Setup3((KIconDialog*)self, group, context, strictIconSize);
}

void k_icondialog_setup4(void* self, int32_t group, int32_t context, bool strictIconSize, int iconSize) {
    KIconDialog_Setup4((KIconDialog*)self, group, context, strictIconSize, iconSize);
}

void k_icondialog_setup5(void* self, int32_t group, int32_t context, bool strictIconSize, int iconSize, bool user) {
    KIconDialog_Setup5((KIconDialog*)self, group, context, strictIconSize, iconSize, user);
}

void k_icondialog_setup6(void* self, int32_t group, int32_t context, bool strictIconSize, int iconSize, bool user, bool lockUser) {
    KIconDialog_Setup6((KIconDialog*)self, group, context, strictIconSize, iconSize, user, lockUser);
}

void k_icondialog_setup7(void* self, int32_t group, int32_t context, bool strictIconSize, int iconSize, bool user, bool lockUser, bool lockCustomDir) {
    KIconDialog_Setup7((KIconDialog*)self, group, context, strictIconSize, iconSize, user, lockUser, lockCustomDir);
}

const char* k_icondialog_get_icon1(int32_t group) {
    libqt_string _str = KIconDialog_GetIcon1(group);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icondialog_get_icon2(int32_t group, int32_t context) {
    libqt_string _str = KIconDialog_GetIcon2(group, context);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icondialog_get_icon3(int32_t group, int32_t context, bool strictIconSize) {
    libqt_string _str = KIconDialog_GetIcon3(group, context, strictIconSize);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icondialog_get_icon4(int32_t group, int32_t context, bool strictIconSize, int iconSize) {
    libqt_string _str = KIconDialog_GetIcon4(group, context, strictIconSize, iconSize);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icondialog_get_icon5(int32_t group, int32_t context, bool strictIconSize, int iconSize, bool user) {
    libqt_string _str = KIconDialog_GetIcon5(group, context, strictIconSize, iconSize, user);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icondialog_get_icon6(int32_t group, int32_t context, bool strictIconSize, int iconSize, bool user, void* parent) {
    libqt_string _str = KIconDialog_GetIcon6(group, context, strictIconSize, iconSize, user, (QWidget*)parent);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icondialog_get_icon7(int32_t group, int32_t context, bool strictIconSize, int iconSize, bool user, void* parent, const char* title) {
    libqt_string _str = KIconDialog_GetIcon7(group, context, strictIconSize, iconSize, user, (QWidget*)parent, qstring(title));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_icondialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_icondialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_icondialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_icondialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_icondialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_icondialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_icondialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_icondialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_icondialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_icondialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_icondialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_icondialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_icondialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_icondialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_icondialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_icondialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_icondialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_icondialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_icondialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_icondialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_icondialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_icondialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_icondialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_icondialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_icondialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_icondialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_icondialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_icondialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_icondialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_icondialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_icondialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_icondialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_icondialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_icondialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_icondialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_icondialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_icondialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_icondialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_icondialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_icondialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_icondialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_icondialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_icondialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_icondialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_icondialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_icondialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_icondialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_icondialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_icondialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_icondialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_icondialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_icondialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_icondialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_icondialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_icondialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_icondialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_icondialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_icondialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_icondialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_icondialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_icondialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_icondialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_icondialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_icondialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_icondialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_icondialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_icondialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_icondialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_icondialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_icondialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_icondialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_icondialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_icondialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_icondialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_icondialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_icondialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_icondialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_icondialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_icondialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_icondialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_icondialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_icondialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_icondialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_icondialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_icondialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_icondialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_icondialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_icondialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_icondialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_icondialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_icondialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_icondialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_icondialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_icondialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_icondialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_icondialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_icondialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_icondialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_icondialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_icondialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_icondialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_icondialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_icondialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_icondialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_icondialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_icondialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_icondialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_icondialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_icondialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_icondialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_icondialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icondialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_icondialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_icondialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_icondialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_icondialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_icondialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_icondialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_icondialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_icondialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_icondialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_icondialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_icondialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_icondialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_icondialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icondialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_icondialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_icondialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_icondialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_icondialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_icondialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_icondialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_icondialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_icondialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_icondialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_icondialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_icondialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_icondialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_icondialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_icondialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_icondialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_icondialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_icondialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_icondialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_icondialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_icondialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_icondialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_icondialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_icondialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_icondialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_icondialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_icondialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_icondialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_icondialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_icondialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_icondialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_icondialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_icondialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_icondialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_icondialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_icondialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_icondialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_icondialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_icondialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_icondialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_icondialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_icondialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_icondialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_icondialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_icondialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_icondialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_icondialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_icondialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_icondialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_icondialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_icondialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_icondialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_icondialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_icondialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_icondialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_icondialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_icondialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_icondialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_icondialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_icondialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_icondialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_icondialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_icondialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_icondialog_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_icondialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_icondialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_icondialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_icondialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_icondialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_icondialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_icondialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_icondialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_icondialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_icondialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_icondialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_icondialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_icondialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_icondialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_icondialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_icondialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_icondialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_icondialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_icondialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_icondialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_icondialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_icondialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_icondialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_icondialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_icondialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_icondialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_icondialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_icondialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_icondialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_icondialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_icondialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_icondialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_icondialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_icondialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_icondialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_icondialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_icondialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_icondialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_icondialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_icondialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_icondialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_icondialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_icondialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_icondialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_icondialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_icondialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_icondialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_icondialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_icondialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_icondialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_icondialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_icondialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_icondialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_icondialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_icondialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_icondialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_icondialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_icondialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_icondialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_icondialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_icondialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_icondialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_icondialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_icondialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_icondialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_icondialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_icondialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_icondialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_icondialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_icondialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_icondialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_icondialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_icondialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_icondialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_icondialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_icondialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_icondialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_icondialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_icondialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_icondialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_icondialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_icondialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_icondialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_icondialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_icondialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_icondialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_icondialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icondialog_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_icondialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_icondialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_icondialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_icondialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_icondialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_icondialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_icondialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_icondialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_icondialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_icondialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_icondialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_icondialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_icondialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_icondialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_icondialog_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_icondialog_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_icondialog_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_icondialog_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_icondialog_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_icondialog_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_icondialog_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_icondialog_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_icondialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_icondialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_icondialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_icondialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_icondialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_icondialog_dynamic_property_names\n");
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

QBindingStorage* k_icondialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_icondialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_icondialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_icondialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_icondialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_icondialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_icondialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_icondialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_icondialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_icondialog_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_icondialog_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_icondialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_icondialog_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_icondialog_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_icondialog_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_icondialog_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_icondialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_icondialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_icondialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_icondialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_icondialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_icondialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_icondialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_icondialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_icondialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_icondialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_icondialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_icondialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_icondialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_icondialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_icondialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_icondialog_set_visible(void* self, bool visible) {
    KIconDialog_SetVisible((KIconDialog*)self, visible);
}

void k_icondialog_qbase_set_visible(void* self, bool visible) {
    KIconDialog_QBaseSetVisible((KIconDialog*)self, visible);
}

void k_icondialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KIconDialog_OnSetVisible((KIconDialog*)self, (intptr_t)callback);
}

QSize* k_icondialog_size_hint(void* self) {
    return KIconDialog_SizeHint((KIconDialog*)self);
}

QSize* k_icondialog_qbase_size_hint(void* self) {
    return KIconDialog_QBaseSizeHint((KIconDialog*)self);
}

void k_icondialog_on_size_hint(void* self, QSize* (*callback)()) {
    KIconDialog_OnSizeHint((KIconDialog*)self, (intptr_t)callback);
}

QSize* k_icondialog_minimum_size_hint(void* self) {
    return KIconDialog_MinimumSizeHint((KIconDialog*)self);
}

QSize* k_icondialog_qbase_minimum_size_hint(void* self) {
    return KIconDialog_QBaseMinimumSizeHint((KIconDialog*)self);
}

void k_icondialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KIconDialog_OnMinimumSizeHint((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_open(void* self) {
    KIconDialog_Open((KIconDialog*)self);
}

void k_icondialog_qbase_open(void* self) {
    KIconDialog_QBaseOpen((KIconDialog*)self);
}

void k_icondialog_on_open(void* self, void (*callback)()) {
    KIconDialog_OnOpen((KIconDialog*)self, (intptr_t)callback);
}

int32_t k_icondialog_exec(void* self) {
    return KIconDialog_Exec((KIconDialog*)self);
}

int32_t k_icondialog_qbase_exec(void* self) {
    return KIconDialog_QBaseExec((KIconDialog*)self);
}

void k_icondialog_on_exec(void* self, int32_t (*callback)()) {
    KIconDialog_OnExec((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_done(void* self, int param1) {
    KIconDialog_Done((KIconDialog*)self, param1);
}

void k_icondialog_qbase_done(void* self, int param1) {
    KIconDialog_QBaseDone((KIconDialog*)self, param1);
}

void k_icondialog_on_done(void* self, void (*callback)(void*, int)) {
    KIconDialog_OnDone((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_accept(void* self) {
    KIconDialog_Accept((KIconDialog*)self);
}

void k_icondialog_qbase_accept(void* self) {
    KIconDialog_QBaseAccept((KIconDialog*)self);
}

void k_icondialog_on_accept(void* self, void (*callback)()) {
    KIconDialog_OnAccept((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_reject(void* self) {
    KIconDialog_Reject((KIconDialog*)self);
}

void k_icondialog_qbase_reject(void* self) {
    KIconDialog_QBaseReject((KIconDialog*)self);
}

void k_icondialog_on_reject(void* self, void (*callback)()) {
    KIconDialog_OnReject((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_key_press_event(void* self, void* param1) {
    KIconDialog_KeyPressEvent((KIconDialog*)self, (QKeyEvent*)param1);
}

void k_icondialog_qbase_key_press_event(void* self, void* param1) {
    KIconDialog_QBaseKeyPressEvent((KIconDialog*)self, (QKeyEvent*)param1);
}

void k_icondialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnKeyPressEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_close_event(void* self, void* param1) {
    KIconDialog_CloseEvent((KIconDialog*)self, (QCloseEvent*)param1);
}

void k_icondialog_qbase_close_event(void* self, void* param1) {
    KIconDialog_QBaseCloseEvent((KIconDialog*)self, (QCloseEvent*)param1);
}

void k_icondialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnCloseEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_resize_event(void* self, void* param1) {
    KIconDialog_ResizeEvent((KIconDialog*)self, (QResizeEvent*)param1);
}

void k_icondialog_qbase_resize_event(void* self, void* param1) {
    KIconDialog_QBaseResizeEvent((KIconDialog*)self, (QResizeEvent*)param1);
}

void k_icondialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnResizeEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_context_menu_event(void* self, void* param1) {
    KIconDialog_ContextMenuEvent((KIconDialog*)self, (QContextMenuEvent*)param1);
}

void k_icondialog_qbase_context_menu_event(void* self, void* param1) {
    KIconDialog_QBaseContextMenuEvent((KIconDialog*)self, (QContextMenuEvent*)param1);
}

void k_icondialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnContextMenuEvent((KIconDialog*)self, (intptr_t)callback);
}

bool k_icondialog_event_filter(void* self, void* param1, void* param2) {
    return KIconDialog_EventFilter((KIconDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_icondialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KIconDialog_QBaseEventFilter((KIconDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_icondialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIconDialog_OnEventFilter((KIconDialog*)self, (intptr_t)callback);
}

int32_t k_icondialog_dev_type(void* self) {
    return KIconDialog_DevType((KIconDialog*)self);
}

int32_t k_icondialog_qbase_dev_type(void* self) {
    return KIconDialog_QBaseDevType((KIconDialog*)self);
}

void k_icondialog_on_dev_type(void* self, int32_t (*callback)()) {
    KIconDialog_OnDevType((KIconDialog*)self, (intptr_t)callback);
}

int32_t k_icondialog_height_for_width(void* self, int param1) {
    return KIconDialog_HeightForWidth((KIconDialog*)self, param1);
}

int32_t k_icondialog_qbase_height_for_width(void* self, int param1) {
    return KIconDialog_QBaseHeightForWidth((KIconDialog*)self, param1);
}

void k_icondialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KIconDialog_OnHeightForWidth((KIconDialog*)self, (intptr_t)callback);
}

bool k_icondialog_has_height_for_width(void* self) {
    return KIconDialog_HasHeightForWidth((KIconDialog*)self);
}

bool k_icondialog_qbase_has_height_for_width(void* self) {
    return KIconDialog_QBaseHasHeightForWidth((KIconDialog*)self);
}

void k_icondialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KIconDialog_OnHasHeightForWidth((KIconDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_icondialog_paint_engine(void* self) {
    return KIconDialog_PaintEngine((KIconDialog*)self);
}

QPaintEngine* k_icondialog_qbase_paint_engine(void* self) {
    return KIconDialog_QBasePaintEngine((KIconDialog*)self);
}

void k_icondialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KIconDialog_OnPaintEngine((KIconDialog*)self, (intptr_t)callback);
}

bool k_icondialog_event(void* self, void* event) {
    return KIconDialog_Event((KIconDialog*)self, (QEvent*)event);
}

bool k_icondialog_qbase_event(void* self, void* event) {
    return KIconDialog_QBaseEvent((KIconDialog*)self, (QEvent*)event);
}

void k_icondialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KIconDialog_OnEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_mouse_press_event(void* self, void* event) {
    KIconDialog_MousePressEvent((KIconDialog*)self, (QMouseEvent*)event);
}

void k_icondialog_qbase_mouse_press_event(void* self, void* event) {
    KIconDialog_QBaseMousePressEvent((KIconDialog*)self, (QMouseEvent*)event);
}

void k_icondialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnMousePressEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_mouse_release_event(void* self, void* event) {
    KIconDialog_MouseReleaseEvent((KIconDialog*)self, (QMouseEvent*)event);
}

void k_icondialog_qbase_mouse_release_event(void* self, void* event) {
    KIconDialog_QBaseMouseReleaseEvent((KIconDialog*)self, (QMouseEvent*)event);
}

void k_icondialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnMouseReleaseEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_mouse_double_click_event(void* self, void* event) {
    KIconDialog_MouseDoubleClickEvent((KIconDialog*)self, (QMouseEvent*)event);
}

void k_icondialog_qbase_mouse_double_click_event(void* self, void* event) {
    KIconDialog_QBaseMouseDoubleClickEvent((KIconDialog*)self, (QMouseEvent*)event);
}

void k_icondialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnMouseDoubleClickEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_mouse_move_event(void* self, void* event) {
    KIconDialog_MouseMoveEvent((KIconDialog*)self, (QMouseEvent*)event);
}

void k_icondialog_qbase_mouse_move_event(void* self, void* event) {
    KIconDialog_QBaseMouseMoveEvent((KIconDialog*)self, (QMouseEvent*)event);
}

void k_icondialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnMouseMoveEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_wheel_event(void* self, void* event) {
    KIconDialog_WheelEvent((KIconDialog*)self, (QWheelEvent*)event);
}

void k_icondialog_qbase_wheel_event(void* self, void* event) {
    KIconDialog_QBaseWheelEvent((KIconDialog*)self, (QWheelEvent*)event);
}

void k_icondialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnWheelEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_key_release_event(void* self, void* event) {
    KIconDialog_KeyReleaseEvent((KIconDialog*)self, (QKeyEvent*)event);
}

void k_icondialog_qbase_key_release_event(void* self, void* event) {
    KIconDialog_QBaseKeyReleaseEvent((KIconDialog*)self, (QKeyEvent*)event);
}

void k_icondialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnKeyReleaseEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_focus_in_event(void* self, void* event) {
    KIconDialog_FocusInEvent((KIconDialog*)self, (QFocusEvent*)event);
}

void k_icondialog_qbase_focus_in_event(void* self, void* event) {
    KIconDialog_QBaseFocusInEvent((KIconDialog*)self, (QFocusEvent*)event);
}

void k_icondialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnFocusInEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_focus_out_event(void* self, void* event) {
    KIconDialog_FocusOutEvent((KIconDialog*)self, (QFocusEvent*)event);
}

void k_icondialog_qbase_focus_out_event(void* self, void* event) {
    KIconDialog_QBaseFocusOutEvent((KIconDialog*)self, (QFocusEvent*)event);
}

void k_icondialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnFocusOutEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_enter_event(void* self, void* event) {
    KIconDialog_EnterEvent((KIconDialog*)self, (QEnterEvent*)event);
}

void k_icondialog_qbase_enter_event(void* self, void* event) {
    KIconDialog_QBaseEnterEvent((KIconDialog*)self, (QEnterEvent*)event);
}

void k_icondialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnEnterEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_leave_event(void* self, void* event) {
    KIconDialog_LeaveEvent((KIconDialog*)self, (QEvent*)event);
}

void k_icondialog_qbase_leave_event(void* self, void* event) {
    KIconDialog_QBaseLeaveEvent((KIconDialog*)self, (QEvent*)event);
}

void k_icondialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnLeaveEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_paint_event(void* self, void* event) {
    KIconDialog_PaintEvent((KIconDialog*)self, (QPaintEvent*)event);
}

void k_icondialog_qbase_paint_event(void* self, void* event) {
    KIconDialog_QBasePaintEvent((KIconDialog*)self, (QPaintEvent*)event);
}

void k_icondialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnPaintEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_move_event(void* self, void* event) {
    KIconDialog_MoveEvent((KIconDialog*)self, (QMoveEvent*)event);
}

void k_icondialog_qbase_move_event(void* self, void* event) {
    KIconDialog_QBaseMoveEvent((KIconDialog*)self, (QMoveEvent*)event);
}

void k_icondialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnMoveEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_tablet_event(void* self, void* event) {
    KIconDialog_TabletEvent((KIconDialog*)self, (QTabletEvent*)event);
}

void k_icondialog_qbase_tablet_event(void* self, void* event) {
    KIconDialog_QBaseTabletEvent((KIconDialog*)self, (QTabletEvent*)event);
}

void k_icondialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnTabletEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_action_event(void* self, void* event) {
    KIconDialog_ActionEvent((KIconDialog*)self, (QActionEvent*)event);
}

void k_icondialog_qbase_action_event(void* self, void* event) {
    KIconDialog_QBaseActionEvent((KIconDialog*)self, (QActionEvent*)event);
}

void k_icondialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnActionEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_drag_enter_event(void* self, void* event) {
    KIconDialog_DragEnterEvent((KIconDialog*)self, (QDragEnterEvent*)event);
}

void k_icondialog_qbase_drag_enter_event(void* self, void* event) {
    KIconDialog_QBaseDragEnterEvent((KIconDialog*)self, (QDragEnterEvent*)event);
}

void k_icondialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnDragEnterEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_drag_move_event(void* self, void* event) {
    KIconDialog_DragMoveEvent((KIconDialog*)self, (QDragMoveEvent*)event);
}

void k_icondialog_qbase_drag_move_event(void* self, void* event) {
    KIconDialog_QBaseDragMoveEvent((KIconDialog*)self, (QDragMoveEvent*)event);
}

void k_icondialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnDragMoveEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_drag_leave_event(void* self, void* event) {
    KIconDialog_DragLeaveEvent((KIconDialog*)self, (QDragLeaveEvent*)event);
}

void k_icondialog_qbase_drag_leave_event(void* self, void* event) {
    KIconDialog_QBaseDragLeaveEvent((KIconDialog*)self, (QDragLeaveEvent*)event);
}

void k_icondialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnDragLeaveEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_drop_event(void* self, void* event) {
    KIconDialog_DropEvent((KIconDialog*)self, (QDropEvent*)event);
}

void k_icondialog_qbase_drop_event(void* self, void* event) {
    KIconDialog_QBaseDropEvent((KIconDialog*)self, (QDropEvent*)event);
}

void k_icondialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnDropEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_hide_event(void* self, void* event) {
    KIconDialog_HideEvent((KIconDialog*)self, (QHideEvent*)event);
}

void k_icondialog_qbase_hide_event(void* self, void* event) {
    KIconDialog_QBaseHideEvent((KIconDialog*)self, (QHideEvent*)event);
}

void k_icondialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnHideEvent((KIconDialog*)self, (intptr_t)callback);
}

bool k_icondialog_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KIconDialog_NativeEvent((KIconDialog*)self, qstring(eventType), message, result);
}

bool k_icondialog_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KIconDialog_QBaseNativeEvent((KIconDialog*)self, qstring(eventType), message, result);
}

void k_icondialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KIconDialog_OnNativeEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_change_event(void* self, void* param1) {
    KIconDialog_ChangeEvent((KIconDialog*)self, (QEvent*)param1);
}

void k_icondialog_qbase_change_event(void* self, void* param1) {
    KIconDialog_QBaseChangeEvent((KIconDialog*)self, (QEvent*)param1);
}

void k_icondialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnChangeEvent((KIconDialog*)self, (intptr_t)callback);
}

int32_t k_icondialog_metric(void* self, int32_t param1) {
    return KIconDialog_Metric((KIconDialog*)self, param1);
}

int32_t k_icondialog_qbase_metric(void* self, int32_t param1) {
    return KIconDialog_QBaseMetric((KIconDialog*)self, param1);
}

void k_icondialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KIconDialog_OnMetric((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_init_painter(void* self, void* painter) {
    KIconDialog_InitPainter((KIconDialog*)self, (QPainter*)painter);
}

void k_icondialog_qbase_init_painter(void* self, void* painter) {
    KIconDialog_QBaseInitPainter((KIconDialog*)self, (QPainter*)painter);
}

void k_icondialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnInitPainter((KIconDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_icondialog_redirected(void* self, void* offset) {
    return KIconDialog_Redirected((KIconDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_icondialog_qbase_redirected(void* self, void* offset) {
    return KIconDialog_QBaseRedirected((KIconDialog*)self, (QPoint*)offset);
}

void k_icondialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KIconDialog_OnRedirected((KIconDialog*)self, (intptr_t)callback);
}

QPainter* k_icondialog_shared_painter(void* self) {
    return KIconDialog_SharedPainter((KIconDialog*)self);
}

QPainter* k_icondialog_qbase_shared_painter(void* self) {
    return KIconDialog_QBaseSharedPainter((KIconDialog*)self);
}

void k_icondialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KIconDialog_OnSharedPainter((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_input_method_event(void* self, void* param1) {
    KIconDialog_InputMethodEvent((KIconDialog*)self, (QInputMethodEvent*)param1);
}

void k_icondialog_qbase_input_method_event(void* self, void* param1) {
    KIconDialog_QBaseInputMethodEvent((KIconDialog*)self, (QInputMethodEvent*)param1);
}

void k_icondialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnInputMethodEvent((KIconDialog*)self, (intptr_t)callback);
}

QVariant* k_icondialog_input_method_query(void* self, int32_t param1) {
    return KIconDialog_InputMethodQuery((KIconDialog*)self, param1);
}

QVariant* k_icondialog_qbase_input_method_query(void* self, int32_t param1) {
    return KIconDialog_QBaseInputMethodQuery((KIconDialog*)self, param1);
}

void k_icondialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KIconDialog_OnInputMethodQuery((KIconDialog*)self, (intptr_t)callback);
}

bool k_icondialog_focus_next_prev_child(void* self, bool next) {
    return KIconDialog_FocusNextPrevChild((KIconDialog*)self, next);
}

bool k_icondialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KIconDialog_QBaseFocusNextPrevChild((KIconDialog*)self, next);
}

void k_icondialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KIconDialog_OnFocusNextPrevChild((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_timer_event(void* self, void* event) {
    KIconDialog_TimerEvent((KIconDialog*)self, (QTimerEvent*)event);
}

void k_icondialog_qbase_timer_event(void* self, void* event) {
    KIconDialog_QBaseTimerEvent((KIconDialog*)self, (QTimerEvent*)event);
}

void k_icondialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnTimerEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_child_event(void* self, void* event) {
    KIconDialog_ChildEvent((KIconDialog*)self, (QChildEvent*)event);
}

void k_icondialog_qbase_child_event(void* self, void* event) {
    KIconDialog_QBaseChildEvent((KIconDialog*)self, (QChildEvent*)event);
}

void k_icondialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnChildEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_custom_event(void* self, void* event) {
    KIconDialog_CustomEvent((KIconDialog*)self, (QEvent*)event);
}

void k_icondialog_qbase_custom_event(void* self, void* event) {
    KIconDialog_QBaseCustomEvent((KIconDialog*)self, (QEvent*)event);
}

void k_icondialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnCustomEvent((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_connect_notify(void* self, void* signal) {
    KIconDialog_ConnectNotify((KIconDialog*)self, (QMetaMethod*)signal);
}

void k_icondialog_qbase_connect_notify(void* self, void* signal) {
    KIconDialog_QBaseConnectNotify((KIconDialog*)self, (QMetaMethod*)signal);
}

void k_icondialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnConnectNotify((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_disconnect_notify(void* self, void* signal) {
    KIconDialog_DisconnectNotify((KIconDialog*)self, (QMetaMethod*)signal);
}

void k_icondialog_qbase_disconnect_notify(void* self, void* signal) {
    KIconDialog_QBaseDisconnectNotify((KIconDialog*)self, (QMetaMethod*)signal);
}

void k_icondialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnDisconnectNotify((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_adjust_position(void* self, void* param1) {
    KIconDialog_AdjustPosition((KIconDialog*)self, (QWidget*)param1);
}

void k_icondialog_qbase_adjust_position(void* self, void* param1) {
    KIconDialog_QBaseAdjustPosition((KIconDialog*)self, (QWidget*)param1);
}

void k_icondialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KIconDialog_OnAdjustPosition((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_update_micro_focus(void* self) {
    KIconDialog_UpdateMicroFocus((KIconDialog*)self);
}

void k_icondialog_qbase_update_micro_focus(void* self) {
    KIconDialog_QBaseUpdateMicroFocus((KIconDialog*)self);
}

void k_icondialog_on_update_micro_focus(void* self, void (*callback)()) {
    KIconDialog_OnUpdateMicroFocus((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_create(void* self) {
    KIconDialog_Create((KIconDialog*)self);
}

void k_icondialog_qbase_create(void* self) {
    KIconDialog_QBaseCreate((KIconDialog*)self);
}

void k_icondialog_on_create(void* self, void (*callback)()) {
    KIconDialog_OnCreate((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_destroy(void* self) {
    KIconDialog_Destroy((KIconDialog*)self);
}

void k_icondialog_qbase_destroy(void* self) {
    KIconDialog_QBaseDestroy((KIconDialog*)self);
}

void k_icondialog_on_destroy(void* self, void (*callback)()) {
    KIconDialog_OnDestroy((KIconDialog*)self, (intptr_t)callback);
}

bool k_icondialog_focus_next_child(void* self) {
    return KIconDialog_FocusNextChild((KIconDialog*)self);
}

bool k_icondialog_qbase_focus_next_child(void* self) {
    return KIconDialog_QBaseFocusNextChild((KIconDialog*)self);
}

void k_icondialog_on_focus_next_child(void* self, bool (*callback)()) {
    KIconDialog_OnFocusNextChild((KIconDialog*)self, (intptr_t)callback);
}

bool k_icondialog_focus_previous_child(void* self) {
    return KIconDialog_FocusPreviousChild((KIconDialog*)self);
}

bool k_icondialog_qbase_focus_previous_child(void* self) {
    return KIconDialog_QBaseFocusPreviousChild((KIconDialog*)self);
}

void k_icondialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KIconDialog_OnFocusPreviousChild((KIconDialog*)self, (intptr_t)callback);
}

QObject* k_icondialog_sender(void* self) {
    return KIconDialog_Sender((KIconDialog*)self);
}

QObject* k_icondialog_qbase_sender(void* self) {
    return KIconDialog_QBaseSender((KIconDialog*)self);
}

void k_icondialog_on_sender(void* self, QObject* (*callback)()) {
    KIconDialog_OnSender((KIconDialog*)self, (intptr_t)callback);
}

int32_t k_icondialog_sender_signal_index(void* self) {
    return KIconDialog_SenderSignalIndex((KIconDialog*)self);
}

int32_t k_icondialog_qbase_sender_signal_index(void* self) {
    return KIconDialog_QBaseSenderSignalIndex((KIconDialog*)self);
}

void k_icondialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIconDialog_OnSenderSignalIndex((KIconDialog*)self, (intptr_t)callback);
}

int32_t k_icondialog_receivers(void* self, const char* signal) {
    return KIconDialog_Receivers((KIconDialog*)self, signal);
}

int32_t k_icondialog_qbase_receivers(void* self, const char* signal) {
    return KIconDialog_QBaseReceivers((KIconDialog*)self, signal);
}

void k_icondialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIconDialog_OnReceivers((KIconDialog*)self, (intptr_t)callback);
}

bool k_icondialog_is_signal_connected(void* self, void* signal) {
    return KIconDialog_IsSignalConnected((KIconDialog*)self, (QMetaMethod*)signal);
}

bool k_icondialog_qbase_is_signal_connected(void* self, void* signal) {
    return KIconDialog_QBaseIsSignalConnected((KIconDialog*)self, (QMetaMethod*)signal);
}

void k_icondialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIconDialog_OnIsSignalConnected((KIconDialog*)self, (intptr_t)callback);
}

double k_icondialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KIconDialog_GetDecodedMetricF((KIconDialog*)self, metricA, metricB);
}

double k_icondialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KIconDialog_QBaseGetDecodedMetricF((KIconDialog*)self, metricA, metricB);
}

void k_icondialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KIconDialog_OnGetDecodedMetricF((KIconDialog*)self, (intptr_t)callback);
}

void k_icondialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_icondialog_delete(void* self) {
    KIconDialog_Delete((KIconDialog*)(self));
}
