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
#include "liblanguagetoolconfigdialog.hpp"
#include "liblanguagetoolconfigdialog.h"

TextGrammarCheck__LanguageToolConfigDialog* k_textgrammarcheck__languagetoolconfigdialog_new(void* parent) {
    return TextGrammarCheck__LanguageToolConfigDialog_new((QWidget*)parent);
}

TextGrammarCheck__LanguageToolConfigDialog* k_textgrammarcheck__languagetoolconfigdialog_new2() {
    return TextGrammarCheck__LanguageToolConfigDialog_new2();
}

const QMetaObject* k_textgrammarcheck__languagetoolconfigdialog_meta_object(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_MetaObject((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnMetaObject((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

const QMetaObject* k_textgrammarcheck__languagetoolconfigdialog_super_meta_object(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperMetaObject((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void* k_textgrammarcheck__languagetoolconfigdialog_metacast(void* self, const char* param1) {
    return TextGrammarCheck__LanguageToolConfigDialog_Metacast((TextGrammarCheck__LanguageToolConfigDialog*)self, param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnMetacast((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void* k_textgrammarcheck__languagetoolconfigdialog_super_metacast(void* self, const char* param1) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperMetacast((TextGrammarCheck__LanguageToolConfigDialog*)self, param1);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__LanguageToolConfigDialog_Metacall((TextGrammarCheck__LanguageToolConfigDialog*)self, param1, param2, param3);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnMetacall((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperMetacall((TextGrammarCheck__LanguageToolConfigDialog*)self, param1, param2, param3);
}

const char* k_textgrammarcheck__languagetoolconfigdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__languagetoolconfigdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__languagetoolconfigdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_textgrammarcheck__languagetoolconfigdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_textgrammarcheck__languagetoolconfigdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textgrammarcheck__languagetoolconfigdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textgrammarcheck__languagetoolconfigdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textgrammarcheck__languagetoolconfigdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textgrammarcheck__languagetoolconfigdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textgrammarcheck__languagetoolconfigdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textgrammarcheck__languagetoolconfigdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textgrammarcheck__languagetoolconfigdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textgrammarcheck__languagetoolconfigdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textgrammarcheck__languagetoolconfigdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textgrammarcheck__languagetoolconfigdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textgrammarcheck__languagetoolconfigdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textgrammarcheck__languagetoolconfigdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textgrammarcheck__languagetoolconfigdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textgrammarcheck__languagetoolconfigdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textgrammarcheck__languagetoolconfigdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textgrammarcheck__languagetoolconfigdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textgrammarcheck__languagetoolconfigdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textgrammarcheck__languagetoolconfigdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textgrammarcheck__languagetoolconfigdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textgrammarcheck__languagetoolconfigdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textgrammarcheck__languagetoolconfigdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textgrammarcheck__languagetoolconfigdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textgrammarcheck__languagetoolconfigdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textgrammarcheck__languagetoolconfigdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textgrammarcheck__languagetoolconfigdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textgrammarcheck__languagetoolconfigdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textgrammarcheck__languagetoolconfigdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textgrammarcheck__languagetoolconfigdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textgrammarcheck__languagetoolconfigdialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textgrammarcheck__languagetoolconfigdialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textgrammarcheck__languagetoolconfigdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textgrammarcheck__languagetoolconfigdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__languagetoolconfigdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textgrammarcheck__languagetoolconfigdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textgrammarcheck__languagetoolconfigdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textgrammarcheck__languagetoolconfigdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textgrammarcheck__languagetoolconfigdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textgrammarcheck__languagetoolconfigdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textgrammarcheck__languagetoolconfigdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolconfigdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textgrammarcheck__languagetoolconfigdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolconfigdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textgrammarcheck__languagetoolconfigdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__languagetoolconfigdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolconfigdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textgrammarcheck__languagetoolconfigdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolconfigdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textgrammarcheck__languagetoolconfigdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textgrammarcheck__languagetoolconfigdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textgrammarcheck__languagetoolconfigdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textgrammarcheck__languagetoolconfigdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textgrammarcheck__languagetoolconfigdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textgrammarcheck__languagetoolconfigdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textgrammarcheck__languagetoolconfigdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textgrammarcheck__languagetoolconfigdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textgrammarcheck__languagetoolconfigdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textgrammarcheck__languagetoolconfigdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textgrammarcheck__languagetoolconfigdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textgrammarcheck__languagetoolconfigdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textgrammarcheck__languagetoolconfigdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textgrammarcheck__languagetoolconfigdialog_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textgrammarcheck__languagetoolconfigdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textgrammarcheck__languagetoolconfigdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textgrammarcheck__languagetoolconfigdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textgrammarcheck__languagetoolconfigdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textgrammarcheck__languagetoolconfigdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textgrammarcheck__languagetoolconfigdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textgrammarcheck__languagetoolconfigdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textgrammarcheck__languagetoolconfigdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textgrammarcheck__languagetoolconfigdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textgrammarcheck__languagetoolconfigdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textgrammarcheck__languagetoolconfigdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textgrammarcheck__languagetoolconfigdialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textgrammarcheck__languagetoolconfigdialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textgrammarcheck__languagetoolconfigdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textgrammarcheck__languagetoolconfigdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textgrammarcheck__languagetoolconfigdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textgrammarcheck__languagetoolconfigdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textgrammarcheck__languagetoolconfigdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textgrammarcheck__languagetoolconfigdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textgrammarcheck__languagetoolconfigdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_find(uintptr_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textgrammarcheck__languagetoolconfigdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textgrammarcheck__languagetoolconfigdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textgrammarcheck__languagetoolconfigdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textgrammarcheck__languagetoolconfigdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textgrammarcheck__languagetoolconfigdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textgrammarcheck__languagetoolconfigdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textgrammarcheck__languagetoolconfigdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textgrammarcheck__languagetoolconfigdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textgrammarcheck__languagetoolconfigdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textgrammarcheck__languagetoolconfigdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textgrammarcheck__languagetoolconfigdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textgrammarcheck__languagetoolconfigdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textgrammarcheck__languagetoolconfigdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textgrammarcheck__languagetoolconfigdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textgrammarcheck__languagetoolconfigdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textgrammarcheck__languagetoolconfigdialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textgrammarcheck__languagetoolconfigdialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textgrammarcheck__languagetoolconfigdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__languagetoolconfigdialog_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textgrammarcheck__languagetoolconfigdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textgrammarcheck__languagetoolconfigdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textgrammarcheck__languagetoolconfigdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textgrammarcheck__languagetoolconfigdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textgrammarcheck__languagetoolconfigdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textgrammarcheck__languagetoolconfigdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textgrammarcheck__languagetoolconfigdialog_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__languagetoolconfigdialog_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textgrammarcheck__languagetoolconfigdialog_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textgrammarcheck__languagetoolconfigdialog_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textgrammarcheck__languagetoolconfigdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textgrammarcheck__languagetoolconfigdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__languagetoolconfigdialog_dynamic_property_names\n");
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

QBindingStorage* k_textgrammarcheck__languagetoolconfigdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textgrammarcheck__languagetoolconfigdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__languagetoolconfigdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textgrammarcheck__languagetoolconfigdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textgrammarcheck__languagetoolconfigdialog_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textgrammarcheck__languagetoolconfigdialog_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textgrammarcheck__languagetoolconfigdialog_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__languagetoolconfigdialog_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textgrammarcheck__languagetoolconfigdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolconfigdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textgrammarcheck__languagetoolconfigdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textgrammarcheck__languagetoolconfigdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textgrammarcheck__languagetoolconfigdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_textgrammarcheck__languagetoolconfigdialog_set_visible(void* self, bool visible) {
    TextGrammarCheck__LanguageToolConfigDialog_SetVisible((TextGrammarCheck__LanguageToolConfigDialog*)self, visible);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_set_visible(void* self, bool visible) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperSetVisible((TextGrammarCheck__LanguageToolConfigDialog*)self, visible);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnSetVisible((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

QSize* k_textgrammarcheck__languagetoolconfigdialog_size_hint(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SizeHint((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

QSize* k_textgrammarcheck__languagetoolconfigdialog_super_size_hint(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperSizeHint((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_size_hint(void* self, QSize* (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnSizeHint((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

QSize* k_textgrammarcheck__languagetoolconfigdialog_minimum_size_hint(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_MinimumSizeHint((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

QSize* k_textgrammarcheck__languagetoolconfigdialog_super_minimum_size_hint(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperMinimumSizeHint((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnMinimumSizeHint((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_open(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_Open((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_open(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperOpen((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_open(void* self, void (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnOpen((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_exec(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_Exec((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_super_exec(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperExec((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_exec(void* self, int32_t (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnExec((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_done(void* self, int param1) {
    TextGrammarCheck__LanguageToolConfigDialog_Done((TextGrammarCheck__LanguageToolConfigDialog*)self, param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_done(void* self, int param1) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperDone((TextGrammarCheck__LanguageToolConfigDialog*)self, param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_done(void* self, void (*callback)(void*, int)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnDone((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_accept(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_Accept((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_accept(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperAccept((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_accept(void* self, void (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnAccept((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_reject(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_Reject((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_reject(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperReject((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_reject(void* self, void (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnReject((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_key_press_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_KeyPressEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QKeyEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_key_press_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperKeyPressEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QKeyEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnKeyPressEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_close_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_CloseEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QCloseEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_close_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperCloseEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QCloseEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnCloseEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_show_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_ShowEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QShowEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_show_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperShowEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QShowEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnShowEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_resize_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_ResizeEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QResizeEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_resize_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperResizeEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QResizeEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnResizeEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_context_menu_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_ContextMenuEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QContextMenuEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_context_menu_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperContextMenuEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QContextMenuEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnContextMenuEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolconfigdialog_event_filter(void* self, void* param1, void* param2) {
    return TextGrammarCheck__LanguageToolConfigDialog_EventFilter((TextGrammarCheck__LanguageToolConfigDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_textgrammarcheck__languagetoolconfigdialog_super_event_filter(void* self, void* param1, void* param2) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperEventFilter((TextGrammarCheck__LanguageToolConfigDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnEventFilter((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_dev_type(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_DevType((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_super_dev_type(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperDevType((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_dev_type(void* self, int32_t (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnDevType((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_height_for_width(void* self, int param1) {
    return TextGrammarCheck__LanguageToolConfigDialog_HeightForWidth((TextGrammarCheck__LanguageToolConfigDialog*)self, param1);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_super_height_for_width(void* self, int param1) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperHeightForWidth((TextGrammarCheck__LanguageToolConfigDialog*)self, param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnHeightForWidth((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolconfigdialog_has_height_for_width(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_HasHeightForWidth((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_super_has_height_for_width(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperHasHeightForWidth((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnHasHeightForWidth((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_textgrammarcheck__languagetoolconfigdialog_paint_engine(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_PaintEngine((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

QPaintEngine* k_textgrammarcheck__languagetoolconfigdialog_super_paint_engine(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperPaintEngine((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnPaintEngine((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolconfigdialog_event(void* self, void* event) {
    return TextGrammarCheck__LanguageToolConfigDialog_Event((TextGrammarCheck__LanguageToolConfigDialog*)self, (QEvent*)event);
}

bool k_textgrammarcheck__languagetoolconfigdialog_super_event(void* self, void* event) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_mouse_press_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_MousePressEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_mouse_press_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperMousePressEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnMousePressEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_mouse_release_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_MouseReleaseEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_mouse_release_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperMouseReleaseEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnMouseReleaseEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_mouse_double_click_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_MouseDoubleClickEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_mouse_double_click_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperMouseDoubleClickEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnMouseDoubleClickEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_mouse_move_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_MouseMoveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_mouse_move_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperMouseMoveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnMouseMoveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_wheel_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_WheelEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QWheelEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_wheel_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperWheelEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QWheelEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnWheelEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_key_release_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_KeyReleaseEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QKeyEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_key_release_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperKeyReleaseEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QKeyEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnKeyReleaseEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_focus_in_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_FocusInEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QFocusEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_focus_in_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperFocusInEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QFocusEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnFocusInEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_focus_out_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_FocusOutEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QFocusEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_focus_out_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperFocusOutEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QFocusEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnFocusOutEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_enter_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_EnterEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QEnterEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_enter_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperEnterEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QEnterEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnEnterEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_leave_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_LeaveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_leave_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperLeaveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnLeaveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_paint_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_PaintEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QPaintEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_paint_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperPaintEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QPaintEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnPaintEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_move_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_MoveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMoveEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_move_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperMoveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMoveEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnMoveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_tablet_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_TabletEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QTabletEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_tablet_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperTabletEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QTabletEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnTabletEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_action_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_ActionEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QActionEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_action_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperActionEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QActionEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnActionEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_drag_enter_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_DragEnterEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QDragEnterEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_drag_enter_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperDragEnterEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QDragEnterEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnDragEnterEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_drag_move_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_DragMoveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QDragMoveEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_drag_move_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperDragMoveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QDragMoveEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnDragMoveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_drag_leave_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_DragLeaveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QDragLeaveEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_drag_leave_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperDragLeaveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QDragLeaveEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnDragLeaveEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_drop_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_DropEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QDropEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_drop_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperDropEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QDropEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnDropEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_hide_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_HideEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QHideEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_hide_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperHideEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QHideEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnHideEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolconfigdialog_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextGrammarCheck__LanguageToolConfigDialog_NativeEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, qstring(eventType), message, result);
}

bool k_textgrammarcheck__languagetoolconfigdialog_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperNativeEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, qstring(eventType), message, result);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnNativeEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_change_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_ChangeEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_change_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperChangeEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnChangeEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_metric(void* self, int32_t param1) {
    return TextGrammarCheck__LanguageToolConfigDialog_Metric((TextGrammarCheck__LanguageToolConfigDialog*)self, param1);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_super_metric(void* self, int32_t param1) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperMetric((TextGrammarCheck__LanguageToolConfigDialog*)self, param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnMetric((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_init_painter(void* self, void* painter) {
    TextGrammarCheck__LanguageToolConfigDialog_InitPainter((TextGrammarCheck__LanguageToolConfigDialog*)self, (QPainter*)painter);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_init_painter(void* self, void* painter) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperInitPainter((TextGrammarCheck__LanguageToolConfigDialog*)self, (QPainter*)painter);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnInitPainter((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_textgrammarcheck__languagetoolconfigdialog_redirected(void* self, void* offset) {
    return TextGrammarCheck__LanguageToolConfigDialog_Redirected((TextGrammarCheck__LanguageToolConfigDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_textgrammarcheck__languagetoolconfigdialog_super_redirected(void* self, void* offset) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperRedirected((TextGrammarCheck__LanguageToolConfigDialog*)self, (QPoint*)offset);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnRedirected((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

QPainter* k_textgrammarcheck__languagetoolconfigdialog_shared_painter(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SharedPainter((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

QPainter* k_textgrammarcheck__languagetoolconfigdialog_super_shared_painter(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperSharedPainter((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnSharedPainter((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_input_method_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_InputMethodEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QInputMethodEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_input_method_event(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperInputMethodEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QInputMethodEvent*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnInputMethodEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

QVariant* k_textgrammarcheck__languagetoolconfigdialog_input_method_query(void* self, int32_t param1) {
    return TextGrammarCheck__LanguageToolConfigDialog_InputMethodQuery((TextGrammarCheck__LanguageToolConfigDialog*)self, param1);
}

QVariant* k_textgrammarcheck__languagetoolconfigdialog_super_input_method_query(void* self, int32_t param1) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperInputMethodQuery((TextGrammarCheck__LanguageToolConfigDialog*)self, param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnInputMethodQuery((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolconfigdialog_focus_next_prev_child(void* self, bool next) {
    return TextGrammarCheck__LanguageToolConfigDialog_FocusNextPrevChild((TextGrammarCheck__LanguageToolConfigDialog*)self, next);
}

bool k_textgrammarcheck__languagetoolconfigdialog_super_focus_next_prev_child(void* self, bool next) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperFocusNextPrevChild((TextGrammarCheck__LanguageToolConfigDialog*)self, next);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnFocusNextPrevChild((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_timer_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_TimerEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_timer_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperTimerEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnTimerEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_child_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_ChildEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_child_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperChildEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnChildEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_custom_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_CustomEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_custom_event(void* self, void* event) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperCustomEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (QEvent*)event);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnCustomEvent((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_connect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolConfigDialog_ConnectNotify((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_connect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperConnectNotify((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnConnectNotify((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolConfigDialog_DisconnectNotify((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperDisconnectNotify((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnDisconnectNotify((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_adjust_position(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_AdjustPosition((TextGrammarCheck__LanguageToolConfigDialog*)self, (QWidget*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_adjust_position(void* self, void* param1) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperAdjustPosition((TextGrammarCheck__LanguageToolConfigDialog*)self, (QWidget*)param1);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnAdjustPosition((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_update_micro_focus(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_UpdateMicroFocus((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_update_micro_focus(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperUpdateMicroFocus((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_update_micro_focus(void* self, void (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnUpdateMicroFocus((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_create(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_Create((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_create(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperCreate((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_create(void* self, void (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnCreate((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_destroy(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_Destroy((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_super_destroy(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_SuperDestroy((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_destroy(void* self, void (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnDestroy((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolconfigdialog_focus_next_child(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_FocusNextChild((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_super_focus_next_child(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperFocusNextChild((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_focus_next_child(void* self, bool (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnFocusNextChild((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolconfigdialog_focus_previous_child(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_FocusPreviousChild((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

bool k_textgrammarcheck__languagetoolconfigdialog_super_focus_previous_child(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperFocusPreviousChild((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnFocusPreviousChild((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__languagetoolconfigdialog_sender(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_Sender((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

QObject* k_textgrammarcheck__languagetoolconfigdialog_super_sender(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperSender((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_sender(void* self, QObject* (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnSender((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_sender_signal_index(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SenderSignalIndex((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_super_sender_signal_index(void* self) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperSenderSignalIndex((TextGrammarCheck__LanguageToolConfigDialog*)self);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextGrammarCheck__LanguageToolConfigDialog_OnSenderSignalIndex((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_receivers(void* self, const char* signal) {
    return TextGrammarCheck__LanguageToolConfigDialog_Receivers((TextGrammarCheck__LanguageToolConfigDialog*)self, signal);
}

int32_t k_textgrammarcheck__languagetoolconfigdialog_super_receivers(void* self, const char* signal) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperReceivers((TextGrammarCheck__LanguageToolConfigDialog*)self, signal);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnReceivers((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__languagetoolconfigdialog_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__LanguageToolConfigDialog_IsSignalConnected((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMetaMethod*)signal);
}

bool k_textgrammarcheck__languagetoolconfigdialog_super_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperIsSignalConnected((TextGrammarCheck__LanguageToolConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnIsSignalConnected((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

double k_textgrammarcheck__languagetoolconfigdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextGrammarCheck__LanguageToolConfigDialog_GetDecodedMetricF((TextGrammarCheck__LanguageToolConfigDialog*)self, metricA, metricB);
}

double k_textgrammarcheck__languagetoolconfigdialog_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextGrammarCheck__LanguageToolConfigDialog_SuperGetDecodedMetricF((TextGrammarCheck__LanguageToolConfigDialog*)self, metricA, metricB);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextGrammarCheck__LanguageToolConfigDialog_OnGetDecodedMetricF((TextGrammarCheck__LanguageToolConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textgrammarcheck__languagetoolconfigdialog_delete(void* self) {
    TextGrammarCheck__LanguageToolConfigDialog_Delete((TextGrammarCheck__LanguageToolConfigDialog*)(self));
}
