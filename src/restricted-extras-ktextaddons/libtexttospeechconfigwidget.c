#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
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
#include "libtexttospeechconfigwidget.hpp"
#include "libtexttospeechconfigwidget.h"

TextEditTextToSpeech__TextToSpeechConfigWidget* k_textedittexttospeech__texttospeechconfigwidget_new(void* parent) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_new((QWidget*)parent);
}

TextEditTextToSpeech__TextToSpeechConfigWidget* k_textedittexttospeech__texttospeechconfigwidget_new2() {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_new2();
}

const QMetaObject* k_textedittexttospeech__texttospeechconfigwidget_meta_object(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_MetaObject((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetaObject((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

const QMetaObject* k_textedittexttospeech__texttospeechconfigwidget_super_meta_object(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetaObject((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void* k_textedittexttospeech__texttospeechconfigwidget_metacast(void* self, const char* param1) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_Metacast((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetacast((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void* k_textedittexttospeech__texttospeechconfigwidget_super_metacast(void* self, const char* param1) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetacast((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, param1);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_Metacall((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, param1, param2, param3);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetacall((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetacall((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, param1, param2, param3);
}

const char* k_textedittexttospeech__texttospeechconfigwidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigwidget_initialize_settings(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_InitializeSettings((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_write_config(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_WriteConfig((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_read_config(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_ReadConfig((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_restore_defaults(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_RestoreDefaults((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_config_changed(void* self, bool state) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_ConfigChanged((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, state);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_config_changed(void* self, void (*callback)(void*, bool)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_Connect_ConfigChanged((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

const char* k_textedittexttospeech__texttospeechconfigwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedittexttospeech__texttospeechconfigwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_textedittexttospeech__texttospeechconfigwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textedittexttospeech__texttospeechconfigwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textedittexttospeech__texttospeechconfigwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textedittexttospeech__texttospeechconfigwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textedittexttospeech__texttospeechconfigwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textedittexttospeech__texttospeechconfigwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textedittexttospeech__texttospeechconfigwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textedittexttospeech__texttospeechconfigwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textedittexttospeech__texttospeechconfigwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textedittexttospeech__texttospeechconfigwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textedittexttospeech__texttospeechconfigwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textedittexttospeech__texttospeechconfigwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textedittexttospeech__texttospeechconfigwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textedittexttospeech__texttospeechconfigwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedittexttospeech__texttospeechconfigwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedittexttospeech__texttospeechconfigwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedittexttospeech__texttospeechconfigwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedittexttospeech__texttospeechconfigwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedittexttospeech__texttospeechconfigwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedittexttospeech__texttospeechconfigwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textedittexttospeech__texttospeechconfigwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textedittexttospeech__texttospeechconfigwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textedittexttospeech__texttospeechconfigwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textedittexttospeech__texttospeechconfigwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textedittexttospeech__texttospeechconfigwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textedittexttospeech__texttospeechconfigwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textedittexttospeech__texttospeechconfigwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textedittexttospeech__texttospeechconfigwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textedittexttospeech__texttospeechconfigwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textedittexttospeech__texttospeechconfigwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textedittexttospeech__texttospeechconfigwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textedittexttospeech__texttospeechconfigwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textedittexttospeech__texttospeechconfigwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textedittexttospeech__texttospeechconfigwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textedittexttospeech__texttospeechconfigwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textedittexttospeech__texttospeechconfigwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textedittexttospeech__texttospeechconfigwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textedittexttospeech__texttospeechconfigwidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textedittexttospeech__texttospeechconfigwidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textedittexttospeech__texttospeechconfigwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textedittexttospeech__texttospeechconfigwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedittexttospeech__texttospeechconfigwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textedittexttospeech__texttospeechconfigwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textedittexttospeech__texttospeechconfigwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textedittexttospeech__texttospeechconfigwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textedittexttospeech__texttospeechconfigwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textedittexttospeech__texttospeechconfigwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textedittexttospeech__texttospeechconfigwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textedittexttospeech__texttospeechconfigwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textedittexttospeech__texttospeechconfigwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textedittexttospeech__texttospeechconfigwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textedittexttospeech__texttospeechconfigwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textedittexttospeech__texttospeechconfigwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textedittexttospeech__texttospeechconfigwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textedittexttospeech__texttospeechconfigwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textedittexttospeech__texttospeechconfigwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textedittexttospeech__texttospeechconfigwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textedittexttospeech__texttospeechconfigwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textedittexttospeech__texttospeechconfigwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textedittexttospeech__texttospeechconfigwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textedittexttospeech__texttospeechconfigwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textedittexttospeech__texttospeechconfigwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textedittexttospeech__texttospeechconfigwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textedittexttospeech__texttospeechconfigwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textedittexttospeech__texttospeechconfigwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textedittexttospeech__texttospeechconfigwidget_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textedittexttospeech__texttospeechconfigwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textedittexttospeech__texttospeechconfigwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textedittexttospeech__texttospeechconfigwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textedittexttospeech__texttospeechconfigwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textedittexttospeech__texttospeechconfigwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textedittexttospeech__texttospeechconfigwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textedittexttospeech__texttospeechconfigwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textedittexttospeech__texttospeechconfigwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textedittexttospeech__texttospeechconfigwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textedittexttospeech__texttospeechconfigwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textedittexttospeech__texttospeechconfigwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textedittexttospeech__texttospeechconfigwidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textedittexttospeech__texttospeechconfigwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textedittexttospeech__texttospeechconfigwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textedittexttospeech__texttospeechconfigwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textedittexttospeech__texttospeechconfigwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textedittexttospeech__texttospeechconfigwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textedittexttospeech__texttospeechconfigwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textedittexttospeech__texttospeechconfigwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textedittexttospeech__texttospeechconfigwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_find(uintptr_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textedittexttospeech__texttospeechconfigwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textedittexttospeech__texttospeechconfigwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textedittexttospeech__texttospeechconfigwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textedittexttospeech__texttospeechconfigwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textedittexttospeech__texttospeechconfigwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textedittexttospeech__texttospeechconfigwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textedittexttospeech__texttospeechconfigwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textedittexttospeech__texttospeechconfigwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textedittexttospeech__texttospeechconfigwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textedittexttospeech__texttospeechconfigwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textedittexttospeech__texttospeechconfigwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textedittexttospeech__texttospeechconfigwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textedittexttospeech__texttospeechconfigwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textedittexttospeech__texttospeechconfigwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textedittexttospeech__texttospeechconfigwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textedittexttospeech__texttospeechconfigwidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textedittexttospeech__texttospeechconfigwidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textedittexttospeech__texttospeechconfigwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textedittexttospeech__texttospeechconfigwidget_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textedittexttospeech__texttospeechconfigwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textedittexttospeech__texttospeechconfigwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textedittexttospeech__texttospeechconfigwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textedittexttospeech__texttospeechconfigwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textedittexttospeech__texttospeechconfigwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textedittexttospeech__texttospeechconfigwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigwidget_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigwidget_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigwidget_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textedittexttospeech__texttospeechconfigwidget_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textedittexttospeech__texttospeechconfigwidget_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textedittexttospeech__texttospeechconfigwidget_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textedittexttospeech__texttospeechconfigwidget_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textedittexttospeech__texttospeechconfigwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textedittexttospeech__texttospeechconfigwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textedittexttospeech__texttospeechconfigwidget_dynamic_property_names\n");
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

QBindingStorage* k_textedittexttospeech__texttospeechconfigwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textedittexttospeech__texttospeechconfigwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textedittexttospeech__texttospeechconfigwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textedittexttospeech__texttospeechconfigwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigwidget_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigwidget_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textedittexttospeech__texttospeechconfigwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textedittexttospeech__texttospeechconfigwidget_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textedittexttospeech__texttospeechconfigwidget_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textedittexttospeech__texttospeechconfigwidget_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textedittexttospeech__texttospeechconfigwidget_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textedittexttospeech__texttospeechconfigwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textedittexttospeech__texttospeechconfigwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textedittexttospeech__texttospeechconfigwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textedittexttospeech__texttospeechconfigwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_dev_type(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_DevType((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_super_dev_type(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDevType((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_dev_type(void* self, int32_t (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnDevType((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_set_visible(void* self, bool visible) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SetVisible((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, visible);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_set_visible(void* self, bool visible) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSetVisible((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, visible);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnSetVisible((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

QSize* k_textedittexttospeech__texttospeechconfigwidget_size_hint(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SizeHint((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigwidget_super_size_hint(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSizeHint((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_size_hint(void* self, QSize* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnSizeHint((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

QSize* k_textedittexttospeech__texttospeechconfigwidget_minimum_size_hint(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_MinimumSizeHint((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

QSize* k_textedittexttospeech__texttospeechconfigwidget_super_minimum_size_hint(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMinimumSizeHint((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnMinimumSizeHint((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_height_for_width(void* self, int param1) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_HeightForWidth((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, param1);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_super_height_for_width(void* self, int param1) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperHeightForWidth((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnHeightForWidth((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigwidget_has_height_for_width(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_HasHeightForWidth((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_super_has_height_for_width(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperHasHeightForWidth((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnHasHeightForWidth((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_textedittexttospeech__texttospeechconfigwidget_paint_engine(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEngine((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

QPaintEngine* k_textedittexttospeech__texttospeechconfigwidget_super_paint_engine(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperPaintEngine((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnPaintEngine((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigwidget_event(void* self, void* event) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_Event((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QEvent*)event);
}

bool k_textedittexttospeech__texttospeechconfigwidget_super_event(void* self, void* event) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_mouse_press_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_MousePressEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_mouse_press_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMousePressEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnMousePressEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_mouse_release_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_MouseReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_mouse_release_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnMouseReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_mouse_double_click_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_MouseDoubleClickEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_mouse_double_click_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseDoubleClickEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnMouseDoubleClickEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_mouse_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_MouseMoveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_mouse_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseMoveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMouseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnMouseMoveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_wheel_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_WheelEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QWheelEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_wheel_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperWheelEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QWheelEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnWheelEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_key_press_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_KeyPressEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QKeyEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_key_press_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperKeyPressEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QKeyEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnKeyPressEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_key_release_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_KeyReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QKeyEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_key_release_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperKeyReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QKeyEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnKeyReleaseEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_focus_in_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_FocusInEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QFocusEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_focus_in_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusInEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QFocusEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusInEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_focus_out_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_FocusOutEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QFocusEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_focus_out_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusOutEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QFocusEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusOutEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_enter_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_EnterEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QEnterEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_enter_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperEnterEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QEnterEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnEnterEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_leave_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_LeaveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_leave_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperLeaveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnLeaveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_paint_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QPaintEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_paint_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperPaintEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QPaintEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnPaintEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_MoveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMoveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMoveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMoveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnMoveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_resize_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_ResizeEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QResizeEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_resize_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperResizeEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QResizeEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnResizeEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_close_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_CloseEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QCloseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_close_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperCloseEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QCloseEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnCloseEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_context_menu_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_ContextMenuEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QContextMenuEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_context_menu_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperContextMenuEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QContextMenuEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnContextMenuEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_tablet_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_TabletEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QTabletEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_tablet_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperTabletEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QTabletEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnTabletEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_action_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_ActionEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QActionEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_action_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperActionEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QActionEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnActionEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_drag_enter_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_DragEnterEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QDragEnterEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_drag_enter_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragEnterEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QDragEnterEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnDragEnterEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_drag_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_DragMoveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QDragMoveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_drag_move_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragMoveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QDragMoveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnDragMoveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_drag_leave_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_DragLeaveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QDragLeaveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_drag_leave_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragLeaveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QDragLeaveEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnDragLeaveEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_drop_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_DropEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QDropEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_drop_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDropEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QDropEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnDropEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_show_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_ShowEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QShowEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_show_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperShowEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QShowEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnShowEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_hide_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_HideEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QHideEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_hide_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperHideEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QHideEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnHideEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigwidget_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_NativeEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, qstring(eventType), message, result);
}

bool k_textedittexttospeech__texttospeechconfigwidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperNativeEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, qstring(eventType), message, result);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnNativeEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_change_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_ChangeEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_change_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperChangeEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnChangeEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_metric(void* self, int32_t param1) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_Metric((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, param1);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_super_metric(void* self, int32_t param1) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetric((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnMetric((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_init_painter(void* self, void* painter) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_InitPainter((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QPainter*)painter);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_init_painter(void* self, void* painter) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperInitPainter((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QPainter*)painter);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnInitPainter((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_textedittexttospeech__texttospeechconfigwidget_redirected(void* self, void* offset) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_Redirected((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_textedittexttospeech__texttospeechconfigwidget_super_redirected(void* self, void* offset) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperRedirected((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QPoint*)offset);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnRedirected((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

QPainter* k_textedittexttospeech__texttospeechconfigwidget_shared_painter(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SharedPainter((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

QPainter* k_textedittexttospeech__texttospeechconfigwidget_super_shared_painter(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSharedPainter((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnSharedPainter((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_input_method_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QInputMethodEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_input_method_event(void* self, void* param1) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperInputMethodEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QInputMethodEvent*)param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnInputMethodEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

QVariant* k_textedittexttospeech__texttospeechconfigwidget_input_method_query(void* self, int32_t param1) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodQuery((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, param1);
}

QVariant* k_textedittexttospeech__texttospeechconfigwidget_super_input_method_query(void* self, int32_t param1) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperInputMethodQuery((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, param1);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnInputMethodQuery((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigwidget_focus_next_prev_child(void* self, bool next) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextPrevChild((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, next);
}

bool k_textedittexttospeech__texttospeechconfigwidget_super_focus_next_prev_child(void* self, bool next) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusNextPrevChild((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, next);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusNextPrevChild((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigwidget_event_filter(void* self, void* watched, void* event) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_EventFilter((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textedittexttospeech__texttospeechconfigwidget_super_event_filter(void* self, void* watched, void* event) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperEventFilter((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnEventFilter((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_timer_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_TimerEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QTimerEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_timer_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperTimerEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QTimerEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnTimerEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_child_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_ChildEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QChildEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_child_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperChildEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QChildEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnChildEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_custom_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_CustomEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_custom_event(void* self, void* event) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperCustomEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QEvent*)event);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnCustomEvent((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_connect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_ConnectNotify((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_connect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperConnectNotify((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnConnectNotify((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_disconnect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_DisconnectNotify((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_disconnect_notify(void* self, void* signal) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDisconnectNotify((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnDisconnectNotify((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_update_micro_focus(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_UpdateMicroFocus((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_update_micro_focus(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperUpdateMicroFocus((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_update_micro_focus(void* self, void (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnUpdateMicroFocus((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_create(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_Create((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_create(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperCreate((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_create(void* self, void (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnCreate((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_destroy(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_Destroy((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_super_destroy(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDestroy((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_destroy(void* self, void (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnDestroy((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigwidget_focus_next_child(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextChild((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_super_focus_next_child(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusNextChild((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_focus_next_child(void* self, bool (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusNextChild((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigwidget_focus_previous_child(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_FocusPreviousChild((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

bool k_textedittexttospeech__texttospeechconfigwidget_super_focus_previous_child(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusPreviousChild((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnFocusPreviousChild((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

QObject* k_textedittexttospeech__texttospeechconfigwidget_sender(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_Sender((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

QObject* k_textedittexttospeech__texttospeechconfigwidget_super_sender(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSender((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_sender(void* self, QObject* (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnSender((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_sender_signal_index(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SenderSignalIndex((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_super_sender_signal_index(void* self) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSenderSignalIndex((TextEditTextToSpeech__TextToSpeechConfigWidget*)self);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnSenderSignalIndex((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_receivers(void* self, const char* signal) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_Receivers((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, signal);
}

int32_t k_textedittexttospeech__texttospeechconfigwidget_super_receivers(void* self, const char* signal) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperReceivers((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, signal);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnReceivers((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

bool k_textedittexttospeech__texttospeechconfigwidget_is_signal_connected(void* self, void* signal) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_IsSignalConnected((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMetaMethod*)signal);
}

bool k_textedittexttospeech__texttospeechconfigwidget_super_is_signal_connected(void* self, void* signal) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperIsSignalConnected((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (QMetaMethod*)signal);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnIsSignalConnected((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

double k_textedittexttospeech__texttospeechconfigwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_GetDecodedMetricF((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, metricA, metricB);
}

double k_textedittexttospeech__texttospeechconfigwidget_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextEditTextToSpeech__TextToSpeechConfigWidget_SuperGetDecodedMetricF((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, metricA, metricB);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_OnGetDecodedMetricF((TextEditTextToSpeech__TextToSpeechConfigWidget*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textedittexttospeech__texttospeechconfigwidget_delete(void* self) {
    TextEditTextToSpeech__TextToSpeechConfigWidget_Delete((TextEditTextToSpeech__TextToSpeechConfigWidget*)(self));
}
