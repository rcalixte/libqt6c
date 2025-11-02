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
#include "libkmimetypechooser.hpp"
#include "libkmimetypechooser.h"

KMimeTypeChooser* k_mimetypechooser_new() {
    return KMimeTypeChooser_new();
}

KMimeTypeChooser* k_mimetypechooser_new2(const char* text) {
    return KMimeTypeChooser_new2(qstring(text));
}

KMimeTypeChooser* k_mimetypechooser_new3(const char* text, const char* selectedMimeTypes[static 1]) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooser_new3");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);

    KMimeTypeChooser* _out = KMimeTypeChooser_new3(qstring(text), selectedMimeTypes_list);
    free(selectedMimeTypes_qstr);
    return _out;
}

KMimeTypeChooser* k_mimetypechooser_new4(const char* text, const char* selectedMimeTypes[static 1], const char* defaultGroup) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooser_new4");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);

    KMimeTypeChooser* _out = KMimeTypeChooser_new4(qstring(text), selectedMimeTypes_list, qstring(defaultGroup));
    free(selectedMimeTypes_qstr);
    return _out;
}

KMimeTypeChooser* k_mimetypechooser_new5(const char* text, const char* selectedMimeTypes[static 1], const char* defaultGroup, const char* groupsToShow[static 1]) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooser_new5");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);
    size_t groupsToShow_len = libqt_strv_length(groupsToShow);
    libqt_string* groupsToShow_qstr = (libqt_string*)malloc(groupsToShow_len * sizeof(libqt_string));
    if (groupsToShow_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooser_new5");
        abort();
    }
    for (size_t i = 0; i < groupsToShow_len; ++i) {
        groupsToShow_qstr[i] = qstring(groupsToShow[i]);
    }
    libqt_list groupsToShow_list = qlist(groupsToShow_qstr, groupsToShow_len);

    KMimeTypeChooser* _out = KMimeTypeChooser_new5(qstring(text), selectedMimeTypes_list, qstring(defaultGroup), groupsToShow_list);
    free(selectedMimeTypes_qstr);
    free(groupsToShow_qstr);
    return _out;
}

KMimeTypeChooser* k_mimetypechooser_new6(const char* text, const char* selectedMimeTypes[static 1], const char* defaultGroup, const char* groupsToShow[static 1], int visuals) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooser_new6");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);
    size_t groupsToShow_len = libqt_strv_length(groupsToShow);
    libqt_string* groupsToShow_qstr = (libqt_string*)malloc(groupsToShow_len * sizeof(libqt_string));
    if (groupsToShow_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooser_new6");
        abort();
    }
    for (size_t i = 0; i < groupsToShow_len; ++i) {
        groupsToShow_qstr[i] = qstring(groupsToShow[i]);
    }
    libqt_list groupsToShow_list = qlist(groupsToShow_qstr, groupsToShow_len);

    KMimeTypeChooser* _out = KMimeTypeChooser_new6(qstring(text), selectedMimeTypes_list, qstring(defaultGroup), groupsToShow_list, visuals);
    free(selectedMimeTypes_qstr);
    free(groupsToShow_qstr);
    return _out;
}

KMimeTypeChooser* k_mimetypechooser_new7(const char* text, const char* selectedMimeTypes[static 1], const char* defaultGroup, const char* groupsToShow[static 1], int visuals, void* parent) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooser_new7");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);
    size_t groupsToShow_len = libqt_strv_length(groupsToShow);
    libqt_string* groupsToShow_qstr = (libqt_string*)malloc(groupsToShow_len * sizeof(libqt_string));
    if (groupsToShow_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooser_new7");
        abort();
    }
    for (size_t i = 0; i < groupsToShow_len; ++i) {
        groupsToShow_qstr[i] = qstring(groupsToShow[i]);
    }
    libqt_list groupsToShow_list = qlist(groupsToShow_qstr, groupsToShow_len);

    KMimeTypeChooser* _out = KMimeTypeChooser_new7(qstring(text), selectedMimeTypes_list, qstring(defaultGroup), groupsToShow_list, visuals, (QWidget*)parent);
    free(selectedMimeTypes_qstr);
    free(groupsToShow_qstr);
    return _out;
}

const QMetaObject* k_mimetypechooser_meta_object(void* self) {
    return KMimeTypeChooser_MetaObject((KMimeTypeChooser*)self);
}

void* k_mimetypechooser_metacast(void* self, const char* param1) {
    return KMimeTypeChooser_Metacast((KMimeTypeChooser*)self, param1);
}

int32_t k_mimetypechooser_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMimeTypeChooser_Metacall((KMimeTypeChooser*)self, param1, param2, param3);
}

void k_mimetypechooser_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KMimeTypeChooser_OnMetacall((KMimeTypeChooser*)self, (intptr_t)callback);
}

int32_t k_mimetypechooser_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMimeTypeChooser_QBaseMetacall((KMimeTypeChooser*)self, param1, param2, param3);
}

const char* k_mimetypechooser_tr(const char* s) {
    libqt_string _str = KMimeTypeChooser_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_mimetypechooser_mime_types(void* self) {
    libqt_list _arr = KMimeTypeChooser_MimeTypes((KMimeTypeChooser*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooser_mime_types");
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

const char** k_mimetypechooser_patterns(void* self) {
    libqt_list _arr = KMimeTypeChooser_Patterns((KMimeTypeChooser*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooser_patterns");
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

const char* k_mimetypechooser_tr2(const char* s, const char* c) {
    libqt_string _str = KMimeTypeChooser_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_mimetypechooser_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KMimeTypeChooser_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_mimetypechooser_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_mimetypechooser_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_mimetypechooser_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_mimetypechooser_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_mimetypechooser_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_mimetypechooser_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_mimetypechooser_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_mimetypechooser_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_mimetypechooser_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_mimetypechooser_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_mimetypechooser_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_mimetypechooser_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_mimetypechooser_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_mimetypechooser_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_mimetypechooser_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_mimetypechooser_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_mimetypechooser_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_mimetypechooser_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_mimetypechooser_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_mimetypechooser_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_mimetypechooser_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_mimetypechooser_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_mimetypechooser_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_mimetypechooser_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_mimetypechooser_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_mimetypechooser_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_mimetypechooser_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_mimetypechooser_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_mimetypechooser_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_mimetypechooser_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_mimetypechooser_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_mimetypechooser_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_mimetypechooser_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_mimetypechooser_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_mimetypechooser_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_mimetypechooser_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_mimetypechooser_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_mimetypechooser_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_mimetypechooser_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_mimetypechooser_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_mimetypechooser_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_mimetypechooser_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_mimetypechooser_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_mimetypechooser_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_mimetypechooser_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_mimetypechooser_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_mimetypechooser_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_mimetypechooser_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_mimetypechooser_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_mimetypechooser_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_mimetypechooser_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_mimetypechooser_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_mimetypechooser_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_mimetypechooser_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mimetypechooser_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mimetypechooser_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mimetypechooser_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mimetypechooser_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mimetypechooser_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mimetypechooser_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mimetypechooser_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mimetypechooser_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_mimetypechooser_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_mimetypechooser_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_mimetypechooser_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_mimetypechooser_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_mimetypechooser_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_mimetypechooser_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_mimetypechooser_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_mimetypechooser_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_mimetypechooser_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_mimetypechooser_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_mimetypechooser_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_mimetypechooser_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_mimetypechooser_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_mimetypechooser_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_mimetypechooser_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_mimetypechooser_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_mimetypechooser_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_mimetypechooser_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_mimetypechooser_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_mimetypechooser_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_mimetypechooser_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_mimetypechooser_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_mimetypechooser_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_mimetypechooser_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_mimetypechooser_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_mimetypechooser_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_mimetypechooser_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_mimetypechooser_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_mimetypechooser_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_mimetypechooser_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_mimetypechooser_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_mimetypechooser_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_mimetypechooser_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_mimetypechooser_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_mimetypechooser_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_mimetypechooser_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_mimetypechooser_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_mimetypechooser_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_mimetypechooser_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooser_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_mimetypechooser_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_mimetypechooser_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_mimetypechooser_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooser_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_mimetypechooser_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooser_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_mimetypechooser_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooser_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_mimetypechooser_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_mimetypechooser_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_mimetypechooser_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_mimetypechooser_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooser_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_mimetypechooser_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_mimetypechooser_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_mimetypechooser_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooser_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_mimetypechooser_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_mimetypechooser_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooser_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_mimetypechooser_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooser_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_mimetypechooser_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_mimetypechooser_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_mimetypechooser_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_mimetypechooser_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_mimetypechooser_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_mimetypechooser_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_mimetypechooser_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_mimetypechooser_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_mimetypechooser_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_mimetypechooser_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_mimetypechooser_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_mimetypechooser_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_mimetypechooser_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_mimetypechooser_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_mimetypechooser_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_mimetypechooser_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_mimetypechooser_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_mimetypechooser_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_mimetypechooser_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_mimetypechooser_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_mimetypechooser_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_mimetypechooser_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_mimetypechooser_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_mimetypechooser_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_mimetypechooser_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_mimetypechooser_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_mimetypechooser_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_mimetypechooser_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_mimetypechooser_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_mimetypechooser_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_mimetypechooser_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_mimetypechooser_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_mimetypechooser_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_mimetypechooser_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_mimetypechooser_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_mimetypechooser_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_mimetypechooser_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_mimetypechooser_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_mimetypechooser_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_mimetypechooser_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_mimetypechooser_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_mimetypechooser_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_mimetypechooser_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_mimetypechooser_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_mimetypechooser_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_mimetypechooser_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_mimetypechooser_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_mimetypechooser_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_mimetypechooser_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_mimetypechooser_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_mimetypechooser_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_mimetypechooser_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_mimetypechooser_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_mimetypechooser_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_mimetypechooser_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_mimetypechooser_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_mimetypechooser_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_mimetypechooser_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_mimetypechooser_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_mimetypechooser_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_mimetypechooser_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_mimetypechooser_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_mimetypechooser_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_mimetypechooser_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_mimetypechooser_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_mimetypechooser_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_mimetypechooser_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_mimetypechooser_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_mimetypechooser_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_mimetypechooser_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_mimetypechooser_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_mimetypechooser_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_mimetypechooser_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_mimetypechooser_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_mimetypechooser_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_mimetypechooser_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_mimetypechooser_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_mimetypechooser_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_mimetypechooser_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_mimetypechooser_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_mimetypechooser_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_mimetypechooser_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_mimetypechooser_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_mimetypechooser_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_mimetypechooser_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_mimetypechooser_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_mimetypechooser_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_mimetypechooser_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_mimetypechooser_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_mimetypechooser_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_mimetypechooser_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_mimetypechooser_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_mimetypechooser_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_mimetypechooser_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_mimetypechooser_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_mimetypechooser_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_mimetypechooser_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_mimetypechooser_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_mimetypechooser_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_mimetypechooser_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_mimetypechooser_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_mimetypechooser_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_mimetypechooser_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_mimetypechooser_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_mimetypechooser_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_mimetypechooser_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_mimetypechooser_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_mimetypechooser_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_mimetypechooser_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_mimetypechooser_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_mimetypechooser_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_mimetypechooser_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_mimetypechooser_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_mimetypechooser_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_mimetypechooser_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_mimetypechooser_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_mimetypechooser_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_mimetypechooser_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_mimetypechooser_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_mimetypechooser_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_mimetypechooser_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_mimetypechooser_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_mimetypechooser_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_mimetypechooser_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_mimetypechooser_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_mimetypechooser_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_mimetypechooser_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_mimetypechooser_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_mimetypechooser_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_mimetypechooser_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_mimetypechooser_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_mimetypechooser_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_mimetypechooser_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_mimetypechooser_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_mimetypechooser_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_mimetypechooser_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_mimetypechooser_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_mimetypechooser_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_mimetypechooser_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_mimetypechooser_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_mimetypechooser_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_mimetypechooser_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_mimetypechooser_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_mimetypechooser_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_mimetypechooser_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_mimetypechooser_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_mimetypechooser_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_mimetypechooser_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_mimetypechooser_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooser_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_mimetypechooser_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_mimetypechooser_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_mimetypechooser_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_mimetypechooser_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_mimetypechooser_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_mimetypechooser_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_mimetypechooser_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_mimetypechooser_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_mimetypechooser_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_mimetypechooser_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_mimetypechooser_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_mimetypechooser_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_mimetypechooser_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_mimetypechooser_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_mimetypechooser_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_mimetypechooser_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_mimetypechooser_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_mimetypechooser_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_mimetypechooser_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_mimetypechooser_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_mimetypechooser_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_mimetypechooser_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooser_dynamic_property_names");
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

QBindingStorage* k_mimetypechooser_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_mimetypechooser_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_mimetypechooser_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_mimetypechooser_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_mimetypechooser_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_mimetypechooser_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_mimetypechooser_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_mimetypechooser_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_mimetypechooser_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_mimetypechooser_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_mimetypechooser_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_mimetypechooser_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_mimetypechooser_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_mimetypechooser_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_mimetypechooser_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_mimetypechooser_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_mimetypechooser_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_mimetypechooser_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_mimetypechooser_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_mimetypechooser_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_mimetypechooser_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_mimetypechooser_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_mimetypechooser_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_mimetypechooser_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_mimetypechooser_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_mimetypechooser_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_mimetypechooser_dev_type(void* self) {
    return KMimeTypeChooser_DevType((KMimeTypeChooser*)self);
}

int32_t k_mimetypechooser_qbase_dev_type(void* self) {
    return KMimeTypeChooser_QBaseDevType((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_dev_type(void* self, int32_t (*callback)()) {
    KMimeTypeChooser_OnDevType((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_set_visible(void* self, bool visible) {
    KMimeTypeChooser_SetVisible((KMimeTypeChooser*)self, visible);
}

void k_mimetypechooser_qbase_set_visible(void* self, bool visible) {
    KMimeTypeChooser_QBaseSetVisible((KMimeTypeChooser*)self, visible);
}

void k_mimetypechooser_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KMimeTypeChooser_OnSetVisible((KMimeTypeChooser*)self, (intptr_t)callback);
}

QSize* k_mimetypechooser_size_hint(void* self) {
    return KMimeTypeChooser_SizeHint((KMimeTypeChooser*)self);
}

QSize* k_mimetypechooser_qbase_size_hint(void* self) {
    return KMimeTypeChooser_QBaseSizeHint((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_size_hint(void* self, QSize* (*callback)()) {
    KMimeTypeChooser_OnSizeHint((KMimeTypeChooser*)self, (intptr_t)callback);
}

QSize* k_mimetypechooser_minimum_size_hint(void* self) {
    return KMimeTypeChooser_MinimumSizeHint((KMimeTypeChooser*)self);
}

QSize* k_mimetypechooser_qbase_minimum_size_hint(void* self) {
    return KMimeTypeChooser_QBaseMinimumSizeHint((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KMimeTypeChooser_OnMinimumSizeHint((KMimeTypeChooser*)self, (intptr_t)callback);
}

int32_t k_mimetypechooser_height_for_width(void* self, int param1) {
    return KMimeTypeChooser_HeightForWidth((KMimeTypeChooser*)self, param1);
}

int32_t k_mimetypechooser_qbase_height_for_width(void* self, int param1) {
    return KMimeTypeChooser_QBaseHeightForWidth((KMimeTypeChooser*)self, param1);
}

void k_mimetypechooser_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KMimeTypeChooser_OnHeightForWidth((KMimeTypeChooser*)self, (intptr_t)callback);
}

bool k_mimetypechooser_has_height_for_width(void* self) {
    return KMimeTypeChooser_HasHeightForWidth((KMimeTypeChooser*)self);
}

bool k_mimetypechooser_qbase_has_height_for_width(void* self) {
    return KMimeTypeChooser_QBaseHasHeightForWidth((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_has_height_for_width(void* self, bool (*callback)()) {
    KMimeTypeChooser_OnHasHeightForWidth((KMimeTypeChooser*)self, (intptr_t)callback);
}

QPaintEngine* k_mimetypechooser_paint_engine(void* self) {
    return KMimeTypeChooser_PaintEngine((KMimeTypeChooser*)self);
}

QPaintEngine* k_mimetypechooser_qbase_paint_engine(void* self) {
    return KMimeTypeChooser_QBasePaintEngine((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KMimeTypeChooser_OnPaintEngine((KMimeTypeChooser*)self, (intptr_t)callback);
}

bool k_mimetypechooser_event(void* self, void* event) {
    return KMimeTypeChooser_Event((KMimeTypeChooser*)self, (QEvent*)event);
}

bool k_mimetypechooser_qbase_event(void* self, void* event) {
    return KMimeTypeChooser_QBaseEvent((KMimeTypeChooser*)self, (QEvent*)event);
}

void k_mimetypechooser_on_event(void* self, bool (*callback)(void*, void*)) {
    KMimeTypeChooser_OnEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_mouse_press_event(void* self, void* event) {
    KMimeTypeChooser_MousePressEvent((KMimeTypeChooser*)self, (QMouseEvent*)event);
}

void k_mimetypechooser_qbase_mouse_press_event(void* self, void* event) {
    KMimeTypeChooser_QBaseMousePressEvent((KMimeTypeChooser*)self, (QMouseEvent*)event);
}

void k_mimetypechooser_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnMousePressEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_mouse_release_event(void* self, void* event) {
    KMimeTypeChooser_MouseReleaseEvent((KMimeTypeChooser*)self, (QMouseEvent*)event);
}

void k_mimetypechooser_qbase_mouse_release_event(void* self, void* event) {
    KMimeTypeChooser_QBaseMouseReleaseEvent((KMimeTypeChooser*)self, (QMouseEvent*)event);
}

void k_mimetypechooser_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnMouseReleaseEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_mouse_double_click_event(void* self, void* event) {
    KMimeTypeChooser_MouseDoubleClickEvent((KMimeTypeChooser*)self, (QMouseEvent*)event);
}

void k_mimetypechooser_qbase_mouse_double_click_event(void* self, void* event) {
    KMimeTypeChooser_QBaseMouseDoubleClickEvent((KMimeTypeChooser*)self, (QMouseEvent*)event);
}

void k_mimetypechooser_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnMouseDoubleClickEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_mouse_move_event(void* self, void* event) {
    KMimeTypeChooser_MouseMoveEvent((KMimeTypeChooser*)self, (QMouseEvent*)event);
}

void k_mimetypechooser_qbase_mouse_move_event(void* self, void* event) {
    KMimeTypeChooser_QBaseMouseMoveEvent((KMimeTypeChooser*)self, (QMouseEvent*)event);
}

void k_mimetypechooser_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnMouseMoveEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_wheel_event(void* self, void* event) {
    KMimeTypeChooser_WheelEvent((KMimeTypeChooser*)self, (QWheelEvent*)event);
}

void k_mimetypechooser_qbase_wheel_event(void* self, void* event) {
    KMimeTypeChooser_QBaseWheelEvent((KMimeTypeChooser*)self, (QWheelEvent*)event);
}

void k_mimetypechooser_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnWheelEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_key_press_event(void* self, void* event) {
    KMimeTypeChooser_KeyPressEvent((KMimeTypeChooser*)self, (QKeyEvent*)event);
}

void k_mimetypechooser_qbase_key_press_event(void* self, void* event) {
    KMimeTypeChooser_QBaseKeyPressEvent((KMimeTypeChooser*)self, (QKeyEvent*)event);
}

void k_mimetypechooser_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnKeyPressEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_key_release_event(void* self, void* event) {
    KMimeTypeChooser_KeyReleaseEvent((KMimeTypeChooser*)self, (QKeyEvent*)event);
}

void k_mimetypechooser_qbase_key_release_event(void* self, void* event) {
    KMimeTypeChooser_QBaseKeyReleaseEvent((KMimeTypeChooser*)self, (QKeyEvent*)event);
}

void k_mimetypechooser_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnKeyReleaseEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_focus_in_event(void* self, void* event) {
    KMimeTypeChooser_FocusInEvent((KMimeTypeChooser*)self, (QFocusEvent*)event);
}

void k_mimetypechooser_qbase_focus_in_event(void* self, void* event) {
    KMimeTypeChooser_QBaseFocusInEvent((KMimeTypeChooser*)self, (QFocusEvent*)event);
}

void k_mimetypechooser_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnFocusInEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_focus_out_event(void* self, void* event) {
    KMimeTypeChooser_FocusOutEvent((KMimeTypeChooser*)self, (QFocusEvent*)event);
}

void k_mimetypechooser_qbase_focus_out_event(void* self, void* event) {
    KMimeTypeChooser_QBaseFocusOutEvent((KMimeTypeChooser*)self, (QFocusEvent*)event);
}

void k_mimetypechooser_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnFocusOutEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_enter_event(void* self, void* event) {
    KMimeTypeChooser_EnterEvent((KMimeTypeChooser*)self, (QEnterEvent*)event);
}

void k_mimetypechooser_qbase_enter_event(void* self, void* event) {
    KMimeTypeChooser_QBaseEnterEvent((KMimeTypeChooser*)self, (QEnterEvent*)event);
}

void k_mimetypechooser_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnEnterEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_leave_event(void* self, void* event) {
    KMimeTypeChooser_LeaveEvent((KMimeTypeChooser*)self, (QEvent*)event);
}

void k_mimetypechooser_qbase_leave_event(void* self, void* event) {
    KMimeTypeChooser_QBaseLeaveEvent((KMimeTypeChooser*)self, (QEvent*)event);
}

void k_mimetypechooser_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnLeaveEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_paint_event(void* self, void* event) {
    KMimeTypeChooser_PaintEvent((KMimeTypeChooser*)self, (QPaintEvent*)event);
}

void k_mimetypechooser_qbase_paint_event(void* self, void* event) {
    KMimeTypeChooser_QBasePaintEvent((KMimeTypeChooser*)self, (QPaintEvent*)event);
}

void k_mimetypechooser_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnPaintEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_move_event(void* self, void* event) {
    KMimeTypeChooser_MoveEvent((KMimeTypeChooser*)self, (QMoveEvent*)event);
}

void k_mimetypechooser_qbase_move_event(void* self, void* event) {
    KMimeTypeChooser_QBaseMoveEvent((KMimeTypeChooser*)self, (QMoveEvent*)event);
}

void k_mimetypechooser_on_move_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnMoveEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_resize_event(void* self, void* event) {
    KMimeTypeChooser_ResizeEvent((KMimeTypeChooser*)self, (QResizeEvent*)event);
}

void k_mimetypechooser_qbase_resize_event(void* self, void* event) {
    KMimeTypeChooser_QBaseResizeEvent((KMimeTypeChooser*)self, (QResizeEvent*)event);
}

void k_mimetypechooser_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnResizeEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_close_event(void* self, void* event) {
    KMimeTypeChooser_CloseEvent((KMimeTypeChooser*)self, (QCloseEvent*)event);
}

void k_mimetypechooser_qbase_close_event(void* self, void* event) {
    KMimeTypeChooser_QBaseCloseEvent((KMimeTypeChooser*)self, (QCloseEvent*)event);
}

void k_mimetypechooser_on_close_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnCloseEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_context_menu_event(void* self, void* event) {
    KMimeTypeChooser_ContextMenuEvent((KMimeTypeChooser*)self, (QContextMenuEvent*)event);
}

void k_mimetypechooser_qbase_context_menu_event(void* self, void* event) {
    KMimeTypeChooser_QBaseContextMenuEvent((KMimeTypeChooser*)self, (QContextMenuEvent*)event);
}

void k_mimetypechooser_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnContextMenuEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_tablet_event(void* self, void* event) {
    KMimeTypeChooser_TabletEvent((KMimeTypeChooser*)self, (QTabletEvent*)event);
}

void k_mimetypechooser_qbase_tablet_event(void* self, void* event) {
    KMimeTypeChooser_QBaseTabletEvent((KMimeTypeChooser*)self, (QTabletEvent*)event);
}

void k_mimetypechooser_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnTabletEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_action_event(void* self, void* event) {
    KMimeTypeChooser_ActionEvent((KMimeTypeChooser*)self, (QActionEvent*)event);
}

void k_mimetypechooser_qbase_action_event(void* self, void* event) {
    KMimeTypeChooser_QBaseActionEvent((KMimeTypeChooser*)self, (QActionEvent*)event);
}

void k_mimetypechooser_on_action_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnActionEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_drag_enter_event(void* self, void* event) {
    KMimeTypeChooser_DragEnterEvent((KMimeTypeChooser*)self, (QDragEnterEvent*)event);
}

void k_mimetypechooser_qbase_drag_enter_event(void* self, void* event) {
    KMimeTypeChooser_QBaseDragEnterEvent((KMimeTypeChooser*)self, (QDragEnterEvent*)event);
}

void k_mimetypechooser_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnDragEnterEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_drag_move_event(void* self, void* event) {
    KMimeTypeChooser_DragMoveEvent((KMimeTypeChooser*)self, (QDragMoveEvent*)event);
}

void k_mimetypechooser_qbase_drag_move_event(void* self, void* event) {
    KMimeTypeChooser_QBaseDragMoveEvent((KMimeTypeChooser*)self, (QDragMoveEvent*)event);
}

void k_mimetypechooser_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnDragMoveEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_drag_leave_event(void* self, void* event) {
    KMimeTypeChooser_DragLeaveEvent((KMimeTypeChooser*)self, (QDragLeaveEvent*)event);
}

void k_mimetypechooser_qbase_drag_leave_event(void* self, void* event) {
    KMimeTypeChooser_QBaseDragLeaveEvent((KMimeTypeChooser*)self, (QDragLeaveEvent*)event);
}

void k_mimetypechooser_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnDragLeaveEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_drop_event(void* self, void* event) {
    KMimeTypeChooser_DropEvent((KMimeTypeChooser*)self, (QDropEvent*)event);
}

void k_mimetypechooser_qbase_drop_event(void* self, void* event) {
    KMimeTypeChooser_QBaseDropEvent((KMimeTypeChooser*)self, (QDropEvent*)event);
}

void k_mimetypechooser_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnDropEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_show_event(void* self, void* event) {
    KMimeTypeChooser_ShowEvent((KMimeTypeChooser*)self, (QShowEvent*)event);
}

void k_mimetypechooser_qbase_show_event(void* self, void* event) {
    KMimeTypeChooser_QBaseShowEvent((KMimeTypeChooser*)self, (QShowEvent*)event);
}

void k_mimetypechooser_on_show_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnShowEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_hide_event(void* self, void* event) {
    KMimeTypeChooser_HideEvent((KMimeTypeChooser*)self, (QHideEvent*)event);
}

void k_mimetypechooser_qbase_hide_event(void* self, void* event) {
    KMimeTypeChooser_QBaseHideEvent((KMimeTypeChooser*)self, (QHideEvent*)event);
}

void k_mimetypechooser_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnHideEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

bool k_mimetypechooser_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KMimeTypeChooser_NativeEvent((KMimeTypeChooser*)self, qstring(eventType), message, result);
}

bool k_mimetypechooser_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KMimeTypeChooser_QBaseNativeEvent((KMimeTypeChooser*)self, qstring(eventType), message, result);
}

void k_mimetypechooser_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KMimeTypeChooser_OnNativeEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_change_event(void* self, void* param1) {
    KMimeTypeChooser_ChangeEvent((KMimeTypeChooser*)self, (QEvent*)param1);
}

void k_mimetypechooser_qbase_change_event(void* self, void* param1) {
    KMimeTypeChooser_QBaseChangeEvent((KMimeTypeChooser*)self, (QEvent*)param1);
}

void k_mimetypechooser_on_change_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnChangeEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

int32_t k_mimetypechooser_metric(void* self, int32_t param1) {
    return KMimeTypeChooser_Metric((KMimeTypeChooser*)self, param1);
}

int32_t k_mimetypechooser_qbase_metric(void* self, int32_t param1) {
    return KMimeTypeChooser_QBaseMetric((KMimeTypeChooser*)self, param1);
}

void k_mimetypechooser_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KMimeTypeChooser_OnMetric((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_init_painter(void* self, void* painter) {
    KMimeTypeChooser_InitPainter((KMimeTypeChooser*)self, (QPainter*)painter);
}

void k_mimetypechooser_qbase_init_painter(void* self, void* painter) {
    KMimeTypeChooser_QBaseInitPainter((KMimeTypeChooser*)self, (QPainter*)painter);
}

void k_mimetypechooser_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnInitPainter((KMimeTypeChooser*)self, (intptr_t)callback);
}

QPaintDevice* k_mimetypechooser_redirected(void* self, void* offset) {
    return KMimeTypeChooser_Redirected((KMimeTypeChooser*)self, (QPoint*)offset);
}

QPaintDevice* k_mimetypechooser_qbase_redirected(void* self, void* offset) {
    return KMimeTypeChooser_QBaseRedirected((KMimeTypeChooser*)self, (QPoint*)offset);
}

void k_mimetypechooser_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KMimeTypeChooser_OnRedirected((KMimeTypeChooser*)self, (intptr_t)callback);
}

QPainter* k_mimetypechooser_shared_painter(void* self) {
    return KMimeTypeChooser_SharedPainter((KMimeTypeChooser*)self);
}

QPainter* k_mimetypechooser_qbase_shared_painter(void* self) {
    return KMimeTypeChooser_QBaseSharedPainter((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_shared_painter(void* self, QPainter* (*callback)()) {
    KMimeTypeChooser_OnSharedPainter((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_input_method_event(void* self, void* param1) {
    KMimeTypeChooser_InputMethodEvent((KMimeTypeChooser*)self, (QInputMethodEvent*)param1);
}

void k_mimetypechooser_qbase_input_method_event(void* self, void* param1) {
    KMimeTypeChooser_QBaseInputMethodEvent((KMimeTypeChooser*)self, (QInputMethodEvent*)param1);
}

void k_mimetypechooser_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnInputMethodEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

QVariant* k_mimetypechooser_input_method_query(void* self, int64_t param1) {
    return KMimeTypeChooser_InputMethodQuery((KMimeTypeChooser*)self, param1);
}

QVariant* k_mimetypechooser_qbase_input_method_query(void* self, int64_t param1) {
    return KMimeTypeChooser_QBaseInputMethodQuery((KMimeTypeChooser*)self, param1);
}

void k_mimetypechooser_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KMimeTypeChooser_OnInputMethodQuery((KMimeTypeChooser*)self, (intptr_t)callback);
}

bool k_mimetypechooser_focus_next_prev_child(void* self, bool next) {
    return KMimeTypeChooser_FocusNextPrevChild((KMimeTypeChooser*)self, next);
}

bool k_mimetypechooser_qbase_focus_next_prev_child(void* self, bool next) {
    return KMimeTypeChooser_QBaseFocusNextPrevChild((KMimeTypeChooser*)self, next);
}

void k_mimetypechooser_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KMimeTypeChooser_OnFocusNextPrevChild((KMimeTypeChooser*)self, (intptr_t)callback);
}

bool k_mimetypechooser_event_filter(void* self, void* watched, void* event) {
    return KMimeTypeChooser_EventFilter((KMimeTypeChooser*)self, (QObject*)watched, (QEvent*)event);
}

bool k_mimetypechooser_qbase_event_filter(void* self, void* watched, void* event) {
    return KMimeTypeChooser_QBaseEventFilter((KMimeTypeChooser*)self, (QObject*)watched, (QEvent*)event);
}

void k_mimetypechooser_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KMimeTypeChooser_OnEventFilter((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_timer_event(void* self, void* event) {
    KMimeTypeChooser_TimerEvent((KMimeTypeChooser*)self, (QTimerEvent*)event);
}

void k_mimetypechooser_qbase_timer_event(void* self, void* event) {
    KMimeTypeChooser_QBaseTimerEvent((KMimeTypeChooser*)self, (QTimerEvent*)event);
}

void k_mimetypechooser_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnTimerEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_child_event(void* self, void* event) {
    KMimeTypeChooser_ChildEvent((KMimeTypeChooser*)self, (QChildEvent*)event);
}

void k_mimetypechooser_qbase_child_event(void* self, void* event) {
    KMimeTypeChooser_QBaseChildEvent((KMimeTypeChooser*)self, (QChildEvent*)event);
}

void k_mimetypechooser_on_child_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnChildEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_custom_event(void* self, void* event) {
    KMimeTypeChooser_CustomEvent((KMimeTypeChooser*)self, (QEvent*)event);
}

void k_mimetypechooser_qbase_custom_event(void* self, void* event) {
    KMimeTypeChooser_QBaseCustomEvent((KMimeTypeChooser*)self, (QEvent*)event);
}

void k_mimetypechooser_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnCustomEvent((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_connect_notify(void* self, void* signal) {
    KMimeTypeChooser_ConnectNotify((KMimeTypeChooser*)self, (QMetaMethod*)signal);
}

void k_mimetypechooser_qbase_connect_notify(void* self, void* signal) {
    KMimeTypeChooser_QBaseConnectNotify((KMimeTypeChooser*)self, (QMetaMethod*)signal);
}

void k_mimetypechooser_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnConnectNotify((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_disconnect_notify(void* self, void* signal) {
    KMimeTypeChooser_DisconnectNotify((KMimeTypeChooser*)self, (QMetaMethod*)signal);
}

void k_mimetypechooser_qbase_disconnect_notify(void* self, void* signal) {
    KMimeTypeChooser_QBaseDisconnectNotify((KMimeTypeChooser*)self, (QMetaMethod*)signal);
}

void k_mimetypechooser_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooser_OnDisconnectNotify((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_update_micro_focus(void* self) {
    KMimeTypeChooser_UpdateMicroFocus((KMimeTypeChooser*)self);
}

void k_mimetypechooser_qbase_update_micro_focus(void* self) {
    KMimeTypeChooser_QBaseUpdateMicroFocus((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_update_micro_focus(void* self, void (*callback)()) {
    KMimeTypeChooser_OnUpdateMicroFocus((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_create(void* self) {
    KMimeTypeChooser_Create((KMimeTypeChooser*)self);
}

void k_mimetypechooser_qbase_create(void* self) {
    KMimeTypeChooser_QBaseCreate((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_create(void* self, void (*callback)()) {
    KMimeTypeChooser_OnCreate((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_destroy(void* self) {
    KMimeTypeChooser_Destroy((KMimeTypeChooser*)self);
}

void k_mimetypechooser_qbase_destroy(void* self) {
    KMimeTypeChooser_QBaseDestroy((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_destroy(void* self, void (*callback)()) {
    KMimeTypeChooser_OnDestroy((KMimeTypeChooser*)self, (intptr_t)callback);
}

bool k_mimetypechooser_focus_next_child(void* self) {
    return KMimeTypeChooser_FocusNextChild((KMimeTypeChooser*)self);
}

bool k_mimetypechooser_qbase_focus_next_child(void* self) {
    return KMimeTypeChooser_QBaseFocusNextChild((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_focus_next_child(void* self, bool (*callback)()) {
    KMimeTypeChooser_OnFocusNextChild((KMimeTypeChooser*)self, (intptr_t)callback);
}

bool k_mimetypechooser_focus_previous_child(void* self) {
    return KMimeTypeChooser_FocusPreviousChild((KMimeTypeChooser*)self);
}

bool k_mimetypechooser_qbase_focus_previous_child(void* self) {
    return KMimeTypeChooser_QBaseFocusPreviousChild((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_focus_previous_child(void* self, bool (*callback)()) {
    KMimeTypeChooser_OnFocusPreviousChild((KMimeTypeChooser*)self, (intptr_t)callback);
}

QObject* k_mimetypechooser_sender(void* self) {
    return KMimeTypeChooser_Sender((KMimeTypeChooser*)self);
}

QObject* k_mimetypechooser_qbase_sender(void* self) {
    return KMimeTypeChooser_QBaseSender((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_sender(void* self, QObject* (*callback)()) {
    KMimeTypeChooser_OnSender((KMimeTypeChooser*)self, (intptr_t)callback);
}

int32_t k_mimetypechooser_sender_signal_index(void* self) {
    return KMimeTypeChooser_SenderSignalIndex((KMimeTypeChooser*)self);
}

int32_t k_mimetypechooser_qbase_sender_signal_index(void* self) {
    return KMimeTypeChooser_QBaseSenderSignalIndex((KMimeTypeChooser*)self);
}

void k_mimetypechooser_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KMimeTypeChooser_OnSenderSignalIndex((KMimeTypeChooser*)self, (intptr_t)callback);
}

int32_t k_mimetypechooser_receivers(void* self, const char* signal) {
    return KMimeTypeChooser_Receivers((KMimeTypeChooser*)self, signal);
}

int32_t k_mimetypechooser_qbase_receivers(void* self, const char* signal) {
    return KMimeTypeChooser_QBaseReceivers((KMimeTypeChooser*)self, signal);
}

void k_mimetypechooser_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KMimeTypeChooser_OnReceivers((KMimeTypeChooser*)self, (intptr_t)callback);
}

bool k_mimetypechooser_is_signal_connected(void* self, void* signal) {
    return KMimeTypeChooser_IsSignalConnected((KMimeTypeChooser*)self, (QMetaMethod*)signal);
}

bool k_mimetypechooser_qbase_is_signal_connected(void* self, void* signal) {
    return KMimeTypeChooser_QBaseIsSignalConnected((KMimeTypeChooser*)self, (QMetaMethod*)signal);
}

void k_mimetypechooser_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KMimeTypeChooser_OnIsSignalConnected((KMimeTypeChooser*)self, (intptr_t)callback);
}

double k_mimetypechooser_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMimeTypeChooser_GetDecodedMetricF((KMimeTypeChooser*)self, metricA, metricB);
}

double k_mimetypechooser_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMimeTypeChooser_QBaseGetDecodedMetricF((KMimeTypeChooser*)self, metricA, metricB);
}

void k_mimetypechooser_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KMimeTypeChooser_OnGetDecodedMetricF((KMimeTypeChooser*)self, (intptr_t)callback);
}

void k_mimetypechooser_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_mimetypechooser_delete(void* self) {
    KMimeTypeChooser_Delete((KMimeTypeChooser*)(self));
}

KMimeTypeChooserDialog* k_mimetypechooserdialog_new() {
    return KMimeTypeChooserDialog_new();
}

KMimeTypeChooserDialog* k_mimetypechooserdialog_new2(const char* title, const char* text, const char* selectedMimeTypes[static 1], const char* defaultGroup) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooserdialog_new2");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);

    KMimeTypeChooserDialog* _out = KMimeTypeChooserDialog_new2(qstring(title), qstring(text), selectedMimeTypes_list, qstring(defaultGroup));
    free(selectedMimeTypes_qstr);
    return _out;
}

KMimeTypeChooserDialog* k_mimetypechooserdialog_new3(const char* title) {
    return KMimeTypeChooserDialog_new3(qstring(title));
}

KMimeTypeChooserDialog* k_mimetypechooserdialog_new4(const char* title, const char* text) {
    return KMimeTypeChooserDialog_new4(qstring(title), qstring(text));
}

KMimeTypeChooserDialog* k_mimetypechooserdialog_new5(const char* title, const char* text, const char* selectedMimeTypes[static 1]) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooserdialog_new5");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);

    KMimeTypeChooserDialog* _out = KMimeTypeChooserDialog_new5(qstring(title), qstring(text), selectedMimeTypes_list);
    free(selectedMimeTypes_qstr);
    return _out;
}

KMimeTypeChooserDialog* k_mimetypechooserdialog_new6(const char* title, const char* text, const char* selectedMimeTypes[static 1], const char* defaultGroup) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooserdialog_new6");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);

    KMimeTypeChooserDialog* _out = KMimeTypeChooserDialog_new6(qstring(title), qstring(text), selectedMimeTypes_list, qstring(defaultGroup));
    free(selectedMimeTypes_qstr);
    return _out;
}

KMimeTypeChooserDialog* k_mimetypechooserdialog_new7(const char* title, const char* text, const char* selectedMimeTypes[static 1], const char* defaultGroup, const char* groupsToShow[static 1]) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooserdialog_new7");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);
    size_t groupsToShow_len = libqt_strv_length(groupsToShow);
    libqt_string* groupsToShow_qstr = (libqt_string*)malloc(groupsToShow_len * sizeof(libqt_string));
    if (groupsToShow_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooserdialog_new7");
        abort();
    }
    for (size_t i = 0; i < groupsToShow_len; ++i) {
        groupsToShow_qstr[i] = qstring(groupsToShow[i]);
    }
    libqt_list groupsToShow_list = qlist(groupsToShow_qstr, groupsToShow_len);

    KMimeTypeChooserDialog* _out = KMimeTypeChooserDialog_new7(qstring(title), qstring(text), selectedMimeTypes_list, qstring(defaultGroup), groupsToShow_list);
    free(selectedMimeTypes_qstr);
    free(groupsToShow_qstr);
    return _out;
}

KMimeTypeChooserDialog* k_mimetypechooserdialog_new8(const char* title, const char* text, const char* selectedMimeTypes[static 1], const char* defaultGroup, const char* groupsToShow[static 1], int visuals) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooserdialog_new8");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);
    size_t groupsToShow_len = libqt_strv_length(groupsToShow);
    libqt_string* groupsToShow_qstr = (libqt_string*)malloc(groupsToShow_len * sizeof(libqt_string));
    if (groupsToShow_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooserdialog_new8");
        abort();
    }
    for (size_t i = 0; i < groupsToShow_len; ++i) {
        groupsToShow_qstr[i] = qstring(groupsToShow[i]);
    }
    libqt_list groupsToShow_list = qlist(groupsToShow_qstr, groupsToShow_len);

    KMimeTypeChooserDialog* _out = KMimeTypeChooserDialog_new8(qstring(title), qstring(text), selectedMimeTypes_list, qstring(defaultGroup), groupsToShow_list, visuals);
    free(selectedMimeTypes_qstr);
    free(groupsToShow_qstr);
    return _out;
}

KMimeTypeChooserDialog* k_mimetypechooserdialog_new9(const char* title, const char* text, const char* selectedMimeTypes[static 1], const char* defaultGroup, const char* groupsToShow[static 1], int visuals, void* parent) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooserdialog_new9");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);
    size_t groupsToShow_len = libqt_strv_length(groupsToShow);
    libqt_string* groupsToShow_qstr = (libqt_string*)malloc(groupsToShow_len * sizeof(libqt_string));
    if (groupsToShow_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooserdialog_new9");
        abort();
    }
    for (size_t i = 0; i < groupsToShow_len; ++i) {
        groupsToShow_qstr[i] = qstring(groupsToShow[i]);
    }
    libqt_list groupsToShow_list = qlist(groupsToShow_qstr, groupsToShow_len);

    KMimeTypeChooserDialog* _out = KMimeTypeChooserDialog_new9(qstring(title), qstring(text), selectedMimeTypes_list, qstring(defaultGroup), groupsToShow_list, visuals, (QWidget*)parent);
    free(selectedMimeTypes_qstr);
    free(groupsToShow_qstr);
    return _out;
}

KMimeTypeChooserDialog* k_mimetypechooserdialog_new10(const char* title, const char* text, const char* selectedMimeTypes[static 1], const char* defaultGroup, void* parent) {
    size_t selectedMimeTypes_len = libqt_strv_length(selectedMimeTypes);
    libqt_string* selectedMimeTypes_qstr = (libqt_string*)malloc(selectedMimeTypes_len * sizeof(libqt_string));
    if (selectedMimeTypes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooserdialog_new10");
        abort();
    }
    for (size_t i = 0; i < selectedMimeTypes_len; ++i) {
        selectedMimeTypes_qstr[i] = qstring(selectedMimeTypes[i]);
    }
    libqt_list selectedMimeTypes_list = qlist(selectedMimeTypes_qstr, selectedMimeTypes_len);

    KMimeTypeChooserDialog* _out = KMimeTypeChooserDialog_new10(qstring(title), qstring(text), selectedMimeTypes_list, qstring(defaultGroup), (QWidget*)parent);
    free(selectedMimeTypes_qstr);
    return _out;
}

const QMetaObject* k_mimetypechooserdialog_meta_object(void* self) {
    return KMimeTypeChooserDialog_MetaObject((KMimeTypeChooserDialog*)self);
}

void* k_mimetypechooserdialog_metacast(void* self, const char* param1) {
    return KMimeTypeChooserDialog_Metacast((KMimeTypeChooserDialog*)self, param1);
}

int32_t k_mimetypechooserdialog_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMimeTypeChooserDialog_Metacall((KMimeTypeChooserDialog*)self, param1, param2, param3);
}

void k_mimetypechooserdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KMimeTypeChooserDialog_OnMetacall((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

int32_t k_mimetypechooserdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KMimeTypeChooserDialog_QBaseMetacall((KMimeTypeChooserDialog*)self, param1, param2, param3);
}

const char* k_mimetypechooserdialog_tr(const char* s) {
    libqt_string _str = KMimeTypeChooserDialog_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KMimeTypeChooser* k_mimetypechooserdialog_chooser(void* self) {
    return KMimeTypeChooserDialog_Chooser((KMimeTypeChooserDialog*)self);
}

QSize* k_mimetypechooserdialog_size_hint(void* self) {
    return KMimeTypeChooserDialog_SizeHint((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_size_hint(void* self, QSize* (*callback)()) {
    KMimeTypeChooserDialog_OnSizeHint((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

QSize* k_mimetypechooserdialog_qbase_size_hint(void* self) {
    return KMimeTypeChooserDialog_QBaseSizeHint((KMimeTypeChooserDialog*)self);
}

const char* k_mimetypechooserdialog_tr2(const char* s, const char* c) {
    libqt_string _str = KMimeTypeChooserDialog_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_mimetypechooserdialog_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KMimeTypeChooserDialog_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_mimetypechooserdialog_result(void* self) {
    return QDialog_Result((QDialog*)self);
}

void k_mimetypechooserdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QDialog_SetSizeGripEnabled((QDialog*)self, sizeGripEnabled);
}

bool k_mimetypechooserdialog_is_size_grip_enabled(void* self) {
    return QDialog_IsSizeGripEnabled((QDialog*)self);
}

void k_mimetypechooserdialog_set_modal(void* self, bool modal) {
    QDialog_SetModal((QDialog*)self, modal);
}

void k_mimetypechooserdialog_set_result(void* self, int r) {
    QDialog_SetResult((QDialog*)self, r);
}

void k_mimetypechooserdialog_finished(void* self, int result) {
    QDialog_Finished((QDialog*)self, result);
}

void k_mimetypechooserdialog_on_finished(void* self, void (*callback)(void*, int)) {
    QDialog_Connect_Finished((QDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_accepted(void* self) {
    QDialog_Accepted((QDialog*)self);
}

void k_mimetypechooserdialog_on_accepted(void* self, void (*callback)(void*)) {
    QDialog_Connect_Accepted((QDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_rejected(void* self) {
    QDialog_Rejected((QDialog*)self);
}

void k_mimetypechooserdialog_on_rejected(void* self, void (*callback)(void*)) {
    QDialog_Connect_Rejected((QDialog*)self, (intptr_t)callback);
}

uintptr_t k_mimetypechooserdialog_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_mimetypechooserdialog_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_mimetypechooserdialog_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_mimetypechooserdialog_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_mimetypechooserdialog_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_mimetypechooserdialog_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_mimetypechooserdialog_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_mimetypechooserdialog_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_mimetypechooserdialog_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_mimetypechooserdialog_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_mimetypechooserdialog_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_mimetypechooserdialog_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_mimetypechooserdialog_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_mimetypechooserdialog_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_mimetypechooserdialog_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_mimetypechooserdialog_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_mimetypechooserdialog_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_mimetypechooserdialog_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_mimetypechooserdialog_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_mimetypechooserdialog_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_mimetypechooserdialog_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_mimetypechooserdialog_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_mimetypechooserdialog_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_mimetypechooserdialog_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_mimetypechooserdialog_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_mimetypechooserdialog_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_mimetypechooserdialog_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_mimetypechooserdialog_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_mimetypechooserdialog_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_mimetypechooserdialog_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_mimetypechooserdialog_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_mimetypechooserdialog_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_mimetypechooserdialog_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_mimetypechooserdialog_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_mimetypechooserdialog_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_mimetypechooserdialog_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_mimetypechooserdialog_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_mimetypechooserdialog_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_mimetypechooserdialog_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_mimetypechooserdialog_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_mimetypechooserdialog_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_mimetypechooserdialog_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_mimetypechooserdialog_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_mimetypechooserdialog_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_mimetypechooserdialog_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_mimetypechooserdialog_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_mimetypechooserdialog_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_mimetypechooserdialog_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_mimetypechooserdialog_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_mimetypechooserdialog_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_mimetypechooserdialog_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_mimetypechooserdialog_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_mimetypechooserdialog_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_mimetypechooserdialog_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mimetypechooserdialog_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mimetypechooserdialog_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mimetypechooserdialog_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mimetypechooserdialog_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mimetypechooserdialog_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mimetypechooserdialog_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_mimetypechooserdialog_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_mimetypechooserdialog_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_mimetypechooserdialog_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_mimetypechooserdialog_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_mimetypechooserdialog_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_mimetypechooserdialog_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_mimetypechooserdialog_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_mimetypechooserdialog_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_mimetypechooserdialog_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_mimetypechooserdialog_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_mimetypechooserdialog_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_mimetypechooserdialog_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_mimetypechooserdialog_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_mimetypechooserdialog_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_mimetypechooserdialog_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_mimetypechooserdialog_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_mimetypechooserdialog_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_mimetypechooserdialog_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_mimetypechooserdialog_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_mimetypechooserdialog_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_mimetypechooserdialog_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_mimetypechooserdialog_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_mimetypechooserdialog_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_mimetypechooserdialog_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_mimetypechooserdialog_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_mimetypechooserdialog_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_mimetypechooserdialog_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_mimetypechooserdialog_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_mimetypechooserdialog_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_mimetypechooserdialog_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_mimetypechooserdialog_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_mimetypechooserdialog_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_mimetypechooserdialog_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_mimetypechooserdialog_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_mimetypechooserdialog_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_mimetypechooserdialog_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_mimetypechooserdialog_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_mimetypechooserdialog_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_mimetypechooserdialog_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_mimetypechooserdialog_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_mimetypechooserdialog_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooserdialog_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_mimetypechooserdialog_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_mimetypechooserdialog_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_mimetypechooserdialog_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooserdialog_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_mimetypechooserdialog_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooserdialog_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_mimetypechooserdialog_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooserdialog_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_mimetypechooserdialog_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_mimetypechooserdialog_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_mimetypechooserdialog_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_mimetypechooserdialog_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooserdialog_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_mimetypechooserdialog_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_mimetypechooserdialog_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_mimetypechooserdialog_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooserdialog_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_mimetypechooserdialog_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_mimetypechooserdialog_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooserdialog_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_mimetypechooserdialog_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooserdialog_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_mimetypechooserdialog_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_mimetypechooserdialog_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_mimetypechooserdialog_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_mimetypechooserdialog_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_mimetypechooserdialog_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_mimetypechooserdialog_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_mimetypechooserdialog_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_mimetypechooserdialog_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_mimetypechooserdialog_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_mimetypechooserdialog_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_mimetypechooserdialog_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_mimetypechooserdialog_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_mimetypechooserdialog_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_mimetypechooserdialog_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_mimetypechooserdialog_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_mimetypechooserdialog_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_mimetypechooserdialog_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_mimetypechooserdialog_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_mimetypechooserdialog_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_mimetypechooserdialog_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_mimetypechooserdialog_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_mimetypechooserdialog_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_mimetypechooserdialog_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_mimetypechooserdialog_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_mimetypechooserdialog_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_mimetypechooserdialog_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_mimetypechooserdialog_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_mimetypechooserdialog_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_mimetypechooserdialog_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_mimetypechooserdialog_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_mimetypechooserdialog_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_mimetypechooserdialog_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_mimetypechooserdialog_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_mimetypechooserdialog_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_mimetypechooserdialog_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_mimetypechooserdialog_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_mimetypechooserdialog_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_mimetypechooserdialog_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_mimetypechooserdialog_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_mimetypechooserdialog_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_mimetypechooserdialog_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_mimetypechooserdialog_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_mimetypechooserdialog_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_mimetypechooserdialog_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_mimetypechooserdialog_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_mimetypechooserdialog_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_mimetypechooserdialog_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_mimetypechooserdialog_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_mimetypechooserdialog_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_mimetypechooserdialog_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_mimetypechooserdialog_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_mimetypechooserdialog_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_mimetypechooserdialog_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_mimetypechooserdialog_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_mimetypechooserdialog_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_mimetypechooserdialog_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_mimetypechooserdialog_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_mimetypechooserdialog_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_mimetypechooserdialog_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_mimetypechooserdialog_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_mimetypechooserdialog_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_mimetypechooserdialog_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_mimetypechooserdialog_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_mimetypechooserdialog_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_mimetypechooserdialog_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_mimetypechooserdialog_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_mimetypechooserdialog_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_mimetypechooserdialog_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_mimetypechooserdialog_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_mimetypechooserdialog_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_mimetypechooserdialog_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_mimetypechooserdialog_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_mimetypechooserdialog_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_mimetypechooserdialog_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_mimetypechooserdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_mimetypechooserdialog_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_mimetypechooserdialog_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_mimetypechooserdialog_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_mimetypechooserdialog_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_mimetypechooserdialog_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_mimetypechooserdialog_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_mimetypechooserdialog_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_mimetypechooserdialog_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_mimetypechooserdialog_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_mimetypechooserdialog_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_mimetypechooserdialog_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_mimetypechooserdialog_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_mimetypechooserdialog_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_mimetypechooserdialog_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_mimetypechooserdialog_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_mimetypechooserdialog_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_mimetypechooserdialog_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_mimetypechooserdialog_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_mimetypechooserdialog_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_mimetypechooserdialog_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_mimetypechooserdialog_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_mimetypechooserdialog_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_mimetypechooserdialog_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_mimetypechooserdialog_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_mimetypechooserdialog_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_mimetypechooserdialog_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_mimetypechooserdialog_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_mimetypechooserdialog_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_mimetypechooserdialog_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_mimetypechooserdialog_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_mimetypechooserdialog_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_mimetypechooserdialog_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_mimetypechooserdialog_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_mimetypechooserdialog_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_mimetypechooserdialog_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_mimetypechooserdialog_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_mimetypechooserdialog_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_mimetypechooserdialog_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_mimetypechooserdialog_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_mimetypechooserdialog_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_mimetypechooserdialog_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_mimetypechooserdialog_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_mimetypechooserdialog_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_mimetypechooserdialog_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_mimetypechooserdialog_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_mimetypechooserdialog_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_mimetypechooserdialog_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_mimetypechooserdialog_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_mimetypechooserdialog_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_mimetypechooserdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_mimetypechooserdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_mimetypechooserdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_mimetypechooserdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_mimetypechooserdialog_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_mimetypechooserdialog_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_mimetypechooserdialog_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_mimetypechooserdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_mimetypechooserdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_mimetypechooserdialog_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_mimetypechooserdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_mimetypechooserdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_mimetypechooserdialog_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_mimetypechooserdialog_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_mimetypechooserdialog_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_mimetypechooserdialog_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_mimetypechooserdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_mimetypechooserdialog_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_mimetypechooserdialog_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_mimetypechooserdialog_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_mimetypechooserdialog_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_mimetypechooserdialog_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_mimetypechooserdialog_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_mimetypechooserdialog_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_mimetypechooserdialog_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_mimetypechooserdialog_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_mimetypechooserdialog_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_mimetypechooserdialog_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_mimetypechooserdialog_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_mimetypechooserdialog_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_mimetypechooserdialog_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_mimetypechooserdialog_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_mimetypechooserdialog_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_mimetypechooserdialog_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_mimetypechooserdialog_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_mimetypechooserdialog_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_mimetypechooserdialog_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_mimetypechooserdialog_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_mimetypechooserdialog_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_mimetypechooserdialog_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_mimetypechooserdialog_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_mimetypechooserdialog_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_mimetypechooserdialog_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_mimetypechooserdialog_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_mimetypechooserdialog_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_mimetypechooserdialog_dynamic_property_names");
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

QBindingStorage* k_mimetypechooserdialog_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_mimetypechooserdialog_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_mimetypechooserdialog_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_mimetypechooserdialog_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_mimetypechooserdialog_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_mimetypechooserdialog_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_mimetypechooserdialog_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_mimetypechooserdialog_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_mimetypechooserdialog_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_mimetypechooserdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_mimetypechooserdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_mimetypechooserdialog_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_mimetypechooserdialog_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_mimetypechooserdialog_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_mimetypechooserdialog_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_mimetypechooserdialog_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_mimetypechooserdialog_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_mimetypechooserdialog_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_mimetypechooserdialog_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_mimetypechooserdialog_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_mimetypechooserdialog_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_mimetypechooserdialog_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_mimetypechooserdialog_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_mimetypechooserdialog_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_mimetypechooserdialog_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_mimetypechooserdialog_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_mimetypechooserdialog_set_visible(void* self, bool visible) {
    KMimeTypeChooserDialog_SetVisible((KMimeTypeChooserDialog*)self, visible);
}

void k_mimetypechooserdialog_qbase_set_visible(void* self, bool visible) {
    KMimeTypeChooserDialog_QBaseSetVisible((KMimeTypeChooserDialog*)self, visible);
}

void k_mimetypechooserdialog_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KMimeTypeChooserDialog_OnSetVisible((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

QSize* k_mimetypechooserdialog_minimum_size_hint(void* self) {
    return KMimeTypeChooserDialog_MinimumSizeHint((KMimeTypeChooserDialog*)self);
}

QSize* k_mimetypechooserdialog_qbase_minimum_size_hint(void* self) {
    return KMimeTypeChooserDialog_QBaseMinimumSizeHint((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KMimeTypeChooserDialog_OnMinimumSizeHint((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_open(void* self) {
    KMimeTypeChooserDialog_Open((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_qbase_open(void* self) {
    KMimeTypeChooserDialog_QBaseOpen((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_open(void* self, void (*callback)()) {
    KMimeTypeChooserDialog_OnOpen((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

int32_t k_mimetypechooserdialog_exec(void* self) {
    return KMimeTypeChooserDialog_Exec((KMimeTypeChooserDialog*)self);
}

int32_t k_mimetypechooserdialog_qbase_exec(void* self) {
    return KMimeTypeChooserDialog_QBaseExec((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_exec(void* self, int32_t (*callback)()) {
    KMimeTypeChooserDialog_OnExec((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_done(void* self, int param1) {
    KMimeTypeChooserDialog_Done((KMimeTypeChooserDialog*)self, param1);
}

void k_mimetypechooserdialog_qbase_done(void* self, int param1) {
    KMimeTypeChooserDialog_QBaseDone((KMimeTypeChooserDialog*)self, param1);
}

void k_mimetypechooserdialog_on_done(void* self, void (*callback)(void*, int)) {
    KMimeTypeChooserDialog_OnDone((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_accept(void* self) {
    KMimeTypeChooserDialog_Accept((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_qbase_accept(void* self) {
    KMimeTypeChooserDialog_QBaseAccept((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_accept(void* self, void (*callback)()) {
    KMimeTypeChooserDialog_OnAccept((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_reject(void* self) {
    KMimeTypeChooserDialog_Reject((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_qbase_reject(void* self) {
    KMimeTypeChooserDialog_QBaseReject((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_reject(void* self, void (*callback)()) {
    KMimeTypeChooserDialog_OnReject((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_key_press_event(void* self, void* param1) {
    KMimeTypeChooserDialog_KeyPressEvent((KMimeTypeChooserDialog*)self, (QKeyEvent*)param1);
}

void k_mimetypechooserdialog_qbase_key_press_event(void* self, void* param1) {
    KMimeTypeChooserDialog_QBaseKeyPressEvent((KMimeTypeChooserDialog*)self, (QKeyEvent*)param1);
}

void k_mimetypechooserdialog_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnKeyPressEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_close_event(void* self, void* param1) {
    KMimeTypeChooserDialog_CloseEvent((KMimeTypeChooserDialog*)self, (QCloseEvent*)param1);
}

void k_mimetypechooserdialog_qbase_close_event(void* self, void* param1) {
    KMimeTypeChooserDialog_QBaseCloseEvent((KMimeTypeChooserDialog*)self, (QCloseEvent*)param1);
}

void k_mimetypechooserdialog_on_close_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnCloseEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_show_event(void* self, void* param1) {
    KMimeTypeChooserDialog_ShowEvent((KMimeTypeChooserDialog*)self, (QShowEvent*)param1);
}

void k_mimetypechooserdialog_qbase_show_event(void* self, void* param1) {
    KMimeTypeChooserDialog_QBaseShowEvent((KMimeTypeChooserDialog*)self, (QShowEvent*)param1);
}

void k_mimetypechooserdialog_on_show_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnShowEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_resize_event(void* self, void* param1) {
    KMimeTypeChooserDialog_ResizeEvent((KMimeTypeChooserDialog*)self, (QResizeEvent*)param1);
}

void k_mimetypechooserdialog_qbase_resize_event(void* self, void* param1) {
    KMimeTypeChooserDialog_QBaseResizeEvent((KMimeTypeChooserDialog*)self, (QResizeEvent*)param1);
}

void k_mimetypechooserdialog_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnResizeEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_context_menu_event(void* self, void* param1) {
    KMimeTypeChooserDialog_ContextMenuEvent((KMimeTypeChooserDialog*)self, (QContextMenuEvent*)param1);
}

void k_mimetypechooserdialog_qbase_context_menu_event(void* self, void* param1) {
    KMimeTypeChooserDialog_QBaseContextMenuEvent((KMimeTypeChooserDialog*)self, (QContextMenuEvent*)param1);
}

void k_mimetypechooserdialog_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnContextMenuEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

bool k_mimetypechooserdialog_event_filter(void* self, void* param1, void* param2) {
    return KMimeTypeChooserDialog_EventFilter((KMimeTypeChooserDialog*)self, (QObject*)param1, (QEvent*)param2);
}

bool k_mimetypechooserdialog_qbase_event_filter(void* self, void* param1, void* param2) {
    return KMimeTypeChooserDialog_QBaseEventFilter((KMimeTypeChooserDialog*)self, (QObject*)param1, (QEvent*)param2);
}

void k_mimetypechooserdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KMimeTypeChooserDialog_OnEventFilter((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

int32_t k_mimetypechooserdialog_dev_type(void* self) {
    return KMimeTypeChooserDialog_DevType((KMimeTypeChooserDialog*)self);
}

int32_t k_mimetypechooserdialog_qbase_dev_type(void* self) {
    return KMimeTypeChooserDialog_QBaseDevType((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_dev_type(void* self, int32_t (*callback)()) {
    KMimeTypeChooserDialog_OnDevType((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

int32_t k_mimetypechooserdialog_height_for_width(void* self, int param1) {
    return KMimeTypeChooserDialog_HeightForWidth((KMimeTypeChooserDialog*)self, param1);
}

int32_t k_mimetypechooserdialog_qbase_height_for_width(void* self, int param1) {
    return KMimeTypeChooserDialog_QBaseHeightForWidth((KMimeTypeChooserDialog*)self, param1);
}

void k_mimetypechooserdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KMimeTypeChooserDialog_OnHeightForWidth((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

bool k_mimetypechooserdialog_has_height_for_width(void* self) {
    return KMimeTypeChooserDialog_HasHeightForWidth((KMimeTypeChooserDialog*)self);
}

bool k_mimetypechooserdialog_qbase_has_height_for_width(void* self) {
    return KMimeTypeChooserDialog_QBaseHasHeightForWidth((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_has_height_for_width(void* self, bool (*callback)()) {
    KMimeTypeChooserDialog_OnHasHeightForWidth((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

QPaintEngine* k_mimetypechooserdialog_paint_engine(void* self) {
    return KMimeTypeChooserDialog_PaintEngine((KMimeTypeChooserDialog*)self);
}

QPaintEngine* k_mimetypechooserdialog_qbase_paint_engine(void* self) {
    return KMimeTypeChooserDialog_QBasePaintEngine((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KMimeTypeChooserDialog_OnPaintEngine((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

bool k_mimetypechooserdialog_event(void* self, void* event) {
    return KMimeTypeChooserDialog_Event((KMimeTypeChooserDialog*)self, (QEvent*)event);
}

bool k_mimetypechooserdialog_qbase_event(void* self, void* event) {
    return KMimeTypeChooserDialog_QBaseEvent((KMimeTypeChooserDialog*)self, (QEvent*)event);
}

void k_mimetypechooserdialog_on_event(void* self, bool (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_mouse_press_event(void* self, void* event) {
    KMimeTypeChooserDialog_MousePressEvent((KMimeTypeChooserDialog*)self, (QMouseEvent*)event);
}

void k_mimetypechooserdialog_qbase_mouse_press_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseMousePressEvent((KMimeTypeChooserDialog*)self, (QMouseEvent*)event);
}

void k_mimetypechooserdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnMousePressEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_mouse_release_event(void* self, void* event) {
    KMimeTypeChooserDialog_MouseReleaseEvent((KMimeTypeChooserDialog*)self, (QMouseEvent*)event);
}

void k_mimetypechooserdialog_qbase_mouse_release_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseMouseReleaseEvent((KMimeTypeChooserDialog*)self, (QMouseEvent*)event);
}

void k_mimetypechooserdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnMouseReleaseEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_mouse_double_click_event(void* self, void* event) {
    KMimeTypeChooserDialog_MouseDoubleClickEvent((KMimeTypeChooserDialog*)self, (QMouseEvent*)event);
}

void k_mimetypechooserdialog_qbase_mouse_double_click_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseMouseDoubleClickEvent((KMimeTypeChooserDialog*)self, (QMouseEvent*)event);
}

void k_mimetypechooserdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnMouseDoubleClickEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_mouse_move_event(void* self, void* event) {
    KMimeTypeChooserDialog_MouseMoveEvent((KMimeTypeChooserDialog*)self, (QMouseEvent*)event);
}

void k_mimetypechooserdialog_qbase_mouse_move_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseMouseMoveEvent((KMimeTypeChooserDialog*)self, (QMouseEvent*)event);
}

void k_mimetypechooserdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnMouseMoveEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_wheel_event(void* self, void* event) {
    KMimeTypeChooserDialog_WheelEvent((KMimeTypeChooserDialog*)self, (QWheelEvent*)event);
}

void k_mimetypechooserdialog_qbase_wheel_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseWheelEvent((KMimeTypeChooserDialog*)self, (QWheelEvent*)event);
}

void k_mimetypechooserdialog_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnWheelEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_key_release_event(void* self, void* event) {
    KMimeTypeChooserDialog_KeyReleaseEvent((KMimeTypeChooserDialog*)self, (QKeyEvent*)event);
}

void k_mimetypechooserdialog_qbase_key_release_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseKeyReleaseEvent((KMimeTypeChooserDialog*)self, (QKeyEvent*)event);
}

void k_mimetypechooserdialog_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnKeyReleaseEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_focus_in_event(void* self, void* event) {
    KMimeTypeChooserDialog_FocusInEvent((KMimeTypeChooserDialog*)self, (QFocusEvent*)event);
}

void k_mimetypechooserdialog_qbase_focus_in_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseFocusInEvent((KMimeTypeChooserDialog*)self, (QFocusEvent*)event);
}

void k_mimetypechooserdialog_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnFocusInEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_focus_out_event(void* self, void* event) {
    KMimeTypeChooserDialog_FocusOutEvent((KMimeTypeChooserDialog*)self, (QFocusEvent*)event);
}

void k_mimetypechooserdialog_qbase_focus_out_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseFocusOutEvent((KMimeTypeChooserDialog*)self, (QFocusEvent*)event);
}

void k_mimetypechooserdialog_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnFocusOutEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_enter_event(void* self, void* event) {
    KMimeTypeChooserDialog_EnterEvent((KMimeTypeChooserDialog*)self, (QEnterEvent*)event);
}

void k_mimetypechooserdialog_qbase_enter_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseEnterEvent((KMimeTypeChooserDialog*)self, (QEnterEvent*)event);
}

void k_mimetypechooserdialog_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnEnterEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_leave_event(void* self, void* event) {
    KMimeTypeChooserDialog_LeaveEvent((KMimeTypeChooserDialog*)self, (QEvent*)event);
}

void k_mimetypechooserdialog_qbase_leave_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseLeaveEvent((KMimeTypeChooserDialog*)self, (QEvent*)event);
}

void k_mimetypechooserdialog_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnLeaveEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_paint_event(void* self, void* event) {
    KMimeTypeChooserDialog_PaintEvent((KMimeTypeChooserDialog*)self, (QPaintEvent*)event);
}

void k_mimetypechooserdialog_qbase_paint_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBasePaintEvent((KMimeTypeChooserDialog*)self, (QPaintEvent*)event);
}

void k_mimetypechooserdialog_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnPaintEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_move_event(void* self, void* event) {
    KMimeTypeChooserDialog_MoveEvent((KMimeTypeChooserDialog*)self, (QMoveEvent*)event);
}

void k_mimetypechooserdialog_qbase_move_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseMoveEvent((KMimeTypeChooserDialog*)self, (QMoveEvent*)event);
}

void k_mimetypechooserdialog_on_move_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnMoveEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_tablet_event(void* self, void* event) {
    KMimeTypeChooserDialog_TabletEvent((KMimeTypeChooserDialog*)self, (QTabletEvent*)event);
}

void k_mimetypechooserdialog_qbase_tablet_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseTabletEvent((KMimeTypeChooserDialog*)self, (QTabletEvent*)event);
}

void k_mimetypechooserdialog_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnTabletEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_action_event(void* self, void* event) {
    KMimeTypeChooserDialog_ActionEvent((KMimeTypeChooserDialog*)self, (QActionEvent*)event);
}

void k_mimetypechooserdialog_qbase_action_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseActionEvent((KMimeTypeChooserDialog*)self, (QActionEvent*)event);
}

void k_mimetypechooserdialog_on_action_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnActionEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_drag_enter_event(void* self, void* event) {
    KMimeTypeChooserDialog_DragEnterEvent((KMimeTypeChooserDialog*)self, (QDragEnterEvent*)event);
}

void k_mimetypechooserdialog_qbase_drag_enter_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseDragEnterEvent((KMimeTypeChooserDialog*)self, (QDragEnterEvent*)event);
}

void k_mimetypechooserdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnDragEnterEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_drag_move_event(void* self, void* event) {
    KMimeTypeChooserDialog_DragMoveEvent((KMimeTypeChooserDialog*)self, (QDragMoveEvent*)event);
}

void k_mimetypechooserdialog_qbase_drag_move_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseDragMoveEvent((KMimeTypeChooserDialog*)self, (QDragMoveEvent*)event);
}

void k_mimetypechooserdialog_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnDragMoveEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_drag_leave_event(void* self, void* event) {
    KMimeTypeChooserDialog_DragLeaveEvent((KMimeTypeChooserDialog*)self, (QDragLeaveEvent*)event);
}

void k_mimetypechooserdialog_qbase_drag_leave_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseDragLeaveEvent((KMimeTypeChooserDialog*)self, (QDragLeaveEvent*)event);
}

void k_mimetypechooserdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnDragLeaveEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_drop_event(void* self, void* event) {
    KMimeTypeChooserDialog_DropEvent((KMimeTypeChooserDialog*)self, (QDropEvent*)event);
}

void k_mimetypechooserdialog_qbase_drop_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseDropEvent((KMimeTypeChooserDialog*)self, (QDropEvent*)event);
}

void k_mimetypechooserdialog_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnDropEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_hide_event(void* self, void* event) {
    KMimeTypeChooserDialog_HideEvent((KMimeTypeChooserDialog*)self, (QHideEvent*)event);
}

void k_mimetypechooserdialog_qbase_hide_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseHideEvent((KMimeTypeChooserDialog*)self, (QHideEvent*)event);
}

void k_mimetypechooserdialog_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnHideEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

bool k_mimetypechooserdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KMimeTypeChooserDialog_NativeEvent((KMimeTypeChooserDialog*)self, qstring(eventType), message, result);
}

bool k_mimetypechooserdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KMimeTypeChooserDialog_QBaseNativeEvent((KMimeTypeChooserDialog*)self, qstring(eventType), message, result);
}

void k_mimetypechooserdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KMimeTypeChooserDialog_OnNativeEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_change_event(void* self, void* param1) {
    KMimeTypeChooserDialog_ChangeEvent((KMimeTypeChooserDialog*)self, (QEvent*)param1);
}

void k_mimetypechooserdialog_qbase_change_event(void* self, void* param1) {
    KMimeTypeChooserDialog_QBaseChangeEvent((KMimeTypeChooserDialog*)self, (QEvent*)param1);
}

void k_mimetypechooserdialog_on_change_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnChangeEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

int32_t k_mimetypechooserdialog_metric(void* self, int32_t param1) {
    return KMimeTypeChooserDialog_Metric((KMimeTypeChooserDialog*)self, param1);
}

int32_t k_mimetypechooserdialog_qbase_metric(void* self, int32_t param1) {
    return KMimeTypeChooserDialog_QBaseMetric((KMimeTypeChooserDialog*)self, param1);
}

void k_mimetypechooserdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KMimeTypeChooserDialog_OnMetric((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_init_painter(void* self, void* painter) {
    KMimeTypeChooserDialog_InitPainter((KMimeTypeChooserDialog*)self, (QPainter*)painter);
}

void k_mimetypechooserdialog_qbase_init_painter(void* self, void* painter) {
    KMimeTypeChooserDialog_QBaseInitPainter((KMimeTypeChooserDialog*)self, (QPainter*)painter);
}

void k_mimetypechooserdialog_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnInitPainter((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

QPaintDevice* k_mimetypechooserdialog_redirected(void* self, void* offset) {
    return KMimeTypeChooserDialog_Redirected((KMimeTypeChooserDialog*)self, (QPoint*)offset);
}

QPaintDevice* k_mimetypechooserdialog_qbase_redirected(void* self, void* offset) {
    return KMimeTypeChooserDialog_QBaseRedirected((KMimeTypeChooserDialog*)self, (QPoint*)offset);
}

void k_mimetypechooserdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnRedirected((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

QPainter* k_mimetypechooserdialog_shared_painter(void* self) {
    return KMimeTypeChooserDialog_SharedPainter((KMimeTypeChooserDialog*)self);
}

QPainter* k_mimetypechooserdialog_qbase_shared_painter(void* self) {
    return KMimeTypeChooserDialog_QBaseSharedPainter((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_shared_painter(void* self, QPainter* (*callback)()) {
    KMimeTypeChooserDialog_OnSharedPainter((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_input_method_event(void* self, void* param1) {
    KMimeTypeChooserDialog_InputMethodEvent((KMimeTypeChooserDialog*)self, (QInputMethodEvent*)param1);
}

void k_mimetypechooserdialog_qbase_input_method_event(void* self, void* param1) {
    KMimeTypeChooserDialog_QBaseInputMethodEvent((KMimeTypeChooserDialog*)self, (QInputMethodEvent*)param1);
}

void k_mimetypechooserdialog_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnInputMethodEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

QVariant* k_mimetypechooserdialog_input_method_query(void* self, int64_t param1) {
    return KMimeTypeChooserDialog_InputMethodQuery((KMimeTypeChooserDialog*)self, param1);
}

QVariant* k_mimetypechooserdialog_qbase_input_method_query(void* self, int64_t param1) {
    return KMimeTypeChooserDialog_QBaseInputMethodQuery((KMimeTypeChooserDialog*)self, param1);
}

void k_mimetypechooserdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KMimeTypeChooserDialog_OnInputMethodQuery((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

bool k_mimetypechooserdialog_focus_next_prev_child(void* self, bool next) {
    return KMimeTypeChooserDialog_FocusNextPrevChild((KMimeTypeChooserDialog*)self, next);
}

bool k_mimetypechooserdialog_qbase_focus_next_prev_child(void* self, bool next) {
    return KMimeTypeChooserDialog_QBaseFocusNextPrevChild((KMimeTypeChooserDialog*)self, next);
}

void k_mimetypechooserdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KMimeTypeChooserDialog_OnFocusNextPrevChild((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_timer_event(void* self, void* event) {
    KMimeTypeChooserDialog_TimerEvent((KMimeTypeChooserDialog*)self, (QTimerEvent*)event);
}

void k_mimetypechooserdialog_qbase_timer_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseTimerEvent((KMimeTypeChooserDialog*)self, (QTimerEvent*)event);
}

void k_mimetypechooserdialog_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnTimerEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_child_event(void* self, void* event) {
    KMimeTypeChooserDialog_ChildEvent((KMimeTypeChooserDialog*)self, (QChildEvent*)event);
}

void k_mimetypechooserdialog_qbase_child_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseChildEvent((KMimeTypeChooserDialog*)self, (QChildEvent*)event);
}

void k_mimetypechooserdialog_on_child_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnChildEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_custom_event(void* self, void* event) {
    KMimeTypeChooserDialog_CustomEvent((KMimeTypeChooserDialog*)self, (QEvent*)event);
}

void k_mimetypechooserdialog_qbase_custom_event(void* self, void* event) {
    KMimeTypeChooserDialog_QBaseCustomEvent((KMimeTypeChooserDialog*)self, (QEvent*)event);
}

void k_mimetypechooserdialog_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnCustomEvent((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_connect_notify(void* self, void* signal) {
    KMimeTypeChooserDialog_ConnectNotify((KMimeTypeChooserDialog*)self, (QMetaMethod*)signal);
}

void k_mimetypechooserdialog_qbase_connect_notify(void* self, void* signal) {
    KMimeTypeChooserDialog_QBaseConnectNotify((KMimeTypeChooserDialog*)self, (QMetaMethod*)signal);
}

void k_mimetypechooserdialog_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnConnectNotify((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_disconnect_notify(void* self, void* signal) {
    KMimeTypeChooserDialog_DisconnectNotify((KMimeTypeChooserDialog*)self, (QMetaMethod*)signal);
}

void k_mimetypechooserdialog_qbase_disconnect_notify(void* self, void* signal) {
    KMimeTypeChooserDialog_QBaseDisconnectNotify((KMimeTypeChooserDialog*)self, (QMetaMethod*)signal);
}

void k_mimetypechooserdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnDisconnectNotify((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_adjust_position(void* self, void* param1) {
    KMimeTypeChooserDialog_AdjustPosition((KMimeTypeChooserDialog*)self, (QWidget*)param1);
}

void k_mimetypechooserdialog_qbase_adjust_position(void* self, void* param1) {
    KMimeTypeChooserDialog_QBaseAdjustPosition((KMimeTypeChooserDialog*)self, (QWidget*)param1);
}

void k_mimetypechooserdialog_on_adjust_position(void* self, void (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnAdjustPosition((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_update_micro_focus(void* self) {
    KMimeTypeChooserDialog_UpdateMicroFocus((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_qbase_update_micro_focus(void* self) {
    KMimeTypeChooserDialog_QBaseUpdateMicroFocus((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_update_micro_focus(void* self, void (*callback)()) {
    KMimeTypeChooserDialog_OnUpdateMicroFocus((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_create(void* self) {
    KMimeTypeChooserDialog_Create((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_qbase_create(void* self) {
    KMimeTypeChooserDialog_QBaseCreate((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_create(void* self, void (*callback)()) {
    KMimeTypeChooserDialog_OnCreate((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_destroy(void* self) {
    KMimeTypeChooserDialog_Destroy((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_qbase_destroy(void* self) {
    KMimeTypeChooserDialog_QBaseDestroy((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_destroy(void* self, void (*callback)()) {
    KMimeTypeChooserDialog_OnDestroy((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

bool k_mimetypechooserdialog_focus_next_child(void* self) {
    return KMimeTypeChooserDialog_FocusNextChild((KMimeTypeChooserDialog*)self);
}

bool k_mimetypechooserdialog_qbase_focus_next_child(void* self) {
    return KMimeTypeChooserDialog_QBaseFocusNextChild((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_focus_next_child(void* self, bool (*callback)()) {
    KMimeTypeChooserDialog_OnFocusNextChild((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

bool k_mimetypechooserdialog_focus_previous_child(void* self) {
    return KMimeTypeChooserDialog_FocusPreviousChild((KMimeTypeChooserDialog*)self);
}

bool k_mimetypechooserdialog_qbase_focus_previous_child(void* self) {
    return KMimeTypeChooserDialog_QBaseFocusPreviousChild((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_focus_previous_child(void* self, bool (*callback)()) {
    KMimeTypeChooserDialog_OnFocusPreviousChild((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

QObject* k_mimetypechooserdialog_sender(void* self) {
    return KMimeTypeChooserDialog_Sender((KMimeTypeChooserDialog*)self);
}

QObject* k_mimetypechooserdialog_qbase_sender(void* self) {
    return KMimeTypeChooserDialog_QBaseSender((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_sender(void* self, QObject* (*callback)()) {
    KMimeTypeChooserDialog_OnSender((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

int32_t k_mimetypechooserdialog_sender_signal_index(void* self) {
    return KMimeTypeChooserDialog_SenderSignalIndex((KMimeTypeChooserDialog*)self);
}

int32_t k_mimetypechooserdialog_qbase_sender_signal_index(void* self) {
    return KMimeTypeChooserDialog_QBaseSenderSignalIndex((KMimeTypeChooserDialog*)self);
}

void k_mimetypechooserdialog_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KMimeTypeChooserDialog_OnSenderSignalIndex((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

int32_t k_mimetypechooserdialog_receivers(void* self, const char* signal) {
    return KMimeTypeChooserDialog_Receivers((KMimeTypeChooserDialog*)self, signal);
}

int32_t k_mimetypechooserdialog_qbase_receivers(void* self, const char* signal) {
    return KMimeTypeChooserDialog_QBaseReceivers((KMimeTypeChooserDialog*)self, signal);
}

void k_mimetypechooserdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KMimeTypeChooserDialog_OnReceivers((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

bool k_mimetypechooserdialog_is_signal_connected(void* self, void* signal) {
    return KMimeTypeChooserDialog_IsSignalConnected((KMimeTypeChooserDialog*)self, (QMetaMethod*)signal);
}

bool k_mimetypechooserdialog_qbase_is_signal_connected(void* self, void* signal) {
    return KMimeTypeChooserDialog_QBaseIsSignalConnected((KMimeTypeChooserDialog*)self, (QMetaMethod*)signal);
}

void k_mimetypechooserdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KMimeTypeChooserDialog_OnIsSignalConnected((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

double k_mimetypechooserdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMimeTypeChooserDialog_GetDecodedMetricF((KMimeTypeChooserDialog*)self, metricA, metricB);
}

double k_mimetypechooserdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KMimeTypeChooserDialog_QBaseGetDecodedMetricF((KMimeTypeChooserDialog*)self, metricA, metricB);
}

void k_mimetypechooserdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KMimeTypeChooserDialog_OnGetDecodedMetricF((KMimeTypeChooserDialog*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_mimetypechooserdialog_delete(void* self) {
    KMimeTypeChooserDialog_Delete((KMimeTypeChooserDialog*)(self));
}
