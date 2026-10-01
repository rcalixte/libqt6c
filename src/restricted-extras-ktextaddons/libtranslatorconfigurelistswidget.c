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
#include "libtranslatorconfigurelistswidget.hpp"
#include "libtranslatorconfigurelistswidget.h"

TextTranslator__TranslatorConfigureListsWidget* k_texttranslator__translatorconfigurelistswidget_new(void* parent) {
    return TextTranslator__TranslatorConfigureListsWidget_New((QWidget*)parent);
}

TextTranslator__TranslatorConfigureListsWidget* k_texttranslator__translatorconfigurelistswidget_new2() {
    return TextTranslator__TranslatorConfigureListsWidget_New2();
}

const QMetaObject* k_texttranslator__translatorconfigurelistswidget_meta_object(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_MetaObject((TextTranslator__TranslatorConfigureListsWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnMetaObject((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

const QMetaObject* k_texttranslator__translatorconfigurelistswidget_super_meta_object(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperMetaObject((TextTranslator__TranslatorConfigureListsWidget*)self);
}

void* k_texttranslator__translatorconfigurelistswidget_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorConfigureListsWidget_Metacast((TextTranslator__TranslatorConfigureListsWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelistswidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnMetacast((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void* k_texttranslator__translatorconfigurelistswidget_super_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperMetacast((TextTranslator__TranslatorConfigureListsWidget*)self, param1);
}

int32_t k_texttranslator__translatorconfigurelistswidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorConfigureListsWidget_Metacall((TextTranslator__TranslatorConfigureListsWidget*)self, param1, param2, param3);
}

void k_texttranslator__translatorconfigurelistswidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnMetacall((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorconfigurelistswidget_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperMetacall((TextTranslator__TranslatorConfigureListsWidget*)self, param1, param2, param3);
}

const char* k_texttranslator__translatorconfigurelistswidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelistswidget_save(void* self) {
    TextTranslator__TranslatorConfigureListsWidget_Save((TextTranslator__TranslatorConfigureListsWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_load(void* self) {
    TextTranslator__TranslatorConfigureListsWidget_Load((TextTranslator__TranslatorConfigureListsWidget*)self);
}

const char* k_texttranslator__translatorconfigurelistswidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorconfigurelistswidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPaintDevice* k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(void* self) {
    return QWidget_AsQPaintDevice((QWidget*)self);
}

TextTranslator__TranslatorConfigureListsWidget* k_texttranslator__translatorconfigurelistswidget_from_q_paint_device(void* _qpaintdevice) {
    return (TextTranslator__TranslatorConfigureListsWidget*)QWidget_FromQPaintDevice((QPaintDevice*)_qpaintdevice);
}

uintptr_t k_texttranslator__translatorconfigurelistswidget_win_id(const void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_texttranslator__translatorconfigurelistswidget_internal_win_id(const void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_texttranslator__translatorconfigurelistswidget_effective_win_id(const void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_texttranslator__translatorconfigurelistswidget_style(const void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_texttranslator__translatorconfigurelistswidget_is_top_level(const void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_window(const void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_modal(const void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_window_modality(const void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_texttranslator__translatorconfigurelistswidget_is_enabled(const void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_enabled_to(const void* self, const void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_texttranslator__translatorconfigurelistswidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_texttranslator__translatorconfigurelistswidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_texttranslator__translatorconfigurelistswidget_frame_geometry(const void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_texttranslator__translatorconfigurelistswidget_geometry(const void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_texttranslator__translatorconfigurelistswidget_normal_geometry(const void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_x(const void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_y(const void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_texttranslator__translatorconfigurelistswidget_pos(const void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelistswidget_frame_size(const void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelistswidget_size(const void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_width(const void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_height(const void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_texttranslator__translatorconfigurelistswidget_rect(const void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_texttranslator__translatorconfigurelistswidget_children_rect(const void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_texttranslator__translatorconfigurelistswidget_children_region(const void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelistswidget_minimum_size(const void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelistswidget_maximum_size(const void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_minimum_width(const void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_minimum_height(const void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_maximum_width(const void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_maximum_height(const void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_minimum_size(void* self, const void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_texttranslator__translatorconfigurelistswidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_texttranslator__translatorconfigurelistswidget_set_maximum_size(void* self, const void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_texttranslator__translatorconfigurelistswidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_texttranslator__translatorconfigurelistswidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_texttranslator__translatorconfigurelistswidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_texttranslator__translatorconfigurelistswidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_texttranslator__translatorconfigurelistswidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_texttranslator__translatorconfigurelistswidget_size_increment(const void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_size_increment(void* self, const void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_texttranslator__translatorconfigurelistswidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_texttranslator__translatorconfigurelistswidget_base_size(const void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_base_size(void* self, const void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_texttranslator__translatorconfigurelistswidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_texttranslator__translatorconfigurelistswidget_set_fixed_size(void* self, const void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_texttranslator__translatorconfigurelistswidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_texttranslator__translatorconfigurelistswidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_texttranslator__translatorconfigurelistswidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_texttranslator__translatorconfigurelistswidget_map_to_global(const void* self, const void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorconfigurelistswidget_map_to_global2(const void* self, const void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorconfigurelistswidget_map_from_global(const void* self, const void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorconfigurelistswidget_map_from_global2(const void* self, const void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorconfigurelistswidget_map_to_parent(const void* self, const void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorconfigurelistswidget_map_to_parent2(const void* self, const void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorconfigurelistswidget_map_from_parent(const void* self, const void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorconfigurelistswidget_map_from_parent2(const void* self, const void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorconfigurelistswidget_map_to(const void* self, const void* param1, const void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_texttranslator__translatorconfigurelistswidget_map_to2(const void* self, const void* param1, const void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_texttranslator__translatorconfigurelistswidget_map_from(const void* self, const void* param1, const void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_texttranslator__translatorconfigurelistswidget_map_from2(const void* self, const void* param1, const void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_window(const void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_native_parent_widget(const void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_top_level_widget(const void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_texttranslator__translatorconfigurelistswidget_palette(const void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_palette(void* self, const void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_texttranslator__translatorconfigurelistswidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_texttranslator__translatorconfigurelistswidget_background_role(const void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_texttranslator__translatorconfigurelistswidget_foreground_role(const void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_texttranslator__translatorconfigurelistswidget_font(const void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_font(void* self, const void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_texttranslator__translatorconfigurelistswidget_font_metrics(const void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_texttranslator__translatorconfigurelistswidget_font_info(const void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_texttranslator__translatorconfigurelistswidget_cursor(const void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_cursor(void* self, const void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_texttranslator__translatorconfigurelistswidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_texttranslator__translatorconfigurelistswidget_has_mouse_tracking(const void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_under_mouse(const void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_texttranslator__translatorconfigurelistswidget_has_tablet_tracking(const void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_mask(void* self, const void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_texttranslator__translatorconfigurelistswidget_set_mask2(void* self, const void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_texttranslator__translatorconfigurelistswidget_mask(const void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_texttranslator__translatorconfigurelistswidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_texttranslator__translatorconfigurelistswidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_texttranslator__translatorconfigurelistswidget_graphics_effect(const void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_texttranslator__translatorconfigurelistswidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_texttranslator__translatorconfigurelistswidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_texttranslator__translatorconfigurelistswidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_texttranslator__translatorconfigurelistswidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_texttranslator__translatorconfigurelistswidget_style_sheet(const void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorconfigurelistswidget_window_title(const void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelistswidget_set_window_icon(void* self, const void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_texttranslator__translatorconfigurelistswidget_window_icon(const void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_texttranslator__translatorconfigurelistswidget_window_icon_text(const void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelistswidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_texttranslator__translatorconfigurelistswidget_window_role(const void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelistswidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_texttranslator__translatorconfigurelistswidget_window_file_path(const void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelistswidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_texttranslator__translatorconfigurelistswidget_window_opacity(const void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_window_modified(const void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_texttranslator__translatorconfigurelistswidget_tool_tip(const void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelistswidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_texttranslator__translatorconfigurelistswidget_tool_tip_duration(const void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_texttranslator__translatorconfigurelistswidget_status_tip(const void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelistswidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_texttranslator__translatorconfigurelistswidget_whats_this(const void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorconfigurelistswidget_accessible_name(const void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelistswidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_texttranslator__translatorconfigurelistswidget_accessible_description(const void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelistswidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_texttranslator__translatorconfigurelistswidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_texttranslator__translatorconfigurelistswidget_layout_direction(const void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_locale(void* self, const void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_texttranslator__translatorconfigurelistswidget_locale(const void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_right_to_left(const void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_left_to_right(const void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_active_window(const void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_texttranslator__translatorconfigurelistswidget_focus_policy(const void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_texttranslator__translatorconfigurelistswidget_has_focus(const void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_texttranslator__translatorconfigurelistswidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_focus_proxy(const void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_context_menu_policy(const void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_texttranslator__translatorconfigurelistswidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_grab_mouse2(void* self, const void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_grab_shortcut(void* self, const void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_texttranslator__translatorconfigurelistswidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_texttranslator__translatorconfigurelistswidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_texttranslator__translatorconfigurelistswidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_texttranslator__translatorconfigurelistswidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_texttranslator__translatorconfigurelistswidget_updates_enabled(const void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_texttranslator__translatorconfigurelistswidget_graphics_proxy_widget(const void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatorconfigurelistswidget_update3(void* self, const void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_update4(void* self, const void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatorconfigurelistswidget_repaint3(void* self, const void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_repaint4(void* self, const void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_texttranslator__translatorconfigurelistswidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_texttranslator__translatorconfigurelistswidget_move2(void* self, const void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_texttranslator__translatorconfigurelistswidget_resize2(void* self, const void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatorconfigurelistswidget_set_geometry2(void* self, const void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_texttranslator__translatorconfigurelistswidget_save_geometry(const void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texttranslator__translatorconfigurelistswidget_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_texttranslator__translatorconfigurelistswidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_visible(const void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_visible_to(const void* self, const void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_texttranslator__translatorconfigurelistswidget_is_hidden(const void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_minimized(const void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_maximized(const void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_full_screen(const void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_window_state(const void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_texttranslator__translatorconfigurelistswidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_texttranslator__translatorconfigurelistswidget_size_policy(const void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_texttranslator__translatorconfigurelistswidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_texttranslator__translatorconfigurelistswidget_visible_region(const void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_texttranslator__translatorconfigurelistswidget_set_contents_margins2(void* self, const void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_texttranslator__translatorconfigurelistswidget_contents_margins(const void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_texttranslator__translatorconfigurelistswidget_contents_rect(const void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_texttranslator__translatorconfigurelistswidget_layout(const void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_texttranslator__translatorconfigurelistswidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_texttranslator__translatorconfigurelistswidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_texttranslator__translatorconfigurelistswidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_texttranslator__translatorconfigurelistswidget_scroll2(void* self, int dx, int dy, const void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_focus_widget(const void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_next_in_focus_chain(const void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_previous_in_focus_chain(const void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_accept_drops(const void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_texttranslator__translatorconfigurelistswidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_texttranslator__translatorconfigurelistswidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_texttranslator__translatorconfigurelistswidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_texttranslator__translatorconfigurelistswidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_texttranslator__translatorconfigurelistswidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_texttranslator__translatorconfigurelistswidget_actions(const void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_texttranslator__translatorconfigurelistswidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_texttranslator__translatorconfigurelistswidget_add_action3(void* self, const void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_texttranslator__translatorconfigurelistswidget_add_action4(void* self, const char* text, const void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_texttranslator__translatorconfigurelistswidget_add_action5(void* self, const void* icon, const char* text, const void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_parent_widget(const void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_texttranslator__translatorconfigurelistswidget_window_flags(const void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelistswidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_texttranslator__translatorconfigurelistswidget_window_type(const void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_find(uintptr_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_child_at(const void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_child_at2(const void* self, const void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_child_at3(const void* self, const void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_texttranslator__translatorconfigurelistswidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_texttranslator__translatorconfigurelistswidget_test_attribute(const void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelistswidget_ensure_polished(const void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_ancestor_of(const void* self, const void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_texttranslator__translatorconfigurelistswidget_auto_fill_background(const void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_texttranslator__translatorconfigurelistswidget_backing_store(const void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_texttranslator__translatorconfigurelistswidget_window_handle(const void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_texttranslator__translatorconfigurelistswidget_screen(const void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_texttranslator__translatorconfigurelistswidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_texttranslator__translatorconfigurelistswidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_window_icon_changed(void* self, const void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_texttranslator__translatorconfigurelistswidget_on_window_icon_changed(void* self, void (*callback)(void*, const void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_texttranslator__translatorconfigurelistswidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_custom_context_menu_requested(void* self, const void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_texttranslator__translatorconfigurelistswidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorconfigurelistswidget_input_method_hints(const void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_texttranslator__translatorconfigurelistswidget_render22(void* self, void* target, const void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_texttranslator__translatorconfigurelistswidget_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_texttranslator__translatorconfigurelistswidget_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_texttranslator__translatorconfigurelistswidget_render23(void* self, void* painter, const void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_texttranslator__translatorconfigurelistswidget_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_texttranslator__translatorconfigurelistswidget_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_texttranslator__translatorconfigurelistswidget_grab1(void* self, const void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_texttranslator__translatorconfigurelistswidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_texttranslator__translatorconfigurelistswidget_grab_shortcut2(void* self, const void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_texttranslator__translatorconfigurelistswidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_texttranslator__translatorconfigurelistswidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_texttranslator__translatorconfigurelistswidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_texttranslator__translatorconfigurelistswidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_texttranslator__translatorconfigurelistswidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_texttranslator__translatorconfigurelistswidget_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelistswidget_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texttranslator__translatorconfigurelistswidget_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texttranslator__translatorconfigurelistswidget_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texttranslator__translatorconfigurelistswidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texttranslator__translatorconfigurelistswidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texttranslator__translatorconfigurelistswidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texttranslator__translatorconfigurelistswidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texttranslator__translatorconfigurelistswidget_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texttranslator__translatorconfigurelistswidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texttranslator__translatorconfigurelistswidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelistswidget_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelistswidget_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelistswidget_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texttranslator__translatorconfigurelistswidget_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorconfigurelistswidget_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texttranslator__translatorconfigurelistswidget_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_texttranslator__translatorconfigurelistswidget_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texttranslator__translatorconfigurelistswidget_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texttranslator__translatorconfigurelistswidget_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texttranslator__translatorconfigurelistswidget_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texttranslator__translatorconfigurelistswidget_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_texttranslator__translatorconfigurelistswidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texttranslator__translatorconfigurelistswidget_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texttranslator__translatorconfigurelistswidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texttranslator__translatorconfigurelistswidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatorconfigurelistswidget_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texttranslator__translatorconfigurelistswidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texttranslator__translatorconfigurelistswidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelistswidget_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelistswidget_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelistswidget_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_texttranslator__translatorconfigurelistswidget_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_texttranslator__translatorconfigurelistswidget_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_texttranslator__translatorconfigurelistswidget_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorconfigurelistswidget_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_texttranslator__translatorconfigurelistswidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelistswidget_painting_active(const void* self) {
    return QPaintDevice_PaintingActive(k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(self));
}

int32_t k_texttranslator__translatorconfigurelistswidget_width_m_m(const void* self) {
    return QPaintDevice_WidthMM(k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(self));
}

int32_t k_texttranslator__translatorconfigurelistswidget_height_m_m(const void* self) {
    return QPaintDevice_HeightMM(k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(self));
}

int32_t k_texttranslator__translatorconfigurelistswidget_logical_dpi_x(const void* self) {
    return QPaintDevice_LogicalDpiX(k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(self));
}

int32_t k_texttranslator__translatorconfigurelistswidget_logical_dpi_y(const void* self) {
    return QPaintDevice_LogicalDpiY(k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(self));
}

int32_t k_texttranslator__translatorconfigurelistswidget_physical_dpi_x(const void* self) {
    return QPaintDevice_PhysicalDpiX(k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(self));
}

int32_t k_texttranslator__translatorconfigurelistswidget_physical_dpi_y(const void* self) {
    return QPaintDevice_PhysicalDpiY(k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(self));
}

double k_texttranslator__translatorconfigurelistswidget_device_pixel_ratio(const void* self) {
    return QPaintDevice_DevicePixelRatio(k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(self));
}

double k_texttranslator__translatorconfigurelistswidget_device_pixel_ratio_f(const void* self) {
    return QPaintDevice_DevicePixelRatioF(k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(self));
}

int32_t k_texttranslator__translatorconfigurelistswidget_color_count(const void* self) {
    return QPaintDevice_ColorCount(k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(self));
}

int32_t k_texttranslator__translatorconfigurelistswidget_depth(const void* self) {
    return QPaintDevice_Depth(k_texttranslator__translatorconfigurelistswidget_as_q_paint_device(self));
}

double k_texttranslator__translatorconfigurelistswidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_texttranslator__translatorconfigurelistswidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_texttranslator__translatorconfigurelistswidget_dev_type(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_DevType((TextTranslator__TranslatorConfigureListsWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_super_dev_type(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperDevType((TextTranslator__TranslatorConfigureListsWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_on_dev_type(const void* self, int32_t (*callback)(const void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnDevType((const TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_set_visible(void* self, bool visible) {
    TextTranslator__TranslatorConfigureListsWidget_SetVisible((TextTranslator__TranslatorConfigureListsWidget*)self, visible);
}

void k_texttranslator__translatorconfigurelistswidget_super_set_visible(void* self, bool visible) {
    TextTranslator__TranslatorConfigureListsWidget_SuperSetVisible((TextTranslator__TranslatorConfigureListsWidget*)self, visible);
}

void k_texttranslator__translatorconfigurelistswidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextTranslator__TranslatorConfigureListsWidget_OnSetVisible((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

QSize* k_texttranslator__translatorconfigurelistswidget_size_hint(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_SizeHint((TextTranslator__TranslatorConfigureListsWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelistswidget_super_size_hint(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperSizeHint((TextTranslator__TranslatorConfigureListsWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_on_size_hint(const void* self, QSize* (*callback)(const void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnSizeHint((const TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

QSize* k_texttranslator__translatorconfigurelistswidget_minimum_size_hint(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_MinimumSizeHint((TextTranslator__TranslatorConfigureListsWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelistswidget_super_minimum_size_hint(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperMinimumSizeHint((TextTranslator__TranslatorConfigureListsWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnMinimumSizeHint((const TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorconfigurelistswidget_height_for_width(const void* self, int param1) {
    return TextTranslator__TranslatorConfigureListsWidget_HeightForWidth((TextTranslator__TranslatorConfigureListsWidget*)self, param1);
}

int32_t k_texttranslator__translatorconfigurelistswidget_super_height_for_width(const void* self, int param1) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperHeightForWidth((TextTranslator__TranslatorConfigureListsWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelistswidget_on_height_for_width(const void* self, int32_t (*callback)(const void*, int)) {
    TextTranslator__TranslatorConfigureListsWidget_OnHeightForWidth((const TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelistswidget_has_height_for_width(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_HasHeightForWidth((TextTranslator__TranslatorConfigureListsWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_super_has_height_for_width(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperHasHeightForWidth((TextTranslator__TranslatorConfigureListsWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_on_has_height_for_width(const void* self, bool (*callback)(const void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnHasHeightForWidth((const TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_texttranslator__translatorconfigurelistswidget_paint_engine(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_PaintEngine((TextTranslator__TranslatorConfigureListsWidget*)self);
}

QPaintEngine* k_texttranslator__translatorconfigurelistswidget_super_paint_engine(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperPaintEngine((TextTranslator__TranslatorConfigureListsWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnPaintEngine((const TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelistswidget_event(void* self, void* event) {
    return TextTranslator__TranslatorConfigureListsWidget_Event((TextTranslator__TranslatorConfigureListsWidget*)self, (QEvent*)event);
}

bool k_texttranslator__translatorconfigurelistswidget_super_event(void* self, void* event) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_event(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_mouse_press_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_MousePressEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_mouse_press_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperMousePressEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnMousePressEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_mouse_release_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_MouseReleaseEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_mouse_release_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperMouseReleaseEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnMouseReleaseEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_mouse_double_click_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_MouseDoubleClickEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_mouse_double_click_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperMouseDoubleClickEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnMouseDoubleClickEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_mouse_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_MouseMoveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_mouse_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperMouseMoveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnMouseMoveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_wheel_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_WheelEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QWheelEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_wheel_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperWheelEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QWheelEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnWheelEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_key_press_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_KeyPressEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_key_press_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperKeyPressEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnKeyPressEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_key_release_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_KeyReleaseEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_key_release_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperKeyReleaseEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnKeyReleaseEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_focus_in_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_FocusInEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_focus_in_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperFocusInEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnFocusInEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_focus_out_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_FocusOutEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_focus_out_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperFocusOutEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnFocusOutEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_enter_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_EnterEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QEnterEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_enter_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperEnterEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QEnterEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnEnterEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_leave_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_LeaveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_leave_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperLeaveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnLeaveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_paint_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_PaintEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QPaintEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_paint_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperPaintEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QPaintEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnPaintEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_MoveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QMoveEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperMoveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QMoveEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnMoveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_resize_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_ResizeEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QResizeEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_resize_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperResizeEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QResizeEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnResizeEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_close_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_CloseEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QCloseEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_close_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperCloseEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QCloseEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnCloseEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_context_menu_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_ContextMenuEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QContextMenuEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_context_menu_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperContextMenuEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QContextMenuEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnContextMenuEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_tablet_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_TabletEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QTabletEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_tablet_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperTabletEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QTabletEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnTabletEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_action_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_ActionEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QActionEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_action_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperActionEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QActionEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnActionEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_drag_enter_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_DragEnterEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QDragEnterEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_drag_enter_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperDragEnterEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QDragEnterEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnDragEnterEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_drag_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_DragMoveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QDragMoveEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_drag_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperDragMoveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QDragMoveEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnDragMoveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_drag_leave_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_DragLeaveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QDragLeaveEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_drag_leave_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperDragLeaveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QDragLeaveEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnDragLeaveEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_drop_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_DropEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QDropEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_drop_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperDropEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QDropEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnDropEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_show_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_ShowEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QShowEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_show_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperShowEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QShowEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnShowEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_hide_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_HideEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QHideEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_hide_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperHideEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QHideEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnHideEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelistswidget_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextTranslator__TranslatorConfigureListsWidget_NativeEvent((TextTranslator__TranslatorConfigureListsWidget*)self, qstring(eventType), message, result);
}

bool k_texttranslator__translatorconfigurelistswidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperNativeEvent((TextTranslator__TranslatorConfigureListsWidget*)self, qstring(eventType), message, result);
}

void k_texttranslator__translatorconfigurelistswidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnNativeEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_change_event(void* self, void* param1) {
    TextTranslator__TranslatorConfigureListsWidget_ChangeEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QEvent*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_super_change_event(void* self, void* param1) {
    TextTranslator__TranslatorConfigureListsWidget_SuperChangeEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QEvent*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnChangeEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorconfigurelistswidget_metric(const void* self, int32_t param1) {
    return TextTranslator__TranslatorConfigureListsWidget_Metric((TextTranslator__TranslatorConfigureListsWidget*)self, param1);
}

int32_t k_texttranslator__translatorconfigurelistswidget_super_metric(const void* self, int32_t param1) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperMetric((TextTranslator__TranslatorConfigureListsWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelistswidget_on_metric(const void* self, int32_t (*callback)(const void*, int32_t)) {
    TextTranslator__TranslatorConfigureListsWidget_OnMetric((const TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_init_painter(const void* self, void* painter) {
    TextTranslator__TranslatorConfigureListsWidget_InitPainter((TextTranslator__TranslatorConfigureListsWidget*)self, (QPainter*)painter);
}

void k_texttranslator__translatorconfigurelistswidget_super_init_painter(const void* self, void* painter) {
    TextTranslator__TranslatorConfigureListsWidget_SuperInitPainter((TextTranslator__TranslatorConfigureListsWidget*)self, (QPainter*)painter);
}

void k_texttranslator__translatorconfigurelistswidget_on_init_painter(const void* self, void (*callback)(const void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnInitPainter((const TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_texttranslator__translatorconfigurelistswidget_redirected(const void* self, void* offset) {
    return TextTranslator__TranslatorConfigureListsWidget_Redirected((TextTranslator__TranslatorConfigureListsWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_texttranslator__translatorconfigurelistswidget_super_redirected(const void* self, void* offset) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperRedirected((TextTranslator__TranslatorConfigureListsWidget*)self, (QPoint*)offset);
}

void k_texttranslator__translatorconfigurelistswidget_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnRedirected((const TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

QPainter* k_texttranslator__translatorconfigurelistswidget_shared_painter(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_SharedPainter((TextTranslator__TranslatorConfigureListsWidget*)self);
}

QPainter* k_texttranslator__translatorconfigurelistswidget_super_shared_painter(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperSharedPainter((TextTranslator__TranslatorConfigureListsWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_on_shared_painter(const void* self, QPainter* (*callback)(const void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnSharedPainter((const TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_input_method_event(void* self, void* param1) {
    TextTranslator__TranslatorConfigureListsWidget_InputMethodEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QInputMethodEvent*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_super_input_method_event(void* self, void* param1) {
    TextTranslator__TranslatorConfigureListsWidget_SuperInputMethodEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QInputMethodEvent*)param1);
}

void k_texttranslator__translatorconfigurelistswidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnInputMethodEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

QVariant* k_texttranslator__translatorconfigurelistswidget_input_method_query(const void* self, int32_t param1) {
    return TextTranslator__TranslatorConfigureListsWidget_InputMethodQuery((TextTranslator__TranslatorConfigureListsWidget*)self, param1);
}

QVariant* k_texttranslator__translatorconfigurelistswidget_super_input_method_query(const void* self, int32_t param1) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperInputMethodQuery((TextTranslator__TranslatorConfigureListsWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelistswidget_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t)) {
    TextTranslator__TranslatorConfigureListsWidget_OnInputMethodQuery((const TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelistswidget_focus_next_prev_child(void* self, bool next) {
    return TextTranslator__TranslatorConfigureListsWidget_FocusNextPrevChild((TextTranslator__TranslatorConfigureListsWidget*)self, next);
}

bool k_texttranslator__translatorconfigurelistswidget_super_focus_next_prev_child(void* self, bool next) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperFocusNextPrevChild((TextTranslator__TranslatorConfigureListsWidget*)self, next);
}

void k_texttranslator__translatorconfigurelistswidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextTranslator__TranslatorConfigureListsWidget_OnFocusNextPrevChild((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelistswidget_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorConfigureListsWidget_EventFilter((TextTranslator__TranslatorConfigureListsWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texttranslator__translatorconfigurelistswidget_super_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorConfigureListsWidget_SuperEventFilter((TextTranslator__TranslatorConfigureListsWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnEventFilter((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_timer_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_TimerEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_timer_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperTimerEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnTimerEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_child_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_ChildEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_child_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperChildEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnChildEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_custom_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_CustomEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_super_custom_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureListsWidget_SuperCustomEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelistswidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnCustomEvent((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_connect_notify(void* self, const void* signal) {
    TextTranslator__TranslatorConfigureListsWidget_ConnectNotify((TextTranslator__TranslatorConfigureListsWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorconfigurelistswidget_super_connect_notify(void* self, const void* signal) {
    TextTranslator__TranslatorConfigureListsWidget_SuperConnectNotify((TextTranslator__TranslatorConfigureListsWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorconfigurelistswidget_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnConnectNotify((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_disconnect_notify(void* self, const void* signal) {
    TextTranslator__TranslatorConfigureListsWidget_DisconnectNotify((TextTranslator__TranslatorConfigureListsWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorconfigurelistswidget_super_disconnect_notify(void* self, const void* signal) {
    TextTranslator__TranslatorConfigureListsWidget_SuperDisconnectNotify((TextTranslator__TranslatorConfigureListsWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorconfigurelistswidget_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    TextTranslator__TranslatorConfigureListsWidget_OnDisconnectNotify((TextTranslator__TranslatorConfigureListsWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_update_micro_focus(void* self) {
    TextTranslator__TranslatorConfigureListsWidget_UpdateMicroFocus((TextTranslator__TranslatorConfigureListsWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_create(void* self) {
    TextTranslator__TranslatorConfigureListsWidget_Create((TextTranslator__TranslatorConfigureListsWidget*)self);
}

void k_texttranslator__translatorconfigurelistswidget_destroy(void* self) {
    TextTranslator__TranslatorConfigureListsWidget_Destroy((TextTranslator__TranslatorConfigureListsWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_focus_next_child(void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_FocusNextChild((TextTranslator__TranslatorConfigureListsWidget*)self);
}

bool k_texttranslator__translatorconfigurelistswidget_focus_previous_child(void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_FocusPreviousChild((TextTranslator__TranslatorConfigureListsWidget*)self);
}

QObject* k_texttranslator__translatorconfigurelistswidget_sender(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_Sender((TextTranslator__TranslatorConfigureListsWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_sender_signal_index(const void* self) {
    return TextTranslator__TranslatorConfigureListsWidget_SenderSignalIndex((TextTranslator__TranslatorConfigureListsWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelistswidget_receivers(const void* self, const char* signal) {
    return TextTranslator__TranslatorConfigureListsWidget_Receivers((TextTranslator__TranslatorConfigureListsWidget*)self, signal);
}

bool k_texttranslator__translatorconfigurelistswidget_is_signal_connected(const void* self, const void* signal) {
    return TextTranslator__TranslatorConfigureListsWidget_IsSignalConnected((TextTranslator__TranslatorConfigureListsWidget*)self, (QMetaMethod*)signal);
}

double k_texttranslator__translatorconfigurelistswidget_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB) {
    return TextTranslator__TranslatorConfigureListsWidget_GetDecodedMetricF((TextTranslator__TranslatorConfigureListsWidget*)self, metricA, metricB);
}

void k_texttranslator__translatorconfigurelistswidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelistswidget_delete(void* self) {
    TextTranslator__TranslatorConfigureListsWidget_Delete((TextTranslator__TranslatorConfigureListsWidget*)(self));
}
