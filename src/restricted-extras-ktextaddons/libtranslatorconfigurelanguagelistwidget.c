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
#include "libtranslatorconfigurelanguagelistwidget.hpp"
#include "libtranslatorconfigurelanguagelistwidget.h"

TextTranslator__TranslatorConfigureLanguageListWidget* k_texttranslator__translatorconfigurelanguagelistwidget_new(const char* labelText) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_new(qstring(labelText));
}

TextTranslator__TranslatorConfigureLanguageListWidget* k_texttranslator__translatorconfigurelanguagelistwidget_new2(const char* labelText, void* parent) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_new2(qstring(labelText), (QWidget*)parent);
}

const QMetaObject* k_texttranslator__translatorconfigurelanguagelistwidget_meta_object(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_MetaObject((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnMetaObject((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

const QMetaObject* k_texttranslator__translatorconfigurelanguagelistwidget_super_meta_object(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetaObject((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void* k_texttranslator__translatorconfigurelanguagelistwidget_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_Metacast((TextTranslator__TranslatorConfigureLanguageListWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnMetacast((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void* k_texttranslator__translatorconfigurelanguagelistwidget_super_metacast(void* self, const char* param1) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetacast((TextTranslator__TranslatorConfigureLanguageListWidget*)self, param1);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_Metacall((TextTranslator__TranslatorConfigureLanguageListWidget*)self, param1, param2, param3);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnMetacall((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetacall((TextTranslator__TranslatorConfigureLanguageListWidget*)self, param1, param2, param3);
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelanguagelistwidget_clear(void* self) {
    TextTranslator__TranslatorConfigureLanguageListWidget_Clear((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_add_item(void* self, const char* translatedStr, const char* languageCode) {
    TextTranslator__TranslatorConfigureLanguageListWidget_AddItem((TextTranslator__TranslatorConfigureLanguageListWidget*)self, qstring(translatedStr), qstring(languageCode));
}

const char** k_texttranslator__translatorconfigurelanguagelistwidget_selected_languages(void* self) {
    libqt_list _arr = TextTranslator__TranslatorConfigureLanguageListWidget_SelectedLanguages((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texttranslator__translatorconfigurelanguagelistwidget_selected_languages\n");
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

void k_texttranslator__translatorconfigurelanguagelistwidget_set_selected_languages(void* self, const char* list[static 1]) {
    size_t list_len = libqt_strv_length(list);
    libqt_string* list_qstr = (libqt_string*)malloc(list_len * sizeof(libqt_string));
    if (list_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texttranslator__translatorconfigurelanguagelistwidget_set_selected_languages\n");
        abort();
    }
    for (size_t i = 0; i < list_len; ++i) {
        list_qstr[i] = qstring(list[i]);
    }
    libqt_list list_list = qlist(list_qstr, list_len);
    TextTranslator__TranslatorConfigureLanguageListWidget_SetSelectedLanguages((TextTranslator__TranslatorConfigureLanguageListWidget*)self, list_list);
    free(list_qstr);
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_texttranslator__translatorconfigurelanguagelistwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_texttranslator__translatorconfigurelanguagelistwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_texttranslator__translatorconfigurelanguagelistwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_texttranslator__translatorconfigurelanguagelistwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_texttranslator__translatorconfigurelanguagelistwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_texttranslator__translatorconfigurelanguagelistwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_texttranslator__translatorconfigurelanguagelistwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_texttranslator__translatorconfigurelanguagelistwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelanguagelistwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelanguagelistwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_texttranslator__translatorconfigurelanguagelistwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_texttranslator__translatorconfigurelanguagelistwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_texttranslator__translatorconfigurelanguagelistwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelanguagelistwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelanguagelistwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_texttranslator__translatorconfigurelanguagelistwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_texttranslator__translatorconfigurelanguagelistwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_texttranslator__translatorconfigurelanguagelistwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorconfigurelanguagelistwidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorconfigurelanguagelistwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorconfigurelanguagelistwidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorconfigurelanguagelistwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorconfigurelanguagelistwidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorconfigurelanguagelistwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_texttranslator__translatorconfigurelanguagelistwidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_texttranslator__translatorconfigurelanguagelistwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_texttranslator__translatorconfigurelanguagelistwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_texttranslator__translatorconfigurelanguagelistwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_texttranslator__translatorconfigurelanguagelistwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_texttranslator__translatorconfigurelanguagelistwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_texttranslator__translatorconfigurelanguagelistwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_texttranslator__translatorconfigurelanguagelistwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_texttranslator__translatorconfigurelanguagelistwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_texttranslator__translatorconfigurelanguagelistwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_texttranslator__translatorconfigurelanguagelistwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_texttranslator__translatorconfigurelanguagelistwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_texttranslator__translatorconfigurelanguagelistwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_texttranslator__translatorconfigurelanguagelistwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_texttranslator__translatorconfigurelanguagelistwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_texttranslator__translatorconfigurelanguagelistwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_texttranslator__translatorconfigurelanguagelistwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_texttranslator__translatorconfigurelanguagelistwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_texttranslator__translatorconfigurelanguagelistwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_texttranslator__translatorconfigurelanguagelistwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_texttranslator__translatorconfigurelanguagelistwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_texttranslator__translatorconfigurelanguagelistwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_texttranslator__translatorconfigurelanguagelistwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_texttranslator__translatorconfigurelanguagelistwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_texttranslator__translatorconfigurelanguagelistwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_texttranslator__translatorconfigurelanguagelistwidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_texttranslator__translatorconfigurelanguagelistwidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_texttranslator__translatorconfigurelanguagelistwidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_texttranslator__translatorconfigurelanguagelistwidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_find(uintptr_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_texttranslator__translatorconfigurelanguagelistwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_texttranslator__translatorconfigurelanguagelistwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_texttranslator__translatorconfigurelanguagelistwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_texttranslator__translatorconfigurelanguagelistwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_texttranslator__translatorconfigurelanguagelistwidget_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_texttranslator__translatorconfigurelanguagelistwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_texttranslator__translatorconfigurelanguagelistwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_texttranslator__translatorconfigurelanguagelistwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_texttranslator__translatorconfigurelanguagelistwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelanguagelistwidget_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelanguagelistwidget_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelanguagelistwidget_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_texttranslator__translatorconfigurelanguagelistwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_texttranslator__translatorconfigurelanguagelistwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_texttranslator__translatorconfigurelanguagelistwidget_dynamic_property_names\n");
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

QBindingStorage* k_texttranslator__translatorconfigurelanguagelistwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_texttranslator__translatorconfigurelanguagelistwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatorconfigurelanguagelistwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelanguagelistwidget_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelanguagelistwidget_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_texttranslator__translatorconfigurelanguagelistwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_texttranslator__translatorconfigurelanguagelistwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_texttranslator__translatorconfigurelanguagelistwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_texttranslator__translatorconfigurelanguagelistwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_dev_type(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_DevType((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_super_dev_type(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperDevType((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_dev_type(void* self, int32_t (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnDevType((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_set_visible(void* self, bool visible) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SetVisible((TextTranslator__TranslatorConfigureLanguageListWidget*)self, visible);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_set_visible(void* self, bool visible) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperSetVisible((TextTranslator__TranslatorConfigureLanguageListWidget*)self, visible);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnSetVisible((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

QSize* k_texttranslator__translatorconfigurelanguagelistwidget_size_hint(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SizeHint((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelanguagelistwidget_super_size_hint(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperSizeHint((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_size_hint(void* self, QSize* (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnSizeHint((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

QSize* k_texttranslator__translatorconfigurelanguagelistwidget_minimum_size_hint(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_MinimumSizeHint((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

QSize* k_texttranslator__translatorconfigurelanguagelistwidget_super_minimum_size_hint(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperMinimumSizeHint((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnMinimumSizeHint((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_height_for_width(void* self, int param1) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_HeightForWidth((TextTranslator__TranslatorConfigureLanguageListWidget*)self, param1);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_super_height_for_width(void* self, int param1) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperHeightForWidth((TextTranslator__TranslatorConfigureLanguageListWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnHeightForWidth((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_has_height_for_width(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_HasHeightForWidth((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_super_has_height_for_width(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperHasHeightForWidth((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_has_height_for_width(void* self, bool (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnHasHeightForWidth((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_texttranslator__translatorconfigurelanguagelistwidget_paint_engine(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_PaintEngine((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

QPaintEngine* k_texttranslator__translatorconfigurelanguagelistwidget_super_paint_engine(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperPaintEngine((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnPaintEngine((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_event(void* self, void* event) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_Event((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QEvent*)event);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_super_event(void* self, void* event) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_event(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_mouse_press_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_MousePressEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_mouse_press_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperMousePressEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnMousePressEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_mouse_release_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_MouseReleaseEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_mouse_release_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseReleaseEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnMouseReleaseEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_mouse_double_click_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_MouseDoubleClickEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_mouse_double_click_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseDoubleClickEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnMouseDoubleClickEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_mouse_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_MouseMoveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_mouse_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperMouseMoveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMouseEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnMouseMoveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_wheel_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_WheelEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QWheelEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_wheel_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperWheelEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QWheelEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnWheelEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_key_press_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_KeyPressEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_key_press_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperKeyPressEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnKeyPressEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_key_release_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_KeyReleaseEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_key_release_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperKeyReleaseEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QKeyEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnKeyReleaseEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_focus_in_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_FocusInEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_focus_in_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusInEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusInEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_focus_out_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_FocusOutEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_focus_out_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusOutEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QFocusEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusOutEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_enter_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_EnterEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QEnterEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_enter_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperEnterEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QEnterEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnEnterEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_leave_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_LeaveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_leave_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperLeaveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnLeaveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_paint_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_PaintEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QPaintEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_paint_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperPaintEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QPaintEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnPaintEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_MoveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMoveEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperMoveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMoveEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnMoveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_resize_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_ResizeEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QResizeEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_resize_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperResizeEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QResizeEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnResizeEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_close_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_CloseEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QCloseEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_close_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperCloseEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QCloseEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnCloseEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_context_menu_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_ContextMenuEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QContextMenuEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_context_menu_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperContextMenuEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QContextMenuEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnContextMenuEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_tablet_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_TabletEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QTabletEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_tablet_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperTabletEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QTabletEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnTabletEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_action_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_ActionEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QActionEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_action_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperActionEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QActionEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnActionEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_drag_enter_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_DragEnterEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QDragEnterEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_drag_enter_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragEnterEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QDragEnterEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnDragEnterEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_drag_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_DragMoveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QDragMoveEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_drag_move_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragMoveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QDragMoveEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnDragMoveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_drag_leave_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_DragLeaveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QDragLeaveEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_drag_leave_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperDragLeaveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QDragLeaveEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnDragLeaveEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_drop_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_DropEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QDropEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_drop_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperDropEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QDropEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnDropEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_show_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_ShowEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QShowEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_show_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperShowEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QShowEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnShowEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_hide_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_HideEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QHideEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_hide_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperHideEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QHideEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnHideEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_NativeEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, qstring(eventType), message, result);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperNativeEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, qstring(eventType), message, result);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnNativeEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_change_event(void* self, void* param1) {
    TextTranslator__TranslatorConfigureLanguageListWidget_ChangeEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QEvent*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_change_event(void* self, void* param1) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperChangeEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QEvent*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnChangeEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_metric(void* self, int32_t param1) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_Metric((TextTranslator__TranslatorConfigureLanguageListWidget*)self, param1);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_super_metric(void* self, int32_t param1) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperMetric((TextTranslator__TranslatorConfigureLanguageListWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnMetric((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_init_painter(void* self, void* painter) {
    TextTranslator__TranslatorConfigureLanguageListWidget_InitPainter((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QPainter*)painter);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_init_painter(void* self, void* painter) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperInitPainter((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QPainter*)painter);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnInitPainter((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_texttranslator__translatorconfigurelanguagelistwidget_redirected(void* self, void* offset) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_Redirected((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_texttranslator__translatorconfigurelanguagelistwidget_super_redirected(void* self, void* offset) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperRedirected((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QPoint*)offset);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnRedirected((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

QPainter* k_texttranslator__translatorconfigurelanguagelistwidget_shared_painter(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SharedPainter((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

QPainter* k_texttranslator__translatorconfigurelanguagelistwidget_super_shared_painter(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperSharedPainter((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnSharedPainter((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_input_method_event(void* self, void* param1) {
    TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QInputMethodEvent*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_input_method_event(void* self, void* param1) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperInputMethodEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QInputMethodEvent*)param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnInputMethodEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

QVariant* k_texttranslator__translatorconfigurelanguagelistwidget_input_method_query(void* self, int32_t param1) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_InputMethodQuery((TextTranslator__TranslatorConfigureLanguageListWidget*)self, param1);
}

QVariant* k_texttranslator__translatorconfigurelanguagelistwidget_super_input_method_query(void* self, int32_t param1) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperInputMethodQuery((TextTranslator__TranslatorConfigureLanguageListWidget*)self, param1);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnInputMethodQuery((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_focus_next_prev_child(void* self, bool next) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_FocusNextPrevChild((TextTranslator__TranslatorConfigureLanguageListWidget*)self, next);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_super_focus_next_prev_child(void* self, bool next) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusNextPrevChild((TextTranslator__TranslatorConfigureLanguageListWidget*)self, next);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusNextPrevChild((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_EventFilter((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_super_event_filter(void* self, void* watched, void* event) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperEventFilter((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnEventFilter((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_timer_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_TimerEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_timer_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperTimerEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QTimerEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnTimerEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_child_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_ChildEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_child_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperChildEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QChildEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnChildEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_custom_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_CustomEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_custom_event(void* self, void* event) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperCustomEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QEvent*)event);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnCustomEvent((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorConfigureLanguageListWidget_ConnectNotify((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_connect_notify(void* self, void* signal) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperConnectNotify((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnConnectNotify((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorConfigureLanguageListWidget_DisconnectNotify((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_disconnect_notify(void* self, void* signal) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperDisconnectNotify((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnDisconnectNotify((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_update_micro_focus(void* self) {
    TextTranslator__TranslatorConfigureLanguageListWidget_UpdateMicroFocus((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_update_micro_focus(void* self) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperUpdateMicroFocus((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_update_micro_focus(void* self, void (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnUpdateMicroFocus((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_create(void* self) {
    TextTranslator__TranslatorConfigureLanguageListWidget_Create((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_create(void* self) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperCreate((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_create(void* self, void (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnCreate((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_destroy(void* self) {
    TextTranslator__TranslatorConfigureLanguageListWidget_Destroy((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_super_destroy(void* self) {
    TextTranslator__TranslatorConfigureLanguageListWidget_SuperDestroy((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_destroy(void* self, void (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnDestroy((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_focus_next_child(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_FocusNextChild((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_super_focus_next_child(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusNextChild((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_focus_next_child(void* self, bool (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusNextChild((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_focus_previous_child(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_FocusPreviousChild((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_super_focus_previous_child(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperFocusPreviousChild((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_focus_previous_child(void* self, bool (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnFocusPreviousChild((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

QObject* k_texttranslator__translatorconfigurelanguagelistwidget_sender(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_Sender((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

QObject* k_texttranslator__translatorconfigurelanguagelistwidget_super_sender(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperSender((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_sender(void* self, QObject* (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnSender((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_sender_signal_index(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SenderSignalIndex((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_super_sender_signal_index(void* self) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperSenderSignalIndex((TextTranslator__TranslatorConfigureLanguageListWidget*)self);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnSenderSignalIndex((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_Receivers((TextTranslator__TranslatorConfigureLanguageListWidget*)self, signal);
}

int32_t k_texttranslator__translatorconfigurelanguagelistwidget_super_receivers(void* self, const char* signal) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperReceivers((TextTranslator__TranslatorConfigureLanguageListWidget*)self, signal);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnReceivers((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_IsSignalConnected((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMetaMethod*)signal);
}

bool k_texttranslator__translatorconfigurelanguagelistwidget_super_is_signal_connected(void* self, void* signal) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperIsSignalConnected((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (QMetaMethod*)signal);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnIsSignalConnected((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

double k_texttranslator__translatorconfigurelanguagelistwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_GetDecodedMetricF((TextTranslator__TranslatorConfigureLanguageListWidget*)self, metricA, metricB);
}

double k_texttranslator__translatorconfigurelanguagelistwidget_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return TextTranslator__TranslatorConfigureLanguageListWidget_SuperGetDecodedMetricF((TextTranslator__TranslatorConfigureLanguageListWidget*)self, metricA, metricB);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    TextTranslator__TranslatorConfigureLanguageListWidget_OnGetDecodedMetricF((TextTranslator__TranslatorConfigureLanguageListWidget*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_texttranslator__translatorconfigurelanguagelistwidget_delete(void* self) {
    TextTranslator__TranslatorConfigureLanguageListWidget_Delete((TextTranslator__TranslatorConfigureLanguageListWidget*)(self));
}
