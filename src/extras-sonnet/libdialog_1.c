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
#include "libbackgroundchecker.hpp"
#include "libdialog_1.hpp"
#include "libdialog_1.h"

Sonnet__Dialog* k_sonnet__dialog_new(void* checker, void* parent) {
    return Sonnet__Dialog_new((Sonnet__BackgroundChecker*)checker, (QWidget*)parent);
}

const QMetaObject* k_sonnet__dialog_meta_object(void* self) {
    return Sonnet__Dialog_MetaObject((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    Sonnet__Dialog_OnMetaObject((Sonnet__Dialog*)self, (intptr_t)callback);
}

const QMetaObject* k_sonnet__dialog_qbase_meta_object(void* self) {
    return Sonnet__Dialog_QBaseMetaObject((Sonnet__Dialog*)self);
}

void* k_sonnet__dialog_metacast(void* self, const char* param1) {
    return Sonnet__Dialog_Metacast((Sonnet__Dialog*)self, param1);
}

void k_sonnet__dialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Sonnet__Dialog_OnMetacast((Sonnet__Dialog*)self, (intptr_t)callback);
}

void* k_sonnet__dialog_qbase_metacast(void* self, const char* param1) {
    return Sonnet__Dialog_QBaseMetacast((Sonnet__Dialog*)self, param1);
}

int32_t k_sonnet__dialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__Dialog_Metacall((Sonnet__Dialog*)self, param1, param2, param3);
}

void k_sonnet__dialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Sonnet__Dialog_OnMetacall((Sonnet__Dialog*)self, (intptr_t)callback);
}

int32_t k_sonnet__dialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__Dialog_QBaseMetacall((Sonnet__Dialog*)self, param1, param2, param3);
}

const char* k_sonnet__dialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__dialog_original_buffer(void* self) {
    libqt_string _str = Sonnet__Dialog_OriginalBuffer((Sonnet__Dialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__dialog_buffer(void* self) {
    libqt_string _str = Sonnet__Dialog_Buffer((Sonnet__Dialog*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dialog_show(void* self) {
    Sonnet__Dialog_Show((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_active_auto_correct(void* self, bool _active) {
    Sonnet__Dialog_ActiveAutoCorrect((Sonnet__Dialog*)self, _active);
}

void k_sonnet__dialog_show_progress_dialog(void* self) {
    Sonnet__Dialog_ShowProgressDialog((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_show_spell_check_completion_message(void* self) {
    Sonnet__Dialog_ShowSpellCheckCompletionMessage((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_set_spell_check_continued_after_replacement(void* self, bool b) {
    Sonnet__Dialog_SetSpellCheckContinuedAfterReplacement((Sonnet__Dialog*)self, b);
}

void k_sonnet__dialog_set_buffer(void* self, const char* buffer) {
    Sonnet__Dialog_SetBuffer((Sonnet__Dialog*)self, qstring(buffer));
}

void k_sonnet__dialog_spell_check_done(void* self, const char* newBuffer) {
    Sonnet__Dialog_SpellCheckDone((Sonnet__Dialog*)self, qstring(newBuffer));
}

void k_sonnet__dialog_on_spell_check_done(void* self, void (*callback)(void*, const char*)) {
    Sonnet__Dialog_Connect_SpellCheckDone((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_misspelling(void* self, const char* word, int start) {
    Sonnet__Dialog_Misspelling((Sonnet__Dialog*)self, qstring(word), start);
}

void k_sonnet__dialog_on_misspelling(void* self, void (*callback)(void*, const char*, int)) {
    Sonnet__Dialog_Connect_Misspelling((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_replace(void* self, const char* oldWord, int start, const char* newWord) {
    Sonnet__Dialog_Replace((Sonnet__Dialog*)self, qstring(oldWord), start, qstring(newWord));
}

void k_sonnet__dialog_on_replace(void* self, void (*callback)(void*, const char*, int, const char*)) {
    Sonnet__Dialog_Connect_Replace((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_stop(void* self) {
    Sonnet__Dialog_Stop((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_stop(void* self, void (*callback)(void*)) {
    Sonnet__Dialog_Connect_Stop((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_cancel(void* self) {
    Sonnet__Dialog_Cancel((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_cancel(void* self, void (*callback)(void*)) {
    Sonnet__Dialog_Connect_Cancel((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_auto_correct(void* self, const char* currentWord, const char* replaceWord) {
    Sonnet__Dialog_AutoCorrect((Sonnet__Dialog*)self, qstring(currentWord), qstring(replaceWord));
}

void k_sonnet__dialog_on_auto_correct(void* self, void (*callback)(void*, const char*, const char*)) {
    Sonnet__Dialog_Connect_AutoCorrect((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_spell_check_status(void* self, const char* param1) {
    Sonnet__Dialog_SpellCheckStatus((Sonnet__Dialog*)self, qstring(param1));
}

void k_sonnet__dialog_on_spell_check_status(void* self, void (*callback)(void*, const char*)) {
    Sonnet__Dialog_Connect_SpellCheckStatus((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_language_changed(void* self, const char* language) {
    Sonnet__Dialog_LanguageChanged((Sonnet__Dialog*)self, qstring(language));
}

void k_sonnet__dialog_on_language_changed(void* self, void (*callback)(void*, const char*)) {
    Sonnet__Dialog_Connect_LanguageChanged((Sonnet__Dialog*)self, (intptr_t)callback);
}

const char* k_sonnet__dialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__dialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dialog_show_progress_dialog1(void* self, int timeout) {
    Sonnet__Dialog_ShowProgressDialog1((Sonnet__Dialog*)self, timeout);
}

void k_sonnet__dialog_show_spell_check_completion_message1(void* self, bool b) {
    Sonnet__Dialog_ShowSpellCheckCompletionMessage1((Sonnet__Dialog*)self, b);
}

int32_t k_sonnet__dialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_sonnet__dialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_sonnet__dialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_sonnet__dialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_sonnet__dialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_sonnet__dialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_sonnet__dialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_sonnet__dialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_sonnet__dialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_sonnet__dialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_sonnet__dialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_sonnet__dialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_sonnet__dialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_sonnet__dialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_sonnet__dialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_sonnet__dialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_sonnet__dialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_sonnet__dialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_sonnet__dialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_sonnet__dialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_sonnet__dialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_sonnet__dialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_sonnet__dialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_sonnet__dialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_sonnet__dialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_sonnet__dialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_sonnet__dialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_sonnet__dialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_sonnet__dialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_sonnet__dialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_sonnet__dialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_sonnet__dialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_sonnet__dialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_sonnet__dialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_sonnet__dialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_sonnet__dialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_sonnet__dialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_sonnet__dialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_sonnet__dialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_sonnet__dialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_sonnet__dialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_sonnet__dialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_sonnet__dialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_sonnet__dialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_sonnet__dialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_sonnet__dialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_sonnet__dialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_sonnet__dialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_sonnet__dialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_sonnet__dialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_sonnet__dialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_sonnet__dialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_sonnet__dialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_sonnet__dialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_sonnet__dialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_sonnet__dialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_sonnet__dialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_sonnet__dialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_sonnet__dialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_sonnet__dialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_sonnet__dialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_sonnet__dialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_sonnet__dialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__dialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__dialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__dialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__dialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__dialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__dialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__dialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__dialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_sonnet__dialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_sonnet__dialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_sonnet__dialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_sonnet__dialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_sonnet__dialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_sonnet__dialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_sonnet__dialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_sonnet__dialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_sonnet__dialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_sonnet__dialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_sonnet__dialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_sonnet__dialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_sonnet__dialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_sonnet__dialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_sonnet__dialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_sonnet__dialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_sonnet__dialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_sonnet__dialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_sonnet__dialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_sonnet__dialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_sonnet__dialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_sonnet__dialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_sonnet__dialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_sonnet__dialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_sonnet__dialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_sonnet__dialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_sonnet__dialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_sonnet__dialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_sonnet__dialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_sonnet__dialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_sonnet__dialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_sonnet__dialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_sonnet__dialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_sonnet__dialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_sonnet__dialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_sonnet__dialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_sonnet__dialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_sonnet__dialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__dialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_sonnet__dialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_sonnet__dialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_sonnet__dialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_sonnet__dialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_sonnet__dialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_sonnet__dialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_sonnet__dialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_sonnet__dialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_sonnet__dialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_sonnet__dialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_sonnet__dialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_sonnet__dialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_sonnet__dialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__dialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_sonnet__dialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_sonnet__dialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_sonnet__dialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_sonnet__dialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_sonnet__dialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_sonnet__dialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_sonnet__dialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_sonnet__dialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_sonnet__dialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_sonnet__dialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_sonnet__dialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_sonnet__dialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_sonnet__dialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_sonnet__dialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_sonnet__dialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_sonnet__dialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_sonnet__dialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_sonnet__dialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_sonnet__dialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_sonnet__dialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_sonnet__dialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_sonnet__dialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_sonnet__dialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_sonnet__dialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_sonnet__dialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_sonnet__dialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_sonnet__dialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_sonnet__dialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_sonnet__dialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_sonnet__dialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_sonnet__dialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_sonnet__dialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_sonnet__dialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_sonnet__dialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_sonnet__dialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_sonnet__dialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_sonnet__dialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_sonnet__dialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_sonnet__dialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_sonnet__dialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_sonnet__dialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_sonnet__dialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_sonnet__dialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_sonnet__dialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_sonnet__dialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_sonnet__dialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_sonnet__dialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_sonnet__dialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_sonnet__dialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_sonnet__dialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_sonnet__dialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_sonnet__dialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_sonnet__dialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_sonnet__dialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_sonnet__dialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_sonnet__dialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_sonnet__dialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_sonnet__dialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_sonnet__dialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_sonnet__dialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_sonnet__dialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_sonnet__dialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_sonnet__dialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_sonnet__dialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_sonnet__dialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_sonnet__dialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_sonnet__dialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_sonnet__dialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_sonnet__dialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_sonnet__dialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_sonnet__dialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_sonnet__dialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_sonnet__dialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_sonnet__dialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_sonnet__dialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_sonnet__dialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_sonnet__dialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_sonnet__dialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_sonnet__dialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_sonnet__dialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_sonnet__dialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_sonnet__dialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_sonnet__dialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_sonnet__dialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_sonnet__dialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_sonnet__dialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_sonnet__dialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_sonnet__dialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_sonnet__dialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_sonnet__dialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_sonnet__dialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_sonnet__dialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_sonnet__dialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_sonnet__dialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_sonnet__dialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_sonnet__dialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_sonnet__dialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_sonnet__dialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_sonnet__dialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_sonnet__dialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_sonnet__dialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_sonnet__dialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_sonnet__dialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_sonnet__dialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_sonnet__dialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_sonnet__dialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_sonnet__dialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_sonnet__dialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_sonnet__dialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_sonnet__dialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_sonnet__dialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_sonnet__dialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_sonnet__dialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_sonnet__dialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_sonnet__dialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_sonnet__dialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_sonnet__dialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_sonnet__dialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_sonnet__dialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_sonnet__dialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_sonnet__dialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_sonnet__dialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_sonnet__dialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_sonnet__dialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_sonnet__dialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_sonnet__dialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_sonnet__dialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_sonnet__dialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_sonnet__dialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_sonnet__dialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_sonnet__dialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_sonnet__dialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_sonnet__dialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_sonnet__dialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_sonnet__dialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_sonnet__dialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_sonnet__dialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_sonnet__dialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_sonnet__dialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_sonnet__dialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_sonnet__dialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_sonnet__dialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_sonnet__dialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_sonnet__dialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_sonnet__dialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_sonnet__dialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_sonnet__dialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_sonnet__dialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_sonnet__dialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__dialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_sonnet__dialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_sonnet__dialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_sonnet__dialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_sonnet__dialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_sonnet__dialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_sonnet__dialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_sonnet__dialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_sonnet__dialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_sonnet__dialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_sonnet__dialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_sonnet__dialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_sonnet__dialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_sonnet__dialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_sonnet__dialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_sonnet__dialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_sonnet__dialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_sonnet__dialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_sonnet__dialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_sonnet__dialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_sonnet__dialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_sonnet__dialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_sonnet__dialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_sonnet__dialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_sonnet__dialog_dynamic_property_names\n");
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

QBindingStorage* k_sonnet__dialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_sonnet__dialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_sonnet__dialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_sonnet__dialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_sonnet__dialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_sonnet__dialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_sonnet__dialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_sonnet__dialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_sonnet__dialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_sonnet__dialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_sonnet__dialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_sonnet__dialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_sonnet__dialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_sonnet__dialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_sonnet__dialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_sonnet__dialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_sonnet__dialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_sonnet__dialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_sonnet__dialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_sonnet__dialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_sonnet__dialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_sonnet__dialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_sonnet__dialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_sonnet__dialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_sonnet__dialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_sonnet__dialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_sonnet__dialog_set_visible(void* self, bool visible) {
    Sonnet__Dialog_SetVisible((Sonnet__Dialog*)self, visible);
}

void k_sonnet__dialog_qbase_set_visible(void* self, bool visible) {
    Sonnet__Dialog_QBaseSetVisible((Sonnet__Dialog*)self, visible);
}

void k_sonnet__dialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    Sonnet__Dialog_OnSetVisible((Sonnet__Dialog*)self, (intptr_t)callback);
}

QSize* k_sonnet__dialog_size_hint(void* self) {
    return Sonnet__Dialog_SizeHint((Sonnet__Dialog*)self);
}

QSize* k_sonnet__dialog_qbase_size_hint(void* self) {
    return Sonnet__Dialog_QBaseSizeHint((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_size_hint(void* self, QSize* (*callback)()) {
    Sonnet__Dialog_OnSizeHint((Sonnet__Dialog*)self, (intptr_t)callback);
}

QSize* k_sonnet__dialog_minimum_size_hint(void* self) {
    return Sonnet__Dialog_MinimumSizeHint((Sonnet__Dialog*)self);
}

QSize* k_sonnet__dialog_qbase_minimum_size_hint(void* self) {
    return Sonnet__Dialog_QBaseMinimumSizeHint((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    Sonnet__Dialog_OnMinimumSizeHint((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_open(void* self) {
    Sonnet__Dialog_Open((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_qbase_open(void* self) {
    Sonnet__Dialog_QBaseOpen((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_open(void* self, void (*callback)()) {
    Sonnet__Dialog_OnOpen((Sonnet__Dialog*)self, (intptr_t)callback);
}

int32_t k_sonnet__dialog_exec(void* self) {
    return Sonnet__Dialog_Exec((Sonnet__Dialog*)self);
}

int32_t k_sonnet__dialog_qbase_exec(void* self) {
    return Sonnet__Dialog_QBaseExec((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_exec(void* self, int32_t (*callback)()) {
    Sonnet__Dialog_OnExec((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_done(void* self, int param1) {
    Sonnet__Dialog_Done((Sonnet__Dialog*)self, param1);
}

void k_sonnet__dialog_qbase_done(void* self, int param1) {
    Sonnet__Dialog_QBaseDone((Sonnet__Dialog*)self, param1);
}

void k_sonnet__dialog_on_done(void* self, void (*callback)(void*, int)) {
    Sonnet__Dialog_OnDone((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_accept(void* self) {
    Sonnet__Dialog_Accept((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_qbase_accept(void* self) {
    Sonnet__Dialog_QBaseAccept((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_accept(void* self, void (*callback)()) {
    Sonnet__Dialog_OnAccept((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_reject(void* self) {
    Sonnet__Dialog_Reject((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_qbase_reject(void* self) {
    Sonnet__Dialog_QBaseReject((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_reject(void* self, void (*callback)()) {
    Sonnet__Dialog_OnReject((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_key_press_event(void* self, void* param1) {
    Sonnet__Dialog_KeyPressEvent((Sonnet__Dialog*)self, (QKeyEvent*)param1);
}

void k_sonnet__dialog_qbase_key_press_event(void* self, void* param1) {
    Sonnet__Dialog_QBaseKeyPressEvent((Sonnet__Dialog*)self, (QKeyEvent*)param1);
}

void k_sonnet__dialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnKeyPressEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_close_event(void* self, void* param1) {
    Sonnet__Dialog_CloseEvent((Sonnet__Dialog*)self, (QCloseEvent*)param1);
}

void k_sonnet__dialog_qbase_close_event(void* self, void* param1) {
    Sonnet__Dialog_QBaseCloseEvent((Sonnet__Dialog*)self, (QCloseEvent*)param1);
}

void k_sonnet__dialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnCloseEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_show_event(void* self, void* param1) {
    Sonnet__Dialog_ShowEvent((Sonnet__Dialog*)self, (QShowEvent*)param1);
}

void k_sonnet__dialog_qbase_show_event(void* self, void* param1) {
    Sonnet__Dialog_QBaseShowEvent((Sonnet__Dialog*)self, (QShowEvent*)param1);
}

void k_sonnet__dialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnShowEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_resize_event(void* self, void* param1) {
    Sonnet__Dialog_ResizeEvent((Sonnet__Dialog*)self, (QResizeEvent*)param1);
}

void k_sonnet__dialog_qbase_resize_event(void* self, void* param1) {
    Sonnet__Dialog_QBaseResizeEvent((Sonnet__Dialog*)self, (QResizeEvent*)param1);
}

void k_sonnet__dialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnResizeEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_context_menu_event(void* self, void* param1) {
    Sonnet__Dialog_ContextMenuEvent((Sonnet__Dialog*)self, (QContextMenuEvent*)param1);
}

void k_sonnet__dialog_qbase_context_menu_event(void* self, void* param1) {
    Sonnet__Dialog_QBaseContextMenuEvent((Sonnet__Dialog*)self, (QContextMenuEvent*)param1);
}

void k_sonnet__dialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnContextMenuEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

bool k_sonnet__dialog_event_filter(void* self, void* param1, void* param2) {
    return Sonnet__Dialog_EventFilter((Sonnet__Dialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_sonnet__dialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return Sonnet__Dialog_QBaseEventFilter((Sonnet__Dialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_sonnet__dialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Sonnet__Dialog_OnEventFilter((Sonnet__Dialog*)self, (intptr_t)callback);
}

int32_t k_sonnet__dialog_dev_type(void* self) {
    return Sonnet__Dialog_DevType((Sonnet__Dialog*)self);
}

int32_t k_sonnet__dialog_qbase_dev_type(void* self) {
    return Sonnet__Dialog_QBaseDevType((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_dev_type(void* self, int32_t (*callback)()) {
    Sonnet__Dialog_OnDevType((Sonnet__Dialog*)self, (intptr_t)callback);
}

int32_t k_sonnet__dialog_height_for_width(void* self, int param1) {
    return Sonnet__Dialog_HeightForWidth((Sonnet__Dialog*)self, param1);
}

int32_t k_sonnet__dialog_qbase_height_for_width(void* self, int param1) {
    return Sonnet__Dialog_QBaseHeightForWidth((Sonnet__Dialog*)self, param1);
}

void k_sonnet__dialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    Sonnet__Dialog_OnHeightForWidth((Sonnet__Dialog*)self, (intptr_t)callback);
}

bool k_sonnet__dialog_has_height_for_width(void* self) {
    return Sonnet__Dialog_HasHeightForWidth((Sonnet__Dialog*)self);
}

bool k_sonnet__dialog_qbase_has_height_for_width(void* self) {
    return Sonnet__Dialog_QBaseHasHeightForWidth((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_has_height_for_width(void* self, bool (*callback)()) {
    Sonnet__Dialog_OnHasHeightForWidth((Sonnet__Dialog*)self, (intptr_t)callback);
}

QPaintEngine* k_sonnet__dialog_paint_engine(void* self) {
    return Sonnet__Dialog_PaintEngine((Sonnet__Dialog*)self);
}

QPaintEngine* k_sonnet__dialog_qbase_paint_engine(void* self) {
    return Sonnet__Dialog_QBasePaintEngine((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    Sonnet__Dialog_OnPaintEngine((Sonnet__Dialog*)self, (intptr_t)callback);
}

bool k_sonnet__dialog_event(void* self, void* event) {
    return Sonnet__Dialog_Event((Sonnet__Dialog*)self, (QEvent*)event);
}

bool k_sonnet__dialog_qbase_event(void* self, void* event) {
    return Sonnet__Dialog_QBaseEvent((Sonnet__Dialog*)self, (QEvent*)event);
}

void k_sonnet__dialog_on_event(void* self, bool (*callback)(void*, void*)) {
    Sonnet__Dialog_OnEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_mouse_press_event(void* self, void* event) {
    Sonnet__Dialog_MousePressEvent((Sonnet__Dialog*)self, (QMouseEvent*)event);
}

void k_sonnet__dialog_qbase_mouse_press_event(void* self, void* event) {
    Sonnet__Dialog_QBaseMousePressEvent((Sonnet__Dialog*)self, (QMouseEvent*)event);
}

void k_sonnet__dialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnMousePressEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_mouse_release_event(void* self, void* event) {
    Sonnet__Dialog_MouseReleaseEvent((Sonnet__Dialog*)self, (QMouseEvent*)event);
}

void k_sonnet__dialog_qbase_mouse_release_event(void* self, void* event) {
    Sonnet__Dialog_QBaseMouseReleaseEvent((Sonnet__Dialog*)self, (QMouseEvent*)event);
}

void k_sonnet__dialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnMouseReleaseEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_mouse_double_click_event(void* self, void* event) {
    Sonnet__Dialog_MouseDoubleClickEvent((Sonnet__Dialog*)self, (QMouseEvent*)event);
}

void k_sonnet__dialog_qbase_mouse_double_click_event(void* self, void* event) {
    Sonnet__Dialog_QBaseMouseDoubleClickEvent((Sonnet__Dialog*)self, (QMouseEvent*)event);
}

void k_sonnet__dialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnMouseDoubleClickEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_mouse_move_event(void* self, void* event) {
    Sonnet__Dialog_MouseMoveEvent((Sonnet__Dialog*)self, (QMouseEvent*)event);
}

void k_sonnet__dialog_qbase_mouse_move_event(void* self, void* event) {
    Sonnet__Dialog_QBaseMouseMoveEvent((Sonnet__Dialog*)self, (QMouseEvent*)event);
}

void k_sonnet__dialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnMouseMoveEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_wheel_event(void* self, void* event) {
    Sonnet__Dialog_WheelEvent((Sonnet__Dialog*)self, (QWheelEvent*)event);
}

void k_sonnet__dialog_qbase_wheel_event(void* self, void* event) {
    Sonnet__Dialog_QBaseWheelEvent((Sonnet__Dialog*)self, (QWheelEvent*)event);
}

void k_sonnet__dialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnWheelEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_key_release_event(void* self, void* event) {
    Sonnet__Dialog_KeyReleaseEvent((Sonnet__Dialog*)self, (QKeyEvent*)event);
}

void k_sonnet__dialog_qbase_key_release_event(void* self, void* event) {
    Sonnet__Dialog_QBaseKeyReleaseEvent((Sonnet__Dialog*)self, (QKeyEvent*)event);
}

void k_sonnet__dialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnKeyReleaseEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_focus_in_event(void* self, void* event) {
    Sonnet__Dialog_FocusInEvent((Sonnet__Dialog*)self, (QFocusEvent*)event);
}

void k_sonnet__dialog_qbase_focus_in_event(void* self, void* event) {
    Sonnet__Dialog_QBaseFocusInEvent((Sonnet__Dialog*)self, (QFocusEvent*)event);
}

void k_sonnet__dialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnFocusInEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_focus_out_event(void* self, void* event) {
    Sonnet__Dialog_FocusOutEvent((Sonnet__Dialog*)self, (QFocusEvent*)event);
}

void k_sonnet__dialog_qbase_focus_out_event(void* self, void* event) {
    Sonnet__Dialog_QBaseFocusOutEvent((Sonnet__Dialog*)self, (QFocusEvent*)event);
}

void k_sonnet__dialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnFocusOutEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_enter_event(void* self, void* event) {
    Sonnet__Dialog_EnterEvent((Sonnet__Dialog*)self, (QEnterEvent*)event);
}

void k_sonnet__dialog_qbase_enter_event(void* self, void* event) {
    Sonnet__Dialog_QBaseEnterEvent((Sonnet__Dialog*)self, (QEnterEvent*)event);
}

void k_sonnet__dialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnEnterEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_leave_event(void* self, void* event) {
    Sonnet__Dialog_LeaveEvent((Sonnet__Dialog*)self, (QEvent*)event);
}

void k_sonnet__dialog_qbase_leave_event(void* self, void* event) {
    Sonnet__Dialog_QBaseLeaveEvent((Sonnet__Dialog*)self, (QEvent*)event);
}

void k_sonnet__dialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnLeaveEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_paint_event(void* self, void* event) {
    Sonnet__Dialog_PaintEvent((Sonnet__Dialog*)self, (QPaintEvent*)event);
}

void k_sonnet__dialog_qbase_paint_event(void* self, void* event) {
    Sonnet__Dialog_QBasePaintEvent((Sonnet__Dialog*)self, (QPaintEvent*)event);
}

void k_sonnet__dialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnPaintEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_move_event(void* self, void* event) {
    Sonnet__Dialog_MoveEvent((Sonnet__Dialog*)self, (QMoveEvent*)event);
}

void k_sonnet__dialog_qbase_move_event(void* self, void* event) {
    Sonnet__Dialog_QBaseMoveEvent((Sonnet__Dialog*)self, (QMoveEvent*)event);
}

void k_sonnet__dialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnMoveEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_tablet_event(void* self, void* event) {
    Sonnet__Dialog_TabletEvent((Sonnet__Dialog*)self, (QTabletEvent*)event);
}

void k_sonnet__dialog_qbase_tablet_event(void* self, void* event) {
    Sonnet__Dialog_QBaseTabletEvent((Sonnet__Dialog*)self, (QTabletEvent*)event);
}

void k_sonnet__dialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnTabletEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_action_event(void* self, void* event) {
    Sonnet__Dialog_ActionEvent((Sonnet__Dialog*)self, (QActionEvent*)event);
}

void k_sonnet__dialog_qbase_action_event(void* self, void* event) {
    Sonnet__Dialog_QBaseActionEvent((Sonnet__Dialog*)self, (QActionEvent*)event);
}

void k_sonnet__dialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnActionEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_drag_enter_event(void* self, void* event) {
    Sonnet__Dialog_DragEnterEvent((Sonnet__Dialog*)self, (QDragEnterEvent*)event);
}

void k_sonnet__dialog_qbase_drag_enter_event(void* self, void* event) {
    Sonnet__Dialog_QBaseDragEnterEvent((Sonnet__Dialog*)self, (QDragEnterEvent*)event);
}

void k_sonnet__dialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnDragEnterEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_drag_move_event(void* self, void* event) {
    Sonnet__Dialog_DragMoveEvent((Sonnet__Dialog*)self, (QDragMoveEvent*)event);
}

void k_sonnet__dialog_qbase_drag_move_event(void* self, void* event) {
    Sonnet__Dialog_QBaseDragMoveEvent((Sonnet__Dialog*)self, (QDragMoveEvent*)event);
}

void k_sonnet__dialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnDragMoveEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_drag_leave_event(void* self, void* event) {
    Sonnet__Dialog_DragLeaveEvent((Sonnet__Dialog*)self, (QDragLeaveEvent*)event);
}

void k_sonnet__dialog_qbase_drag_leave_event(void* self, void* event) {
    Sonnet__Dialog_QBaseDragLeaveEvent((Sonnet__Dialog*)self, (QDragLeaveEvent*)event);
}

void k_sonnet__dialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnDragLeaveEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_drop_event(void* self, void* event) {
    Sonnet__Dialog_DropEvent((Sonnet__Dialog*)self, (QDropEvent*)event);
}

void k_sonnet__dialog_qbase_drop_event(void* self, void* event) {
    Sonnet__Dialog_QBaseDropEvent((Sonnet__Dialog*)self, (QDropEvent*)event);
}

void k_sonnet__dialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnDropEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_hide_event(void* self, void* event) {
    Sonnet__Dialog_HideEvent((Sonnet__Dialog*)self, (QHideEvent*)event);
}

void k_sonnet__dialog_qbase_hide_event(void* self, void* event) {
    Sonnet__Dialog_QBaseHideEvent((Sonnet__Dialog*)self, (QHideEvent*)event);
}

void k_sonnet__dialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnHideEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

bool k_sonnet__dialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return Sonnet__Dialog_NativeEvent((Sonnet__Dialog*)self, qstring(eventType), message, result);
}

bool k_sonnet__dialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return Sonnet__Dialog_QBaseNativeEvent((Sonnet__Dialog*)self, qstring(eventType), message, result);
}

void k_sonnet__dialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    Sonnet__Dialog_OnNativeEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_change_event(void* self, void* param1) {
    Sonnet__Dialog_ChangeEvent((Sonnet__Dialog*)self, (QEvent*)param1);
}

void k_sonnet__dialog_qbase_change_event(void* self, void* param1) {
    Sonnet__Dialog_QBaseChangeEvent((Sonnet__Dialog*)self, (QEvent*)param1);
}

void k_sonnet__dialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnChangeEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

int32_t k_sonnet__dialog_metric(void* self, int32_t param1) {
    return Sonnet__Dialog_Metric((Sonnet__Dialog*)self, param1);
}

int32_t k_sonnet__dialog_qbase_metric(void* self, int32_t param1) {
    return Sonnet__Dialog_QBaseMetric((Sonnet__Dialog*)self, param1);
}

void k_sonnet__dialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    Sonnet__Dialog_OnMetric((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_init_painter(void* self, void* painter) {
    Sonnet__Dialog_InitPainter((Sonnet__Dialog*)self, (QPainter*)painter);
}

void k_sonnet__dialog_qbase_init_painter(void* self, void* painter) {
    Sonnet__Dialog_QBaseInitPainter((Sonnet__Dialog*)self, (QPainter*)painter);
}

void k_sonnet__dialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnInitPainter((Sonnet__Dialog*)self, (intptr_t)callback);
}

QPaintDevice* k_sonnet__dialog_redirected(void* self, void* offset) {
    return Sonnet__Dialog_Redirected((Sonnet__Dialog*)self, (QPoint*)offset);
}

QPaintDevice* k_sonnet__dialog_qbase_redirected(void* self, void* offset) {
    return Sonnet__Dialog_QBaseRedirected((Sonnet__Dialog*)self, (QPoint*)offset);
}

void k_sonnet__dialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    Sonnet__Dialog_OnRedirected((Sonnet__Dialog*)self, (intptr_t)callback);
}

QPainter* k_sonnet__dialog_shared_painter(void* self) {
    return Sonnet__Dialog_SharedPainter((Sonnet__Dialog*)self);
}

QPainter* k_sonnet__dialog_qbase_shared_painter(void* self) {
    return Sonnet__Dialog_QBaseSharedPainter((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    Sonnet__Dialog_OnSharedPainter((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_input_method_event(void* self, void* param1) {
    Sonnet__Dialog_InputMethodEvent((Sonnet__Dialog*)self, (QInputMethodEvent*)param1);
}

void k_sonnet__dialog_qbase_input_method_event(void* self, void* param1) {
    Sonnet__Dialog_QBaseInputMethodEvent((Sonnet__Dialog*)self, (QInputMethodEvent*)param1);
}

void k_sonnet__dialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnInputMethodEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

QVariant* k_sonnet__dialog_input_method_query(void* self, int32_t param1) {
    return Sonnet__Dialog_InputMethodQuery((Sonnet__Dialog*)self, param1);
}

QVariant* k_sonnet__dialog_qbase_input_method_query(void* self, int32_t param1) {
    return Sonnet__Dialog_QBaseInputMethodQuery((Sonnet__Dialog*)self, param1);
}

void k_sonnet__dialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    Sonnet__Dialog_OnInputMethodQuery((Sonnet__Dialog*)self, (intptr_t)callback);
}

bool k_sonnet__dialog_focus_next_prev_child(void* self, bool next) {
    return Sonnet__Dialog_FocusNextPrevChild((Sonnet__Dialog*)self, next);
}

bool k_sonnet__dialog_qbase_focus_next_prev_child(void* self, bool next) {
    return Sonnet__Dialog_QBaseFocusNextPrevChild((Sonnet__Dialog*)self, next);
}

void k_sonnet__dialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    Sonnet__Dialog_OnFocusNextPrevChild((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_timer_event(void* self, void* event) {
    Sonnet__Dialog_TimerEvent((Sonnet__Dialog*)self, (QTimerEvent*)event);
}

void k_sonnet__dialog_qbase_timer_event(void* self, void* event) {
    Sonnet__Dialog_QBaseTimerEvent((Sonnet__Dialog*)self, (QTimerEvent*)event);
}

void k_sonnet__dialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnTimerEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_child_event(void* self, void* event) {
    Sonnet__Dialog_ChildEvent((Sonnet__Dialog*)self, (QChildEvent*)event);
}

void k_sonnet__dialog_qbase_child_event(void* self, void* event) {
    Sonnet__Dialog_QBaseChildEvent((Sonnet__Dialog*)self, (QChildEvent*)event);
}

void k_sonnet__dialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnChildEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_custom_event(void* self, void* event) {
    Sonnet__Dialog_CustomEvent((Sonnet__Dialog*)self, (QEvent*)event);
}

void k_sonnet__dialog_qbase_custom_event(void* self, void* event) {
    Sonnet__Dialog_QBaseCustomEvent((Sonnet__Dialog*)self, (QEvent*)event);
}

void k_sonnet__dialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnCustomEvent((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_connect_notify(void* self, void* signal) {
    Sonnet__Dialog_ConnectNotify((Sonnet__Dialog*)self, (QMetaMethod*)signal);
}

void k_sonnet__dialog_qbase_connect_notify(void* self, void* signal) {
    Sonnet__Dialog_QBaseConnectNotify((Sonnet__Dialog*)self, (QMetaMethod*)signal);
}

void k_sonnet__dialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnConnectNotify((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_disconnect_notify(void* self, void* signal) {
    Sonnet__Dialog_DisconnectNotify((Sonnet__Dialog*)self, (QMetaMethod*)signal);
}

void k_sonnet__dialog_qbase_disconnect_notify(void* self, void* signal) {
    Sonnet__Dialog_QBaseDisconnectNotify((Sonnet__Dialog*)self, (QMetaMethod*)signal);
}

void k_sonnet__dialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnDisconnectNotify((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_adjust_position(void* self, void* param1) {
    Sonnet__Dialog_AdjustPosition((Sonnet__Dialog*)self, (QWidget*)param1);
}

void k_sonnet__dialog_qbase_adjust_position(void* self, void* param1) {
    Sonnet__Dialog_QBaseAdjustPosition((Sonnet__Dialog*)self, (QWidget*)param1);
}

void k_sonnet__dialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    Sonnet__Dialog_OnAdjustPosition((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_update_micro_focus(void* self) {
    Sonnet__Dialog_UpdateMicroFocus((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_qbase_update_micro_focus(void* self) {
    Sonnet__Dialog_QBaseUpdateMicroFocus((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_update_micro_focus(void* self, void (*callback)()) {
    Sonnet__Dialog_OnUpdateMicroFocus((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_create(void* self) {
    Sonnet__Dialog_Create((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_qbase_create(void* self) {
    Sonnet__Dialog_QBaseCreate((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_create(void* self, void (*callback)()) {
    Sonnet__Dialog_OnCreate((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_destroy(void* self) {
    Sonnet__Dialog_Destroy((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_qbase_destroy(void* self) {
    Sonnet__Dialog_QBaseDestroy((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_destroy(void* self, void (*callback)()) {
    Sonnet__Dialog_OnDestroy((Sonnet__Dialog*)self, (intptr_t)callback);
}

bool k_sonnet__dialog_focus_next_child(void* self) {
    return Sonnet__Dialog_FocusNextChild((Sonnet__Dialog*)self);
}

bool k_sonnet__dialog_qbase_focus_next_child(void* self) {
    return Sonnet__Dialog_QBaseFocusNextChild((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_focus_next_child(void* self, bool (*callback)()) {
    Sonnet__Dialog_OnFocusNextChild((Sonnet__Dialog*)self, (intptr_t)callback);
}

bool k_sonnet__dialog_focus_previous_child(void* self) {
    return Sonnet__Dialog_FocusPreviousChild((Sonnet__Dialog*)self);
}

bool k_sonnet__dialog_qbase_focus_previous_child(void* self) {
    return Sonnet__Dialog_QBaseFocusPreviousChild((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_focus_previous_child(void* self, bool (*callback)()) {
    Sonnet__Dialog_OnFocusPreviousChild((Sonnet__Dialog*)self, (intptr_t)callback);
}

QObject* k_sonnet__dialog_sender(void* self) {
    return Sonnet__Dialog_Sender((Sonnet__Dialog*)self);
}

QObject* k_sonnet__dialog_qbase_sender(void* self) {
    return Sonnet__Dialog_QBaseSender((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_sender(void* self, QObject* (*callback)()) {
    Sonnet__Dialog_OnSender((Sonnet__Dialog*)self, (intptr_t)callback);
}

int32_t k_sonnet__dialog_sender_signal_index(void* self) {
    return Sonnet__Dialog_SenderSignalIndex((Sonnet__Dialog*)self);
}

int32_t k_sonnet__dialog_qbase_sender_signal_index(void* self) {
    return Sonnet__Dialog_QBaseSenderSignalIndex((Sonnet__Dialog*)self);
}

void k_sonnet__dialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Sonnet__Dialog_OnSenderSignalIndex((Sonnet__Dialog*)self, (intptr_t)callback);
}

int32_t k_sonnet__dialog_receivers(void* self, const char* signal) {
    return Sonnet__Dialog_Receivers((Sonnet__Dialog*)self, signal);
}

int32_t k_sonnet__dialog_qbase_receivers(void* self, const char* signal) {
    return Sonnet__Dialog_QBaseReceivers((Sonnet__Dialog*)self, signal);
}

void k_sonnet__dialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Sonnet__Dialog_OnReceivers((Sonnet__Dialog*)self, (intptr_t)callback);
}

bool k_sonnet__dialog_is_signal_connected(void* self, void* signal) {
    return Sonnet__Dialog_IsSignalConnected((Sonnet__Dialog*)self, (QMetaMethod*)signal);
}

bool k_sonnet__dialog_qbase_is_signal_connected(void* self, void* signal) {
    return Sonnet__Dialog_QBaseIsSignalConnected((Sonnet__Dialog*)self, (QMetaMethod*)signal);
}

void k_sonnet__dialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Sonnet__Dialog_OnIsSignalConnected((Sonnet__Dialog*)self, (intptr_t)callback);
}

double k_sonnet__dialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return Sonnet__Dialog_GetDecodedMetricF((Sonnet__Dialog*)self, metricA, metricB);
}

double k_sonnet__dialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return Sonnet__Dialog_QBaseGetDecodedMetricF((Sonnet__Dialog*)self, metricA, metricB);
}

void k_sonnet__dialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    Sonnet__Dialog_OnGetDecodedMetricF((Sonnet__Dialog*)self, (intptr_t)callback);
}

void k_sonnet__dialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_sonnet__dialog_delete(void* self) {
    Sonnet__Dialog_Delete((Sonnet__Dialog*)(self));
}
