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
#include "libconfigview.hpp"
#include "libconfigview.h"

Sonnet__ConfigView* k_sonnet__configview_new(void* parent) {
    return Sonnet__ConfigView_new((QWidget*)parent);
}

Sonnet__ConfigView* k_sonnet__configview_new2() {
    return Sonnet__ConfigView_new2();
}

const QMetaObject* k_sonnet__configview_meta_object(void* self) {
    return Sonnet__ConfigView_MetaObject((Sonnet__ConfigView*)self);
}

void* k_sonnet__configview_metacast(void* self, const char* param1) {
    return Sonnet__ConfigView_Metacast((Sonnet__ConfigView*)self, param1);
}

int32_t k_sonnet__configview_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__ConfigView_Metacall((Sonnet__ConfigView*)self, param1, param2, param3);
}

void k_sonnet__configview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Sonnet__ConfigView_OnMetacall((Sonnet__ConfigView*)self, (intptr_t)callback);
}

int32_t k_sonnet__configview_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Sonnet__ConfigView_QBaseMetacall((Sonnet__ConfigView*)self, param1, param2, param3);
}

const char* k_sonnet__configview_tr(const char* s) {
    libqt_string _str = Sonnet__ConfigView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_sonnet__configview_background_checking_button_shown(void* self) {
    return Sonnet__ConfigView_BackgroundCheckingButtonShown((Sonnet__ConfigView*)self);
}

bool k_sonnet__configview_no_backend_found_visible(void* self) {
    return Sonnet__ConfigView_NoBackendFoundVisible((Sonnet__ConfigView*)self);
}

const char** k_sonnet__configview_preferred_languages(void* self) {
    libqt_list _arr = Sonnet__ConfigView_PreferredLanguages((Sonnet__ConfigView*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__configview_preferred_languages");
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

const char* k_sonnet__configview_language(void* self) {
    libqt_string _str = Sonnet__ConfigView_Language((Sonnet__ConfigView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_sonnet__configview_ignore_list(void* self) {
    libqt_list _arr = Sonnet__ConfigView_IgnoreList((Sonnet__ConfigView*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__configview_ignore_list");
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

void k_sonnet__configview_set_no_backend_found_visible(void* self, bool show) {
    Sonnet__ConfigView_SetNoBackendFoundVisible((Sonnet__ConfigView*)self, show);
}

void k_sonnet__configview_set_background_checking_button_shown(void* self, bool backgroundCheckingButtonShown) {
    Sonnet__ConfigView_SetBackgroundCheckingButtonShown((Sonnet__ConfigView*)self, backgroundCheckingButtonShown);
}

void k_sonnet__configview_set_preferred_languages(void* self, const char* ignoreList[]) {
    size_t ignoreList_len = libqt_strv_length(ignoreList);
    libqt_string* ignoreList_qstr = (libqt_string*)malloc(ignoreList_len * sizeof(libqt_string));
    if (ignoreList_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__configview_set_preferred_languages");
        abort();
    }
    for (size_t i = 0; i < ignoreList_len; ++i) {
        ignoreList_qstr[i] = qstring(ignoreList[i]);
    }
    libqt_list ignoreList_list = qlist(ignoreList_qstr, ignoreList_len);
    Sonnet__ConfigView_SetPreferredLanguages((Sonnet__ConfigView*)self, ignoreList_list);
    free(ignoreList_qstr);
}

void k_sonnet__configview_set_language(void* self, const char* language) {
    Sonnet__ConfigView_SetLanguage((Sonnet__ConfigView*)self, qstring(language));
}

void k_sonnet__configview_set_ignore_list(void* self, const char* ignoreList[]) {
    size_t ignoreList_len = libqt_strv_length(ignoreList);
    libqt_string* ignoreList_qstr = (libqt_string*)malloc(ignoreList_len * sizeof(libqt_string));
    if (ignoreList_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__configview_set_ignore_list");
        abort();
    }
    for (size_t i = 0; i < ignoreList_len; ++i) {
        ignoreList_qstr[i] = qstring(ignoreList[i]);
    }
    libqt_list ignoreList_list = qlist(ignoreList_qstr, ignoreList_len);
    Sonnet__ConfigView_SetIgnoreList((Sonnet__ConfigView*)self, ignoreList_list);
    free(ignoreList_qstr);
}

void k_sonnet__configview_config_changed(void* self) {
    Sonnet__ConfigView_ConfigChanged((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_config_changed(void* self, void (*callback)(void*)) {
    Sonnet__ConfigView_Connect_ConfigChanged((Sonnet__ConfigView*)self, (intptr_t)callback);
}

const char* k_sonnet__configview_tr2(const char* s, const char* c) {
    libqt_string _str = Sonnet__ConfigView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__configview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = Sonnet__ConfigView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_sonnet__configview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_sonnet__configview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_sonnet__configview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_sonnet__configview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_sonnet__configview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_sonnet__configview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_sonnet__configview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_sonnet__configview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_sonnet__configview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_sonnet__configview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_sonnet__configview_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_sonnet__configview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_sonnet__configview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_sonnet__configview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_sonnet__configview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_sonnet__configview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_sonnet__configview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_sonnet__configview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_sonnet__configview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_sonnet__configview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_sonnet__configview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_sonnet__configview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_sonnet__configview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_sonnet__configview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_sonnet__configview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_sonnet__configview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_sonnet__configview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_sonnet__configview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_sonnet__configview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_sonnet__configview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_sonnet__configview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_sonnet__configview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_sonnet__configview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_sonnet__configview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_sonnet__configview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_sonnet__configview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_sonnet__configview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_sonnet__configview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_sonnet__configview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_sonnet__configview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_sonnet__configview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_sonnet__configview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_sonnet__configview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_sonnet__configview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_sonnet__configview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_sonnet__configview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_sonnet__configview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_sonnet__configview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_sonnet__configview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_sonnet__configview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_sonnet__configview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_sonnet__configview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_sonnet__configview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_sonnet__configview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__configview_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__configview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__configview_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__configview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__configview_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__configview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_sonnet__configview_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_sonnet__configview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_sonnet__configview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_sonnet__configview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_sonnet__configview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_sonnet__configview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_sonnet__configview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_sonnet__configview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_sonnet__configview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_sonnet__configview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_sonnet__configview_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_sonnet__configview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_sonnet__configview_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_sonnet__configview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_sonnet__configview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_sonnet__configview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_sonnet__configview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_sonnet__configview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_sonnet__configview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_sonnet__configview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_sonnet__configview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_sonnet__configview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_sonnet__configview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_sonnet__configview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_sonnet__configview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_sonnet__configview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_sonnet__configview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_sonnet__configview_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_sonnet__configview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_sonnet__configview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_sonnet__configview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_sonnet__configview_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_sonnet__configview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_sonnet__configview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_sonnet__configview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_sonnet__configview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_sonnet__configview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_sonnet__configview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_sonnet__configview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_sonnet__configview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__configview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__configview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_sonnet__configview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_sonnet__configview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_sonnet__configview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__configview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_sonnet__configview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__configview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_sonnet__configview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__configview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_sonnet__configview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_sonnet__configview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_sonnet__configview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_sonnet__configview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__configview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_sonnet__configview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_sonnet__configview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_sonnet__configview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__configview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_sonnet__configview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sonnet__configview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__configview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_sonnet__configview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__configview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_sonnet__configview_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_sonnet__configview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_sonnet__configview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_sonnet__configview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_sonnet__configview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_sonnet__configview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_sonnet__configview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_sonnet__configview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_sonnet__configview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_sonnet__configview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_sonnet__configview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_sonnet__configview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_sonnet__configview_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_sonnet__configview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_sonnet__configview_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_sonnet__configview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_sonnet__configview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_sonnet__configview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_sonnet__configview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_sonnet__configview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_sonnet__configview_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_sonnet__configview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_sonnet__configview_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_sonnet__configview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_sonnet__configview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_sonnet__configview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_sonnet__configview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_sonnet__configview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_sonnet__configview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_sonnet__configview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_sonnet__configview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_sonnet__configview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_sonnet__configview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_sonnet__configview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_sonnet__configview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_sonnet__configview_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_sonnet__configview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_sonnet__configview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_sonnet__configview_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_sonnet__configview_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_sonnet__configview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_sonnet__configview_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_sonnet__configview_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_sonnet__configview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_sonnet__configview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_sonnet__configview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_sonnet__configview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_sonnet__configview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_sonnet__configview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_sonnet__configview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_sonnet__configview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_sonnet__configview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_sonnet__configview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_sonnet__configview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_sonnet__configview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_sonnet__configview_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_sonnet__configview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_sonnet__configview_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_sonnet__configview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_sonnet__configview_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_sonnet__configview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_sonnet__configview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_sonnet__configview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_sonnet__configview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_sonnet__configview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_sonnet__configview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_sonnet__configview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_sonnet__configview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_sonnet__configview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_sonnet__configview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_sonnet__configview_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_sonnet__configview_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_sonnet__configview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_sonnet__configview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_sonnet__configview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_sonnet__configview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_sonnet__configview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_sonnet__configview_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_sonnet__configview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_sonnet__configview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_sonnet__configview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_sonnet__configview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_sonnet__configview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_sonnet__configview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_sonnet__configview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_sonnet__configview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_sonnet__configview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_sonnet__configview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_sonnet__configview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_sonnet__configview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_sonnet__configview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_sonnet__configview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_sonnet__configview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_sonnet__configview_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_sonnet__configview_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_sonnet__configview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_sonnet__configview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_sonnet__configview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_sonnet__configview_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_sonnet__configview_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_sonnet__configview_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_sonnet__configview_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_sonnet__configview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_sonnet__configview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_sonnet__configview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_sonnet__configview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_sonnet__configview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_sonnet__configview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_sonnet__configview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_sonnet__configview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_sonnet__configview_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_sonnet__configview_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_sonnet__configview_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_sonnet__configview_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_sonnet__configview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_sonnet__configview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_sonnet__configview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_sonnet__configview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_sonnet__configview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_sonnet__configview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_sonnet__configview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_sonnet__configview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_sonnet__configview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_sonnet__configview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_sonnet__configview_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_sonnet__configview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_sonnet__configview_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_sonnet__configview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_sonnet__configview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_sonnet__configview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_sonnet__configview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_sonnet__configview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_sonnet__configview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_sonnet__configview_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_sonnet__configview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_sonnet__configview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_sonnet__configview_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_sonnet__configview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_sonnet__configview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_sonnet__configview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_sonnet__configview_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_sonnet__configview_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_sonnet__configview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_sonnet__configview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_sonnet__configview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_sonnet__configview_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_sonnet__configview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_sonnet__configview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_sonnet__configview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_sonnet__configview_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_sonnet__configview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_sonnet__configview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_sonnet__configview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_sonnet__configview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_sonnet__configview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_sonnet__configview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_sonnet__configview_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_sonnet__configview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_sonnet__configview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_sonnet__configview_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_sonnet__configview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_sonnet__configview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_sonnet__configview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_sonnet__configview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_sonnet__configview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_sonnet__configview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_sonnet__configview_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_sonnet__configview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_sonnet__configview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_sonnet__configview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_sonnet__configview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_sonnet__configview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sonnet__configview_dynamic_property_names");
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

QBindingStorage* k_sonnet__configview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_sonnet__configview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_sonnet__configview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_sonnet__configview_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_sonnet__configview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_sonnet__configview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_sonnet__configview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_sonnet__configview_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_sonnet__configview_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_sonnet__configview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_sonnet__configview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_sonnet__configview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_sonnet__configview_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_sonnet__configview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_sonnet__configview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_sonnet__configview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_sonnet__configview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_sonnet__configview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_sonnet__configview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_sonnet__configview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_sonnet__configview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_sonnet__configview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_sonnet__configview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_sonnet__configview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_sonnet__configview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_sonnet__configview_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_sonnet__configview_dev_type(void* self) {
    return Sonnet__ConfigView_DevType((Sonnet__ConfigView*)self);
}

int32_t k_sonnet__configview_qbase_dev_type(void* self) {
    return Sonnet__ConfigView_QBaseDevType((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_dev_type(void* self, int32_t (*callback)()) {
    Sonnet__ConfigView_OnDevType((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_set_visible(void* self, bool visible) {
    Sonnet__ConfigView_SetVisible((Sonnet__ConfigView*)self, visible);
}

void k_sonnet__configview_qbase_set_visible(void* self, bool visible) {
    Sonnet__ConfigView_QBaseSetVisible((Sonnet__ConfigView*)self, visible);
}

void k_sonnet__configview_on_set_visible(void* self, void (*callback)(void*, bool)) {
    Sonnet__ConfigView_OnSetVisible((Sonnet__ConfigView*)self, (intptr_t)callback);
}

QSize* k_sonnet__configview_size_hint(void* self) {
    return Sonnet__ConfigView_SizeHint((Sonnet__ConfigView*)self);
}

QSize* k_sonnet__configview_qbase_size_hint(void* self) {
    return Sonnet__ConfigView_QBaseSizeHint((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_size_hint(void* self, QSize* (*callback)()) {
    Sonnet__ConfigView_OnSizeHint((Sonnet__ConfigView*)self, (intptr_t)callback);
}

QSize* k_sonnet__configview_minimum_size_hint(void* self) {
    return Sonnet__ConfigView_MinimumSizeHint((Sonnet__ConfigView*)self);
}

QSize* k_sonnet__configview_qbase_minimum_size_hint(void* self) {
    return Sonnet__ConfigView_QBaseMinimumSizeHint((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    Sonnet__ConfigView_OnMinimumSizeHint((Sonnet__ConfigView*)self, (intptr_t)callback);
}

int32_t k_sonnet__configview_height_for_width(void* self, int param1) {
    return Sonnet__ConfigView_HeightForWidth((Sonnet__ConfigView*)self, param1);
}

int32_t k_sonnet__configview_qbase_height_for_width(void* self, int param1) {
    return Sonnet__ConfigView_QBaseHeightForWidth((Sonnet__ConfigView*)self, param1);
}

void k_sonnet__configview_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    Sonnet__ConfigView_OnHeightForWidth((Sonnet__ConfigView*)self, (intptr_t)callback);
}

bool k_sonnet__configview_has_height_for_width(void* self) {
    return Sonnet__ConfigView_HasHeightForWidth((Sonnet__ConfigView*)self);
}

bool k_sonnet__configview_qbase_has_height_for_width(void* self) {
    return Sonnet__ConfigView_QBaseHasHeightForWidth((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_has_height_for_width(void* self, bool (*callback)()) {
    Sonnet__ConfigView_OnHasHeightForWidth((Sonnet__ConfigView*)self, (intptr_t)callback);
}

QPaintEngine* k_sonnet__configview_paint_engine(void* self) {
    return Sonnet__ConfigView_PaintEngine((Sonnet__ConfigView*)self);
}

QPaintEngine* k_sonnet__configview_qbase_paint_engine(void* self) {
    return Sonnet__ConfigView_QBasePaintEngine((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    Sonnet__ConfigView_OnPaintEngine((Sonnet__ConfigView*)self, (intptr_t)callback);
}

bool k_sonnet__configview_event(void* self, void* event) {
    return Sonnet__ConfigView_Event((Sonnet__ConfigView*)self, (QEvent*)event);
}

bool k_sonnet__configview_qbase_event(void* self, void* event) {
    return Sonnet__ConfigView_QBaseEvent((Sonnet__ConfigView*)self, (QEvent*)event);
}

void k_sonnet__configview_on_event(void* self, bool (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_mouse_press_event(void* self, void* event) {
    Sonnet__ConfigView_MousePressEvent((Sonnet__ConfigView*)self, (QMouseEvent*)event);
}

void k_sonnet__configview_qbase_mouse_press_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseMousePressEvent((Sonnet__ConfigView*)self, (QMouseEvent*)event);
}

void k_sonnet__configview_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnMousePressEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_mouse_release_event(void* self, void* event) {
    Sonnet__ConfigView_MouseReleaseEvent((Sonnet__ConfigView*)self, (QMouseEvent*)event);
}

void k_sonnet__configview_qbase_mouse_release_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseMouseReleaseEvent((Sonnet__ConfigView*)self, (QMouseEvent*)event);
}

void k_sonnet__configview_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnMouseReleaseEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_mouse_double_click_event(void* self, void* event) {
    Sonnet__ConfigView_MouseDoubleClickEvent((Sonnet__ConfigView*)self, (QMouseEvent*)event);
}

void k_sonnet__configview_qbase_mouse_double_click_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseMouseDoubleClickEvent((Sonnet__ConfigView*)self, (QMouseEvent*)event);
}

void k_sonnet__configview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnMouseDoubleClickEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_mouse_move_event(void* self, void* event) {
    Sonnet__ConfigView_MouseMoveEvent((Sonnet__ConfigView*)self, (QMouseEvent*)event);
}

void k_sonnet__configview_qbase_mouse_move_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseMouseMoveEvent((Sonnet__ConfigView*)self, (QMouseEvent*)event);
}

void k_sonnet__configview_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnMouseMoveEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_wheel_event(void* self, void* event) {
    Sonnet__ConfigView_WheelEvent((Sonnet__ConfigView*)self, (QWheelEvent*)event);
}

void k_sonnet__configview_qbase_wheel_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseWheelEvent((Sonnet__ConfigView*)self, (QWheelEvent*)event);
}

void k_sonnet__configview_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnWheelEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_key_press_event(void* self, void* event) {
    Sonnet__ConfigView_KeyPressEvent((Sonnet__ConfigView*)self, (QKeyEvent*)event);
}

void k_sonnet__configview_qbase_key_press_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseKeyPressEvent((Sonnet__ConfigView*)self, (QKeyEvent*)event);
}

void k_sonnet__configview_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnKeyPressEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_key_release_event(void* self, void* event) {
    Sonnet__ConfigView_KeyReleaseEvent((Sonnet__ConfigView*)self, (QKeyEvent*)event);
}

void k_sonnet__configview_qbase_key_release_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseKeyReleaseEvent((Sonnet__ConfigView*)self, (QKeyEvent*)event);
}

void k_sonnet__configview_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnKeyReleaseEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_focus_in_event(void* self, void* event) {
    Sonnet__ConfigView_FocusInEvent((Sonnet__ConfigView*)self, (QFocusEvent*)event);
}

void k_sonnet__configview_qbase_focus_in_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseFocusInEvent((Sonnet__ConfigView*)self, (QFocusEvent*)event);
}

void k_sonnet__configview_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnFocusInEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_focus_out_event(void* self, void* event) {
    Sonnet__ConfigView_FocusOutEvent((Sonnet__ConfigView*)self, (QFocusEvent*)event);
}

void k_sonnet__configview_qbase_focus_out_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseFocusOutEvent((Sonnet__ConfigView*)self, (QFocusEvent*)event);
}

void k_sonnet__configview_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnFocusOutEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_enter_event(void* self, void* event) {
    Sonnet__ConfigView_EnterEvent((Sonnet__ConfigView*)self, (QEnterEvent*)event);
}

void k_sonnet__configview_qbase_enter_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseEnterEvent((Sonnet__ConfigView*)self, (QEnterEvent*)event);
}

void k_sonnet__configview_on_enter_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnEnterEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_leave_event(void* self, void* event) {
    Sonnet__ConfigView_LeaveEvent((Sonnet__ConfigView*)self, (QEvent*)event);
}

void k_sonnet__configview_qbase_leave_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseLeaveEvent((Sonnet__ConfigView*)self, (QEvent*)event);
}

void k_sonnet__configview_on_leave_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnLeaveEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_paint_event(void* self, void* event) {
    Sonnet__ConfigView_PaintEvent((Sonnet__ConfigView*)self, (QPaintEvent*)event);
}

void k_sonnet__configview_qbase_paint_event(void* self, void* event) {
    Sonnet__ConfigView_QBasePaintEvent((Sonnet__ConfigView*)self, (QPaintEvent*)event);
}

void k_sonnet__configview_on_paint_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnPaintEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_move_event(void* self, void* event) {
    Sonnet__ConfigView_MoveEvent((Sonnet__ConfigView*)self, (QMoveEvent*)event);
}

void k_sonnet__configview_qbase_move_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseMoveEvent((Sonnet__ConfigView*)self, (QMoveEvent*)event);
}

void k_sonnet__configview_on_move_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnMoveEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_resize_event(void* self, void* event) {
    Sonnet__ConfigView_ResizeEvent((Sonnet__ConfigView*)self, (QResizeEvent*)event);
}

void k_sonnet__configview_qbase_resize_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseResizeEvent((Sonnet__ConfigView*)self, (QResizeEvent*)event);
}

void k_sonnet__configview_on_resize_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnResizeEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_close_event(void* self, void* event) {
    Sonnet__ConfigView_CloseEvent((Sonnet__ConfigView*)self, (QCloseEvent*)event);
}

void k_sonnet__configview_qbase_close_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseCloseEvent((Sonnet__ConfigView*)self, (QCloseEvent*)event);
}

void k_sonnet__configview_on_close_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnCloseEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_context_menu_event(void* self, void* event) {
    Sonnet__ConfigView_ContextMenuEvent((Sonnet__ConfigView*)self, (QContextMenuEvent*)event);
}

void k_sonnet__configview_qbase_context_menu_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseContextMenuEvent((Sonnet__ConfigView*)self, (QContextMenuEvent*)event);
}

void k_sonnet__configview_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnContextMenuEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_tablet_event(void* self, void* event) {
    Sonnet__ConfigView_TabletEvent((Sonnet__ConfigView*)self, (QTabletEvent*)event);
}

void k_sonnet__configview_qbase_tablet_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseTabletEvent((Sonnet__ConfigView*)self, (QTabletEvent*)event);
}

void k_sonnet__configview_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnTabletEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_action_event(void* self, void* event) {
    Sonnet__ConfigView_ActionEvent((Sonnet__ConfigView*)self, (QActionEvent*)event);
}

void k_sonnet__configview_qbase_action_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseActionEvent((Sonnet__ConfigView*)self, (QActionEvent*)event);
}

void k_sonnet__configview_on_action_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnActionEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_drag_enter_event(void* self, void* event) {
    Sonnet__ConfigView_DragEnterEvent((Sonnet__ConfigView*)self, (QDragEnterEvent*)event);
}

void k_sonnet__configview_qbase_drag_enter_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseDragEnterEvent((Sonnet__ConfigView*)self, (QDragEnterEvent*)event);
}

void k_sonnet__configview_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnDragEnterEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_drag_move_event(void* self, void* event) {
    Sonnet__ConfigView_DragMoveEvent((Sonnet__ConfigView*)self, (QDragMoveEvent*)event);
}

void k_sonnet__configview_qbase_drag_move_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseDragMoveEvent((Sonnet__ConfigView*)self, (QDragMoveEvent*)event);
}

void k_sonnet__configview_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnDragMoveEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_drag_leave_event(void* self, void* event) {
    Sonnet__ConfigView_DragLeaveEvent((Sonnet__ConfigView*)self, (QDragLeaveEvent*)event);
}

void k_sonnet__configview_qbase_drag_leave_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseDragLeaveEvent((Sonnet__ConfigView*)self, (QDragLeaveEvent*)event);
}

void k_sonnet__configview_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnDragLeaveEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_drop_event(void* self, void* event) {
    Sonnet__ConfigView_DropEvent((Sonnet__ConfigView*)self, (QDropEvent*)event);
}

void k_sonnet__configview_qbase_drop_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseDropEvent((Sonnet__ConfigView*)self, (QDropEvent*)event);
}

void k_sonnet__configview_on_drop_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnDropEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_show_event(void* self, void* event) {
    Sonnet__ConfigView_ShowEvent((Sonnet__ConfigView*)self, (QShowEvent*)event);
}

void k_sonnet__configview_qbase_show_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseShowEvent((Sonnet__ConfigView*)self, (QShowEvent*)event);
}

void k_sonnet__configview_on_show_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnShowEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_hide_event(void* self, void* event) {
    Sonnet__ConfigView_HideEvent((Sonnet__ConfigView*)self, (QHideEvent*)event);
}

void k_sonnet__configview_qbase_hide_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseHideEvent((Sonnet__ConfigView*)self, (QHideEvent*)event);
}

void k_sonnet__configview_on_hide_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnHideEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

bool k_sonnet__configview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return Sonnet__ConfigView_NativeEvent((Sonnet__ConfigView*)self, qstring(eventType), message, result);
}

bool k_sonnet__configview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return Sonnet__ConfigView_QBaseNativeEvent((Sonnet__ConfigView*)self, qstring(eventType), message, result);
}

void k_sonnet__configview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    Sonnet__ConfigView_OnNativeEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_change_event(void* self, void* param1) {
    Sonnet__ConfigView_ChangeEvent((Sonnet__ConfigView*)self, (QEvent*)param1);
}

void k_sonnet__configview_qbase_change_event(void* self, void* param1) {
    Sonnet__ConfigView_QBaseChangeEvent((Sonnet__ConfigView*)self, (QEvent*)param1);
}

void k_sonnet__configview_on_change_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnChangeEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

int32_t k_sonnet__configview_metric(void* self, int32_t param1) {
    return Sonnet__ConfigView_Metric((Sonnet__ConfigView*)self, param1);
}

int32_t k_sonnet__configview_qbase_metric(void* self, int32_t param1) {
    return Sonnet__ConfigView_QBaseMetric((Sonnet__ConfigView*)self, param1);
}

void k_sonnet__configview_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    Sonnet__ConfigView_OnMetric((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_init_painter(void* self, void* painter) {
    Sonnet__ConfigView_InitPainter((Sonnet__ConfigView*)self, (QPainter*)painter);
}

void k_sonnet__configview_qbase_init_painter(void* self, void* painter) {
    Sonnet__ConfigView_QBaseInitPainter((Sonnet__ConfigView*)self, (QPainter*)painter);
}

void k_sonnet__configview_on_init_painter(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnInitPainter((Sonnet__ConfigView*)self, (intptr_t)callback);
}

QPaintDevice* k_sonnet__configview_redirected(void* self, void* offset) {
    return Sonnet__ConfigView_Redirected((Sonnet__ConfigView*)self, (QPoint*)offset);
}

QPaintDevice* k_sonnet__configview_qbase_redirected(void* self, void* offset) {
    return Sonnet__ConfigView_QBaseRedirected((Sonnet__ConfigView*)self, (QPoint*)offset);
}

void k_sonnet__configview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnRedirected((Sonnet__ConfigView*)self, (intptr_t)callback);
}

QPainter* k_sonnet__configview_shared_painter(void* self) {
    return Sonnet__ConfigView_SharedPainter((Sonnet__ConfigView*)self);
}

QPainter* k_sonnet__configview_qbase_shared_painter(void* self) {
    return Sonnet__ConfigView_QBaseSharedPainter((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_shared_painter(void* self, QPainter* (*callback)()) {
    Sonnet__ConfigView_OnSharedPainter((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_input_method_event(void* self, void* param1) {
    Sonnet__ConfigView_InputMethodEvent((Sonnet__ConfigView*)self, (QInputMethodEvent*)param1);
}

void k_sonnet__configview_qbase_input_method_event(void* self, void* param1) {
    Sonnet__ConfigView_QBaseInputMethodEvent((Sonnet__ConfigView*)self, (QInputMethodEvent*)param1);
}

void k_sonnet__configview_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnInputMethodEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

QVariant* k_sonnet__configview_input_method_query(void* self, int64_t param1) {
    return Sonnet__ConfigView_InputMethodQuery((Sonnet__ConfigView*)self, param1);
}

QVariant* k_sonnet__configview_qbase_input_method_query(void* self, int64_t param1) {
    return Sonnet__ConfigView_QBaseInputMethodQuery((Sonnet__ConfigView*)self, param1);
}

void k_sonnet__configview_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    Sonnet__ConfigView_OnInputMethodQuery((Sonnet__ConfigView*)self, (intptr_t)callback);
}

bool k_sonnet__configview_focus_next_prev_child(void* self, bool next) {
    return Sonnet__ConfigView_FocusNextPrevChild((Sonnet__ConfigView*)self, next);
}

bool k_sonnet__configview_qbase_focus_next_prev_child(void* self, bool next) {
    return Sonnet__ConfigView_QBaseFocusNextPrevChild((Sonnet__ConfigView*)self, next);
}

void k_sonnet__configview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    Sonnet__ConfigView_OnFocusNextPrevChild((Sonnet__ConfigView*)self, (intptr_t)callback);
}

bool k_sonnet__configview_event_filter(void* self, void* watched, void* event) {
    return Sonnet__ConfigView_EventFilter((Sonnet__ConfigView*)self, (QObject*)watched, (QEvent*)event);
}

bool k_sonnet__configview_qbase_event_filter(void* self, void* watched, void* event) {
    return Sonnet__ConfigView_QBaseEventFilter((Sonnet__ConfigView*)self, (QObject*)watched, (QEvent*)event);
}

void k_sonnet__configview_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Sonnet__ConfigView_OnEventFilter((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_timer_event(void* self, void* event) {
    Sonnet__ConfigView_TimerEvent((Sonnet__ConfigView*)self, (QTimerEvent*)event);
}

void k_sonnet__configview_qbase_timer_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseTimerEvent((Sonnet__ConfigView*)self, (QTimerEvent*)event);
}

void k_sonnet__configview_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnTimerEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_child_event(void* self, void* event) {
    Sonnet__ConfigView_ChildEvent((Sonnet__ConfigView*)self, (QChildEvent*)event);
}

void k_sonnet__configview_qbase_child_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseChildEvent((Sonnet__ConfigView*)self, (QChildEvent*)event);
}

void k_sonnet__configview_on_child_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnChildEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_custom_event(void* self, void* event) {
    Sonnet__ConfigView_CustomEvent((Sonnet__ConfigView*)self, (QEvent*)event);
}

void k_sonnet__configview_qbase_custom_event(void* self, void* event) {
    Sonnet__ConfigView_QBaseCustomEvent((Sonnet__ConfigView*)self, (QEvent*)event);
}

void k_sonnet__configview_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnCustomEvent((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_connect_notify(void* self, void* signal) {
    Sonnet__ConfigView_ConnectNotify((Sonnet__ConfigView*)self, (QMetaMethod*)signal);
}

void k_sonnet__configview_qbase_connect_notify(void* self, void* signal) {
    Sonnet__ConfigView_QBaseConnectNotify((Sonnet__ConfigView*)self, (QMetaMethod*)signal);
}

void k_sonnet__configview_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnConnectNotify((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_disconnect_notify(void* self, void* signal) {
    Sonnet__ConfigView_DisconnectNotify((Sonnet__ConfigView*)self, (QMetaMethod*)signal);
}

void k_sonnet__configview_qbase_disconnect_notify(void* self, void* signal) {
    Sonnet__ConfigView_QBaseDisconnectNotify((Sonnet__ConfigView*)self, (QMetaMethod*)signal);
}

void k_sonnet__configview_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnDisconnectNotify((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_update_micro_focus(void* self) {
    Sonnet__ConfigView_UpdateMicroFocus((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_qbase_update_micro_focus(void* self) {
    Sonnet__ConfigView_QBaseUpdateMicroFocus((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_update_micro_focus(void* self, void (*callback)()) {
    Sonnet__ConfigView_OnUpdateMicroFocus((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_create(void* self) {
    Sonnet__ConfigView_Create((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_qbase_create(void* self) {
    Sonnet__ConfigView_QBaseCreate((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_create(void* self, void (*callback)()) {
    Sonnet__ConfigView_OnCreate((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_destroy(void* self) {
    Sonnet__ConfigView_Destroy((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_qbase_destroy(void* self) {
    Sonnet__ConfigView_QBaseDestroy((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_destroy(void* self, void (*callback)()) {
    Sonnet__ConfigView_OnDestroy((Sonnet__ConfigView*)self, (intptr_t)callback);
}

bool k_sonnet__configview_focus_next_child(void* self) {
    return Sonnet__ConfigView_FocusNextChild((Sonnet__ConfigView*)self);
}

bool k_sonnet__configview_qbase_focus_next_child(void* self) {
    return Sonnet__ConfigView_QBaseFocusNextChild((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_focus_next_child(void* self, bool (*callback)()) {
    Sonnet__ConfigView_OnFocusNextChild((Sonnet__ConfigView*)self, (intptr_t)callback);
}

bool k_sonnet__configview_focus_previous_child(void* self) {
    return Sonnet__ConfigView_FocusPreviousChild((Sonnet__ConfigView*)self);
}

bool k_sonnet__configview_qbase_focus_previous_child(void* self) {
    return Sonnet__ConfigView_QBaseFocusPreviousChild((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_focus_previous_child(void* self, bool (*callback)()) {
    Sonnet__ConfigView_OnFocusPreviousChild((Sonnet__ConfigView*)self, (intptr_t)callback);
}

QObject* k_sonnet__configview_sender(void* self) {
    return Sonnet__ConfigView_Sender((Sonnet__ConfigView*)self);
}

QObject* k_sonnet__configview_qbase_sender(void* self) {
    return Sonnet__ConfigView_QBaseSender((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_sender(void* self, QObject* (*callback)()) {
    Sonnet__ConfigView_OnSender((Sonnet__ConfigView*)self, (intptr_t)callback);
}

int32_t k_sonnet__configview_sender_signal_index(void* self) {
    return Sonnet__ConfigView_SenderSignalIndex((Sonnet__ConfigView*)self);
}

int32_t k_sonnet__configview_qbase_sender_signal_index(void* self) {
    return Sonnet__ConfigView_QBaseSenderSignalIndex((Sonnet__ConfigView*)self);
}

void k_sonnet__configview_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Sonnet__ConfigView_OnSenderSignalIndex((Sonnet__ConfigView*)self, (intptr_t)callback);
}

int32_t k_sonnet__configview_receivers(void* self, const char* signal) {
    return Sonnet__ConfigView_Receivers((Sonnet__ConfigView*)self, signal);
}

int32_t k_sonnet__configview_qbase_receivers(void* self, const char* signal) {
    return Sonnet__ConfigView_QBaseReceivers((Sonnet__ConfigView*)self, signal);
}

void k_sonnet__configview_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Sonnet__ConfigView_OnReceivers((Sonnet__ConfigView*)self, (intptr_t)callback);
}

bool k_sonnet__configview_is_signal_connected(void* self, void* signal) {
    return Sonnet__ConfigView_IsSignalConnected((Sonnet__ConfigView*)self, (QMetaMethod*)signal);
}

bool k_sonnet__configview_qbase_is_signal_connected(void* self, void* signal) {
    return Sonnet__ConfigView_QBaseIsSignalConnected((Sonnet__ConfigView*)self, (QMetaMethod*)signal);
}

void k_sonnet__configview_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Sonnet__ConfigView_OnIsSignalConnected((Sonnet__ConfigView*)self, (intptr_t)callback);
}

double k_sonnet__configview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return Sonnet__ConfigView_GetDecodedMetricF((Sonnet__ConfigView*)self, metricA, metricB);
}

double k_sonnet__configview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return Sonnet__ConfigView_QBaseGetDecodedMetricF((Sonnet__ConfigView*)self, metricA, metricB);
}

void k_sonnet__configview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    Sonnet__ConfigView_OnGetDecodedMetricF((Sonnet__ConfigView*)self, (intptr_t)callback);
}

void k_sonnet__configview_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_sonnet__configview_delete(void* self) {
    Sonnet__ConfigView_Delete((Sonnet__ConfigView*)(self));
}
