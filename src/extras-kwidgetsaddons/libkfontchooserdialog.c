#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdialog.hpp"
#include "../libqfont.hpp"
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
#include "libkfontchooserdialog.hpp"
#include "libkfontchooserdialog.h"

KFontChooserDialog* k_fontchooserdialog_new() {
    return KFontChooserDialog_new();
}

KFontChooserDialog* k_fontchooserdialog_new2(const int32_t* flags) {
    return KFontChooserDialog_new2(flags);
}

KFontChooserDialog* k_fontchooserdialog_new3(const int32_t* flags, void* parent) {
    return KFontChooserDialog_new3(flags, (QWidget*)parent);
}

const QMetaObject* k_fontchooserdialog_meta_object(void* self) {
    return KFontChooserDialog_MetaObject((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KFontChooserDialog_OnMetaObject((KFontChooserDialog*)self, (intptr_t)callback);
}

const QMetaObject* k_fontchooserdialog_qbase_meta_object(void* self) {
    return KFontChooserDialog_QBaseMetaObject((KFontChooserDialog*)self);
}

void* k_fontchooserdialog_metacast(void* self, const char* param1) {
    return KFontChooserDialog_Metacast((KFontChooserDialog*)self, param1);
}

void k_fontchooserdialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KFontChooserDialog_OnMetacast((KFontChooserDialog*)self, (intptr_t)callback);
}

void* k_fontchooserdialog_qbase_metacast(void* self, const char* param1) {
    return KFontChooserDialog_QBaseMetacast((KFontChooserDialog*)self, param1);
}

int32_t k_fontchooserdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFontChooserDialog_Metacall((KFontChooserDialog*)self, param1, param2, param3);
}

void k_fontchooserdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFontChooserDialog_OnMetacall((KFontChooserDialog*)self, (intptr_t)callback);
}

int32_t k_fontchooserdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFontChooserDialog_QBaseMetacall((KFontChooserDialog*)self, param1, param2, param3);
}

const char* k_fontchooserdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooserdialog_set_font(void* self, void* font) {
    KFontChooserDialog_SetFont((KFontChooserDialog*)self, (QFont*)font);
}

QFont* k_fontchooserdialog_font(void* self) {
    return KFontChooserDialog_Font((KFontChooserDialog*)self);
}

int32_t k_fontchooserdialog_get_font(void* theFont) {
    return KFontChooserDialog_GetFont((QFont*)theFont);
}

int32_t k_fontchooserdialog_get_font_diff(void* theFont, int32_t* diffFlags) {
    return KFontChooserDialog_GetFontDiff((QFont*)theFont, diffFlags);
}

void k_fontchooserdialog_font_selected(void* self, void* font) {
    KFontChooserDialog_FontSelected((KFontChooserDialog*)self, (QFont*)font);
}

void k_fontchooserdialog_on_font_selected(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_Connect_FontSelected((KFontChooserDialog*)self, (intptr_t)callback);
}

const char* k_fontchooserdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fontchooserdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooserdialog_set_font2(void* self, void* font, bool onlyFixed) {
    KFontChooserDialog_SetFont2((KFontChooserDialog*)self, (QFont*)font, onlyFixed);
}

int32_t k_fontchooserdialog_get_font2(void* theFont, const int32_t* flags) {
    return KFontChooserDialog_GetFont2((QFont*)theFont, flags);
}

int32_t k_fontchooserdialog_get_font3(void* theFont, const int32_t* flags, void* parent) {
    return KFontChooserDialog_GetFont3((QFont*)theFont, flags, (QWidget*)parent);
}

int32_t k_fontchooserdialog_get_font_diff3(void* theFont, int32_t* diffFlags, const int32_t* flags) {
    return KFontChooserDialog_GetFontDiff3((QFont*)theFont, diffFlags, flags);
}

int32_t k_fontchooserdialog_get_font_diff4(void* theFont, int32_t* diffFlags, const int32_t* flags, void* parent) {
    return KFontChooserDialog_GetFontDiff4((QFont*)theFont, diffFlags, flags, (QWidget*)parent);
}

int32_t k_fontchooserdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_fontchooserdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_fontchooserdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_fontchooserdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_fontchooserdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_fontchooserdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_fontchooserdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_fontchooserdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_fontchooserdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_fontchooserdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_fontchooserdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_fontchooserdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_fontchooserdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_fontchooserdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_fontchooserdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_fontchooserdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_fontchooserdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_fontchooserdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_fontchooserdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_fontchooserdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_fontchooserdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_fontchooserdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_fontchooserdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_fontchooserdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_fontchooserdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_fontchooserdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_fontchooserdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_fontchooserdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_fontchooserdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_fontchooserdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_fontchooserdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_fontchooserdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_fontchooserdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_fontchooserdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_fontchooserdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_fontchooserdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_fontchooserdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_fontchooserdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_fontchooserdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_fontchooserdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_fontchooserdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_fontchooserdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_fontchooserdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_fontchooserdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_fontchooserdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_fontchooserdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_fontchooserdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_fontchooserdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_fontchooserdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_fontchooserdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_fontchooserdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_fontchooserdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_fontchooserdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_fontchooserdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_fontchooserdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_fontchooserdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_fontchooserdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_fontchooserdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_fontchooserdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_fontchooserdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_fontchooserdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_fontchooserdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_fontchooserdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fontchooserdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fontchooserdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fontchooserdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fontchooserdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fontchooserdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fontchooserdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fontchooserdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fontchooserdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_fontchooserdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_fontchooserdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_fontchooserdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_fontchooserdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_fontchooserdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_fontchooserdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_fontchooserdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_fontchooserdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_fontchooserdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_fontchooserdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_fontchooserdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_fontchooserdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFontMetrics* k_fontchooserdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_fontchooserdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_fontchooserdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_fontchooserdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_fontchooserdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_fontchooserdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_fontchooserdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_fontchooserdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_fontchooserdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_fontchooserdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_fontchooserdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_fontchooserdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_fontchooserdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_fontchooserdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_fontchooserdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_fontchooserdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_fontchooserdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_fontchooserdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_fontchooserdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_fontchooserdialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_fontchooserdialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_fontchooserdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_fontchooserdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_fontchooserdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fontchooserdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooserdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_fontchooserdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_fontchooserdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_fontchooserdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooserdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_fontchooserdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooserdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_fontchooserdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooserdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_fontchooserdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_fontchooserdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_fontchooserdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_fontchooserdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooserdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_fontchooserdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_fontchooserdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_fontchooserdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooserdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_fontchooserdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fontchooserdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooserdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_fontchooserdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooserdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_fontchooserdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_fontchooserdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_fontchooserdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_fontchooserdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_fontchooserdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_fontchooserdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_fontchooserdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_fontchooserdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_fontchooserdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_fontchooserdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_fontchooserdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_fontchooserdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_fontchooserdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_fontchooserdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_fontchooserdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_fontchooserdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_fontchooserdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_fontchooserdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_fontchooserdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_fontchooserdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_fontchooserdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_fontchooserdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_fontchooserdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_fontchooserdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_fontchooserdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_fontchooserdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_fontchooserdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_fontchooserdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_fontchooserdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_fontchooserdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_fontchooserdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_fontchooserdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_fontchooserdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_fontchooserdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_fontchooserdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_fontchooserdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_fontchooserdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_fontchooserdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_fontchooserdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_fontchooserdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_fontchooserdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_fontchooserdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_fontchooserdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_fontchooserdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_fontchooserdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_fontchooserdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_fontchooserdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_fontchooserdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_fontchooserdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_fontchooserdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_fontchooserdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_fontchooserdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_fontchooserdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_fontchooserdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_fontchooserdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_fontchooserdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_fontchooserdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_fontchooserdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_fontchooserdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_fontchooserdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_fontchooserdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fontchooserdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_fontchooserdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_fontchooserdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_fontchooserdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_fontchooserdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_fontchooserdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_fontchooserdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_fontchooserdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_fontchooserdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_fontchooserdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_fontchooserdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_fontchooserdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_fontchooserdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_fontchooserdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_fontchooserdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_fontchooserdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_fontchooserdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_fontchooserdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_fontchooserdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_fontchooserdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_fontchooserdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_fontchooserdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_fontchooserdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_fontchooserdialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_fontchooserdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_fontchooserdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_fontchooserdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_fontchooserdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_fontchooserdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_fontchooserdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_fontchooserdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_fontchooserdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_fontchooserdialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_fontchooserdialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_fontchooserdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_fontchooserdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_fontchooserdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_fontchooserdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_fontchooserdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_fontchooserdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_fontchooserdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_fontchooserdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_fontchooserdialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_fontchooserdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_fontchooserdialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_fontchooserdialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_fontchooserdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_fontchooserdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_fontchooserdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_fontchooserdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_fontchooserdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_fontchooserdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_fontchooserdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_fontchooserdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_fontchooserdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_fontchooserdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_fontchooserdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_fontchooserdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_fontchooserdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_fontchooserdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_fontchooserdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_fontchooserdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_fontchooserdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_fontchooserdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_fontchooserdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_fontchooserdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_fontchooserdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_fontchooserdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_fontchooserdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_fontchooserdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_fontchooserdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_fontchooserdialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_fontchooserdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_fontchooserdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_fontchooserdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_fontchooserdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_fontchooserdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_fontchooserdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_fontchooserdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_fontchooserdialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_fontchooserdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_fontchooserdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_fontchooserdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_fontchooserdialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_fontchooserdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_fontchooserdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_fontchooserdialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_fontchooserdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooserdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_fontchooserdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_fontchooserdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_fontchooserdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_fontchooserdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_fontchooserdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_fontchooserdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_fontchooserdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_fontchooserdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_fontchooserdialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_fontchooserdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_fontchooserdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_fontchooserdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_fontchooserdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_fontchooserdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_fontchooserdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_fontchooserdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_fontchooserdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_fontchooserdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_fontchooserdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_fontchooserdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_fontchooserdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_fontchooserdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_fontchooserdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fontchooserdialog_dynamic_property_names\n");
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

QBindingStorage* k_fontchooserdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_fontchooserdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_fontchooserdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_fontchooserdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_fontchooserdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_fontchooserdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_fontchooserdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_fontchooserdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_fontchooserdialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_fontchooserdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_fontchooserdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_fontchooserdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_fontchooserdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_fontchooserdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_fontchooserdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_fontchooserdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_fontchooserdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_fontchooserdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_fontchooserdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_fontchooserdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_fontchooserdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_fontchooserdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_fontchooserdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_fontchooserdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_fontchooserdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_fontchooserdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_fontchooserdialog_set_visible(void* self, bool visible) {
    KFontChooserDialog_SetVisible((KFontChooserDialog*)self, visible);
}

void k_fontchooserdialog_qbase_set_visible(void* self, bool visible) {
    KFontChooserDialog_QBaseSetVisible((KFontChooserDialog*)self, visible);
}

void k_fontchooserdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KFontChooserDialog_OnSetVisible((KFontChooserDialog*)self, (intptr_t)callback);
}

QSize* k_fontchooserdialog_size_hint(void* self) {
    return KFontChooserDialog_SizeHint((KFontChooserDialog*)self);
}

QSize* k_fontchooserdialog_qbase_size_hint(void* self) {
    return KFontChooserDialog_QBaseSizeHint((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_size_hint(void* self, QSize* (*callback)()) {
    KFontChooserDialog_OnSizeHint((KFontChooserDialog*)self, (intptr_t)callback);
}

QSize* k_fontchooserdialog_minimum_size_hint(void* self) {
    return KFontChooserDialog_MinimumSizeHint((KFontChooserDialog*)self);
}

QSize* k_fontchooserdialog_qbase_minimum_size_hint(void* self) {
    return KFontChooserDialog_QBaseMinimumSizeHint((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KFontChooserDialog_OnMinimumSizeHint((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_open(void* self) {
    KFontChooserDialog_Open((KFontChooserDialog*)self);
}

void k_fontchooserdialog_qbase_open(void* self) {
    KFontChooserDialog_QBaseOpen((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_open(void* self, void (*callback)()) {
    KFontChooserDialog_OnOpen((KFontChooserDialog*)self, (intptr_t)callback);
}

int32_t k_fontchooserdialog_exec(void* self) {
    return KFontChooserDialog_Exec((KFontChooserDialog*)self);
}

int32_t k_fontchooserdialog_qbase_exec(void* self) {
    return KFontChooserDialog_QBaseExec((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_exec(void* self, int32_t (*callback)()) {
    KFontChooserDialog_OnExec((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_done(void* self, int param1) {
    KFontChooserDialog_Done((KFontChooserDialog*)self, param1);
}

void k_fontchooserdialog_qbase_done(void* self, int param1) {
    KFontChooserDialog_QBaseDone((KFontChooserDialog*)self, param1);
}

void k_fontchooserdialog_on_done(void* self, void (*callback)(void*, int)) {
    KFontChooserDialog_OnDone((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_accept(void* self) {
    KFontChooserDialog_Accept((KFontChooserDialog*)self);
}

void k_fontchooserdialog_qbase_accept(void* self) {
    KFontChooserDialog_QBaseAccept((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_accept(void* self, void (*callback)()) {
    KFontChooserDialog_OnAccept((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_reject(void* self) {
    KFontChooserDialog_Reject((KFontChooserDialog*)self);
}

void k_fontchooserdialog_qbase_reject(void* self) {
    KFontChooserDialog_QBaseReject((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_reject(void* self, void (*callback)()) {
    KFontChooserDialog_OnReject((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_key_press_event(void* self, void* param1) {
    KFontChooserDialog_KeyPressEvent((KFontChooserDialog*)self, (QKeyEvent*)param1);
}

void k_fontchooserdialog_qbase_key_press_event(void* self, void* param1) {
    KFontChooserDialog_QBaseKeyPressEvent((KFontChooserDialog*)self, (QKeyEvent*)param1);
}

void k_fontchooserdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnKeyPressEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_close_event(void* self, void* param1) {
    KFontChooserDialog_CloseEvent((KFontChooserDialog*)self, (QCloseEvent*)param1);
}

void k_fontchooserdialog_qbase_close_event(void* self, void* param1) {
    KFontChooserDialog_QBaseCloseEvent((KFontChooserDialog*)self, (QCloseEvent*)param1);
}

void k_fontchooserdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnCloseEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_show_event(void* self, void* param1) {
    KFontChooserDialog_ShowEvent((KFontChooserDialog*)self, (QShowEvent*)param1);
}

void k_fontchooserdialog_qbase_show_event(void* self, void* param1) {
    KFontChooserDialog_QBaseShowEvent((KFontChooserDialog*)self, (QShowEvent*)param1);
}

void k_fontchooserdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnShowEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_resize_event(void* self, void* param1) {
    KFontChooserDialog_ResizeEvent((KFontChooserDialog*)self, (QResizeEvent*)param1);
}

void k_fontchooserdialog_qbase_resize_event(void* self, void* param1) {
    KFontChooserDialog_QBaseResizeEvent((KFontChooserDialog*)self, (QResizeEvent*)param1);
}

void k_fontchooserdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnResizeEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_context_menu_event(void* self, void* param1) {
    KFontChooserDialog_ContextMenuEvent((KFontChooserDialog*)self, (QContextMenuEvent*)param1);
}

void k_fontchooserdialog_qbase_context_menu_event(void* self, void* param1) {
    KFontChooserDialog_QBaseContextMenuEvent((KFontChooserDialog*)self, (QContextMenuEvent*)param1);
}

void k_fontchooserdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnContextMenuEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

bool k_fontchooserdialog_event_filter(void* self, void* param1, void* param2) {
    return KFontChooserDialog_EventFilter((KFontChooserDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_fontchooserdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KFontChooserDialog_QBaseEventFilter((KFontChooserDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_fontchooserdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFontChooserDialog_OnEventFilter((KFontChooserDialog*)self, (intptr_t)callback);
}

int32_t k_fontchooserdialog_dev_type(void* self) {
    return KFontChooserDialog_DevType((KFontChooserDialog*)self);
}

int32_t k_fontchooserdialog_qbase_dev_type(void* self) {
    return KFontChooserDialog_QBaseDevType((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_dev_type(void* self, int32_t (*callback)()) {
    KFontChooserDialog_OnDevType((KFontChooserDialog*)self, (intptr_t)callback);
}

int32_t k_fontchooserdialog_height_for_width(void* self, int param1) {
    return KFontChooserDialog_HeightForWidth((KFontChooserDialog*)self, param1);
}

int32_t k_fontchooserdialog_qbase_height_for_width(void* self, int param1) {
    return KFontChooserDialog_QBaseHeightForWidth((KFontChooserDialog*)self, param1);
}

void k_fontchooserdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KFontChooserDialog_OnHeightForWidth((KFontChooserDialog*)self, (intptr_t)callback);
}

bool k_fontchooserdialog_has_height_for_width(void* self) {
    return KFontChooserDialog_HasHeightForWidth((KFontChooserDialog*)self);
}

bool k_fontchooserdialog_qbase_has_height_for_width(void* self) {
    return KFontChooserDialog_QBaseHasHeightForWidth((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KFontChooserDialog_OnHasHeightForWidth((KFontChooserDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_fontchooserdialog_paint_engine(void* self) {
    return KFontChooserDialog_PaintEngine((KFontChooserDialog*)self);
}

QPaintEngine* k_fontchooserdialog_qbase_paint_engine(void* self) {
    return KFontChooserDialog_QBasePaintEngine((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KFontChooserDialog_OnPaintEngine((KFontChooserDialog*)self, (intptr_t)callback);
}

bool k_fontchooserdialog_event(void* self, void* event) {
    return KFontChooserDialog_Event((KFontChooserDialog*)self, (QEvent*)event);
}

bool k_fontchooserdialog_qbase_event(void* self, void* event) {
    return KFontChooserDialog_QBaseEvent((KFontChooserDialog*)self, (QEvent*)event);
}

void k_fontchooserdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KFontChooserDialog_OnEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_mouse_press_event(void* self, void* event) {
    KFontChooserDialog_MousePressEvent((KFontChooserDialog*)self, (QMouseEvent*)event);
}

void k_fontchooserdialog_qbase_mouse_press_event(void* self, void* event) {
    KFontChooserDialog_QBaseMousePressEvent((KFontChooserDialog*)self, (QMouseEvent*)event);
}

void k_fontchooserdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnMousePressEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_mouse_release_event(void* self, void* event) {
    KFontChooserDialog_MouseReleaseEvent((KFontChooserDialog*)self, (QMouseEvent*)event);
}

void k_fontchooserdialog_qbase_mouse_release_event(void* self, void* event) {
    KFontChooserDialog_QBaseMouseReleaseEvent((KFontChooserDialog*)self, (QMouseEvent*)event);
}

void k_fontchooserdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnMouseReleaseEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_mouse_double_click_event(void* self, void* event) {
    KFontChooserDialog_MouseDoubleClickEvent((KFontChooserDialog*)self, (QMouseEvent*)event);
}

void k_fontchooserdialog_qbase_mouse_double_click_event(void* self, void* event) {
    KFontChooserDialog_QBaseMouseDoubleClickEvent((KFontChooserDialog*)self, (QMouseEvent*)event);
}

void k_fontchooserdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnMouseDoubleClickEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_mouse_move_event(void* self, void* event) {
    KFontChooserDialog_MouseMoveEvent((KFontChooserDialog*)self, (QMouseEvent*)event);
}

void k_fontchooserdialog_qbase_mouse_move_event(void* self, void* event) {
    KFontChooserDialog_QBaseMouseMoveEvent((KFontChooserDialog*)self, (QMouseEvent*)event);
}

void k_fontchooserdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnMouseMoveEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_wheel_event(void* self, void* event) {
    KFontChooserDialog_WheelEvent((KFontChooserDialog*)self, (QWheelEvent*)event);
}

void k_fontchooserdialog_qbase_wheel_event(void* self, void* event) {
    KFontChooserDialog_QBaseWheelEvent((KFontChooserDialog*)self, (QWheelEvent*)event);
}

void k_fontchooserdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnWheelEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_key_release_event(void* self, void* event) {
    KFontChooserDialog_KeyReleaseEvent((KFontChooserDialog*)self, (QKeyEvent*)event);
}

void k_fontchooserdialog_qbase_key_release_event(void* self, void* event) {
    KFontChooserDialog_QBaseKeyReleaseEvent((KFontChooserDialog*)self, (QKeyEvent*)event);
}

void k_fontchooserdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnKeyReleaseEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_focus_in_event(void* self, void* event) {
    KFontChooserDialog_FocusInEvent((KFontChooserDialog*)self, (QFocusEvent*)event);
}

void k_fontchooserdialog_qbase_focus_in_event(void* self, void* event) {
    KFontChooserDialog_QBaseFocusInEvent((KFontChooserDialog*)self, (QFocusEvent*)event);
}

void k_fontchooserdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnFocusInEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_focus_out_event(void* self, void* event) {
    KFontChooserDialog_FocusOutEvent((KFontChooserDialog*)self, (QFocusEvent*)event);
}

void k_fontchooserdialog_qbase_focus_out_event(void* self, void* event) {
    KFontChooserDialog_QBaseFocusOutEvent((KFontChooserDialog*)self, (QFocusEvent*)event);
}

void k_fontchooserdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnFocusOutEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_enter_event(void* self, void* event) {
    KFontChooserDialog_EnterEvent((KFontChooserDialog*)self, (QEnterEvent*)event);
}

void k_fontchooserdialog_qbase_enter_event(void* self, void* event) {
    KFontChooserDialog_QBaseEnterEvent((KFontChooserDialog*)self, (QEnterEvent*)event);
}

void k_fontchooserdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnEnterEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_leave_event(void* self, void* event) {
    KFontChooserDialog_LeaveEvent((KFontChooserDialog*)self, (QEvent*)event);
}

void k_fontchooserdialog_qbase_leave_event(void* self, void* event) {
    KFontChooserDialog_QBaseLeaveEvent((KFontChooserDialog*)self, (QEvent*)event);
}

void k_fontchooserdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnLeaveEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_paint_event(void* self, void* event) {
    KFontChooserDialog_PaintEvent((KFontChooserDialog*)self, (QPaintEvent*)event);
}

void k_fontchooserdialog_qbase_paint_event(void* self, void* event) {
    KFontChooserDialog_QBasePaintEvent((KFontChooserDialog*)self, (QPaintEvent*)event);
}

void k_fontchooserdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnPaintEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_move_event(void* self, void* event) {
    KFontChooserDialog_MoveEvent((KFontChooserDialog*)self, (QMoveEvent*)event);
}

void k_fontchooserdialog_qbase_move_event(void* self, void* event) {
    KFontChooserDialog_QBaseMoveEvent((KFontChooserDialog*)self, (QMoveEvent*)event);
}

void k_fontchooserdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnMoveEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_tablet_event(void* self, void* event) {
    KFontChooserDialog_TabletEvent((KFontChooserDialog*)self, (QTabletEvent*)event);
}

void k_fontchooserdialog_qbase_tablet_event(void* self, void* event) {
    KFontChooserDialog_QBaseTabletEvent((KFontChooserDialog*)self, (QTabletEvent*)event);
}

void k_fontchooserdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnTabletEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_action_event(void* self, void* event) {
    KFontChooserDialog_ActionEvent((KFontChooserDialog*)self, (QActionEvent*)event);
}

void k_fontchooserdialog_qbase_action_event(void* self, void* event) {
    KFontChooserDialog_QBaseActionEvent((KFontChooserDialog*)self, (QActionEvent*)event);
}

void k_fontchooserdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnActionEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_drag_enter_event(void* self, void* event) {
    KFontChooserDialog_DragEnterEvent((KFontChooserDialog*)self, (QDragEnterEvent*)event);
}

void k_fontchooserdialog_qbase_drag_enter_event(void* self, void* event) {
    KFontChooserDialog_QBaseDragEnterEvent((KFontChooserDialog*)self, (QDragEnterEvent*)event);
}

void k_fontchooserdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnDragEnterEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_drag_move_event(void* self, void* event) {
    KFontChooserDialog_DragMoveEvent((KFontChooserDialog*)self, (QDragMoveEvent*)event);
}

void k_fontchooserdialog_qbase_drag_move_event(void* self, void* event) {
    KFontChooserDialog_QBaseDragMoveEvent((KFontChooserDialog*)self, (QDragMoveEvent*)event);
}

void k_fontchooserdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnDragMoveEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_drag_leave_event(void* self, void* event) {
    KFontChooserDialog_DragLeaveEvent((KFontChooserDialog*)self, (QDragLeaveEvent*)event);
}

void k_fontchooserdialog_qbase_drag_leave_event(void* self, void* event) {
    KFontChooserDialog_QBaseDragLeaveEvent((KFontChooserDialog*)self, (QDragLeaveEvent*)event);
}

void k_fontchooserdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnDragLeaveEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_drop_event(void* self, void* event) {
    KFontChooserDialog_DropEvent((KFontChooserDialog*)self, (QDropEvent*)event);
}

void k_fontchooserdialog_qbase_drop_event(void* self, void* event) {
    KFontChooserDialog_QBaseDropEvent((KFontChooserDialog*)self, (QDropEvent*)event);
}

void k_fontchooserdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnDropEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_hide_event(void* self, void* event) {
    KFontChooserDialog_HideEvent((KFontChooserDialog*)self, (QHideEvent*)event);
}

void k_fontchooserdialog_qbase_hide_event(void* self, void* event) {
    KFontChooserDialog_QBaseHideEvent((KFontChooserDialog*)self, (QHideEvent*)event);
}

void k_fontchooserdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnHideEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

bool k_fontchooserdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KFontChooserDialog_NativeEvent((KFontChooserDialog*)self, qstring(eventType), message, result);
}

bool k_fontchooserdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KFontChooserDialog_QBaseNativeEvent((KFontChooserDialog*)self, qstring(eventType), message, result);
}

void k_fontchooserdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KFontChooserDialog_OnNativeEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_change_event(void* self, void* param1) {
    KFontChooserDialog_ChangeEvent((KFontChooserDialog*)self, (QEvent*)param1);
}

void k_fontchooserdialog_qbase_change_event(void* self, void* param1) {
    KFontChooserDialog_QBaseChangeEvent((KFontChooserDialog*)self, (QEvent*)param1);
}

void k_fontchooserdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnChangeEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

int32_t k_fontchooserdialog_metric(void* self, int32_t param1) {
    return KFontChooserDialog_Metric((KFontChooserDialog*)self, param1);
}

int32_t k_fontchooserdialog_qbase_metric(void* self, int32_t param1) {
    return KFontChooserDialog_QBaseMetric((KFontChooserDialog*)self, param1);
}

void k_fontchooserdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KFontChooserDialog_OnMetric((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_init_painter(void* self, void* painter) {
    KFontChooserDialog_InitPainter((KFontChooserDialog*)self, (QPainter*)painter);
}

void k_fontchooserdialog_qbase_init_painter(void* self, void* painter) {
    KFontChooserDialog_QBaseInitPainter((KFontChooserDialog*)self, (QPainter*)painter);
}

void k_fontchooserdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnInitPainter((KFontChooserDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_fontchooserdialog_redirected(void* self, void* offset) {
    return KFontChooserDialog_Redirected((KFontChooserDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_fontchooserdialog_qbase_redirected(void* self, void* offset) {
    return KFontChooserDialog_QBaseRedirected((KFontChooserDialog*)self, (QPoint*)offset);
}

void k_fontchooserdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KFontChooserDialog_OnRedirected((KFontChooserDialog*)self, (intptr_t)callback);
}

QPainter* k_fontchooserdialog_shared_painter(void* self) {
    return KFontChooserDialog_SharedPainter((KFontChooserDialog*)self);
}

QPainter* k_fontchooserdialog_qbase_shared_painter(void* self) {
    return KFontChooserDialog_QBaseSharedPainter((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KFontChooserDialog_OnSharedPainter((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_input_method_event(void* self, void* param1) {
    KFontChooserDialog_InputMethodEvent((KFontChooserDialog*)self, (QInputMethodEvent*)param1);
}

void k_fontchooserdialog_qbase_input_method_event(void* self, void* param1) {
    KFontChooserDialog_QBaseInputMethodEvent((KFontChooserDialog*)self, (QInputMethodEvent*)param1);
}

void k_fontchooserdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnInputMethodEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

QVariant* k_fontchooserdialog_input_method_query(void* self, int32_t param1) {
    return KFontChooserDialog_InputMethodQuery((KFontChooserDialog*)self, param1);
}

QVariant* k_fontchooserdialog_qbase_input_method_query(void* self, int32_t param1) {
    return KFontChooserDialog_QBaseInputMethodQuery((KFontChooserDialog*)self, param1);
}

void k_fontchooserdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KFontChooserDialog_OnInputMethodQuery((KFontChooserDialog*)self, (intptr_t)callback);
}

bool k_fontchooserdialog_focus_next_prev_child(void* self, bool next) {
    return KFontChooserDialog_FocusNextPrevChild((KFontChooserDialog*)self, next);
}

bool k_fontchooserdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KFontChooserDialog_QBaseFocusNextPrevChild((KFontChooserDialog*)self, next);
}

void k_fontchooserdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KFontChooserDialog_OnFocusNextPrevChild((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_timer_event(void* self, void* event) {
    KFontChooserDialog_TimerEvent((KFontChooserDialog*)self, (QTimerEvent*)event);
}

void k_fontchooserdialog_qbase_timer_event(void* self, void* event) {
    KFontChooserDialog_QBaseTimerEvent((KFontChooserDialog*)self, (QTimerEvent*)event);
}

void k_fontchooserdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnTimerEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_child_event(void* self, void* event) {
    KFontChooserDialog_ChildEvent((KFontChooserDialog*)self, (QChildEvent*)event);
}

void k_fontchooserdialog_qbase_child_event(void* self, void* event) {
    KFontChooserDialog_QBaseChildEvent((KFontChooserDialog*)self, (QChildEvent*)event);
}

void k_fontchooserdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnChildEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_custom_event(void* self, void* event) {
    KFontChooserDialog_CustomEvent((KFontChooserDialog*)self, (QEvent*)event);
}

void k_fontchooserdialog_qbase_custom_event(void* self, void* event) {
    KFontChooserDialog_QBaseCustomEvent((KFontChooserDialog*)self, (QEvent*)event);
}

void k_fontchooserdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnCustomEvent((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_connect_notify(void* self, void* signal) {
    KFontChooserDialog_ConnectNotify((KFontChooserDialog*)self, (QMetaMethod*)signal);
}

void k_fontchooserdialog_qbase_connect_notify(void* self, void* signal) {
    KFontChooserDialog_QBaseConnectNotify((KFontChooserDialog*)self, (QMetaMethod*)signal);
}

void k_fontchooserdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnConnectNotify((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_disconnect_notify(void* self, void* signal) {
    KFontChooserDialog_DisconnectNotify((KFontChooserDialog*)self, (QMetaMethod*)signal);
}

void k_fontchooserdialog_qbase_disconnect_notify(void* self, void* signal) {
    KFontChooserDialog_QBaseDisconnectNotify((KFontChooserDialog*)self, (QMetaMethod*)signal);
}

void k_fontchooserdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnDisconnectNotify((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_adjust_position(void* self, void* param1) {
    KFontChooserDialog_AdjustPosition((KFontChooserDialog*)self, (QWidget*)param1);
}

void k_fontchooserdialog_qbase_adjust_position(void* self, void* param1) {
    KFontChooserDialog_QBaseAdjustPosition((KFontChooserDialog*)self, (QWidget*)param1);
}

void k_fontchooserdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KFontChooserDialog_OnAdjustPosition((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_update_micro_focus(void* self) {
    KFontChooserDialog_UpdateMicroFocus((KFontChooserDialog*)self);
}

void k_fontchooserdialog_qbase_update_micro_focus(void* self) {
    KFontChooserDialog_QBaseUpdateMicroFocus((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_update_micro_focus(void* self, void (*callback)()) {
    KFontChooserDialog_OnUpdateMicroFocus((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_create(void* self) {
    KFontChooserDialog_Create((KFontChooserDialog*)self);
}

void k_fontchooserdialog_qbase_create(void* self) {
    KFontChooserDialog_QBaseCreate((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_create(void* self, void (*callback)()) {
    KFontChooserDialog_OnCreate((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_destroy(void* self) {
    KFontChooserDialog_Destroy((KFontChooserDialog*)self);
}

void k_fontchooserdialog_qbase_destroy(void* self) {
    KFontChooserDialog_QBaseDestroy((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_destroy(void* self, void (*callback)()) {
    KFontChooserDialog_OnDestroy((KFontChooserDialog*)self, (intptr_t)callback);
}

bool k_fontchooserdialog_focus_next_child(void* self) {
    return KFontChooserDialog_FocusNextChild((KFontChooserDialog*)self);
}

bool k_fontchooserdialog_qbase_focus_next_child(void* self) {
    return KFontChooserDialog_QBaseFocusNextChild((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_focus_next_child(void* self, bool (*callback)()) {
    KFontChooserDialog_OnFocusNextChild((KFontChooserDialog*)self, (intptr_t)callback);
}

bool k_fontchooserdialog_focus_previous_child(void* self) {
    return KFontChooserDialog_FocusPreviousChild((KFontChooserDialog*)self);
}

bool k_fontchooserdialog_qbase_focus_previous_child(void* self) {
    return KFontChooserDialog_QBaseFocusPreviousChild((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KFontChooserDialog_OnFocusPreviousChild((KFontChooserDialog*)self, (intptr_t)callback);
}

QObject* k_fontchooserdialog_sender(void* self) {
    return KFontChooserDialog_Sender((KFontChooserDialog*)self);
}

QObject* k_fontchooserdialog_qbase_sender(void* self) {
    return KFontChooserDialog_QBaseSender((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_sender(void* self, QObject* (*callback)()) {
    KFontChooserDialog_OnSender((KFontChooserDialog*)self, (intptr_t)callback);
}

int32_t k_fontchooserdialog_sender_signal_index(void* self) {
    return KFontChooserDialog_SenderSignalIndex((KFontChooserDialog*)self);
}

int32_t k_fontchooserdialog_qbase_sender_signal_index(void* self) {
    return KFontChooserDialog_QBaseSenderSignalIndex((KFontChooserDialog*)self);
}

void k_fontchooserdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFontChooserDialog_OnSenderSignalIndex((KFontChooserDialog*)self, (intptr_t)callback);
}

int32_t k_fontchooserdialog_receivers(void* self, const char* signal) {
    return KFontChooserDialog_Receivers((KFontChooserDialog*)self, signal);
}

int32_t k_fontchooserdialog_qbase_receivers(void* self, const char* signal) {
    return KFontChooserDialog_QBaseReceivers((KFontChooserDialog*)self, signal);
}

void k_fontchooserdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFontChooserDialog_OnReceivers((KFontChooserDialog*)self, (intptr_t)callback);
}

bool k_fontchooserdialog_is_signal_connected(void* self, void* signal) {
    return KFontChooserDialog_IsSignalConnected((KFontChooserDialog*)self, (QMetaMethod*)signal);
}

bool k_fontchooserdialog_qbase_is_signal_connected(void* self, void* signal) {
    return KFontChooserDialog_QBaseIsSignalConnected((KFontChooserDialog*)self, (QMetaMethod*)signal);
}

void k_fontchooserdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFontChooserDialog_OnIsSignalConnected((KFontChooserDialog*)self, (intptr_t)callback);
}

double k_fontchooserdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KFontChooserDialog_GetDecodedMetricF((KFontChooserDialog*)self, metricA, metricB);
}

double k_fontchooserdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KFontChooserDialog_QBaseGetDecodedMetricF((KFontChooserDialog*)self, metricA, metricB);
}

void k_fontchooserdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KFontChooserDialog_OnGetDecodedMetricF((KFontChooserDialog*)self, (intptr_t)callback);
}

void k_fontchooserdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_fontchooserdialog_delete(void* self) {
    KFontChooserDialog_Delete((KFontChooserDialog*)(self));
}
