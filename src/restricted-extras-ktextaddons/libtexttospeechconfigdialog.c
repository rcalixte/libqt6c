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
#include "libtexttospeechconfigdialog.hpp"
#include "libtexttospeechconfigdialog.h"

TextEditTextToSpeech__TextToSpeechConfigDialog* k_textedittexttospeech__texttospeechconfigdialog_new(void* parent) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_new((QWidget*)parent);
}

TextEditTextToSpeech__TextToSpeechConfigDialog* k_textedittexttospeech__texttospeechconfigdialog_new2() {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_new2();
}

const QMetaObject* k_textedittexttospeech__texttospeechconfigdialog_meta_object(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_MetaObject((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetaObject((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

const QMetaObject* k_textedittexttospeech__texttospeechconfigdialog_super_meta_object(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetaObject((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void* k_textedittexttospeech__texttospeechconfigdialog_metacast(void* self, const char* param1) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_Metacast((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetacast((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void* k_textedittexttospeech__texttospeechconfigdialog_super_metacast(void* self, const char* param1) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetacast((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_Metacall((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1, param2, param3);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetacall((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetacall((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1, param2, param3);
}

const char* k_textedittexttospeech__texttospeechconfigdialog_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedittexttospeech__texttospeechconfigdialog_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedittexttospeech__texttospeechconfigdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_textedittexttospeech__texttospeechconfigdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_textedittexttospeech__texttospeechconfigdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textedittexttospeech__texttospeechconfigdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textedittexttospeech__texttospeechconfigdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textedittexttospeech__texttospeechconfigdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textedittexttospeech__texttospeechconfigdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textedittexttospeech__texttospeechconfigdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textedittexttospeech__texttospeechconfigdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textedittexttospeech__texttospeechconfigdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textedittexttospeech__texttospeechconfigdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textedittexttospeech__texttospeechconfigdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textedittexttospeech__texttospeechconfigdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textedittexttospeech__texttospeechconfigdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textedittexttospeech__texttospeechconfigdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textedittexttospeech__texttospeechconfigdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedittexttospeech__texttospeechconfigdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedittexttospeech__texttospeechconfigdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedittexttospeech__texttospeechconfigdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedittexttospeech__texttospeechconfigdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedittexttospeech__texttospeechconfigdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedittexttospeech__texttospeechconfigdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedittexttospeech__texttospeechconfigdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedittexttospeech__texttospeechconfigdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textedittexttospeech__texttospeechconfigdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textedittexttospeech__texttospeechconfigdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textedittexttospeech__texttospeechconfigdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textedittexttospeech__texttospeechconfigdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textedittexttospeech__texttospeechconfigdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textedittexttospeech__texttospeechconfigdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textedittexttospeech__texttospeechconfigdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textedittexttospeech__texttospeechconfigdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textedittexttospeech__texttospeechconfigdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textedittexttospeech__texttospeechconfigdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textedittexttospeech__texttospeechconfigdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textedittexttospeech__texttospeechconfigdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textedittexttospeech__texttospeechconfigdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textedittexttospeech__texttospeechconfigdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textedittexttospeech__texttospeechconfigdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textedittexttospeech__texttospeechconfigdialog_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textedittexttospeech__texttospeechconfigdialog_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textedittexttospeech__texttospeechconfigdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textedittexttospeech__texttospeechconfigdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedittexttospeech__texttospeechconfigdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textedittexttospeech__texttospeechconfigdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textedittexttospeech__texttospeechconfigdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textedittexttospeech__texttospeechconfigdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textedittexttospeech__texttospeechconfigdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textedittexttospeech__texttospeechconfigdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textedittexttospeech__texttospeechconfigdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textedittexttospeech__texttospeechconfigdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textedittexttospeech__texttospeechconfigdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedittexttospeech__texttospeechconfigdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textedittexttospeech__texttospeechconfigdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textedittexttospeech__texttospeechconfigdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textedittexttospeech__texttospeechconfigdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textedittexttospeech__texttospeechconfigdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textedittexttospeech__texttospeechconfigdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textedittexttospeech__texttospeechconfigdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textedittexttospeech__texttospeechconfigdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textedittexttospeech__texttospeechconfigdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textedittexttospeech__texttospeechconfigdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textedittexttospeech__texttospeechconfigdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textedittexttospeech__texttospeechconfigdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textedittexttospeech__texttospeechconfigdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textedittexttospeech__texttospeechconfigdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textedittexttospeech__texttospeechconfigdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textedittexttospeech__texttospeechconfigdialog_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textedittexttospeech__texttospeechconfigdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textedittexttospeech__texttospeechconfigdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textedittexttospeech__texttospeechconfigdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textedittexttospeech__texttospeechconfigdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textedittexttospeech__texttospeechconfigdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textedittexttospeech__texttospeechconfigdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textedittexttospeech__texttospeechconfigdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textedittexttospeech__texttospeechconfigdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textedittexttospeech__texttospeechconfigdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textedittexttospeech__texttospeechconfigdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textedittexttospeech__texttospeechconfigdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textedittexttospeech__texttospeechconfigdialog_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textedittexttospeech__texttospeechconfigdialog_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textedittexttospeech__texttospeechconfigdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textedittexttospeech__texttospeechconfigdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textedittexttospeech__texttospeechconfigdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textedittexttospeech__texttospeechconfigdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textedittexttospeech__texttospeechconfigdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textedittexttospeech__texttospeechconfigdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textedittexttospeech__texttospeechconfigdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_find(uintptr_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textedittexttospeech__texttospeechconfigdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textedittexttospeech__texttospeechconfigdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textedittexttospeech__texttospeechconfigdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textedittexttospeech__texttospeechconfigdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textedittexttospeech__texttospeechconfigdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textedittexttospeech__texttospeechconfigdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textedittexttospeech__texttospeechconfigdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textedittexttospeech__texttospeechconfigdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textedittexttospeech__texttospeechconfigdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textedittexttospeech__texttospeechconfigdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textedittexttospeech__texttospeechconfigdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textedittexttospeech__texttospeechconfigdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textedittexttospeech__texttospeechconfigdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textedittexttospeech__texttospeechconfigdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textedittexttospeech__texttospeechconfigdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textedittexttospeech__texttospeechconfigdialog_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textedittexttospeech__texttospeechconfigdialog_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textedittexttospeech__texttospeechconfigdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigdialog_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textedittexttospeech__texttospeechconfigdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textedittexttospeech__texttospeechconfigdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textedittexttospeech__texttospeechconfigdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textedittexttospeech__texttospeechconfigdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textedittexttospeech__texttospeechconfigdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textedittexttospeech__texttospeechconfigdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigdialog_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigdialog_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigdialog_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textedittexttospeech__texttospeechconfigdialog_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textedittexttospeech__texttospeechconfigdialog_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textedittexttospeech__texttospeechconfigdialog_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textedittexttospeech__texttospeechconfigdialog_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textedittexttospeech__texttospeechconfigdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textedittexttospeech__texttospeechconfigdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textedittexttospeech__texttospeechconfigdialog_dynamic_property_names\n");
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

QBindingStorage* k_textedittexttospeech__texttospeechconfigdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textedittexttospeech__texttospeechconfigdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textedittexttospeech__texttospeechconfigdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textedittexttospeech__texttospeechconfigdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigdialog_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigdialog_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textedittexttospeech__texttospeechconfigdialog_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textedittexttospeech__texttospeechconfigdialog_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textedittexttospeech__texttospeechconfigdialog_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textedittexttospeech__texttospeechconfigdialog_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textedittexttospeech__texttospeechconfigdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textedittexttospeech__texttospeechconfigdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textedittexttospeech__texttospeechconfigdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textedittexttospeech__texttospeechconfigdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_textedittexttospeech__texttospeechconfigdialog_set_visible(void* self, bool visible) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SetVisible((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, visible);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_set_visible(void* self, bool visible) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSetVisible((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, visible);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnSetVisible((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

QSize* k_textedittexttospeech__texttospeechconfigdialog_size_hint(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SizeHint((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigdialog_super_size_hint(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSizeHint((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_size_hint(void* self, QSize* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnSizeHint((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

QSize* k_textedittexttospeech__texttospeechconfigdialog_minimum_size_hint(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_MinimumSizeHint((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigdialog_super_minimum_size_hint(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMinimumSizeHint((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnMinimumSizeHint((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_open(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_Open((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_open(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperOpen((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_open(void* self, void (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnOpen((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_exec(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_Exec((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_super_exec(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperExec((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_exec(void* self, int32_t (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnExec((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_done(void* self, int param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_Done((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_done(void* self, int param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDone((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_done(void* self, void (*callback)(void*, int)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnDone((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_accept(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_Accept((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_accept(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperAccept((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_accept(void* self, void (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnAccept((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_reject(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_Reject((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_reject(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperReject((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_reject(void* self, void (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnReject((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_key_press_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_KeyPressEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QKeyEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_key_press_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperKeyPressEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QKeyEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnKeyPressEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_close_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_CloseEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QCloseEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_close_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperCloseEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QCloseEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnCloseEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_show_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_ShowEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QShowEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_show_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperShowEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QShowEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnShowEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_resize_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_ResizeEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QResizeEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_resize_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperResizeEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QResizeEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnResizeEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_context_menu_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_ContextMenuEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QContextMenuEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_context_menu_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperContextMenuEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QContextMenuEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnContextMenuEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigdialog_event_filter(void* self, void* param1, void* param2) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_EventFilter((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_textedittexttospeech__texttospeechconfigdialog_super_event_filter(void* self, void* param1, void* param2) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEventFilter((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnEventFilter((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_dev_type(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_DevType((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_super_dev_type(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDevType((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_dev_type(void* self, int32_t (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnDevType((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_height_for_width(void* self, int param1) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_HeightForWidth((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_super_height_for_width(void* self, int param1) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperHeightForWidth((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnHeightForWidth((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigdialog_has_height_for_width(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_HasHeightForWidth((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_super_has_height_for_width(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperHasHeightForWidth((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnHasHeightForWidth((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_textedittexttospeech__texttospeechconfigdialog_paint_engine(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEngine((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

QPaintEngine* k_textedittexttospeech__texttospeechconfigdialog_super_paint_engine(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperPaintEngine((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnPaintEngine((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigdialog_event(void* self, void* event) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_Event((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QEvent*)event);
}

bool k_textedittexttospeech__texttospeechconfigdialog_super_event(void* self, void* event) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_mouse_press_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_MousePressEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_mouse_press_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMousePressEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnMousePressEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_mouse_release_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_MouseReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_mouse_release_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnMouseReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_mouse_double_click_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_MouseDoubleClickEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_mouse_double_click_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseDoubleClickEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnMouseDoubleClickEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_mouse_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_MouseMoveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_mouse_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMouseMoveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnMouseMoveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_wheel_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_WheelEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QWheelEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_wheel_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperWheelEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QWheelEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnWheelEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_key_release_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_KeyReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QKeyEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_key_release_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperKeyReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QKeyEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnKeyReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_focus_in_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_FocusInEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QFocusEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_focus_in_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusInEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QFocusEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusInEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_focus_out_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_FocusOutEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QFocusEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_focus_out_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusOutEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QFocusEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusOutEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_enter_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_EnterEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QEnterEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_enter_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperEnterEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QEnterEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnEnterEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_leave_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_LeaveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_leave_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperLeaveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnLeaveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_paint_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_PaintEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QPaintEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_paint_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperPaintEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QPaintEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnPaintEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_MoveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMoveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMoveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMoveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnMoveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_tablet_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_TabletEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QTabletEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_tablet_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperTabletEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QTabletEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnTabletEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_action_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_ActionEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QActionEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_action_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperActionEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QActionEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnActionEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_drag_enter_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_DragEnterEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QDragEnterEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_drag_enter_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragEnterEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QDragEnterEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnDragEnterEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_drag_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_DragMoveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QDragMoveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_drag_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragMoveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QDragMoveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnDragMoveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_drag_leave_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_DragLeaveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QDragLeaveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_drag_leave_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDragLeaveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QDragLeaveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnDragLeaveEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_drop_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_DropEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QDropEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_drop_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDropEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QDropEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnDropEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_hide_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_HideEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QHideEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_hide_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperHideEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QHideEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnHideEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigdialog_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_NativeEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, qstring(eventType), message, result);
}

bool k_textedittexttospeech__texttospeechconfigdialog_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperNativeEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, qstring(eventType), message, result);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnNativeEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_change_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_ChangeEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_change_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperChangeEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnChangeEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_metric(void* self, int32_t param1) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_Metric((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_super_metric(void* self, int32_t param1) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperMetric((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnMetric((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_init_painter(void* self, void* painter) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_InitPainter((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QPainter*)painter);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_init_painter(void* self, void* painter) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperInitPainter((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QPainter*)painter);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnInitPainter((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_textedittexttospeech__texttospeechconfigdialog_redirected(void* self, void* offset) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_Redirected((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_textedittexttospeech__texttospeechconfigdialog_super_redirected(void* self, void* offset) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperRedirected((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QPoint*)offset);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnRedirected((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

QPainter* k_textedittexttospeech__texttospeechconfigdialog_shared_painter(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SharedPainter((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

QPainter* k_textedittexttospeech__texttospeechconfigdialog_super_shared_painter(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSharedPainter((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnSharedPainter((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_input_method_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QInputMethodEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_input_method_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperInputMethodEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QInputMethodEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnInputMethodEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

QVariant* k_textedittexttospeech__texttospeechconfigdialog_input_method_query(void* self, int32_t param1) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_InputMethodQuery((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1);
}

QVariant* k_textedittexttospeech__texttospeechconfigdialog_super_input_method_query(void* self, int32_t param1) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperInputMethodQuery((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnInputMethodQuery((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigdialog_focus_next_prev_child(void* self, bool next) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextPrevChild((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, next);
}

bool k_textedittexttospeech__texttospeechconfigdialog_super_focus_next_prev_child(void* self, bool next) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusNextPrevChild((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, next);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusNextPrevChild((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_timer_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_TimerEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QTimerEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_timer_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperTimerEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QTimerEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnTimerEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_child_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_ChildEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QChildEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_child_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperChildEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QChildEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnChildEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_custom_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_CustomEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_custom_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperCustomEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnCustomEvent((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_connect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_ConnectNotify((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_connect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperConnectNotify((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnConnectNotify((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_disconnect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_DisconnectNotify((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_disconnect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDisconnectNotify((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnDisconnectNotify((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_adjust_position(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_AdjustPosition((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QWidget*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_adjust_position(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperAdjustPosition((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QWidget*)param1);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnAdjustPosition((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_update_micro_focus(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_UpdateMicroFocus((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_update_micro_focus(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperUpdateMicroFocus((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_update_micro_focus(void* self, void (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnUpdateMicroFocus((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_create(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_Create((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_create(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperCreate((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_create(void* self, void (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnCreate((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_destroy(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_Destroy((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_super_destroy(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_SuperDestroy((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_destroy(void* self, void (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnDestroy((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigdialog_focus_next_child(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_FocusNextChild((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_super_focus_next_child(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusNextChild((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_focus_next_child(void* self, bool (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusNextChild((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigdialog_focus_previous_child(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_FocusPreviousChild((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

bool k_textedittexttospeech__texttospeechconfigdialog_super_focus_previous_child(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperFocusPreviousChild((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnFocusPreviousChild((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

QObject* k_textedittexttospeech__texttospeechconfigdialog_sender(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_Sender((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

QObject* k_textedittexttospeech__texttospeechconfigdialog_super_sender(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSender((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_sender(void* self, QObject* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnSender((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_sender_signal_index(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SenderSignalIndex((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_super_sender_signal_index(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperSenderSignalIndex((TextEditTextToSpeech__TextToSpeechConfigDialog*)self);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnSenderSignalIndex((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_receivers(void* self, const char* signal) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_Receivers((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, signal);
}

int32_t k_textedittexttospeech__texttospeechconfigdialog_super_receivers(void* self, const char* signal) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperReceivers((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, signal);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnReceivers((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigdialog_is_signal_connected(void* self, void* signal) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_IsSignalConnected((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMetaMethod*)signal);
}

bool k_textedittexttospeech__texttospeechconfigdialog_super_is_signal_connected(void* self, void* signal) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperIsSignalConnected((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnIsSignalConnected((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

double k_textedittexttospeech__texttospeechconfigdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_GetDecodedMetricF((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, metricA, metricB);
}

double k_textedittexttospeech__texttospeechconfigdialog_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextEditTextToSpeech__TextToSpeechConfigDialog_SuperGetDecodedMetricF((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, metricA, metricB);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_OnGetDecodedMetricF((TextEditTextToSpeech__TextToSpeechConfigDialog*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigdialog_delete(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigDialog_Delete((TextEditTextToSpeech__TextToSpeechConfigDialog*)(self));
}
