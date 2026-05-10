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
#include "librichtexteditor.hpp"
#include "librichtexteditorwidget.hpp"
#include "librichtexteditorwidget.h"

TextCustomEditor__RichTextEditorWidget* k_textcustomeditor__richtexteditorwidget_new(void* parent) {
    return TextCustomEditor__RichTextEditorWidget_new((QWidget*)parent);
}

TextCustomEditor__RichTextEditorWidget* k_textcustomeditor__richtexteditorwidget_new2() {
    return TextCustomEditor__RichTextEditorWidget_new2();
}

TextCustomEditor__RichTextEditorWidget* k_textcustomeditor__richtexteditorwidget_new3(void* customEditor) {
    return TextCustomEditor__RichTextEditorWidget_new3((TextCustomEditor__RichTextEditor*)customEditor);
}

TextCustomEditor__RichTextEditorWidget* k_textcustomeditor__richtexteditorwidget_new4(void* customEditor, void* parent) {
    return TextCustomEditor__RichTextEditorWidget_new4((TextCustomEditor__RichTextEditor*)customEditor, (QWidget*)parent);
}

const QMetaObject* k_textcustomeditor__richtexteditorwidget_meta_object(void* self) {
    return TextCustomEditor__RichTextEditorWidget_MetaObject((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnMetaObject((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

const QMetaObject* k_textcustomeditor__richtexteditorwidget_super_meta_object(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SuperMetaObject((TextCustomEditor__RichTextEditorWidget*)self);
}

void* k_textcustomeditor__richtexteditorwidget_metacast(void* self, const char* param1) {
    return TextCustomEditor__RichTextEditorWidget_Metacast((TextCustomEditor__RichTextEditorWidget*)self, param1);
}

void k_textcustomeditor__richtexteditorwidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextCustomEditor__RichTextEditorWidget_OnMetacast((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void* k_textcustomeditor__richtexteditorwidget_super_metacast(void* self, const char* param1) {
    return TextCustomEditor__RichTextEditorWidget_SuperMetacast((TextCustomEditor__RichTextEditorWidget*)self, param1);
}

int32_t k_textcustomeditor__richtexteditorwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__RichTextEditorWidget_Metacall((TextCustomEditor__RichTextEditorWidget*)self, param1, param2, param3);
}

void k_textcustomeditor__richtexteditorwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnMetacall((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditorwidget_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextCustomEditor__RichTextEditorWidget_SuperMetacall((TextCustomEditor__RichTextEditorWidget*)self, param1, param2, param3);
}

const char* k_textcustomeditor__richtexteditorwidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_clear(void* self) {
    TextCustomEditor__RichTextEditorWidget_Clear((TextCustomEditor__RichTextEditorWidget*)self);
}

TextCustomEditor__RichTextEditor* k_textcustomeditor__richtexteditorwidget_editor(void* self) {
    return TextCustomEditor__RichTextEditorWidget_Editor((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_read_only(void* self, bool readOnly) {
    TextCustomEditor__RichTextEditorWidget_SetReadOnly((TextCustomEditor__RichTextEditorWidget*)self, readOnly);
}

bool k_textcustomeditor__richtexteditorwidget_is_read_only(void* self) {
    return TextCustomEditor__RichTextEditorWidget_IsReadOnly((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_html(void* self, const char* html) {
    TextCustomEditor__RichTextEditorWidget_SetHtml((TextCustomEditor__RichTextEditorWidget*)self, qstring(html));
}

const char* k_textcustomeditor__richtexteditorwidget_to_html(void* self) {
    libqt_string _str = TextCustomEditor__RichTextEditorWidget_ToHtml((TextCustomEditor__RichTextEditorWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_set_plain_text(void* self, const char* text) {
    TextCustomEditor__RichTextEditorWidget_SetPlainText((TextCustomEditor__RichTextEditorWidget*)self, qstring(text));
}

const char* k_textcustomeditor__richtexteditorwidget_to_plain_text(void* self) {
    libqt_string _str = TextCustomEditor__RichTextEditorWidget_ToPlainText((TextCustomEditor__RichTextEditorWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_set_accept_rich_text(void* self, bool b) {
    TextCustomEditor__RichTextEditorWidget_SetAcceptRichText((TextCustomEditor__RichTextEditorWidget*)self, b);
}

bool k_textcustomeditor__richtexteditorwidget_accept_rich_text(void* self) {
    return TextCustomEditor__RichTextEditorWidget_AcceptRichText((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_spell_checking_config_file_name(void* self, const char* _fileName) {
    TextCustomEditor__RichTextEditorWidget_SetSpellCheckingConfigFileName((TextCustomEditor__RichTextEditorWidget*)self, qstring(_fileName));
}

bool k_textcustomeditor__richtexteditorwidget_is_empty(void* self) {
    return TextCustomEditor__RichTextEditorWidget_IsEmpty((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_slot_find_next(void* self) {
    TextCustomEditor__RichTextEditorWidget_SlotFindNext((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_slot_find(void* self) {
    TextCustomEditor__RichTextEditorWidget_SlotFind((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_slot_replace(void* self) {
    TextCustomEditor__RichTextEditorWidget_SlotReplace((TextCustomEditor__RichTextEditorWidget*)self);
}

const char* k_textcustomeditor__richtexteditorwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtexteditorwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_textcustomeditor__richtexteditorwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_textcustomeditor__richtexteditorwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_textcustomeditor__richtexteditorwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_textcustomeditor__richtexteditorwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_textcustomeditor__richtexteditorwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_textcustomeditor__richtexteditorwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_textcustomeditor__richtexteditorwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_textcustomeditor__richtexteditorwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_textcustomeditor__richtexteditorwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_textcustomeditor__richtexteditorwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_textcustomeditor__richtexteditorwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_textcustomeditor__richtexteditorwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_textcustomeditor__richtexteditorwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_textcustomeditor__richtexteditorwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_textcustomeditor__richtexteditorwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_textcustomeditor__richtexteditorwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_textcustomeditor__richtexteditorwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_textcustomeditor__richtexteditorwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_textcustomeditor__richtexteditorwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_textcustomeditor__richtexteditorwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_textcustomeditor__richtexteditorwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_textcustomeditor__richtexteditorwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_textcustomeditor__richtexteditorwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_textcustomeditor__richtexteditorwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_textcustomeditor__richtexteditorwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_textcustomeditor__richtexteditorwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_textcustomeditor__richtexteditorwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_textcustomeditor__richtexteditorwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_textcustomeditor__richtexteditorwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_textcustomeditor__richtexteditorwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_textcustomeditor__richtexteditorwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_textcustomeditor__richtexteditorwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_textcustomeditor__richtexteditorwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_textcustomeditor__richtexteditorwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_textcustomeditor__richtexteditorwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_textcustomeditor__richtexteditorwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtexteditorwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtexteditorwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtexteditorwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtexteditorwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtexteditorwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtexteditorwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_textcustomeditor__richtexteditorwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_textcustomeditor__richtexteditorwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textcustomeditor__richtexteditorwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_textcustomeditor__richtexteditorwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_textcustomeditor__richtexteditorwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_textcustomeditor__richtexteditorwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_textcustomeditor__richtexteditorwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_textcustomeditor__richtexteditorwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_textcustomeditor__richtexteditorwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_textcustomeditor__richtexteditorwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_textcustomeditor__richtexteditorwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_textcustomeditor__richtexteditorwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_textcustomeditor__richtexteditorwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_textcustomeditor__richtexteditorwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_textcustomeditor__richtexteditorwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_textcustomeditor__richtexteditorwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_textcustomeditor__richtexteditorwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_textcustomeditor__richtexteditorwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_textcustomeditor__richtexteditorwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_textcustomeditor__richtexteditorwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_textcustomeditor__richtexteditorwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_textcustomeditor__richtexteditorwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_textcustomeditor__richtexteditorwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_textcustomeditor__richtexteditorwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_textcustomeditor__richtexteditorwidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_textcustomeditor__richtexteditorwidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_textcustomeditor__richtexteditorwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_textcustomeditor__richtexteditorwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_textcustomeditor__richtexteditorwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtexteditorwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_textcustomeditor__richtexteditorwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_textcustomeditor__richtexteditorwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_textcustomeditor__richtexteditorwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_textcustomeditor__richtexteditorwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_textcustomeditor__richtexteditorwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_textcustomeditor__richtexteditorwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_textcustomeditor__richtexteditorwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_textcustomeditor__richtexteditorwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_textcustomeditor__richtexteditorwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textcustomeditor__richtexteditorwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_textcustomeditor__richtexteditorwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_textcustomeditor__richtexteditorwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_textcustomeditor__richtexteditorwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_textcustomeditor__richtexteditorwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_textcustomeditor__richtexteditorwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_textcustomeditor__richtexteditorwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_textcustomeditor__richtexteditorwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_textcustomeditor__richtexteditorwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_textcustomeditor__richtexteditorwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_textcustomeditor__richtexteditorwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_textcustomeditor__richtexteditorwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_textcustomeditor__richtexteditorwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_textcustomeditor__richtexteditorwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_textcustomeditor__richtexteditorwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_textcustomeditor__richtexteditorwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_textcustomeditor__richtexteditorwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_textcustomeditor__richtexteditorwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__richtexteditorwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_textcustomeditor__richtexteditorwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_textcustomeditor__richtexteditorwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__richtexteditorwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_textcustomeditor__richtexteditorwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_textcustomeditor__richtexteditorwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_textcustomeditor__richtexteditorwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_textcustomeditor__richtexteditorwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_textcustomeditor__richtexteditorwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_textcustomeditor__richtexteditorwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_textcustomeditor__richtexteditorwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_textcustomeditor__richtexteditorwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_textcustomeditor__richtexteditorwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_textcustomeditor__richtexteditorwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textcustomeditor__richtexteditorwidget_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_textcustomeditor__richtexteditorwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_textcustomeditor__richtexteditorwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_textcustomeditor__richtexteditorwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_textcustomeditor__richtexteditorwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_textcustomeditor__richtexteditorwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_textcustomeditor__richtexteditorwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_textcustomeditor__richtexteditorwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_textcustomeditor__richtexteditorwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_textcustomeditor__richtexteditorwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_textcustomeditor__richtexteditorwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_textcustomeditor__richtexteditorwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_textcustomeditor__richtexteditorwidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_textcustomeditor__richtexteditorwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_textcustomeditor__richtexteditorwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_textcustomeditor__richtexteditorwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_textcustomeditor__richtexteditorwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_textcustomeditor__richtexteditorwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_textcustomeditor__richtexteditorwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_textcustomeditor__richtexteditorwidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_textcustomeditor__richtexteditorwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_textcustomeditor__richtexteditorwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_textcustomeditor__richtexteditorwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_textcustomeditor__richtexteditorwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_textcustomeditor__richtexteditorwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_textcustomeditor__richtexteditorwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_textcustomeditor__richtexteditorwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_textcustomeditor__richtexteditorwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_textcustomeditor__richtexteditorwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_textcustomeditor__richtexteditorwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_textcustomeditor__richtexteditorwidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_textcustomeditor__richtexteditorwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_textcustomeditor__richtexteditorwidget_find(uintptr_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_textcustomeditor__richtexteditorwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_textcustomeditor__richtexteditorwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_textcustomeditor__richtexteditorwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_textcustomeditor__richtexteditorwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_textcustomeditor__richtexteditorwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_textcustomeditor__richtexteditorwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_textcustomeditor__richtexteditorwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_textcustomeditor__richtexteditorwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_textcustomeditor__richtexteditorwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_textcustomeditor__richtexteditorwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_textcustomeditor__richtexteditorwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_textcustomeditor__richtexteditorwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_textcustomeditor__richtexteditorwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_textcustomeditor__richtexteditorwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_textcustomeditor__richtexteditorwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_textcustomeditor__richtexteditorwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditorwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_textcustomeditor__richtexteditorwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_textcustomeditor__richtexteditorwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textcustomeditor__richtexteditorwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_textcustomeditor__richtexteditorwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_textcustomeditor__richtexteditorwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_textcustomeditor__richtexteditorwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_textcustomeditor__richtexteditorwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_textcustomeditor__richtexteditorwidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_textcustomeditor__richtexteditorwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_textcustomeditor__richtexteditorwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_textcustomeditor__richtexteditorwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_textcustomeditor__richtexteditorwidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_textcustomeditor__richtexteditorwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_textcustomeditor__richtexteditorwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_textcustomeditor__richtexteditorwidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_textcustomeditor__richtexteditorwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textcustomeditor__richtexteditorwidget_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_textcustomeditor__richtexteditorwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_textcustomeditor__richtexteditorwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_textcustomeditor__richtexteditorwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_textcustomeditor__richtexteditorwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_textcustomeditor__richtexteditorwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_textcustomeditor__richtexteditorwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_textcustomeditor__richtexteditorwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_textcustomeditor__richtexteditorwidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_textcustomeditor__richtexteditorwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_textcustomeditor__richtexteditorwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_textcustomeditor__richtexteditorwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_textcustomeditor__richtexteditorwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_textcustomeditor__richtexteditorwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditorwidget_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditorwidget_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditorwidget_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_textcustomeditor__richtexteditorwidget_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__richtexteditorwidget_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_textcustomeditor__richtexteditorwidget_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_textcustomeditor__richtexteditorwidget_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_textcustomeditor__richtexteditorwidget_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_textcustomeditor__richtexteditorwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_textcustomeditor__richtexteditorwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_textcustomeditor__richtexteditorwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_textcustomeditor__richtexteditorwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_textcustomeditor__richtexteditorwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textcustomeditor__richtexteditorwidget_dynamic_property_names\n");
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

QBindingStorage* k_textcustomeditor__richtexteditorwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_textcustomeditor__richtexteditorwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_textcustomeditor__richtexteditorwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__richtexteditorwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_textcustomeditor__richtexteditorwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_textcustomeditor__richtexteditorwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_textcustomeditor__richtexteditorwidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditorwidget_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditorwidget_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_textcustomeditor__richtexteditorwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_textcustomeditor__richtexteditorwidget_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_textcustomeditor__richtexteditorwidget_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_textcustomeditor__richtexteditorwidget_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_textcustomeditor__richtexteditorwidget_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_textcustomeditor__richtexteditorwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_textcustomeditor__richtexteditorwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditorwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_textcustomeditor__richtexteditorwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_textcustomeditor__richtexteditorwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_textcustomeditor__richtexteditorwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_textcustomeditor__richtexteditorwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_textcustomeditor__richtexteditorwidget_dev_type(void* self) {
    return TextCustomEditor__RichTextEditorWidget_DevType((TextCustomEditor__RichTextEditorWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_super_dev_type(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SuperDevType((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_dev_type(void* self, int32_t (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnDevType((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_set_visible(void* self, bool visible) {
    TextCustomEditor__RichTextEditorWidget_SetVisible((TextCustomEditor__RichTextEditorWidget*)self, visible);
}

void k_textcustomeditor__richtexteditorwidget_super_set_visible(void* self, bool visible) {
    TextCustomEditor__RichTextEditorWidget_SuperSetVisible((TextCustomEditor__RichTextEditorWidget*)self, visible);
}

void k_textcustomeditor__richtexteditorwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextCustomEditor__RichTextEditorWidget_OnSetVisible((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__richtexteditorwidget_size_hint(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SizeHint((TextCustomEditor__RichTextEditorWidget*)self);
}

QSize* k_textcustomeditor__richtexteditorwidget_super_size_hint(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SuperSizeHint((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnSizeHint((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

QSize* k_textcustomeditor__richtexteditorwidget_minimum_size_hint(void* self) {
    return TextCustomEditor__RichTextEditorWidget_MinimumSizeHint((TextCustomEditor__RichTextEditorWidget*)self);
}

QSize* k_textcustomeditor__richtexteditorwidget_super_minimum_size_hint(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SuperMinimumSizeHint((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnMinimumSizeHint((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditorwidget_height_for_width(void* self, int param1) {
    return TextCustomEditor__RichTextEditorWidget_HeightForWidth((TextCustomEditor__RichTextEditorWidget*)self, param1);
}

int32_t k_textcustomeditor__richtexteditorwidget_super_height_for_width(void* self, int param1) {
    return TextCustomEditor__RichTextEditorWidget_SuperHeightForWidth((TextCustomEditor__RichTextEditorWidget*)self, param1);
}

void k_textcustomeditor__richtexteditorwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextCustomEditor__RichTextEditorWidget_OnHeightForWidth((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditorwidget_has_height_for_width(void* self) {
    return TextCustomEditor__RichTextEditorWidget_HasHeightForWidth((TextCustomEditor__RichTextEditorWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_super_has_height_for_width(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SuperHasHeightForWidth((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnHasHeightForWidth((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_textcustomeditor__richtexteditorwidget_paint_engine(void* self) {
    return TextCustomEditor__RichTextEditorWidget_PaintEngine((TextCustomEditor__RichTextEditorWidget*)self);
}

QPaintEngine* k_textcustomeditor__richtexteditorwidget_super_paint_engine(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SuperPaintEngine((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnPaintEngine((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditorwidget_event(void* self, void* event) {
    return TextCustomEditor__RichTextEditorWidget_Event((TextCustomEditor__RichTextEditorWidget*)self, (QEvent*)event);
}

bool k_textcustomeditor__richtexteditorwidget_super_event(void* self, void* event) {
    return TextCustomEditor__RichTextEditorWidget_SuperEvent((TextCustomEditor__RichTextEditorWidget*)self, (QEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_mouse_press_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_MousePressEvent((TextCustomEditor__RichTextEditorWidget*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_mouse_press_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperMousePressEvent((TextCustomEditor__RichTextEditorWidget*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnMousePressEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_mouse_release_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_MouseReleaseEvent((TextCustomEditor__RichTextEditorWidget*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_mouse_release_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperMouseReleaseEvent((TextCustomEditor__RichTextEditorWidget*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnMouseReleaseEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_mouse_double_click_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent((TextCustomEditor__RichTextEditorWidget*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_mouse_double_click_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperMouseDoubleClickEvent((TextCustomEditor__RichTextEditorWidget*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnMouseDoubleClickEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_mouse_move_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_MouseMoveEvent((TextCustomEditor__RichTextEditorWidget*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_mouse_move_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperMouseMoveEvent((TextCustomEditor__RichTextEditorWidget*)self, (QMouseEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnMouseMoveEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_wheel_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_WheelEvent((TextCustomEditor__RichTextEditorWidget*)self, (QWheelEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_wheel_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperWheelEvent((TextCustomEditor__RichTextEditorWidget*)self, (QWheelEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnWheelEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_key_press_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_KeyPressEvent((TextCustomEditor__RichTextEditorWidget*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_key_press_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperKeyPressEvent((TextCustomEditor__RichTextEditorWidget*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnKeyPressEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_key_release_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_KeyReleaseEvent((TextCustomEditor__RichTextEditorWidget*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_key_release_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperKeyReleaseEvent((TextCustomEditor__RichTextEditorWidget*)self, (QKeyEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnKeyReleaseEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_focus_in_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_FocusInEvent((TextCustomEditor__RichTextEditorWidget*)self, (QFocusEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_focus_in_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperFocusInEvent((TextCustomEditor__RichTextEditorWidget*)self, (QFocusEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnFocusInEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_focus_out_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_FocusOutEvent((TextCustomEditor__RichTextEditorWidget*)self, (QFocusEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_focus_out_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperFocusOutEvent((TextCustomEditor__RichTextEditorWidget*)self, (QFocusEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnFocusOutEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_enter_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_EnterEvent((TextCustomEditor__RichTextEditorWidget*)self, (QEnterEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_enter_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperEnterEvent((TextCustomEditor__RichTextEditorWidget*)self, (QEnterEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnEnterEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_leave_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_LeaveEvent((TextCustomEditor__RichTextEditorWidget*)self, (QEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_leave_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperLeaveEvent((TextCustomEditor__RichTextEditorWidget*)self, (QEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnLeaveEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_paint_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_PaintEvent((TextCustomEditor__RichTextEditorWidget*)self, (QPaintEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_paint_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperPaintEvent((TextCustomEditor__RichTextEditorWidget*)self, (QPaintEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnPaintEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_move_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_MoveEvent((TextCustomEditor__RichTextEditorWidget*)self, (QMoveEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_move_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperMoveEvent((TextCustomEditor__RichTextEditorWidget*)self, (QMoveEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnMoveEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_resize_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_ResizeEvent((TextCustomEditor__RichTextEditorWidget*)self, (QResizeEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_resize_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperResizeEvent((TextCustomEditor__RichTextEditorWidget*)self, (QResizeEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnResizeEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_close_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_CloseEvent((TextCustomEditor__RichTextEditorWidget*)self, (QCloseEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_close_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperCloseEvent((TextCustomEditor__RichTextEditorWidget*)self, (QCloseEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnCloseEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_context_menu_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_ContextMenuEvent((TextCustomEditor__RichTextEditorWidget*)self, (QContextMenuEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_context_menu_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperContextMenuEvent((TextCustomEditor__RichTextEditorWidget*)self, (QContextMenuEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnContextMenuEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_tablet_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_TabletEvent((TextCustomEditor__RichTextEditorWidget*)self, (QTabletEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_tablet_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperTabletEvent((TextCustomEditor__RichTextEditorWidget*)self, (QTabletEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnTabletEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_action_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_ActionEvent((TextCustomEditor__RichTextEditorWidget*)self, (QActionEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_action_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperActionEvent((TextCustomEditor__RichTextEditorWidget*)self, (QActionEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnActionEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_drag_enter_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_DragEnterEvent((TextCustomEditor__RichTextEditorWidget*)self, (QDragEnterEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_drag_enter_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperDragEnterEvent((TextCustomEditor__RichTextEditorWidget*)self, (QDragEnterEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnDragEnterEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_drag_move_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_DragMoveEvent((TextCustomEditor__RichTextEditorWidget*)self, (QDragMoveEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_drag_move_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperDragMoveEvent((TextCustomEditor__RichTextEditorWidget*)self, (QDragMoveEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnDragMoveEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_drag_leave_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_DragLeaveEvent((TextCustomEditor__RichTextEditorWidget*)self, (QDragLeaveEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_drag_leave_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperDragLeaveEvent((TextCustomEditor__RichTextEditorWidget*)self, (QDragLeaveEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnDragLeaveEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_drop_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_DropEvent((TextCustomEditor__RichTextEditorWidget*)self, (QDropEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_drop_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperDropEvent((TextCustomEditor__RichTextEditorWidget*)self, (QDropEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnDropEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_show_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_ShowEvent((TextCustomEditor__RichTextEditorWidget*)self, (QShowEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_show_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperShowEvent((TextCustomEditor__RichTextEditorWidget*)self, (QShowEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnShowEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_hide_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_HideEvent((TextCustomEditor__RichTextEditorWidget*)self, (QHideEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_hide_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperHideEvent((TextCustomEditor__RichTextEditorWidget*)self, (QHideEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnHideEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditorwidget_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextCustomEditor__RichTextEditorWidget_NativeEvent((TextCustomEditor__RichTextEditorWidget*)self, qstring(eventType), message, result);
}

bool k_textcustomeditor__richtexteditorwidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextCustomEditor__RichTextEditorWidget_SuperNativeEvent((TextCustomEditor__RichTextEditorWidget*)self, qstring(eventType), message, result);
}

void k_textcustomeditor__richtexteditorwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextCustomEditor__RichTextEditorWidget_OnNativeEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_change_event(void* self, void* param1) {
    TextCustomEditor__RichTextEditorWidget_ChangeEvent((TextCustomEditor__RichTextEditorWidget*)self, (QEvent*)param1);
}

void k_textcustomeditor__richtexteditorwidget_super_change_event(void* self, void* param1) {
    TextCustomEditor__RichTextEditorWidget_SuperChangeEvent((TextCustomEditor__RichTextEditorWidget*)self, (QEvent*)param1);
}

void k_textcustomeditor__richtexteditorwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnChangeEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditorwidget_metric(void* self, int32_t param1) {
    return TextCustomEditor__RichTextEditorWidget_Metric((TextCustomEditor__RichTextEditorWidget*)self, param1);
}

int32_t k_textcustomeditor__richtexteditorwidget_super_metric(void* self, int32_t param1) {
    return TextCustomEditor__RichTextEditorWidget_SuperMetric((TextCustomEditor__RichTextEditorWidget*)self, param1);
}

void k_textcustomeditor__richtexteditorwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextCustomEditor__RichTextEditorWidget_OnMetric((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_init_painter(void* self, void* painter) {
    TextCustomEditor__RichTextEditorWidget_InitPainter((TextCustomEditor__RichTextEditorWidget*)self, (QPainter*)painter);
}

void k_textcustomeditor__richtexteditorwidget_super_init_painter(void* self, void* painter) {
    TextCustomEditor__RichTextEditorWidget_SuperInitPainter((TextCustomEditor__RichTextEditorWidget*)self, (QPainter*)painter);
}

void k_textcustomeditor__richtexteditorwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnInitPainter((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_textcustomeditor__richtexteditorwidget_redirected(void* self, void* offset) {
    return TextCustomEditor__RichTextEditorWidget_Redirected((TextCustomEditor__RichTextEditorWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_textcustomeditor__richtexteditorwidget_super_redirected(void* self, void* offset) {
    return TextCustomEditor__RichTextEditorWidget_SuperRedirected((TextCustomEditor__RichTextEditorWidget*)self, (QPoint*)offset);
}

void k_textcustomeditor__richtexteditorwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnRedirected((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

QPainter* k_textcustomeditor__richtexteditorwidget_shared_painter(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SharedPainter((TextCustomEditor__RichTextEditorWidget*)self);
}

QPainter* k_textcustomeditor__richtexteditorwidget_super_shared_painter(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SuperSharedPainter((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnSharedPainter((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_input_method_event(void* self, void* param1) {
    TextCustomEditor__RichTextEditorWidget_InputMethodEvent((TextCustomEditor__RichTextEditorWidget*)self, (QInputMethodEvent*)param1);
}

void k_textcustomeditor__richtexteditorwidget_super_input_method_event(void* self, void* param1) {
    TextCustomEditor__RichTextEditorWidget_SuperInputMethodEvent((TextCustomEditor__RichTextEditorWidget*)self, (QInputMethodEvent*)param1);
}

void k_textcustomeditor__richtexteditorwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnInputMethodEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

QVariant* k_textcustomeditor__richtexteditorwidget_input_method_query(void* self, int32_t param1) {
    return TextCustomEditor__RichTextEditorWidget_InputMethodQuery((TextCustomEditor__RichTextEditorWidget*)self, param1);
}

QVariant* k_textcustomeditor__richtexteditorwidget_super_input_method_query(void* self, int32_t param1) {
    return TextCustomEditor__RichTextEditorWidget_SuperInputMethodQuery((TextCustomEditor__RichTextEditorWidget*)self, param1);
}

void k_textcustomeditor__richtexteditorwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextCustomEditor__RichTextEditorWidget_OnInputMethodQuery((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditorwidget_focus_next_prev_child(void* self, bool next) {
    return TextCustomEditor__RichTextEditorWidget_FocusNextPrevChild((TextCustomEditor__RichTextEditorWidget*)self, next);
}

bool k_textcustomeditor__richtexteditorwidget_super_focus_next_prev_child(void* self, bool next) {
    return TextCustomEditor__RichTextEditorWidget_SuperFocusNextPrevChild((TextCustomEditor__RichTextEditorWidget*)self, next);
}

void k_textcustomeditor__richtexteditorwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextCustomEditor__RichTextEditorWidget_OnFocusNextPrevChild((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditorwidget_event_filter(void* self, void* watched, void* event) {
    return TextCustomEditor__RichTextEditorWidget_EventFilter((TextCustomEditor__RichTextEditorWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool k_textcustomeditor__richtexteditorwidget_super_event_filter(void* self, void* watched, void* event) {
    return TextCustomEditor__RichTextEditorWidget_SuperEventFilter((TextCustomEditor__RichTextEditorWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnEventFilter((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_timer_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_TimerEvent((TextCustomEditor__RichTextEditorWidget*)self, (QTimerEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_timer_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperTimerEvent((TextCustomEditor__RichTextEditorWidget*)self, (QTimerEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnTimerEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_child_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_ChildEvent((TextCustomEditor__RichTextEditorWidget*)self, (QChildEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_child_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperChildEvent((TextCustomEditor__RichTextEditorWidget*)self, (QChildEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnChildEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_custom_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_CustomEvent((TextCustomEditor__RichTextEditorWidget*)self, (QEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_super_custom_event(void* self, void* event) {
    TextCustomEditor__RichTextEditorWidget_SuperCustomEvent((TextCustomEditor__RichTextEditorWidget*)self, (QEvent*)event);
}

void k_textcustomeditor__richtexteditorwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnCustomEvent((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_connect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextEditorWidget_ConnectNotify((TextCustomEditor__RichTextEditorWidget*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtexteditorwidget_super_connect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextEditorWidget_SuperConnectNotify((TextCustomEditor__RichTextEditorWidget*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtexteditorwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnConnectNotify((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextEditorWidget_DisconnectNotify((TextCustomEditor__RichTextEditorWidget*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtexteditorwidget_super_disconnect_notify(void* self, void* signal) {
    TextCustomEditor__RichTextEditorWidget_SuperDisconnectNotify((TextCustomEditor__RichTextEditorWidget*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtexteditorwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnDisconnectNotify((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_update_micro_focus(void* self) {
    TextCustomEditor__RichTextEditorWidget_UpdateMicroFocus((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_super_update_micro_focus(void* self) {
    TextCustomEditor__RichTextEditorWidget_SuperUpdateMicroFocus((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_update_micro_focus(void* self, void (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnUpdateMicroFocus((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_create(void* self) {
    TextCustomEditor__RichTextEditorWidget_Create((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_super_create(void* self) {
    TextCustomEditor__RichTextEditorWidget_SuperCreate((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_create(void* self, void (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnCreate((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_destroy(void* self) {
    TextCustomEditor__RichTextEditorWidget_Destroy((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_super_destroy(void* self) {
    TextCustomEditor__RichTextEditorWidget_SuperDestroy((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_destroy(void* self, void (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnDestroy((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditorwidget_focus_next_child(void* self) {
    return TextCustomEditor__RichTextEditorWidget_FocusNextChild((TextCustomEditor__RichTextEditorWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_super_focus_next_child(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SuperFocusNextChild((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_focus_next_child(void* self, bool (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnFocusNextChild((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditorwidget_focus_previous_child(void* self) {
    return TextCustomEditor__RichTextEditorWidget_FocusPreviousChild((TextCustomEditor__RichTextEditorWidget*)self);
}

bool k_textcustomeditor__richtexteditorwidget_super_focus_previous_child(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SuperFocusPreviousChild((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnFocusPreviousChild((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

QObject* k_textcustomeditor__richtexteditorwidget_sender(void* self) {
    return TextCustomEditor__RichTextEditorWidget_Sender((TextCustomEditor__RichTextEditorWidget*)self);
}

QObject* k_textcustomeditor__richtexteditorwidget_super_sender(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SuperSender((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_sender(void* self, QObject* (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnSender((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditorwidget_sender_signal_index(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SenderSignalIndex((TextCustomEditor__RichTextEditorWidget*)self);
}

int32_t k_textcustomeditor__richtexteditorwidget_super_sender_signal_index(void* self) {
    return TextCustomEditor__RichTextEditorWidget_SuperSenderSignalIndex((TextCustomEditor__RichTextEditorWidget*)self);
}

void k_textcustomeditor__richtexteditorwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextCustomEditor__RichTextEditorWidget_OnSenderSignalIndex((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

int32_t k_textcustomeditor__richtexteditorwidget_receivers(void* self, const char* signal) {
    return TextCustomEditor__RichTextEditorWidget_Receivers((TextCustomEditor__RichTextEditorWidget*)self, signal);
}

int32_t k_textcustomeditor__richtexteditorwidget_super_receivers(void* self, const char* signal) {
    return TextCustomEditor__RichTextEditorWidget_SuperReceivers((TextCustomEditor__RichTextEditorWidget*)self, signal);
}

void k_textcustomeditor__richtexteditorwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextCustomEditor__RichTextEditorWidget_OnReceivers((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

bool k_textcustomeditor__richtexteditorwidget_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__RichTextEditorWidget_IsSignalConnected((TextCustomEditor__RichTextEditorWidget*)self, (QMetaMethod*)signal);
}

bool k_textcustomeditor__richtexteditorwidget_super_is_signal_connected(void* self, void* signal) {
    return TextCustomEditor__RichTextEditorWidget_SuperIsSignalConnected((TextCustomEditor__RichTextEditorWidget*)self, (QMetaMethod*)signal);
}

void k_textcustomeditor__richtexteditorwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextCustomEditor__RichTextEditorWidget_OnIsSignalConnected((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

double k_textcustomeditor__richtexteditorwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextCustomEditor__RichTextEditorWidget_GetDecodedMetricF((TextCustomEditor__RichTextEditorWidget*)self, metricA, metricB);
}

double k_textcustomeditor__richtexteditorwidget_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextCustomEditor__RichTextEditorWidget_SuperGetDecodedMetricF((TextCustomEditor__RichTextEditorWidget*)self, metricA, metricB);
}

void k_textcustomeditor__richtexteditorwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextCustomEditor__RichTextEditorWidget_OnGetDecodedMetricF((TextCustomEditor__RichTextEditorWidget*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_textcustomeditor__richtexteditorwidget_delete(void* self) {
    TextCustomEditor__RichTextEditorWidget_Delete((TextCustomEditor__RichTextEditorWidget*)(self));
}
