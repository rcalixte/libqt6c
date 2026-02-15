#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
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
#include "libkfontchooser.hpp"
#include "libkfontchooser.h"

KFontChooser* k_fontchooser_new(void* parent) {
    return KFontChooser_new((QWidget*)parent);
}

KFontChooser* k_fontchooser_new2() {
    return KFontChooser_new2();
}

KFontChooser* k_fontchooser_new3(int32_t flags) {
    return KFontChooser_new3(flags);
}

KFontChooser* k_fontchooser_new4(int32_t flags, void* parent) {
    return KFontChooser_new4(flags, (QWidget*)parent);
}

const QMetaObject* k_fontchooser_meta_object(void* self) {
    return KFontChooser_MetaObject((KFontChooser*)self);
}

void k_fontchooser_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KFontChooser_OnMetaObject((KFontChooser*)self, (intptr_t)callback);
}

const QMetaObject* k_fontchooser_qbase_meta_object(void* self) {
    return KFontChooser_QBaseMetaObject((KFontChooser*)self);
}

void* k_fontchooser_metacast(void* self, const char* param1) {
    return KFontChooser_Metacast((KFontChooser*)self, param1);
}

void k_fontchooser_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KFontChooser_OnMetacast((KFontChooser*)self, (intptr_t)callback);
}

void* k_fontchooser_qbase_metacast(void* self, const char* param1) {
    return KFontChooser_QBaseMetacast((KFontChooser*)self, param1);
}

int32_t k_fontchooser_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFontChooser_Metacall((KFontChooser*)self, param1, param2, param3);
}

void k_fontchooser_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFontChooser_OnMetacall((KFontChooser*)self, (intptr_t)callback);
}

int32_t k_fontchooser_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFontChooser_QBaseMetacall((KFontChooser*)self, param1, param2, param3);
}

const char* k_fontchooser_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_enable_column(void* self, int column, bool state) {
    KFontChooser_EnableColumn((KFontChooser*)self, column, state);
}

void k_fontchooser_set_font(void* self, void* font) {
    KFontChooser_SetFont((KFontChooser*)self, (QFont*)font);
}

int32_t k_fontchooser_font_diff_flags(void* self) {
    return KFontChooser_FontDiffFlags((KFontChooser*)self);
}

QFont* k_fontchooser_font(void* self) {
    return KFontChooser_Font((KFontChooser*)self);
}

void k_fontchooser_set_color(void* self, void* col) {
    KFontChooser_SetColor((KFontChooser*)self, (QColor*)col);
}

QColor* k_fontchooser_color(void* self) {
    return KFontChooser_Color((KFontChooser*)self);
}

void k_fontchooser_set_background_color(void* self, void* col) {
    KFontChooser_SetBackgroundColor((KFontChooser*)self, (QColor*)col);
}

QColor* k_fontchooser_background_color(void* self) {
    return KFontChooser_BackgroundColor((KFontChooser*)self);
}

const char* k_fontchooser_sample_text(void* self) {
    libqt_string _str = KFontChooser_SampleText((KFontChooser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_set_sample_text(void* self, const char* text) {
    KFontChooser_SetSampleText((KFontChooser*)self, qstring(text));
}

void k_fontchooser_set_sample_box_visible(void* self, bool visible) {
    KFontChooser_SetSampleBoxVisible((KFontChooser*)self, visible);
}

const char** k_fontchooser_create_font_list(uint32_t fontListCriteria) {
    libqt_list _arr = KFontChooser_CreateFontList(fontListCriteria);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fontchooser_create_font_list\n");
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

void k_fontchooser_set_font_list_items(void* self, const char* fontList[static 1]) {
    size_t fontList_len = libqt_strv_length(fontList);
    libqt_string* fontList_qstr = (libqt_string*)malloc(fontList_len * sizeof(libqt_string));
    if (fontList_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fontchooser_set_font_list_items\n");
        abort();
    }
    for (size_t i = 0; i < fontList_len; ++i) {
        fontList_qstr[i] = qstring(fontList[i]);
    }
    libqt_list fontList_list = qlist(fontList_qstr, fontList_len);
    KFontChooser_SetFontListItems((KFontChooser*)self, fontList_list);
    free(fontList_qstr);
}

void k_fontchooser_set_min_visible_items(void* self, int visibleItems) {
    KFontChooser_SetMinVisibleItems((KFontChooser*)self, visibleItems);
}

QSize* k_fontchooser_size_hint(void* self) {
    return KFontChooser_SizeHint((KFontChooser*)self);
}

void k_fontchooser_on_size_hint(void* self, QSize* (*callback)()) {
    KFontChooser_OnSizeHint((KFontChooser*)self, (intptr_t)callback);
}

QSize* k_fontchooser_qbase_size_hint(void* self) {
    return KFontChooser_QBaseSizeHint((KFontChooser*)self);
}

void k_fontchooser_font_selected(void* self, void* font) {
    KFontChooser_FontSelected((KFontChooser*)self, (QFont*)font);
}

void k_fontchooser_on_font_selected(void* self, void (*callback)(void*, void*)) {
    KFontChooser_Connect_FontSelected((KFontChooser*)self, (intptr_t)callback);
}

const char* k_fontchooser_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fontchooser_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_set_font2(void* self, void* font, bool onlyFixed) {
    KFontChooser_SetFont2((KFontChooser*)self, (QFont*)font, onlyFixed);
}

uintptr_t k_fontchooser_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_fontchooser_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_fontchooser_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_fontchooser_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_fontchooser_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_fontchooser_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_fontchooser_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_fontchooser_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_fontchooser_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_fontchooser_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_fontchooser_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_fontchooser_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_fontchooser_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_fontchooser_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_fontchooser_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_fontchooser_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_fontchooser_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_fontchooser_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_fontchooser_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_fontchooser_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_fontchooser_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_fontchooser_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_fontchooser_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_fontchooser_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_fontchooser_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_fontchooser_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_fontchooser_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_fontchooser_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_fontchooser_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_fontchooser_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_fontchooser_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_fontchooser_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_fontchooser_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_fontchooser_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_fontchooser_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_fontchooser_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_fontchooser_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_fontchooser_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_fontchooser_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_fontchooser_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_fontchooser_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_fontchooser_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_fontchooser_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_fontchooser_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_fontchooser_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_fontchooser_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_fontchooser_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_fontchooser_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_fontchooser_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_fontchooser_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_fontchooser_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_fontchooser_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_fontchooser_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_fontchooser_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fontchooser_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fontchooser_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fontchooser_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fontchooser_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fontchooser_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fontchooser_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fontchooser_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fontchooser_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_fontchooser_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_fontchooser_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_fontchooser_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_fontchooser_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_fontchooser_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_fontchooser_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_fontchooser_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_fontchooser_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_fontchooser_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_fontchooser_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_fontchooser_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_fontchooser_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFontMetrics* k_fontchooser_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_fontchooser_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_fontchooser_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_fontchooser_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_fontchooser_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_fontchooser_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_fontchooser_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_fontchooser_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_fontchooser_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_fontchooser_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_fontchooser_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_fontchooser_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_fontchooser_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_fontchooser_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_fontchooser_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_fontchooser_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_fontchooser_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_fontchooser_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_fontchooser_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_fontchooser_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_fontchooser_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_fontchooser_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_fontchooser_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_fontchooser_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fontchooser_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_fontchooser_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_fontchooser_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_fontchooser_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_fontchooser_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_fontchooser_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_fontchooser_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_fontchooser_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_fontchooser_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_fontchooser_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_fontchooser_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_fontchooser_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_fontchooser_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_fontchooser_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fontchooser_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_fontchooser_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_fontchooser_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_fontchooser_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_fontchooser_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_fontchooser_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_fontchooser_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_fontchooser_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_fontchooser_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_fontchooser_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_fontchooser_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_fontchooser_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_fontchooser_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_fontchooser_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_fontchooser_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_fontchooser_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_fontchooser_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_fontchooser_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_fontchooser_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_fontchooser_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_fontchooser_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_fontchooser_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_fontchooser_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_fontchooser_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_fontchooser_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_fontchooser_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_fontchooser_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_fontchooser_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_fontchooser_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_fontchooser_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_fontchooser_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_fontchooser_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_fontchooser_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_fontchooser_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_fontchooser_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_fontchooser_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_fontchooser_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_fontchooser_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_fontchooser_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_fontchooser_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_fontchooser_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_fontchooser_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_fontchooser_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_fontchooser_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_fontchooser_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_fontchooser_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_fontchooser_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_fontchooser_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_fontchooser_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_fontchooser_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_fontchooser_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_fontchooser_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_fontchooser_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_fontchooser_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_fontchooser_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_fontchooser_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_fontchooser_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_fontchooser_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_fontchooser_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_fontchooser_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_fontchooser_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_fontchooser_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_fontchooser_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fontchooser_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_fontchooser_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_fontchooser_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_fontchooser_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_fontchooser_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_fontchooser_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_fontchooser_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_fontchooser_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_fontchooser_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_fontchooser_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_fontchooser_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_fontchooser_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_fontchooser_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_fontchooser_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_fontchooser_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_fontchooser_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_fontchooser_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_fontchooser_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_fontchooser_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_fontchooser_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_fontchooser_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_fontchooser_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_fontchooser_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_fontchooser_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_fontchooser_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_fontchooser_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_fontchooser_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_fontchooser_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_fontchooser_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_fontchooser_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_fontchooser_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_fontchooser_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_fontchooser_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_fontchooser_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_fontchooser_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_fontchooser_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_fontchooser_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_fontchooser_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_fontchooser_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_fontchooser_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_fontchooser_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_fontchooser_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_fontchooser_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_fontchooser_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_fontchooser_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_fontchooser_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_fontchooser_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_fontchooser_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_fontchooser_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_fontchooser_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_fontchooser_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_fontchooser_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_fontchooser_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_fontchooser_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_fontchooser_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_fontchooser_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_fontchooser_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_fontchooser_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_fontchooser_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_fontchooser_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_fontchooser_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_fontchooser_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_fontchooser_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_fontchooser_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_fontchooser_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_fontchooser_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_fontchooser_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_fontchooser_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_fontchooser_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_fontchooser_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_fontchooser_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_fontchooser_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_fontchooser_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_fontchooser_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_fontchooser_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_fontchooser_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_fontchooser_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_fontchooser_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_fontchooser_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_fontchooser_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_fontchooser_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_fontchooser_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_fontchooser_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_fontchooser_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_fontchooser_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_fontchooser_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_fontchooser_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_fontchooser_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fontchooser_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_fontchooser_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_fontchooser_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_fontchooser_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_fontchooser_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_fontchooser_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_fontchooser_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_fontchooser_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_fontchooser_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_fontchooser_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_fontchooser_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_fontchooser_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_fontchooser_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_fontchooser_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_fontchooser_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_fontchooser_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_fontchooser_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_fontchooser_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_fontchooser_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_fontchooser_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_fontchooser_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_fontchooser_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_fontchooser_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_fontchooser_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_fontchooser_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_fontchooser_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_fontchooser_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_fontchooser_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_fontchooser_dynamic_property_names\n");
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

QBindingStorage* k_fontchooser_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_fontchooser_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_fontchooser_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_fontchooser_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_fontchooser_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_fontchooser_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_fontchooser_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_fontchooser_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_fontchooser_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_fontchooser_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_fontchooser_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_fontchooser_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_fontchooser_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_fontchooser_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_fontchooser_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_fontchooser_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_fontchooser_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_fontchooser_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_fontchooser_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_fontchooser_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_fontchooser_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_fontchooser_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_fontchooser_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_fontchooser_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_fontchooser_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_fontchooser_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_fontchooser_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_fontchooser_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_fontchooser_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_fontchooser_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_fontchooser_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_fontchooser_dev_type(void* self) {
    return KFontChooser_DevType((KFontChooser*)self);
}

int32_t k_fontchooser_qbase_dev_type(void* self) {
    return KFontChooser_QBaseDevType((KFontChooser*)self);
}

void k_fontchooser_on_dev_type(void* self, int32_t (*callback)()) {
    KFontChooser_OnDevType((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_set_visible(void* self, bool visible) {
    KFontChooser_SetVisible((KFontChooser*)self, visible);
}

void k_fontchooser_qbase_set_visible(void* self, bool visible) {
    KFontChooser_QBaseSetVisible((KFontChooser*)self, visible);
}

void k_fontchooser_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KFontChooser_OnSetVisible((KFontChooser*)self, (intptr_t)callback);
}

QSize* k_fontchooser_minimum_size_hint(void* self) {
    return KFontChooser_MinimumSizeHint((KFontChooser*)self);
}

QSize* k_fontchooser_qbase_minimum_size_hint(void* self) {
    return KFontChooser_QBaseMinimumSizeHint((KFontChooser*)self);
}

void k_fontchooser_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KFontChooser_OnMinimumSizeHint((KFontChooser*)self, (intptr_t)callback);
}

int32_t k_fontchooser_height_for_width(void* self, int param1) {
    return KFontChooser_HeightForWidth((KFontChooser*)self, param1);
}

int32_t k_fontchooser_qbase_height_for_width(void* self, int param1) {
    return KFontChooser_QBaseHeightForWidth((KFontChooser*)self, param1);
}

void k_fontchooser_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KFontChooser_OnHeightForWidth((KFontChooser*)self, (intptr_t)callback);
}

bool k_fontchooser_has_height_for_width(void* self) {
    return KFontChooser_HasHeightForWidth((KFontChooser*)self);
}

bool k_fontchooser_qbase_has_height_for_width(void* self) {
    return KFontChooser_QBaseHasHeightForWidth((KFontChooser*)self);
}

void k_fontchooser_on_has_height_for_width(void* self, bool (*callback)()) {
    KFontChooser_OnHasHeightForWidth((KFontChooser*)self, (intptr_t)callback);
}

QPaintEngine* k_fontchooser_paint_engine(void* self) {
    return KFontChooser_PaintEngine((KFontChooser*)self);
}

QPaintEngine* k_fontchooser_qbase_paint_engine(void* self) {
    return KFontChooser_QBasePaintEngine((KFontChooser*)self);
}

void k_fontchooser_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KFontChooser_OnPaintEngine((KFontChooser*)self, (intptr_t)callback);
}

bool k_fontchooser_event(void* self, void* event) {
    return KFontChooser_Event((KFontChooser*)self, (QEvent*)event);
}

bool k_fontchooser_qbase_event(void* self, void* event) {
    return KFontChooser_QBaseEvent((KFontChooser*)self, (QEvent*)event);
}

void k_fontchooser_on_event(void* self, bool (*callback)(void*, void*)) {
    KFontChooser_OnEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_mouse_press_event(void* self, void* event) {
    KFontChooser_MousePressEvent((KFontChooser*)self, (QMouseEvent*)event);
}

void k_fontchooser_qbase_mouse_press_event(void* self, void* event) {
    KFontChooser_QBaseMousePressEvent((KFontChooser*)self, (QMouseEvent*)event);
}

void k_fontchooser_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnMousePressEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_mouse_release_event(void* self, void* event) {
    KFontChooser_MouseReleaseEvent((KFontChooser*)self, (QMouseEvent*)event);
}

void k_fontchooser_qbase_mouse_release_event(void* self, void* event) {
    KFontChooser_QBaseMouseReleaseEvent((KFontChooser*)self, (QMouseEvent*)event);
}

void k_fontchooser_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnMouseReleaseEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_mouse_double_click_event(void* self, void* event) {
    KFontChooser_MouseDoubleClickEvent((KFontChooser*)self, (QMouseEvent*)event);
}

void k_fontchooser_qbase_mouse_double_click_event(void* self, void* event) {
    KFontChooser_QBaseMouseDoubleClickEvent((KFontChooser*)self, (QMouseEvent*)event);
}

void k_fontchooser_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnMouseDoubleClickEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_mouse_move_event(void* self, void* event) {
    KFontChooser_MouseMoveEvent((KFontChooser*)self, (QMouseEvent*)event);
}

void k_fontchooser_qbase_mouse_move_event(void* self, void* event) {
    KFontChooser_QBaseMouseMoveEvent((KFontChooser*)self, (QMouseEvent*)event);
}

void k_fontchooser_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnMouseMoveEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_wheel_event(void* self, void* event) {
    KFontChooser_WheelEvent((KFontChooser*)self, (QWheelEvent*)event);
}

void k_fontchooser_qbase_wheel_event(void* self, void* event) {
    KFontChooser_QBaseWheelEvent((KFontChooser*)self, (QWheelEvent*)event);
}

void k_fontchooser_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnWheelEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_key_press_event(void* self, void* event) {
    KFontChooser_KeyPressEvent((KFontChooser*)self, (QKeyEvent*)event);
}

void k_fontchooser_qbase_key_press_event(void* self, void* event) {
    KFontChooser_QBaseKeyPressEvent((KFontChooser*)self, (QKeyEvent*)event);
}

void k_fontchooser_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnKeyPressEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_key_release_event(void* self, void* event) {
    KFontChooser_KeyReleaseEvent((KFontChooser*)self, (QKeyEvent*)event);
}

void k_fontchooser_qbase_key_release_event(void* self, void* event) {
    KFontChooser_QBaseKeyReleaseEvent((KFontChooser*)self, (QKeyEvent*)event);
}

void k_fontchooser_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnKeyReleaseEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_focus_in_event(void* self, void* event) {
    KFontChooser_FocusInEvent((KFontChooser*)self, (QFocusEvent*)event);
}

void k_fontchooser_qbase_focus_in_event(void* self, void* event) {
    KFontChooser_QBaseFocusInEvent((KFontChooser*)self, (QFocusEvent*)event);
}

void k_fontchooser_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnFocusInEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_focus_out_event(void* self, void* event) {
    KFontChooser_FocusOutEvent((KFontChooser*)self, (QFocusEvent*)event);
}

void k_fontchooser_qbase_focus_out_event(void* self, void* event) {
    KFontChooser_QBaseFocusOutEvent((KFontChooser*)self, (QFocusEvent*)event);
}

void k_fontchooser_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnFocusOutEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_enter_event(void* self, void* event) {
    KFontChooser_EnterEvent((KFontChooser*)self, (QEnterEvent*)event);
}

void k_fontchooser_qbase_enter_event(void* self, void* event) {
    KFontChooser_QBaseEnterEvent((KFontChooser*)self, (QEnterEvent*)event);
}

void k_fontchooser_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnEnterEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_leave_event(void* self, void* event) {
    KFontChooser_LeaveEvent((KFontChooser*)self, (QEvent*)event);
}

void k_fontchooser_qbase_leave_event(void* self, void* event) {
    KFontChooser_QBaseLeaveEvent((KFontChooser*)self, (QEvent*)event);
}

void k_fontchooser_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnLeaveEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_paint_event(void* self, void* event) {
    KFontChooser_PaintEvent((KFontChooser*)self, (QPaintEvent*)event);
}

void k_fontchooser_qbase_paint_event(void* self, void* event) {
    KFontChooser_QBasePaintEvent((KFontChooser*)self, (QPaintEvent*)event);
}

void k_fontchooser_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnPaintEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_move_event(void* self, void* event) {
    KFontChooser_MoveEvent((KFontChooser*)self, (QMoveEvent*)event);
}

void k_fontchooser_qbase_move_event(void* self, void* event) {
    KFontChooser_QBaseMoveEvent((KFontChooser*)self, (QMoveEvent*)event);
}

void k_fontchooser_on_move_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnMoveEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_resize_event(void* self, void* event) {
    KFontChooser_ResizeEvent((KFontChooser*)self, (QResizeEvent*)event);
}

void k_fontchooser_qbase_resize_event(void* self, void* event) {
    KFontChooser_QBaseResizeEvent((KFontChooser*)self, (QResizeEvent*)event);
}

void k_fontchooser_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnResizeEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_close_event(void* self, void* event) {
    KFontChooser_CloseEvent((KFontChooser*)self, (QCloseEvent*)event);
}

void k_fontchooser_qbase_close_event(void* self, void* event) {
    KFontChooser_QBaseCloseEvent((KFontChooser*)self, (QCloseEvent*)event);
}

void k_fontchooser_on_close_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnCloseEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_context_menu_event(void* self, void* event) {
    KFontChooser_ContextMenuEvent((KFontChooser*)self, (QContextMenuEvent*)event);
}

void k_fontchooser_qbase_context_menu_event(void* self, void* event) {
    KFontChooser_QBaseContextMenuEvent((KFontChooser*)self, (QContextMenuEvent*)event);
}

void k_fontchooser_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnContextMenuEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_tablet_event(void* self, void* event) {
    KFontChooser_TabletEvent((KFontChooser*)self, (QTabletEvent*)event);
}

void k_fontchooser_qbase_tablet_event(void* self, void* event) {
    KFontChooser_QBaseTabletEvent((KFontChooser*)self, (QTabletEvent*)event);
}

void k_fontchooser_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnTabletEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_action_event(void* self, void* event) {
    KFontChooser_ActionEvent((KFontChooser*)self, (QActionEvent*)event);
}

void k_fontchooser_qbase_action_event(void* self, void* event) {
    KFontChooser_QBaseActionEvent((KFontChooser*)self, (QActionEvent*)event);
}

void k_fontchooser_on_action_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnActionEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_drag_enter_event(void* self, void* event) {
    KFontChooser_DragEnterEvent((KFontChooser*)self, (QDragEnterEvent*)event);
}

void k_fontchooser_qbase_drag_enter_event(void* self, void* event) {
    KFontChooser_QBaseDragEnterEvent((KFontChooser*)self, (QDragEnterEvent*)event);
}

void k_fontchooser_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnDragEnterEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_drag_move_event(void* self, void* event) {
    KFontChooser_DragMoveEvent((KFontChooser*)self, (QDragMoveEvent*)event);
}

void k_fontchooser_qbase_drag_move_event(void* self, void* event) {
    KFontChooser_QBaseDragMoveEvent((KFontChooser*)self, (QDragMoveEvent*)event);
}

void k_fontchooser_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnDragMoveEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_drag_leave_event(void* self, void* event) {
    KFontChooser_DragLeaveEvent((KFontChooser*)self, (QDragLeaveEvent*)event);
}

void k_fontchooser_qbase_drag_leave_event(void* self, void* event) {
    KFontChooser_QBaseDragLeaveEvent((KFontChooser*)self, (QDragLeaveEvent*)event);
}

void k_fontchooser_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnDragLeaveEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_drop_event(void* self, void* event) {
    KFontChooser_DropEvent((KFontChooser*)self, (QDropEvent*)event);
}

void k_fontchooser_qbase_drop_event(void* self, void* event) {
    KFontChooser_QBaseDropEvent((KFontChooser*)self, (QDropEvent*)event);
}

void k_fontchooser_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnDropEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_show_event(void* self, void* event) {
    KFontChooser_ShowEvent((KFontChooser*)self, (QShowEvent*)event);
}

void k_fontchooser_qbase_show_event(void* self, void* event) {
    KFontChooser_QBaseShowEvent((KFontChooser*)self, (QShowEvent*)event);
}

void k_fontchooser_on_show_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnShowEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_hide_event(void* self, void* event) {
    KFontChooser_HideEvent((KFontChooser*)self, (QHideEvent*)event);
}

void k_fontchooser_qbase_hide_event(void* self, void* event) {
    KFontChooser_QBaseHideEvent((KFontChooser*)self, (QHideEvent*)event);
}

void k_fontchooser_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnHideEvent((KFontChooser*)self, (intptr_t)callback);
}

bool k_fontchooser_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KFontChooser_NativeEvent((KFontChooser*)self, qstring(eventType), message, result);
}

bool k_fontchooser_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KFontChooser_QBaseNativeEvent((KFontChooser*)self, qstring(eventType), message, result);
}

void k_fontchooser_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KFontChooser_OnNativeEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_change_event(void* self, void* param1) {
    KFontChooser_ChangeEvent((KFontChooser*)self, (QEvent*)param1);
}

void k_fontchooser_qbase_change_event(void* self, void* param1) {
    KFontChooser_QBaseChangeEvent((KFontChooser*)self, (QEvent*)param1);
}

void k_fontchooser_on_change_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnChangeEvent((KFontChooser*)self, (intptr_t)callback);
}

int32_t k_fontchooser_metric(void* self, int32_t param1) {
    return KFontChooser_Metric((KFontChooser*)self, param1);
}

int32_t k_fontchooser_qbase_metric(void* self, int32_t param1) {
    return KFontChooser_QBaseMetric((KFontChooser*)self, param1);
}

void k_fontchooser_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KFontChooser_OnMetric((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_init_painter(void* self, void* painter) {
    KFontChooser_InitPainter((KFontChooser*)self, (QPainter*)painter);
}

void k_fontchooser_qbase_init_painter(void* self, void* painter) {
    KFontChooser_QBaseInitPainter((KFontChooser*)self, (QPainter*)painter);
}

void k_fontchooser_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnInitPainter((KFontChooser*)self, (intptr_t)callback);
}

QPaintDevice* k_fontchooser_redirected(void* self, void* offset) {
    return KFontChooser_Redirected((KFontChooser*)self, (QPoint*)offset);
}

QPaintDevice* k_fontchooser_qbase_redirected(void* self, void* offset) {
    return KFontChooser_QBaseRedirected((KFontChooser*)self, (QPoint*)offset);
}

void k_fontchooser_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KFontChooser_OnRedirected((KFontChooser*)self, (intptr_t)callback);
}

QPainter* k_fontchooser_shared_painter(void* self) {
    return KFontChooser_SharedPainter((KFontChooser*)self);
}

QPainter* k_fontchooser_qbase_shared_painter(void* self) {
    return KFontChooser_QBaseSharedPainter((KFontChooser*)self);
}

void k_fontchooser_on_shared_painter(void* self, QPainter* (*callback)()) {
    KFontChooser_OnSharedPainter((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_input_method_event(void* self, void* param1) {
    KFontChooser_InputMethodEvent((KFontChooser*)self, (QInputMethodEvent*)param1);
}

void k_fontchooser_qbase_input_method_event(void* self, void* param1) {
    KFontChooser_QBaseInputMethodEvent((KFontChooser*)self, (QInputMethodEvent*)param1);
}

void k_fontchooser_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnInputMethodEvent((KFontChooser*)self, (intptr_t)callback);
}

QVariant* k_fontchooser_input_method_query(void* self, int32_t param1) {
    return KFontChooser_InputMethodQuery((KFontChooser*)self, param1);
}

QVariant* k_fontchooser_qbase_input_method_query(void* self, int32_t param1) {
    return KFontChooser_QBaseInputMethodQuery((KFontChooser*)self, param1);
}

void k_fontchooser_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KFontChooser_OnInputMethodQuery((KFontChooser*)self, (intptr_t)callback);
}

bool k_fontchooser_focus_next_prev_child(void* self, bool next) {
    return KFontChooser_FocusNextPrevChild((KFontChooser*)self, next);
}

bool k_fontchooser_qbase_focus_next_prev_child(void* self, bool next) {
    return KFontChooser_QBaseFocusNextPrevChild((KFontChooser*)self, next);
}

void k_fontchooser_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KFontChooser_OnFocusNextPrevChild((KFontChooser*)self, (intptr_t)callback);
}

bool k_fontchooser_event_filter(void* self, void* watched, void* event) {
    return KFontChooser_EventFilter((KFontChooser*)self, (QObject*)watched, (QEvent*)event);
}

bool k_fontchooser_qbase_event_filter(void* self, void* watched, void* event) {
    return KFontChooser_QBaseEventFilter((KFontChooser*)self, (QObject*)watched, (QEvent*)event);
}

void k_fontchooser_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFontChooser_OnEventFilter((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_timer_event(void* self, void* event) {
    KFontChooser_TimerEvent((KFontChooser*)self, (QTimerEvent*)event);
}

void k_fontchooser_qbase_timer_event(void* self, void* event) {
    KFontChooser_QBaseTimerEvent((KFontChooser*)self, (QTimerEvent*)event);
}

void k_fontchooser_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnTimerEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_child_event(void* self, void* event) {
    KFontChooser_ChildEvent((KFontChooser*)self, (QChildEvent*)event);
}

void k_fontchooser_qbase_child_event(void* self, void* event) {
    KFontChooser_QBaseChildEvent((KFontChooser*)self, (QChildEvent*)event);
}

void k_fontchooser_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnChildEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_custom_event(void* self, void* event) {
    KFontChooser_CustomEvent((KFontChooser*)self, (QEvent*)event);
}

void k_fontchooser_qbase_custom_event(void* self, void* event) {
    KFontChooser_QBaseCustomEvent((KFontChooser*)self, (QEvent*)event);
}

void k_fontchooser_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnCustomEvent((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_connect_notify(void* self, void* signal) {
    KFontChooser_ConnectNotify((KFontChooser*)self, (QMetaMethod*)signal);
}

void k_fontchooser_qbase_connect_notify(void* self, void* signal) {
    KFontChooser_QBaseConnectNotify((KFontChooser*)self, (QMetaMethod*)signal);
}

void k_fontchooser_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnConnectNotify((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_disconnect_notify(void* self, void* signal) {
    KFontChooser_DisconnectNotify((KFontChooser*)self, (QMetaMethod*)signal);
}

void k_fontchooser_qbase_disconnect_notify(void* self, void* signal) {
    KFontChooser_QBaseDisconnectNotify((KFontChooser*)self, (QMetaMethod*)signal);
}

void k_fontchooser_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFontChooser_OnDisconnectNotify((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_update_micro_focus(void* self) {
    KFontChooser_UpdateMicroFocus((KFontChooser*)self);
}

void k_fontchooser_qbase_update_micro_focus(void* self) {
    KFontChooser_QBaseUpdateMicroFocus((KFontChooser*)self);
}

void k_fontchooser_on_update_micro_focus(void* self, void (*callback)()) {
    KFontChooser_OnUpdateMicroFocus((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_create(void* self) {
    KFontChooser_Create((KFontChooser*)self);
}

void k_fontchooser_qbase_create(void* self) {
    KFontChooser_QBaseCreate((KFontChooser*)self);
}

void k_fontchooser_on_create(void* self, void (*callback)()) {
    KFontChooser_OnCreate((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_destroy(void* self) {
    KFontChooser_Destroy((KFontChooser*)self);
}

void k_fontchooser_qbase_destroy(void* self) {
    KFontChooser_QBaseDestroy((KFontChooser*)self);
}

void k_fontchooser_on_destroy(void* self, void (*callback)()) {
    KFontChooser_OnDestroy((KFontChooser*)self, (intptr_t)callback);
}

bool k_fontchooser_focus_next_child(void* self) {
    return KFontChooser_FocusNextChild((KFontChooser*)self);
}

bool k_fontchooser_qbase_focus_next_child(void* self) {
    return KFontChooser_QBaseFocusNextChild((KFontChooser*)self);
}

void k_fontchooser_on_focus_next_child(void* self, bool (*callback)()) {
    KFontChooser_OnFocusNextChild((KFontChooser*)self, (intptr_t)callback);
}

bool k_fontchooser_focus_previous_child(void* self) {
    return KFontChooser_FocusPreviousChild((KFontChooser*)self);
}

bool k_fontchooser_qbase_focus_previous_child(void* self) {
    return KFontChooser_QBaseFocusPreviousChild((KFontChooser*)self);
}

void k_fontchooser_on_focus_previous_child(void* self, bool (*callback)()) {
    KFontChooser_OnFocusPreviousChild((KFontChooser*)self, (intptr_t)callback);
}

QObject* k_fontchooser_sender(void* self) {
    return KFontChooser_Sender((KFontChooser*)self);
}

QObject* k_fontchooser_qbase_sender(void* self) {
    return KFontChooser_QBaseSender((KFontChooser*)self);
}

void k_fontchooser_on_sender(void* self, QObject* (*callback)()) {
    KFontChooser_OnSender((KFontChooser*)self, (intptr_t)callback);
}

int32_t k_fontchooser_sender_signal_index(void* self) {
    return KFontChooser_SenderSignalIndex((KFontChooser*)self);
}

int32_t k_fontchooser_qbase_sender_signal_index(void* self) {
    return KFontChooser_QBaseSenderSignalIndex((KFontChooser*)self);
}

void k_fontchooser_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFontChooser_OnSenderSignalIndex((KFontChooser*)self, (intptr_t)callback);
}

int32_t k_fontchooser_receivers(void* self, const char* signal) {
    return KFontChooser_Receivers((KFontChooser*)self, signal);
}

int32_t k_fontchooser_qbase_receivers(void* self, const char* signal) {
    return KFontChooser_QBaseReceivers((KFontChooser*)self, signal);
}

void k_fontchooser_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFontChooser_OnReceivers((KFontChooser*)self, (intptr_t)callback);
}

bool k_fontchooser_is_signal_connected(void* self, void* signal) {
    return KFontChooser_IsSignalConnected((KFontChooser*)self, (QMetaMethod*)signal);
}

bool k_fontchooser_qbase_is_signal_connected(void* self, void* signal) {
    return KFontChooser_QBaseIsSignalConnected((KFontChooser*)self, (QMetaMethod*)signal);
}

void k_fontchooser_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFontChooser_OnIsSignalConnected((KFontChooser*)self, (intptr_t)callback);
}

double k_fontchooser_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KFontChooser_GetDecodedMetricF((KFontChooser*)self, metricA, metricB);
}

double k_fontchooser_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KFontChooser_QBaseGetDecodedMetricF((KFontChooser*)self, metricA, metricB);
}

void k_fontchooser_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KFontChooser_OnGetDecodedMetricF((KFontChooser*)self, (intptr_t)callback);
}

void k_fontchooser_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_fontchooser_delete(void* self) {
    KFontChooser_Delete((KFontChooser*)(self));
}
