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
#include "libgrammalecteconfigdialog.hpp"
#include "libgrammalecteconfigdialog.h"

TextGrammarCheck__GrammalecteConfigDialog* k_textgrammarcheck__grammalecteconfigdialog_new(void* parent) {
    return TextGrammarCheck__GrammalecteConfigDialog_new((QWidget*)parent);
}

TextGrammarCheck__GrammalecteConfigDialog* k_textgrammarcheck__grammalecteconfigdialog_new2() {
    return TextGrammarCheck__GrammalecteConfigDialog_new2();
}

TextGrammarCheck__GrammalecteConfigDialog* k_textgrammarcheck__grammalecteconfigdialog_new3(void* parent, bool disableMessageBox) {
    return TextGrammarCheck__GrammalecteConfigDialog_new3((QWidget*)parent, disableMessageBox);
}

const QMetaObject* k_textgrammarcheck__grammalecteconfigdialog_meta_object(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_MetaObject((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnMetaObject((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

const QMetaObject* k_textgrammarcheck__grammalecteconfigdialog_super_meta_object(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperMetaObject((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void* k_textgrammarcheck__grammalecteconfigdialog_metacast(void* self, const char* param1) {
    return TextGrammarCheck__GrammalecteConfigDialog_Metacast((TextGrammarCheck__GrammalecteConfigDialog*)self, param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnMetacast((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void* k_textgrammarcheck__grammalecteconfigdialog_super_metacast(void* self, const char* param1) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperMetacast((TextGrammarCheck__GrammalecteConfigDialog*)self, param1);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__GrammalecteConfigDialog_Metacall((TextGrammarCheck__GrammalecteConfigDialog*)self, param1, param2, param3);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnMetacall((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperMetacall((TextGrammarCheck__GrammalecteConfigDialog*)self, param1, param2, param3);
}

const char* k_textgrammarcheck__grammalecteconfigdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammalecteconfigdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammalecteconfigdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_textgrammarcheck__grammalecteconfigdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_textgrammarcheck__grammalecteconfigdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textgrammarcheck__grammalecteconfigdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textgrammarcheck__grammalecteconfigdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textgrammarcheck__grammalecteconfigdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textgrammarcheck__grammalecteconfigdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textgrammarcheck__grammalecteconfigdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textgrammarcheck__grammalecteconfigdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textgrammarcheck__grammalecteconfigdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textgrammarcheck__grammalecteconfigdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textgrammarcheck__grammalecteconfigdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textgrammarcheck__grammalecteconfigdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textgrammarcheck__grammalecteconfigdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textgrammarcheck__grammalecteconfigdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textgrammarcheck__grammalecteconfigdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textgrammarcheck__grammalecteconfigdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textgrammarcheck__grammalecteconfigdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textgrammarcheck__grammalecteconfigdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textgrammarcheck__grammalecteconfigdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__grammalecteconfigdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__grammalecteconfigdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__grammalecteconfigdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__grammalecteconfigdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__grammalecteconfigdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__grammalecteconfigdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textgrammarcheck__grammalecteconfigdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textgrammarcheck__grammalecteconfigdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textgrammarcheck__grammalecteconfigdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textgrammarcheck__grammalecteconfigdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textgrammarcheck__grammalecteconfigdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textgrammarcheck__grammalecteconfigdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textgrammarcheck__grammalecteconfigdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textgrammarcheck__grammalecteconfigdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textgrammarcheck__grammalecteconfigdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textgrammarcheck__grammalecteconfigdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textgrammarcheck__grammalecteconfigdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textgrammarcheck__grammalecteconfigdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textgrammarcheck__grammalecteconfigdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textgrammarcheck__grammalecteconfigdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textgrammarcheck__grammalecteconfigdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textgrammarcheck__grammalecteconfigdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textgrammarcheck__grammalecteconfigdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textgrammarcheck__grammalecteconfigdialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textgrammarcheck__grammalecteconfigdialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textgrammarcheck__grammalecteconfigdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textgrammarcheck__grammalecteconfigdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammalecteconfigdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textgrammarcheck__grammalecteconfigdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textgrammarcheck__grammalecteconfigdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textgrammarcheck__grammalecteconfigdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textgrammarcheck__grammalecteconfigdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textgrammarcheck__grammalecteconfigdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textgrammarcheck__grammalecteconfigdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteconfigdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textgrammarcheck__grammalecteconfigdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteconfigdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textgrammarcheck__grammalecteconfigdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textgrammarcheck__grammalecteconfigdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteconfigdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textgrammarcheck__grammalecteconfigdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteconfigdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textgrammarcheck__grammalecteconfigdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textgrammarcheck__grammalecteconfigdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textgrammarcheck__grammalecteconfigdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textgrammarcheck__grammalecteconfigdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textgrammarcheck__grammalecteconfigdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textgrammarcheck__grammalecteconfigdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textgrammarcheck__grammalecteconfigdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textgrammarcheck__grammalecteconfigdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textgrammarcheck__grammalecteconfigdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textgrammarcheck__grammalecteconfigdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textgrammarcheck__grammalecteconfigdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textgrammarcheck__grammalecteconfigdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textgrammarcheck__grammalecteconfigdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textgrammarcheck__grammalecteconfigdialog_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textgrammarcheck__grammalecteconfigdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textgrammarcheck__grammalecteconfigdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textgrammarcheck__grammalecteconfigdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textgrammarcheck__grammalecteconfigdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textgrammarcheck__grammalecteconfigdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textgrammarcheck__grammalecteconfigdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textgrammarcheck__grammalecteconfigdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textgrammarcheck__grammalecteconfigdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textgrammarcheck__grammalecteconfigdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textgrammarcheck__grammalecteconfigdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textgrammarcheck__grammalecteconfigdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textgrammarcheck__grammalecteconfigdialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textgrammarcheck__grammalecteconfigdialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textgrammarcheck__grammalecteconfigdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textgrammarcheck__grammalecteconfigdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textgrammarcheck__grammalecteconfigdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textgrammarcheck__grammalecteconfigdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textgrammarcheck__grammalecteconfigdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textgrammarcheck__grammalecteconfigdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textgrammarcheck__grammalecteconfigdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_find(uintptr_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textgrammarcheck__grammalecteconfigdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textgrammarcheck__grammalecteconfigdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textgrammarcheck__grammalecteconfigdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textgrammarcheck__grammalecteconfigdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textgrammarcheck__grammalecteconfigdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textgrammarcheck__grammalecteconfigdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textgrammarcheck__grammalecteconfigdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textgrammarcheck__grammalecteconfigdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textgrammarcheck__grammalecteconfigdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textgrammarcheck__grammalecteconfigdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textgrammarcheck__grammalecteconfigdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textgrammarcheck__grammalecteconfigdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textgrammarcheck__grammalecteconfigdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textgrammarcheck__grammalecteconfigdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textgrammarcheck__grammalecteconfigdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textgrammarcheck__grammalecteconfigdialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textgrammarcheck__grammalecteconfigdialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textgrammarcheck__grammalecteconfigdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textgrammarcheck__grammalecteconfigdialog_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textgrammarcheck__grammalecteconfigdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textgrammarcheck__grammalecteconfigdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textgrammarcheck__grammalecteconfigdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textgrammarcheck__grammalecteconfigdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textgrammarcheck__grammalecteconfigdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textgrammarcheck__grammalecteconfigdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteconfigdialog_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteconfigdialog_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteconfigdialog_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textgrammarcheck__grammalecteconfigdialog_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__grammalecteconfigdialog_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textgrammarcheck__grammalecteconfigdialog_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textgrammarcheck__grammalecteconfigdialog_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textgrammarcheck__grammalecteconfigdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textgrammarcheck__grammalecteconfigdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textgrammarcheck__grammalecteconfigdialog_dynamic_property_names\n");
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

QBindingStorage* k_textgrammarcheck__grammalecteconfigdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textgrammarcheck__grammalecteconfigdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__grammalecteconfigdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textgrammarcheck__grammalecteconfigdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteconfigdialog_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteconfigdialog_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textgrammarcheck__grammalecteconfigdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textgrammarcheck__grammalecteconfigdialog_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textgrammarcheck__grammalecteconfigdialog_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textgrammarcheck__grammalecteconfigdialog_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textgrammarcheck__grammalecteconfigdialog_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textgrammarcheck__grammalecteconfigdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteconfigdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textgrammarcheck__grammalecteconfigdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textgrammarcheck__grammalecteconfigdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textgrammarcheck__grammalecteconfigdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_textgrammarcheck__grammalecteconfigdialog_set_visible(void* self, bool visible) {
    TextGrammarCheck__GrammalecteConfigDialog_SetVisible((TextGrammarCheck__GrammalecteConfigDialog*)self, visible);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_set_visible(void* self, bool visible) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperSetVisible((TextGrammarCheck__GrammalecteConfigDialog*)self, visible);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnSetVisible((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

QSize* k_textgrammarcheck__grammalecteconfigdialog_size_hint(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SizeHint((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

QSize* k_textgrammarcheck__grammalecteconfigdialog_super_size_hint(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperSizeHint((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_size_hint(void* self, QSize* (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnSizeHint((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

QSize* k_textgrammarcheck__grammalecteconfigdialog_minimum_size_hint(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

QSize* k_textgrammarcheck__grammalecteconfigdialog_super_minimum_size_hint(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperMinimumSizeHint((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnMinimumSizeHint((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_open(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_Open((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_open(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperOpen((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_open(void* self, void (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnOpen((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_exec(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_Exec((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_super_exec(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperExec((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_exec(void* self, int32_t (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnExec((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_done(void* self, int param1) {
    TextGrammarCheck__GrammalecteConfigDialog_Done((TextGrammarCheck__GrammalecteConfigDialog*)self, param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_done(void* self, int param1) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperDone((TextGrammarCheck__GrammalecteConfigDialog*)self, param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_done(void* self, void (*callback)(void*, int)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnDone((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_accept(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_Accept((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_accept(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperAccept((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_accept(void* self, void (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnAccept((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_reject(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_Reject((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_reject(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperReject((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_reject(void* self, void (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnReject((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_key_press_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QKeyEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_key_press_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperKeyPressEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QKeyEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnKeyPressEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_close_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_CloseEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QCloseEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_close_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperCloseEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QCloseEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnCloseEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_show_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_ShowEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QShowEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_show_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperShowEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QShowEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnShowEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_resize_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_ResizeEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QResizeEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_resize_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperResizeEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QResizeEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnResizeEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_context_menu_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QContextMenuEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_context_menu_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperContextMenuEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QContextMenuEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnContextMenuEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteconfigdialog_event_filter(void* self, void* param1, void* param2) {
    return TextGrammarCheck__GrammalecteConfigDialog_EventFilter((TextGrammarCheck__GrammalecteConfigDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_textgrammarcheck__grammalecteconfigdialog_super_event_filter(void* self, void* param1, void* param2) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperEventFilter((TextGrammarCheck__GrammalecteConfigDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnEventFilter((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_dev_type(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_DevType((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_super_dev_type(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperDevType((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_dev_type(void* self, int32_t (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnDevType((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_height_for_width(void* self, int param1) {
    return TextGrammarCheck__GrammalecteConfigDialog_HeightForWidth((TextGrammarCheck__GrammalecteConfigDialog*)self, param1);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_super_height_for_width(void* self, int param1) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperHeightForWidth((TextGrammarCheck__GrammalecteConfigDialog*)self, param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnHeightForWidth((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteconfigdialog_has_height_for_width(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_super_has_height_for_width(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperHasHeightForWidth((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnHasHeightForWidth((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_textgrammarcheck__grammalecteconfigdialog_paint_engine(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_PaintEngine((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

QPaintEngine* k_textgrammarcheck__grammalecteconfigdialog_super_paint_engine(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperPaintEngine((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnPaintEngine((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteconfigdialog_event(void* self, void* event) {
    return TextGrammarCheck__GrammalecteConfigDialog_Event((TextGrammarCheck__GrammalecteConfigDialog*)self, (QEvent*)event);
}

bool k_textgrammarcheck__grammalecteconfigdialog_super_event(void* self, void* event) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_mouse_press_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_MousePressEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_mouse_press_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperMousePressEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnMousePressEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_mouse_release_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_mouse_release_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperMouseReleaseEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnMouseReleaseEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_mouse_double_click_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_mouse_double_click_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperMouseDoubleClickEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnMouseDoubleClickEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_mouse_move_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_mouse_move_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperMouseMoveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMouseEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnMouseMoveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_wheel_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_WheelEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QWheelEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_wheel_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperWheelEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QWheelEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnWheelEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_key_release_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QKeyEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_key_release_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperKeyReleaseEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QKeyEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnKeyReleaseEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_focus_in_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_FocusInEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QFocusEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_focus_in_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperFocusInEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QFocusEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnFocusInEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_focus_out_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QFocusEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_focus_out_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperFocusOutEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QFocusEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnFocusOutEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_enter_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_EnterEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QEnterEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_enter_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperEnterEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QEnterEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnEnterEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_leave_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_LeaveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_leave_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperLeaveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnLeaveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_paint_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_PaintEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QPaintEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_paint_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperPaintEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QPaintEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnPaintEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_move_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_MoveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMoveEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_move_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperMoveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMoveEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnMoveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_tablet_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_TabletEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QTabletEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_tablet_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperTabletEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QTabletEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnTabletEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_action_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_ActionEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QActionEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_action_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperActionEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QActionEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnActionEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_drag_enter_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QDragEnterEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_drag_enter_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperDragEnterEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QDragEnterEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnDragEnterEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_drag_move_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QDragMoveEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_drag_move_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperDragMoveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QDragMoveEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnDragMoveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_drag_leave_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QDragLeaveEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_drag_leave_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperDragLeaveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QDragLeaveEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnDragLeaveEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_drop_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_DropEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QDropEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_drop_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperDropEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QDropEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnDropEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_hide_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_HideEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QHideEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_hide_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperHideEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QHideEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnHideEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteconfigdialog_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextGrammarCheck__GrammalecteConfigDialog_NativeEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, qstring(eventType), message, result);
}

bool k_textgrammarcheck__grammalecteconfigdialog_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperNativeEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, qstring(eventType), message, result);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnNativeEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_change_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_ChangeEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_change_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperChangeEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnChangeEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_metric(void* self, int32_t param1) {
    return TextGrammarCheck__GrammalecteConfigDialog_Metric((TextGrammarCheck__GrammalecteConfigDialog*)self, param1);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_super_metric(void* self, int32_t param1) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperMetric((TextGrammarCheck__GrammalecteConfigDialog*)self, param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnMetric((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_init_painter(void* self, void* painter) {
    TextGrammarCheck__GrammalecteConfigDialog_InitPainter((TextGrammarCheck__GrammalecteConfigDialog*)self, (QPainter*)painter);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_init_painter(void* self, void* painter) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperInitPainter((TextGrammarCheck__GrammalecteConfigDialog*)self, (QPainter*)painter);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnInitPainter((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_textgrammarcheck__grammalecteconfigdialog_redirected(void* self, void* offset) {
    return TextGrammarCheck__GrammalecteConfigDialog_Redirected((TextGrammarCheck__GrammalecteConfigDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_textgrammarcheck__grammalecteconfigdialog_super_redirected(void* self, void* offset) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperRedirected((TextGrammarCheck__GrammalecteConfigDialog*)self, (QPoint*)offset);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnRedirected((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

QPainter* k_textgrammarcheck__grammalecteconfigdialog_shared_painter(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SharedPainter((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

QPainter* k_textgrammarcheck__grammalecteconfigdialog_super_shared_painter(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperSharedPainter((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnSharedPainter((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_input_method_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QInputMethodEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_input_method_event(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperInputMethodEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QInputMethodEvent*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnInputMethodEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

QVariant* k_textgrammarcheck__grammalecteconfigdialog_input_method_query(void* self, int32_t param1) {
    return TextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery((TextGrammarCheck__GrammalecteConfigDialog*)self, param1);
}

QVariant* k_textgrammarcheck__grammalecteconfigdialog_super_input_method_query(void* self, int32_t param1) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperInputMethodQuery((TextGrammarCheck__GrammalecteConfigDialog*)self, param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnInputMethodQuery((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteconfigdialog_focus_next_prev_child(void* self, bool next) {
    return TextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild((TextGrammarCheck__GrammalecteConfigDialog*)self, next);
}

bool k_textgrammarcheck__grammalecteconfigdialog_super_focus_next_prev_child(void* self, bool next) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperFocusNextPrevChild((TextGrammarCheck__GrammalecteConfigDialog*)self, next);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnFocusNextPrevChild((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_timer_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_TimerEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_timer_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperTimerEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QTimerEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnTimerEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_child_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_ChildEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_child_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperChildEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QChildEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnChildEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_custom_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_CustomEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_custom_event(void* self, void* event) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperCustomEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (QEvent*)event);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnCustomEvent((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_connect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteConfigDialog_ConnectNotify((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_connect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperConnectNotify((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnConnectNotify((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_disconnect_notify(void* self, void* signal) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperDisconnectNotify((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnDisconnectNotify((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_adjust_position(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_AdjustPosition((TextGrammarCheck__GrammalecteConfigDialog*)self, (QWidget*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_adjust_position(void* self, void* param1) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperAdjustPosition((TextGrammarCheck__GrammalecteConfigDialog*)self, (QWidget*)param1);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnAdjustPosition((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_update_micro_focus(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_update_micro_focus(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperUpdateMicroFocus((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_update_micro_focus(void* self, void (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnUpdateMicroFocus((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_create(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_Create((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_create(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperCreate((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_create(void* self, void (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnCreate((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_destroy(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_Destroy((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_super_destroy(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_SuperDestroy((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_destroy(void* self, void (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnDestroy((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteconfigdialog_focus_next_child(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_FocusNextChild((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_super_focus_next_child(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperFocusNextChild((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_focus_next_child(void* self, bool (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnFocusNextChild((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteconfigdialog_focus_previous_child(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

bool k_textgrammarcheck__grammalecteconfigdialog_super_focus_previous_child(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperFocusPreviousChild((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnFocusPreviousChild((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

QObject* k_textgrammarcheck__grammalecteconfigdialog_sender(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_Sender((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

QObject* k_textgrammarcheck__grammalecteconfigdialog_super_sender(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperSender((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_sender(void* self, QObject* (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnSender((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_sender_signal_index(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_super_sender_signal_index(void* self) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperSenderSignalIndex((TextGrammarCheck__GrammalecteConfigDialog*)self);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextGrammarCheck__GrammalecteConfigDialog_OnSenderSignalIndex((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_receivers(void* self, const char* signal) {
    return TextGrammarCheck__GrammalecteConfigDialog_Receivers((TextGrammarCheck__GrammalecteConfigDialog*)self, signal);
}

int32_t k_textgrammarcheck__grammalecteconfigdialog_super_receivers(void* self, const char* signal) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperReceivers((TextGrammarCheck__GrammalecteConfigDialog*)self, signal);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnReceivers((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

bool k_textgrammarcheck__grammalecteconfigdialog_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMetaMethod*)signal);
}

bool k_textgrammarcheck__grammalecteconfigdialog_super_is_signal_connected(void* self, void* signal) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperIsSignalConnected((TextGrammarCheck__GrammalecteConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnIsSignalConnected((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

double k_textgrammarcheck__grammalecteconfigdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF((TextGrammarCheck__GrammalecteConfigDialog*)self, metricA, metricB);
}

double k_textgrammarcheck__grammalecteconfigdialog_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextGrammarCheck__GrammalecteConfigDialog_SuperGetDecodedMetricF((TextGrammarCheck__GrammalecteConfigDialog*)self, metricA, metricB);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextGrammarCheck__GrammalecteConfigDialog_OnGetDecodedMetricF((TextGrammarCheck__GrammalecteConfigDialog*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textgrammarcheck__grammalecteconfigdialog_delete(void* self) {
    TextGrammarCheck__GrammalecteConfigDialog_Delete((TextGrammarCheck__GrammalecteConfigDialog*)(self));
}
